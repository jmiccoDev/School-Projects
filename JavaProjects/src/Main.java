
public class Main {
    public static void main(String[] args) {

        Frazione y = new Frazione();
        Frazione x;
        x = new Frazione(5, 2);

        y.setNumeratore(10);
        y.setDenominatore(0);

        System.out.println("y = " + y.toString());
        System.out.println("x = " +  x.toString());

        Frazione n = x.ProdottoPer(y);
        System.out.println("x * y = " +  n.toString());

        Frazione z = x.DivisionePer(y);
        System.out.println("x / y = " +  z.toString());

    }
}
