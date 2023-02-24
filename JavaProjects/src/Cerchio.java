public class Cerchio extends Exception implements IFiguraPiana {
    private double raggio;
    private double diametro;

    public Cerchio() {

    }

    public Cerchio(double raggio, double diametro) {
        setRaggio(raggio);
        setDiametro(diametro);
    }

    public double getRaggio() {
        return raggio;
    }

    public void setRaggio(double raggio) {

        try {
            if (raggio <= 0) {
                throw new Exception("Il valore inserito (raggio) deve essere maggiore di 0!");
            } else {
                this.raggio = raggio;
            }

        } catch (Exception x) {
            System.out.println("C'e' stato un errore! Codice Errore: " + x.getMessage());
        }
    }

    public double getDiametro() {
        return diametro;
    }

    public void setDiametro(double diametro) {
        try {
            if (diametro <= 0) {
                throw new Exception("Il valore inserito (diametro) deve essere maggiore di 0!");
            } else {
                this.diametro = diametro;
            }

        } catch (Exception x) {
            System.out.println("C'e' stato un errore! Codice Errore: " + x.getMessage());
        }
    }


    @Override
    public double getArea() {
        return Math.PI * Math.pow(raggio, 2);
    }

    @Override
    public double getPerimetro() {
        return (Math.PI * diametro) / 2;
    }
}
