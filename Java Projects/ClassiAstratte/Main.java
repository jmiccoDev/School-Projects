public class Main {

    public static void main(String[] args) {
        
        ParallelepipedoABaseTriangolare parallelepipedoABaseTriangolare = new ParallelepipedoABaseTriangolare(10, 5);
        Piramide piramide = new Piramide(10, 5);
        Sfera sfera = new Sfera(5);

        System.out.println(parallelepipedoABaseTriangolare.toString());
        System.out.println(piramide.toString());
        System.out.println(sfera.toString());

        System.out.println("Area parallelepipedoABaseTriangolare: " + parallelepipedoABaseTriangolare.getArea());
        System.out.println("Volume parallelepipedoABaseTriangolare: " + parallelepipedoABaseTriangolare.getVolume());
        System.out.println("Peso parallelepipedoABaseTriangolare: " + parallelepipedoABaseTriangolare.getPeso());

        System.out.println("Area piramide: " + piramide.getArea());
        System.out.println("Volume piramide: " + piramide.getVolume());
        System.out.println("Peso piramide: " + piramide.getPeso());

        System.out.println("Area sfera: " + sfera.getArea());
        System.out.println("Volume sfera: " + sfera.getVolume());
        System.out.println("Peso sfera: " + sfera.getPeso()); 
    }

}

