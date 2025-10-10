// function hello(){
//     console.log("inside hello  function");
//     console.log("hello");
// }
// function demo(){
//     console.log("calling hello from demo");
//     hello();
// }
// console.log("calling demo function ");
// demo();
// console.log("done, bye!");
// //one more example
// function one(){
//     console.log("third");
//     return 1;
// }
// function two(){
//     console.log("second");
//     return one() + one();
// }
// function three(){
//     console.log("first");
//     let ans= two()+  one();
//     console.log(ans);
// }
// three(); 

 //1= document.querySelector("h1");

// function changeColor(color,delay,nextColorChange){
//     setTimeout( ()=> {
//         h1.style.color=color;
//         if(nextColorChange) nextColorChange();
//     },delay);
// }
// changeColor("red",1000,()=> {
//     changeColor("orange", 1000 , () => {
//         changeColor("green", 1000, () => {
//           changeColor("yellow", 1000 , () => {
//             changeColor("blue", 1000);
//           });
//         });
//     });
// });

// function savetoDb(data, success, failure){
//   let internetSpeed = Math.floor(Math.random()*10)+1;
//   if(internetSpeed > 4){
//     success(data); // 👈 pass data to callback
//   } else {
//     failure(data);
//   }
// }

// savetoDb(
//   "hello! Pradyumna",
//   (d1) => {
//     console.log("success1: your data was saved:", d1);

//     savetoDb(
//       "hello world",
//       (d2) => {
//         console.log("success2: your data was saved:", d2);

//         savetoDb(
//           "harsh",
//           (d3) => {
//             console.log("success3: your data was saved:", d3);
//           },
//           (d3) => {
//             console.log("failure3: weak connection for", d3);
//           }
//         );

//       },
//       (d2) => {
//         console.log("failure2: weak connection for", d2);
//       }
//     );

//   },
//   (d1) => {+
//     console.log("failure1: weak connection for", d1);
//   }
// );

// function savetoDb(result){
//  return new Promise((resolve,reject)=>{
//    let internetSpeed = Math.floor(Math.random()*10)+1;
//    if(internetSpeed>4){
//     resolve("the data was saved", result);
//    }
//    else{
//     reject("data was not saved", result);
//    }
//  });
// }   
// savetoDb("hello harsh 1")  
// .then((result)=> 
// {console.log("hello harsh 2"); 
//   console.log(result);
//   return savetoDb("pm 1");
// })
// .then((result)=> 
// {console.log("hello harsh 3");
//   console.log(result);
//   return savetoDb("pm 2");
// })
// .then((result)=> 
// {console.log("hello harsh 4");
//   console.log(result);
//   return savetoDb("pm 2");
// })
// .catch ( (error)=>{
//   console.log("the request was failed");
//   console.log(error);
// }); till d19