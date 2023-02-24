public class Esagono extends Exception implements IFiguraPiana {

    private double lato;

    public Esagono() {

    }

    public Esagono(double lato) {
        setLato(lato);
    }

    public double getLato() {
        return lato;
    }

    public void setLato(double lato) {
        this.lato = lato;
    }

    @Override
    public double getPerimetro() {
        return lato * 6;
    }

    @Override
    public double getArea() {
        return ((lato * 6) * lato) / 2;
    }
}
