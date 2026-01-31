const fs = require("fs");

fs.readFile("a.txt", "utf-8",function(err,contents){
    console.log(contents);
});

let s = 0;
for(let i = 0; i <10000; i++){
    s = s + i;
}



console.log(s);