// Classe Nodo

public class Nodo {
    private int info;
    private Nodo next;

    public Nodo(int info) {
        this.info = info;
        this.next = null;
    }

    public int getInfo() {
        return info;
    }

    public void setInfo(int info) {
        this.info = info;
    }

    public Nodo getNext() {
        return next;
    }

    public void setNext(Nodo next) {
        this.next = next;
    }
}

