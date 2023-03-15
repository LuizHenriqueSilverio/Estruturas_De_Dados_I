let minhaFila = new Fila(5);

function addFila() {
    const novo = document.getElementById("novoElemento");
    if(minhaFila.enqueue(novo.value)) {
        alert("Dados inseridos com sucesso!");
        novo.value = "";
        novo.focus();
        console.log(minhaFila);
    }else {
        alert("Fila cheia!");
    }
}