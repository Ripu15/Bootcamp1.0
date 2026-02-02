
const input = [1,2,3,4,5];

// const newArr = [];

// for(let i = 0; i < input.length; i++){
//     newArr.push(input[i]*2);
// }
// console.log(newArr);

/*
    solution 2
*/ 

// function transform(i){
//     return i*2;
// }

// const ans = input.map(transform);
// console.log(ans);

/*
    other way of solution 2
*/ 

const ans =input.map(function(i){
    return i*2;
})
console.log(ans);