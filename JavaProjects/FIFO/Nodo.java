public class Nodo<T> {
    private T info;
    private Nodo<T> next;

    public Nodo(T info) {
        setInfo(info);
        setNext(null);
    }

    public T getInfo() {
        return info;
    }

    public void setInfo(T info) {
        this.info = info;
    }

    public Nodo<T> getNext() {
        return next;
    }

    public void setNext(Nodo<T> next) {
        this.next = next;
    }
}