let gameSeq = [];
let userSeq= [];
let started = false;
let level = 0;
let btns = ["red","orange","blue","yellow"];
let h2 = document.querySelector("h2");

document.addEventListener("keydown", function() {
  if(!started) {
    console.log("game has started");
    started = true;
    levelUp();
  }
});

function btnFlash(randBtn){
    randBtn.classList.add("flash");
    setTimeout(function() {
        randBtn.classList.remove("flash");
    }, 250);
}

function gameFlash(randBtn){
    randBtn.classList.add("gameFlash");
    setTimeout(function() {
        randBtn.classList.remove("gameFlash");
    }, 250);
}

function levelUp(){
  userSeq=[];
    level++;
    h2.innerText = `Level ${level}`;

    let randIndx = Math.floor(Math.random() * 4);
    let randColor = btns[randIndx];
    let randBtn = document.querySelector(`.${randColor}`);
    //console.log("Random button:", randIndx, randColor,randBtn);
     gameSeq.push(randColor); 
     console.log(gameSeq);
     gameFlash(randBtn);
}

function checkAns(idx){
  //console.log("curr level:", level);
  //let idx=level - 1;
  if(userSeq[idx]===gameSeq[idx])
  { 
    if(userSeq.length == gameSeq.length){
     setTimeout(levelUp,1000);
    }
    //console.log("same value");
  }
  else{
    h2.innerHTML=`Game over! Your score was <b> ${level} </b> <br> Press any  key to start. `;
    document.querySelector("body").style.backgroundColor="red";
    setTimeout(function(){
     document.querySelector("body").style.backgroundColor="white";
    }),250;
     reset();
  }

 
}

function btnPress(){
  console.log(this);
  let btn= this; 
  btnFlash(btn);

  let userColor=btn.getAttribute("id")
  console.log(userColor);
  userSeq.push(userColor);
  checkAns(userSeq.length-1)
}

let allBtns=document.querySelectorAll(".btn");

for(let btn of allBtns){
  btn.addEventListener("click",btnPress);
}

function reset() {
  started = false;
  level = 0;
  gameSeq = [];
  userSeq = [];
}