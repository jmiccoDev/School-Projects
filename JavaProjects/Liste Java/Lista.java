public class Lista{

    private Nodo head; // testa della lista 
    private int elementi; // numero di elementi (nodi) della lista

    public Lista(){
        head = null; // inizializzo la testa della lista
        elementi = 0; // inizializzo il numero di elementi
    }

    
// Visita in modo ricorsivo

    private void visitaRicorsiva(Nodo p){
        if(p != null){
            System.out.println(p.getInfo());
            visitaRicorsiva(p.getLink());
        }
    }

    // Visita degli Elementi di una lista

    public void visita(){
        Nodo p = head; // inizializzo il puntatore p alla testa della lista
        while(p != null){ // finchè p non punta a null
            System.out.println(p.getInfo()); // stampo il valore di p
            p = p.getLink();
        }
    }

    public void callVisitaRicorsiva(){
        visitaRicorsiva(head);
    }   

    // Inserimento in testa

    public void inserisciInTesta(int info){
        Nodo pn = new Nodo(); // creo un nuovo nodo con info e link
        
        pn.setLink(head);

        head = pn;
        elementi++;
    }

    // Inserimento in coda

    public void inserisciInCoda(int info){
        Nodo pn = new Nodo(info, link); // creo un nuovo nodo con info e link


        if(head == null){ // se la lista è vuota
            head = pn; // inserisco il nodo in testa
        }else{
            Nodo p = head; // inizializzo il puntatore p alla testa della lista
            while(p.getLink() != null){ // finchè p non punta a null
                p = p.getLink();
            }
            p.setLink(pn); // inserisco il nodo in coda
        }
        elementi++;
    }

}