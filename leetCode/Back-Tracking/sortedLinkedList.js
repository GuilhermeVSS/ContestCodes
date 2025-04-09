class Node {
    constructor(value, next){
        this.value = value;
        this.next = next;
    }
}

class LinkedList {
    constructor(){
        this.head = null;
    }

    append(node){
        if(!this.head){
            this.head = node;
            return;
        }

        let current = this.head;
        while(current.next){
            current = current.next;
        }
        current.next = node;
    }

    display(){
        let current = this.head;
        while(current){
            console.log(current.value);
            current = current.next;
        }
    }
}


const linkedA = new LinkedList();

linkedA.append(new Node(1, null))
linkedA.append(new Node(2, null))
linkedA.append(new Node(3, null))
linkedA.append(new Node(5, null))
linkedA.append(new Node(9, null))


linkedA.display();

const linkedB = new LinkedList();

linkedB.append(new Node(4, null))
linkedB.append(new Node(6, null))
linkedB.append(new Node(8, null))


function solve(linkedA, linkedB){
    let head = new Node(-1, null);
    let previousNode = head;

    let pointerA = linkedA.head;
    let pointerB = linkedB.head;


    while(pointerB && pointerA){
        if(pointerB.value > pointerA.value){
            previousNode.next = pointerA;
            pointerA = pointerA.next;
        } else {
            previousNode.next = pointerB;
            pointerB = pointerB.next;
        }
        previousNode = previousNode.next;
    }
    
    if(pointerB){
        previousNode.next = pointerB;
    }
    if(pointerA){
        previousNode.next = pointerA;
    }
    
    head = head.next;

    while(head){
        console.log("a",head.value);
        head = head.next;
    }
}

solve(linkedA, linkedB);