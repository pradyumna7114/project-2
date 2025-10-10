let btn = document.querySelector("button");

btn.addEventListener("click", ()=> {
    btn.classList.add("color")
})

btn.addEventListener("mouseout", () => {
    console.log("Mouse left the button!");
});


document.addEventListener("keydown", (e) => {
    if (e.key === "Enter") {
        console.log("Enter key pressed!");
    }
});


window.addEventListener("scroll", () => {
    console.log("You scrolled the page! Current scroll Y:", window.scrollY);
});


window.addEventListener("load", () => {
    console.log("Page fully loaded!");
});
