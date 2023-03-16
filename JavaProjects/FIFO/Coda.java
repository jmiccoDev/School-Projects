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

            tail = nodo;
            head = tail;

        } else {
            tail.setNext(nodo);
            tail = nodo;
        }
    }

    public T dequeue() {
        Nodo<T> nodo;

        if (head == null) {
            return null;
        }
        nodo = head;
        head = head.getNext();
        if (head == null) {
            tail = null;
        }
        return nodo.getInfo();
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