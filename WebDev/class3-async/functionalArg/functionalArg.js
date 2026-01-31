function sum(a,b){
    return a+b;
}

function sub(a,b){
    return a-b;
}
//'op' is a functonal argument
function operation(a,b,op){
    return op(a,b);
}

let ans = operation(6,3,sum);
console.log(ans);