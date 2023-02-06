public class Sfera extends Figura {

    private double raggio;

    public Sfera() {

    }

    public Sfera(double raggio) {
        setRaggio(raggio);
    }



    public double getRaggio() {
        return raggio;
    }

    public void setRaggio(double raggio) {
        this.raggio = raggio;
    }



    @Override
    public double getArea() {
        return 4 * Math.PI * raggio * raggio;
    }

    @Override
    public double getVolume() {
        return (4 * Math.PI * raggio * raggio * raggio) / 3;
    }

    @Override
    public double getPeso() {
        return getVolume() * 2.7;
    }

    @Override
    public String toString() {
        return "Sfera [raggio=" + raggio + "]";
    }

}