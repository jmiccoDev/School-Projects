public class Coda<T> {
    private Nodo<T> head;
    private Nodo<T> tail;

    public Coda() {
        head = null;
        tail = null;
    }

    public void enqueue(T info) {
        Nodo<T> nodo = new Nodo<T>(info);
        if (head == null) {
            head = nodo;
            tail = nodo;
        } else {
            tail.setNext(nodo);
            tail = nodo;
        }
    }

    public T dequeue() {
        if (head == null) {
            return null;
        } else {
            T info = head.getInfo();
            head = head.getNext();
            return info;
        }
    }

    public T peek() {
        if (head == null) {
            return null;
        } else {
            return head.getInfo();
        }
    }

    public boolean isEmpty() {
        return head == null;
    }

    public void print() {
        Nodo<T> nodo = head;
        while (nodo != null) {
            System.out.println(nodo.getInfo());
            nodo = nodo.getNext();
        }
    }
}