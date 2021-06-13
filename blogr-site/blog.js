var myMenu = document.getElementById("mobile"),
    myButton = document.getElementById("menu"),
    myContainer = document.getElementById("container"),
    myBut = document.querySelector(".fa-bars"),
    myItem = document.querySelectorAll(".item")

myButton.addEventListener("click", function () {
    if(myMenu.classList.contains("mobile")) {
    myMenu.classList.remove("mobile");
    myMenu.classList.add("mobile-vs");
    myContainer.classList.remove("container");
    myContainer.classList.add("hidd");
    myBut.classList.remove("fa-bars");
    myBut.classList.add("fa-times");
    } else {
        myMenu.classList.remove("mobile-vs");
        myMenu.classList.add("mobile");
        myContainer.classList.remove("hidd");
        myContainer.classList.add("container");
        myBut.classList.remove("fa-times");
        myBut.classList.add("fa-bars");
    };
});
myItem.forEach(item => {
    item.addEventListener("click", function () {
        if(item.children[0].classList.contains("list")) {
        item.children[0].classList.remove("list");
        item.children[0].classList.add("list-vs");
    } else {
        item.children[0].classList.remove("list-vs");
        item.children[0].classList.add("list");
    };
    });
});

