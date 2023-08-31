do $$
<<first_block>>
declare
    var_tag_row tags%rowtype;
    var_tag_id tags.id%type;
begin
    SELECT * FROM tags
    INTO var_tag_row
    WHERE name = 'default5';

    if not found then
        INSERT INTO tags (name) VALUES ('default5') RETURNING id INTO var_tag_id;
        INSERT INTO taggings (tag_id,taggable_id,taggable_type,context) VALUES (var_tag_id,(SELECT id FROM financiers WHERE code = 'BKKPB1104K'),'Financier','deal_categories');
    else
        <<second_block>>
        declare 
            var_financier_tagging_row taggings%rowtype;
        begin
            SELECT * FROM taggings
            INTO var_financier_tagging_row
            WHERE taggable_id = (SELECT id FROM financiers WHERE code = 'BKKPB1104K')
            AND tag_id = (SELECT id FROM tags WHERE name = 'default5');
            
            if not found then
                INSERT INTO taggings (tag_id,taggable_id,taggable_type,context) VALUES ((SELECT id FROM tags WHERE name = 'default5'),(SELECT id FROM financiers WHERE code = 'BKKPB1104K'),'Financier','deal_categories');
            else
                raise notice 'DO NOTHING';
            end if;
        end;
    end if;           
end $$;



do $$
declare
    var_arr integer[] := '{1,11,0,-1,-1}';
    var_arr_iter integer;
    attribute_names varchar[] := '{Sensitivity,Alternatives,Size,IFA Importance,Oro}';
    var_counter integer := 0;
begin
    foreach var_arr_iter in array var_arr
    loop
        var_counter := var_counter + 1;
        
        -- INSERT INTO financier_pricing_attributes (financier_id,pricing_attribute_id,level,created_at,updated_at)
        -- SELECT (SELECT id FROM financiers WHERE code = #{}),(SELECT id FROM pricing_attributes WHERE name = attribute_names[var_counter]),0,CURRENT_TIMESTAMP,CURRENT_TIMESTAMP
        -- WHERE NOT EXISTS(
        -- SELECT * FROM financier_pricing_attributes 
        -- WHERE financier_id = (SELECT id FROM financiers WHERE code = 'BKKPB1104K')
        -- AND pricing_attribute_id = (SELECT id FROM pricing_attributes WHERE name = attribute_names[var_counter])
        -- );

        UPDATE financier_pricing_attributes SET
        level = var_arr_iter
        WHERE financier_id = (SELECT id FROM financiers WHERE code = 'BKKPB1104K')
        AND pricing_attribute_id = (SELECT id FROM pricing_attributes WHERE name = attribute_names[var_counter] );
    end loop;
end $$;


do $$
declare
    var_deal_category_list varchar[] := '{default,oro}';
    var_tag varchar;
begin
    DELETE FROM taggings WHERE taggable_id = (SELECT id FROM financiers WHERE code = 'BKKPB1104K') AND context = 'deal_categories';
    foreach var_tag in array var_deal_category_list
    loop
        INSERT INTO taggings (tag_id,taggable_id,taggable_type,context) VALUES ((SELECT id FROM tags WHERE name = var_tag),(SELECT id FROM financiers WHERE code = 'BKKPB1104K'),'Financier','deal_categories');
    end loop;

end $$;

