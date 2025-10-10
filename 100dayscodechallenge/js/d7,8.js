//DOM event on click
// let btn= document.querySelectorAll("button");
// console.dir(btn);
// btn.onclick=function(){
//     alert("button was clicked");
// }// successfully pops button  was clicked
// let btns= document.querySelectorAll("buttons");
// for(btn of btns)
// {
//    btn.onClick = sayHello;
// } 
// function sayHello(){
//     alert("hello");
// }
//event listeners
// let btns= document.querySelectorAll("button");
// for(btn of btns)
// {
//     btn.addEventListener("click",sayHello);
//     btn.addEventListener("click",sayName);
// }

// function sayHello(){
//     alert("hello");
// }
// function sayName(){
//     alert("apna college");
// }

// let btn=document.querySelector("button")    
// btn.addEventListener("click",function()
// {
//     let h3=document.querySelector("h3");
//     let randomColor=getRandomColor();
//     h3.innerText=randomColor;

//     let div=document.querySelector("div");
//     div.style.backgroundColor=randomColor;
//     console.log("color updated");
// });

// function getRandomColor(){
//     let red= Math.floor(Math.random()*255);
//     let green= Math.floor(Math.random()*255);
//     let blue= Math.floor(Math.random()*255);

//     let color= `rgb(${red} ,${green}, ${blue})`;
//     return color; 
// }
let p=document.querySelector("p");
p.addEventListener("click",function()
{
  console.log("para was clicked");
});

let box=document.querySelector(".box");

box.addEventListener("mouseenter",function()
{
console.log("mouse inside box");
});
 
let btn =document.querySelector("button");
let h2=document.querySelector("h2");
let h3=document.querySelector("h3");

function changeColor()
{
    console.dir(this.innerText);
    this.style.backgroundColor="blue";
}
btn.addEventListener("click",changeColor);
h2.addEventListener("click",changeColor);
h3.addEventListener("click",changeColor);