// classe nodo

public class Nodo{
    private int info;
    private Nodo link;

    public Nodo(){
        info = 0;
        link = null;
    }

    public Nodo(int info, Nodo link){
        this.info = info;
        this.link = link;
    }

    public int getInfo(){
        return info;
    }

    public Nodo getLink(){
        return link;
    }

    public void setInfo(int info){
        this.info = info;
    }

    public void setLink(Nodo link){
        this.link = link;
    }
}