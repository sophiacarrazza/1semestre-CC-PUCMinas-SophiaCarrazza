const header = document.querySelector("header");

window.addEventListener ("scroll", function(){
    header.classList.toggle ("sticky", this.window.scrollY > 0);
})

let menu = document.querySelector('#menu-icon');
let navmenu = document.querySelector('.navmenu');

menu.onclick = () => {
    menu.classList.toggle('bx-x');
    navmenu.classList.toggle('open');
}

/*
function productId(id) {
    fetch('https://fakestoreapi.com/products/' + id).then((data)=>{

        return data.json();
        

    
    }).then((completedata) => {
        let data1 = "";
        completedata.map((values)=>{
            data1 += `
        <div class="product-img">
        <img src="${values.image}" alt="">
        </div>
        <div class="product-info">
        <h1>${values.image}</h1>
        <h2>R$${values.price}</h2>
        <p>${values.description}</p>
        <button>Comprar</button>
        </div>`
        });
        document.getElementById('container').innerHTML=data1;
    }).catch((error) => {
        console.log(error);
      });
  }
  
  window.onload = () => {
    let idParameter = new URLSearchParams(window.location.search);
    let identificador = idParameter.get("id");
    productId(identificador);
  };
  */

  function detailId(id) {
    fetch('https://fakestoreapi.com/products/' + id)
      .then((data) => {
        return data.json();
      })
      .then((product) => {
        let data1 = `<div class="product-img">
        <img src="${product.image}" alt="">
        </div>
        <div class="product-info">
        <h1>${product.title}</h1>
        <h2>R$${product.price}</h2>
        <p>${product.description}</p>
        <button>Comprar</button>
        </div>`;
  
        document.getElementById('container').innerHTML = data1;
      });
  }
  
  window.onload = () => {
    let idParameter = new URLSearchParams(window.location.search);
    let identificador = idParameter.get("id");
    detailId(identificador);
  };
  