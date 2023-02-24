public class Triangolo extends Exception implements IFiguraPiana{

    private double base;
    private double altezza;
    private double lato;

    public Triangolo(){

    }

    public Triangolo(double base, double altezza, double lato) {
        setBase(base);
        setAltezza(altezza);
        setLato(lato);
    }

    public double getBase() {
        return base;
    }

    public void setBase(double base) {

        try {
            if(base <= 0) {
                throw new Exception("Il valore inserito (base) deve essere maggiore di 0!");
            } else  {
                this.base = base;
            }

        } catch (Exception x) {
            System.out.println("C'e' stato un errore! Codice Errore: " + x.getMessage());
        }
    }

    public double getAltezza() {
        return altezza;
    }

    public void setAltezza(double altezza) {
        try {
            if(altezza <= 0){
                throw new Exception("Il valore inserito (altezza) deve essere maggiore di 0!");
            } else  {
                this.altezza = altezza;
            }

        } catch (Exception x) {
            System.out.println("C'e' stato un errore! Codice Errore: " + x.getMessage());
        }
    }

    public double getLato() {
        return lato;
    }

    public void setLato(double lato) {

        try {
            if(lato <= 0){
                throw new Exception("Il valore inserito (altezza) deve essere maggiore di 0!");
            } else  {
                this.lato = lato;
            }

        } catch (Exception x) {
            System.out.println("C'e' stato un errore! Codice Errore: " + x.getMessage());
        }
    }

    @Override
    public double getArea() {
        return (base * altezza) / 2;
    }

    @Override
    public double getPerimetro() {
        return lato * 3;
    }
}
