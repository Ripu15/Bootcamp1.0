//Synchronous code
//Each operation waits for the previous one to complete
//  before moving on to the next one.
function sum1ToN(n){
    let ans = 0;
    for(let i = 1; i <= n ; i++){
        ans = ans + i;
    }
    return ans;
}

let res = sum1ToN(5);
console.log(res);
