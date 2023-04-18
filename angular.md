npm install -g @angular/cli

-- Compodoc software visualization tool
npm install -g @compodoc/compodoc
tsconfig.doc.json
{
    "include": ["src/**/*.ts"],
    "exclude": ["src/test.ts", "src/**/*.spec.ts", "src/app/file-to-exclude.ts"]
}
package.json
"scripts": {
    "compodoc": "npx compodoc -p tsconfig.doc.json -s"
}
