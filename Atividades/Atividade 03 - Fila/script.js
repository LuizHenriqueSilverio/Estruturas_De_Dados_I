 // Crie uma instância da fila
 let minhaFila = new Fila(10);

 // Função para adicionar um elemento à fila
 function adicionarElemento() {
    const novoNome = document.getElementById("txtNovoNome");
    const novoCpf = document.getElementById("txtNovoCpf");

    // Verificar se tem algo digitado e mostrar mensagem se necessário
    if(novoNome.value == "" || novoCpf.value == ""){
        alert("Preencha todos os campos!");
        return;
    }
    //set atributos do atendimento no objeto a partir dos inputs e funções
    // adicionar na fila e mostrar na tela

    const novoAtendimento = new Atendimento();
    novoAtendimento.nome = novoNome.value.trim(); // o trim retira os espaços em branco
    novoAtendimento.cpf = novoCpf.value.trim();
    novoAtendimento.data = obterDataAtual();
    novoAtendimento.hora = obterHoraAtual();
    if(!minhaFila.enqueue(novoAtendimento)) {
       alert("A fila está cheia!");
    }else {
       alert("Dados inseridos com sucesso!");

       mostrarFila();
    }
 }
//--------------------------------------------------------------------------------------------
 // Função para remover o primeiro elemento da fila
 function realizarAtendimento() {
    // verificar se não está vazia antes de 
    if(!minhaFila.isEmpty()) {
        const atendimentoAtual = minhaFila.dequeue();
        mostrarMensagemRemocao(atendimentoAtual);
        mostrarFila();
    }else {
        alert("A fila está vazia!");
    }
    // mostrar dados da pessoa atendida utilizando a funcao mostrarMensagemRemocao

 }
 //--------------------------------------------------------------------------------
 function buscarCpf() {
    const cpf = document.getElementById("txtNovoCpf").value.trim(); // o trim retira os espaços em branco
    const atendimento = new Atendimento(null,cpf); // vamos pesquisar só por CPF
    // para cada elemento da fila, verificar com o equals
    // Deve retornar a posição na fila e caso não seja encontrado avisar, crie um contador de posicões
    for (let item of minhaFila.itens) { // para cada elemento da fila
      if (item.equals(atendimento))
        alert("Achou! Posição: " );
    }
   // se nao encontrar mostre mensagem
}
//--------------------------------------------------------------------------------------------
function mostrarMensagemRemocao(pessoaAtendida) {
    horaAtendimento = horaAtendimento - pessoaAtendida.hora;
    const lblMensagemRemocao = document.getElementById("lblMensagemRemocao");
    lblMensagemRemocao.innerHTML = "Próximo a ser atendido(a): " + pessoaAtendida.nome + ", chegou às " + pessoaAtendida.hora + " está sendo atendido às " + obterHoraAtual() + ".";
    lblMensagemRemocao.style.display = "block";
}
//--------------------------------------------------------------------------------------------
 // Função para mostrar a  fila
 function mostrarFila() {
   const filaElemento = document.getElementById("listPessoasFila");
   filaElemento.textContent = minhaFila.toString();
}
//--------------------------------------------------------------------------------------------
 // funcao data
 function obterDataAtual() {
    let dataAtual = new Date();
    let dia = dataAtual.getDate();
    let mes = dataAtual.getMonth() + 1; // Adiciona 1 porque o mês inicia do zero
    let ano = dataAtual.getFullYear();
    // Formata a data como "dd/mm/aaaa"
    let dataFormatada = `${dia.toString().padStart(2, '0')}/${mes.toString().padStart(2, '0')}/${ano}`;
    return dataFormatada;
}
//--------------------------------------------------------------------------------------------
function obterHoraAtual() {
  const data = new Date();
  const hora = data.getHours().toString().padStart(2, '0');
  const minuto = data.getMinutes().toString().padStart(2, '0');
  const segundo = data.getSeconds().toString().padStart(2, '0');
  return `${hora}:${minuto}:${segundo}`;
}
//--------------------------------------------------------------------------------------------
function calcularDiferencaHoras(hora1, hora2) {
  const [h1, m1, s1] = hora1.split(':').map(Number);
  const [h2, m2, s2] = hora2.split(':').map(Number);

  const diferencaSegundos = (h2 * 3600 + m2 * 60 + s2) - (h1 * 3600 + m1 * 60 + s1);

  const horas = Math.floor(diferencaSegundos / 3600);
  const minutos = Math.floor((diferencaSegundos % 3600) / 60);
  const segundos = diferencaSegundos % 60;

  return `${horas.toString().padStart(2, '0')}:${minutos.toString().padStart(2, '0')}:${segundos.toString().padStart(2, '0')}`;
}
