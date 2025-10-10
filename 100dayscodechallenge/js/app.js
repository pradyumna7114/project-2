let p = document.createElement("p");
p.innerText="hey i  am red";
document.querySelector("body").append(p);
p.classList.add("red");

let h3 = document.createElement("h3");
h3.innerText="hey i  am blue";
document.querySelector("body").append(h3);
h3.classList.add("green");

let div= document.createElement("div");
let h1=document.createElement("h1");
let p1= document.createElement("p");
h1.innerText="i'm in div";
p1.innerText="ME Too";
document.querySelector("body").append(div);
div.classList.add("box");
div.append(p1);
div.append(h1);
document.querySelector("body").append(div);

let button= document.createElement("button");
let input= document.createElement("input");

button.innerText="Click me";
document.querySelector("body").append(input);
document.querySelector("body").append(button);

button.setAttribute("id","btn");
input.setAttribute("placeholder","username");

let btn=document.querySelector("#btn");
btn.classList.add("btnStyle");
let h4= document.createElement("h4");
h4.innerHTML = "<u>Dom Practice </u>" ;
document.querySelector("body").append(h4); 
let p2 = document.createElement("p2");
p2.innerHTML="apna college <b> delta </b> Practice";
document.querySelector("body").append(p2);