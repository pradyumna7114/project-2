// let form= document.querySelector("form");

// form.addEventListener("submit", function(event)
// {
//    event.preventDefault();//same page pr rkhta hai

//    let inp= document.querySelector("input");
//     console.dir(form);
//     let user=this.elements[0];
//     let pass= this.elements[1];
    
//     console.log(user.value);
//     console.log(pass.value);
//     alert(`hi ${user.value}, your password is set to ${pass.value}`);
// });
let inp= document.querySelector("#text");
let p= document.querySelector("p");

inp.addEventListener("input",function(){
    console.log(inp.value);
    p.innerText=inp.value;
});