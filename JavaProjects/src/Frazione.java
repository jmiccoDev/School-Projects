public class Frazione {
    private int numeratore;
    private int denominatore;

    public Frazione() {
        setNumeratore(0);
        setDenominatore(1);
    }

    public Frazione(int numeratore, int denominatore) {
        setNumeratore(numeratore);
        setDenominatore(denominatore);
    }

    public int getNumeratore() {
        return numeratore;
    }

    public void setNumeratore(int nuovoNumeratore) {
        numeratore = nuovoNumeratore;
    }

    public int getDenominatore() {
        return denominatore;
    }

    public void setDenominatore(int nuovoDenominatore) {
        if(nuovoDenominatore != 0)
            denominatore = nuovoDenominatore;
        else
            System.out.println("Il denominatore non può assumere valore 0");
    }

    public Frazione ProdottoPer(Frazione b) {
        Frazione p = new Frazione();
        p.setNumeratore(getNumeratore() * b.getNumeratore());
        p.setDenominatore(getDenominatore() * b.getDenominatore());
        return p;
    }

    public Frazione DivisionePer(Frazione b) {
        Frazione p = new Frazione();
        p.setNumeratore(getNumeratore() * b.getDenominatore());
        p.setDenominatore(getDenominatore() * b.getNumeratore());
        return p;
    }

    @Override
    public String toString()
    {
        return numeratore + "/" + denominatore;

    }
}
