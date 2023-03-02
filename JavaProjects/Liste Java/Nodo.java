// Classe Nodo

public class Nodo {
    private int info;
    private Nodo link;

    public Nodo(int n) {
        info = new int(n);
        link = null;
    }

    public int getInfo() {
        return new int(info);
    }

    public void setInfo(int info) {
        this.info = info;
    }

    public Nodo getLink() {
        return link;
    }

    public void setLink(Nodo link){
        this.link = link;
    }
}

