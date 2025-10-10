//Qs1.Create a new array using the map function whose
// each element is equal to the original element plus 5
let ar=[2,4,5,7];
console.log(ar.map((num)=> num+ 5));
//Qs2.Create a new array whose elements are in uppercase 
//of words present in the original array
let br=["harsh"];
console.log(br.map((strings)=>strings.toUpperCase()));
//Qs3.Write a function called mergeObjects that accepts 
// two objects and returns a new object which contains all
// the keys and values of the first object and second object.
const mergeObjects = (obj1, obj2) => ({...obj1, ...obj2});
console.log(mergeObjects({ a: 1, b: 3 }, { c: 4, d: 6 }));
