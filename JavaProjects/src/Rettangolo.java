public class Rettangolo extends Exception implements IFiguraPiana {

    private double latoA;
    private double latoB;

    public Rettangolo() {

    }

    public Rettangolo(double latoA, double latoB) {
        setLatoA(latoA);
        setLatoB(latoB);
    }

    public double getLatoA() {
        return latoA;
    }

    public void setLatoA(double latoA) {
        try {
            if (latoA <= 0) {
                throw new Exception("Il valore inserito (latoA) deve essere maggiore di 0!");
            } else {
                this.latoA = latoA;
            }
        } catch (Exception x) {
            System.out.println("C'è stato un errore! Codice errore: " + x.getMessage());
        }
    }

    public double getLatoB() {
        return latoB;
    }

    public void setLatoB(double latoB) {
        try {
            if (latoB <= 0) {
                throw new Exception("Il valore inserito (latoB) deve essere maggiore di 0!");
            } else {
                this.latoB = latoB;
            }
        } catch (Exception x) {
            System.out.println("C'è stato un errore! Codice errore: " + x.getMessage());
        }
    }

    @Override
    public double getArea() {
        return latoA * latoB;
    }

    @Override
    public double getPerimetro() {
        return ((2 * latoA) + (2 * latoB)) / 2;
    }

}
