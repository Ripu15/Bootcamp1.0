//using 'setInterval' async func to implement counter
let a = 10;
let b = 90;
let cnt = 0;

function callback(){
    console.log(cnt);
    cnt++;
}
//js thread is free for 1 sec,
//in the meanwhile it runs below code
setInterval(callback,1000);

console.log(a + b);
console.log("starting counter...");