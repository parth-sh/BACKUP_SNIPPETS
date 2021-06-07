# name = " parth sharma"
# age = 22.0
# flaws = nil
#
# puts "hi #{name} your age is #{age.to_s}"
# puts name.upcase() + name.strip()
# puts name.length().to_s()
# puts name.include? "sharma"
# puts name[1,7]
#
# puts 5.863
# puts 8+9
# puts 2**3
# puts 11%3
# puts 20.897.round()
# puts 20.9.floor()
#
# puts "Enter 2 numbers : "
# num1 = gets.chomp().to_f()
# num2 = gets.chomp().to_f()
# puts num1 + num2

# friends = Array["parth","anushka","realamon","Oscar"]
# friends = Array[1,2,3,4,5,"karen",false]
# puts friends[-2]
# puts friends.length()
# puts friends.include? "Karens"
# puts friends.reverse()
# puts friends.sort()

# friends = Array.new
# friends[0] = "micheal"
# puts friends

# states = {
#     1 => "mystae",
#     :work => "MH",
#     "Uttar Pradesh" => "UP",
#     "Maharashtra" => "MH",
#     "Andra Pradesh" => "AP",
# }
# states["Haryana"]="HR"
# puts states[:work]

# def sayhi(num)
#   return num,70
# end
# puts sayhi(0)[0]

# if ismale and istall
#   puts 'tall boy'
# end

# day = "wed"
# case day
# when "mon"
#   day_name= "Monday"
# else
#   day_name= "Invalid"
# end

# index = 1
# while index<=5
#   puts index
#   index+=1
# end

class Book
  attr_accessor "title", :author, :pages
end



