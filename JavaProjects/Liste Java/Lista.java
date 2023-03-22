public class Lista {

private Nodo head;
private int link; 

public Lista() {
    head = null;
    link = 0;
}

// aggiungi un elemento alla testa della lista

public void add(int n) {
    Nodo x = new Nodo(10);
    x.setLink(head);
    head = x;
    link++;
}

// Rimuovi il primo elemento nella lista

public void remove() {
    if(head == null)
        return;
    head = head.getLink();
    link--;
}

// Visualizza la lista

public void print() {
    Nodo x = head;
    while (x != null) {
        System.out.println(x.getInfo());
        x = x.getLink();
    }
}

// aggiungi in una posizione specifica 

public void addAtPos(int pos, int n) {
    if (pos < 0 || pos > link)
        return;
    if (pos == 0) {
        add(n);
        return;
    }
    Nodo x = head;
    for (int i = 0; i < pos - 1; i++)
        x = x.getLink();
    Nodo y = new Nodo(n);
    y.setLink(x.getLink());
    x.setLink(y);
    link++;
}

// elimina in una posizione specifica

public void removeAtPos(int pos) {
    if (pos < 0 || pos >= link)
        return;
    if (pos == 0) {
        head = head.getLink();
        link--;
        return;
    }
    Nodo x = head;
    for (int i = 0; i < pos - 1; i++)
        x = x.getLink();
    x.setLink(x.getLink().getLink());
    link--;
}

// restutisci un elemento preciso della lista
public void printAtPos(int pos) {
    if (pos < 0 || pos >= link)
        return;
    Nodo x = head;
    for (int i = 0; i < pos; i++)
        x = x.getLink();
    System.out.println(x.getInfo());
}

}