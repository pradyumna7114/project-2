let nums=[1,2,3,4];
const square = nums.map((num)=> num*num);
console.log(square); 
const sum= nums.reduce((acc,cur)=> acc+cur,0);//after comma 0 is the value 
console.log(sum);                        // at which accumulator starts
const avg =  sum/nums.length;
console.log(avg);                               