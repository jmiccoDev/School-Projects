package JavaProjects.ClassiAstratte;

public class ParallelepipedoABaseTriangolare extends Figura {

    private double altezza;
    private double lato;

    public ParallelepipedoABaseTriangolare() {

    }

    public ParallelepipedoABaseTriangolare(double altezza, double lato) {
        setAltezza(altezza);
        setLato(lato);
    }



    public double getAltezza() {
        return altezza;
    }

    public void setAltezza(double altezza) {
        this.altezza = altezza;
    }

    public double getLato() {
        return lato;
    }

    public void setLato(double lato) {
        this.lato = lato;
    }



    @Override
    public double getArea() {
        return (lato * lato) + (lato * Math.sqrt((lato * lato) + (altezza * altezza)));
    }

    @Override
    public double getVolume() {
        return (lato * lato * altezza) / 3;
    }

    @Override
    public double getPeso() {
        return getVolume() * 2.7;
    }

    @Override
    public String toString() {
        return "ParallelepipedoABaseTriangolare [altezza=" + altezza + ", lato=" + lato + "]";
    }

}