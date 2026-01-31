let a = 1;
let b = 2;

console.log(a);
console.log(b);

function callback(){
    console.log(a+b);
}

//it will execute 'callback' func after 2 secs
setTimeout(callback, 2000);

let sum = 0;
for(let i =0; i < 1000; i++){
    sum = sum +i;
}
console.log(sum);