const fs = require("fs");

//until OS reads the file , it will not executes further
const contents = fs.readFileSync("a.txt", "utf-8");
console.log(contents);

for(let i=0; i<10;i++){
    console.log(i);
}