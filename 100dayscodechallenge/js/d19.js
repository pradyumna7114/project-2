//     let h1= document.querySelector("h1");

//     function changeColor(color,delay)
//     { 
//         return new Promise( (resolve , reject )=>{
//         setTimeout( ()=> {
     
//             let num = Math.floor(Math.random()*5)+1;
//             if(num>3){
//                 reject ("promise rejected");
//             }
//             h1.style.color = color;
//             console.log(`color chage to ${color}`);

//             resolve("Color changed!")

//             },delay);

//         });
//     }

//     async function demo(){
//         try{
//         await changeColor("red",1000);
//         await changeColor("green",1000);
//         await changeColor("blue",1000);
//         }
//         catch(err){
//             console.log("error caught");
//             console.log(err);
//         }
//         let a=5
//         console.log(a);
//         console.log("new num = ", a+ 3)

//     }
// // function getNum(){

// //     return new Promise ( (resolve,reject) =>{

// //      setTimeout( ()=>{
 
// //       let num= Math.floor(Math.random()*10)+1;
// //       console.log(num);
// //       resolve();

// //      },1000 );
    
// //     });
// // }started with j12 

// let url="https://catfact.ninja/fact";

// async function getFacts(){
//     try
//    { let res = await fetch(url);
//      let data = await res.json();
//      console.log(data.fact);
    
//      let res2  = await fetch(url);
//      let data2  = await res2.json();
//      console.log(data2.fact);
     
//     }

//     catch(e){
//         console.log("error - ",e);
//     }
//     console.log("bye");
// }

// let url = "https://catfact.ninja/fact";

// let btn= document.querySelector("button");

// btn.addEventListener("click", async()=> {
//    // console.log("button was clicked");
//     let fact = await getFacts();
//   //  console.log(fact);
//     let p = document.querySelector("#result");
//     p.innerText= fact;
// });


// async function getFacts(){
//    try
//    { let res = await axios.get(url);
//      //console.log(res.data.fact);
//      return res.data.fact;
//     }

//     catch(e){
//         console.log("error - ",e);
//         return ("koi fact nahi mila");
//     }   
// }

// let url1 = "https://dog.ceo/api/breeds/image/random";
// let url2 = "https://api.bunnies.io/v2/loop/random/?media=gif,png";;
// let btn = document.querySelector("button");

// btn.addEventListener("click", async ()=>{

//   let link = await getImage();
//   console.log(link);
//   let img = document.querySelector("#result");
//   img.setAttribute("src", link);

// });


// async function getImage(){
//   try{
//     let res = await axios.get(url2);
//     console.log(res);
//     return res.data.media.gif; 
//   }

//   catch(e){
//    console.log("error - ", e);
//    return "no images found :("; 
//   }
// }

let url = "https://universities.hipolabs.com/search?name=";
let btn = document.querySelector("button");
let list = document.querySelector("#list");

btn.addEventListener("click", async () => {
  let country = document.querySelector("input").value;
  console.log(country);

  // Clear the previous list items
  list.innerHTML = "";

  let colArr = await getColleges(country);
  show(colArr);
});

function show(colArr) {
  if (colArr.length === 0) {
    let li = document.createElement("li");
    li.innerText = "No colleges found.";
    list.appendChild(li);
    return;
  }

  for (let col of colArr) {
    console.log(col.name);
    let li = document.createElement("li");
    li.innerText = col.name;
    list.appendChild(li);
  }
}

async function getColleges(country) {
  try {
    let res = await axios.get(url + country);
    return res.data;
  } catch (e) {
    console.log("error : ", e);
    return [];
  }
}