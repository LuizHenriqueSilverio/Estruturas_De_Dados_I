class Node {
    constructor(data) {
        this.data = data;
        this.prev = null;
        this.next = null;
    }
  } // fim classe Node
//------------------------------------------------------------  
  class LinkedList {
    constructor() {
        this.head = null;
        this.tail = null;
        this.length=0;
    }
//------------------------------------------------------------  
    addLast(data) {
        const newNode = new Node(data);
        if(newNode===null) {
            return false;
        }

        if (this.head === null) {
            this.head = newNode;
        }
        else {
            newNode.prev = this.tail;
            this.tail.next = newNode;
        }

        this.tail = newNode;
        this.length++;
        return true;
    }
//------------------------------------------------------------  
    addFirst(data) {
        console.log("addFirst");
        const newNode = new Node(data);

        if(newNode===null) {
            return false;
        }

        if (this.tail === null) { 
            this.tail = newNode;
        }
        else {
            newNode.next = this.head;
            this.head.prev = newNode;
        }

        this.head = newNode;
        this.length++;
        return true;
    }
//------------------------------------------------------------
    addAtIndex(index, data) {
        if(index <= 0) {
            return this.addFirst(data);
        }

        if(index >= this.length) {
            return this.addLast(data);
        }

        const newNode = new Node(data);
        let currentNode = this.head;
        let posAtual = 0;
        
        while(posAtual < index-1) {
            currentNode = currentNode.next;
            posAtual++;
        }

        newNode.prev = currentNode;
        newNode.next = currentNode.next;
        currentNode.next = newNode;
        newNode.next.prev = newNode;

        this.length++;
        return true;
    }
//------------------------------------------------------------  
deleteFirst() {
        const removedData = this.head.data; // Salva o valor do elemento removido
        this.head = this.head.next;
        if (this.head !== null) {
            this.head.prev = null;
        }
        else {
            this.tail = null;
        }
        this.length--;  
        return removedData; // Retorna o valor do elemento removido
  }
//------------------------------------------------------------
    isEmpty() {
        return this.head === null; 
    }
//------------------------------------------------------------
    getFirst() {
        if(this.isEmpty()) {
            return null;
        }
        return this.head.data;
    }

//------------------------------------------------------------
    getLast() {
        if(this.isEmpty()) {
            return null;
    }
        return this.tail.data;
}

//------------------------------------------------------------
    forEach(callback) {
        let currentNode = this.head;
    
        while (currentNode !== null) {
          callback(currentNode.data);
          currentNode = currentNode.next;
        }
      }

  }// fim classe LinkedList