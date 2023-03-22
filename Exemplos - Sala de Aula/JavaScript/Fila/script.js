let minhaFila = new Fila(5);

function addFila() {
    const novo = document.getElementById("novoElemento");
    if(minhaFila.enqueue(novo.value) == true) {
        novo.value = "";
        novo.focus();
        mostrarFila();
    }else {
        alert("Fila cheia!");
    }
}

function removerFila() {
    if(minhaFila.isEmpty()) {
        alert("A fila está vazia!!!");
    }else {
        let retorno = minhaFila.dequeue();
        alert("Valor removido: " + retorno);
        mostrarFila();
    }
}

function primeiroFila() {
    if(minhaFila.isEmpty()) {
        alert("A fila está vazia!!!");
    }else {
        alert("O primeiro elemento é: " + minhaFila.first());
    }
}

function ultimoFila() {
    if(minhaFila.isEmpty()) {
        alert("A fila está vazia!!!");
    }else {
        alert("O ultimo elemento é: " + minhaFila.last());
    }
}

function mostrarFila() {
    const filaElemento = document.getElementById("listFila");
    filaElemento.textContent = minhaFila.toString();
}