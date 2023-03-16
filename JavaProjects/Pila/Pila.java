// Realizzami una classe dove sono riutilizzate le classi Nodo per creare una pila

public class Pila {
    private Nodo testa;
    private int lunghezza;

    public Pila() {
        testa = null;
        lunghezza = 0;
    }

    public void push(int valore) {
        Nodo nuovoNodo = new Nodo(valore);
        nuovoNodo.setNext(testa);
        testa = nuovoNodo;
        lunghezza++;
    }

    public int pop() {
        if (testa == null) {
            return -1;
        }
        int valore = testa.getValore();
        testa = testa.getNext();
        lunghezza--;
        return valore;
    }

    public int peek() {
        if (testa == null) {
            return -1;
        }
        return testa.getValore();
    }

    public int getLunghezza() {
        return lunghezza;
    }

    public boolean isEmpty() {
        return testa == null;
    }

    public void stampa() {
        Nodo nodoCorrente = testa;
        while (nodoCorrente != null) {
            System.out.println(nodoCorrente.getValore());
            nodoCorrente = nodoCorrente.getNext();
        }
    }
}