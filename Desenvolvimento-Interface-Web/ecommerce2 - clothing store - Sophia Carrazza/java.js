const cabecalho = document.querySelector("header");

window.addEventListener ("scroll", function(){
    cabecalho.classList.toggle ("sticky", this.window.scrollY > 0);
})

let navbar = document.querySelector('#menu-icon');
let navmen = document.querySelector('.navmenu');

navbar.onclick = () => {
    menu.classList.toggle('bx-x');
    navmen.classList.toggle('open');
}


fetch('https://fakestoreapi.com/products').then((data)=>{
    return data.json();

}).then((completedata)=>{

    let data1 = "";
    completedata.map((values)=>{
        data1 += `<div class="row">
        <img src="${values.image}" alt="">
        <div class="product-text">
            <h5>${values.category}</h5>
            
        </div>
        <div class="heart-icon" class="like">
            <i class='bx bx-heart'></i>
        </div>
        

        <div class="price">
            <h3>${values.title}</h3>
            <p>$${values.price}</p> 
            <div class="vejamais" >   
            <a class="btn btn-primary" href="product.html?id=${values.id}">Veja mais</a>
        </div>
        </div>
    </div>`
    });
    document.getElementById('products').innerHTML=data1;

    if (data1 === "") {
        alert("Nenhum produto encontrado.");
      }    

        // Filtrar produtos por nome
        const searchInput = document.querySelector('input[type="search"]');
        const form = document.querySelector('form[role="search"]');
        form.addEventListener('submit', (e) => {
          e.preventDefault();
          const searchTerm = searchInput.value.toLowerCase();
          const filteredData = completedata.filter((product) =>
      product.title.toLowerCase().includes(searchTerm.toLowerCase())
    );
    
    
          let filteredDataHTML = "";
          filteredData.forEach((values) => {
            filteredDataHTML +=`<div class="row">
            <img src="${values.image}" alt="">
            <div class="product-text">
                <h5>${values.category}</h5>
                
            </div>
            <div class="heart-icon" class="like">
                <i class='bx bx-heart'></i>
            </div>
            
    
            <div class="price">
                <h3>${values.title}</h3>
                <p>$${values.price}</p> 
                <div class="vejamais" >   
                <a class="btn btn-primary" href="product.html?id=${values.id}">Veja mais</a>
                </div>
            </div>
        </div>`;
          });
    
          document.getElementById('products').innerHTML = filteredDataHTML;
        });
    })

.catch((err) => {
  console.log(err);
  alert("Nos desculpe, parece que ocorreu um erro e seu produto não foi encontrado")
});


// referencia o formulario pela classe e referencia os checkboxes
var form = document.querySelector('.categoriasfiltro');
var checkboxes = form.querySelectorAll('input[type="checkbox"]');

// pegar os dados da api
fetch('https://fakestoreapi.com/products?limit=9')
  .then(function(response) {
    return response.json();
  })
  .then(function(data) {
    var completedata = data;

    // eventlistener p cada checkbox funcionar
    checkboxes.forEach(function(checkbox) {
      checkbox.addEventListener('change', function() {
        // Obtém as categorias selecionadas
        var selectedCategories = Array.from(checkboxes)
          .filter(function(checkbox) {
            return checkbox.checked;
          })
          .map(function(checkbox) {
            return checkbox.value;
          });

        
        var filteredData = completedata.filter(function(product) {
          return selectedCategories.includes(product.category);
        });

        var filteredDataHTML = "";
        filteredData.forEach(function(product) {
          filteredDataHTML += `
          <div class="row">
          <img src="${product.image}" alt="">
          <div class="product-text">
              <h5>${product.category}</h5>
              
          </div>
          <div class="heart-icon" class="like">
              <i class='bx bx-heart'></i>
          </div>
          
  
          <div class="price">
              <h3>${product.title}</h3>
              <p>$${product.price}</p> 
              <div class="vejamais" >   
              <a class="btn btn-primary" href="product.html?id=${product.id}">Veja mais</a>
              </div>
          </div>
      </div>`;
        });

        // aparece os produtos na div products
        document.getElementById('products').innerHTML = filteredDataHTML;
      });
    });

    // eventlistener para o formulário todo
    form.addEventListener('change', function() {
      // Verifica se todos os checkboxes estão desmarcados
      var allUnchecked = Array.from(checkboxes).every(function(checkbox) {
        return !checkbox.checked;
      });

      // se todos os checkboxes desmarcados, exibe todos os produtos
      if (allUnchecked) {
        var allDataHTML = "";
        completedata.forEach(function(product) {
          allDataHTML += `<div class="row">
          <img src="${product.image}" alt="">
          <div class="product-text">
              <h5>${product.category}</h5>
              
          </div>
          <div class="heart-icon" class="like">
              <i class='bx bx-heart'></i>
          </div>
          
  
          <div class="price">
              <h3>${product.title}</h3>
              <p>$${product.price}</p> 
              <div class="vejamais" >   
              <a class="btn btn-primary" href="product.html?id=${product.id}">Veja mais</a>
              </div>
          </div>
      </div>`;
        });

        document.getElementById('products').innerHTML = allDataHTML;
      }
    });
  })
  .catch(function(err) {
    console.log(err);
    alert("Nos desculpe, parece que ocorreu um erro e seu produto não foi encontrado");
  });

/*
  <div class="row">
          <img src="${product.image}" alt="">
          <div class="product-text">
              <h5>${product.category}</h5>
              
          </div>
          <div class="heart-icon" class="like">
              <i class='bx bx-heart'></i>
          </div>
          
  
          <div class="price">
              <h3>${product.title}</h3>
              <h4>${product.description}</h4>
              <p>$${product.price}</p> 
              <div class="vejamais" >   
              <button class="btn btn-primary" ><a href="product.html?id=${product.id}">Veja mais</button>
              </div>
          </div>
      </div>

*/