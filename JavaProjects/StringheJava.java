import java.util.Scanner;


public class Main {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        System.out.println("Inserisci una frase che contenga un massimo di 100 caratteri: ");
        String fraseUtente = scanner.nextLine();

        if(fraseUtente.length() > 100){
            System.out.println("La frase inserita contiene piu' di 100 caratteri richiesti!");
        } else {
            String nuovaStringa = "";
            for(int i = 0; i < fraseUtente.length(); i++) {


                char c = fraseUtente.charAt(i);
                if (checkVocali(c)) {
                    nuovaStringa += c + (Character.isLowerCase(c) ? "f" : "F");
                } else {
                    nuovaStringa += c;
                }
            }
            System.out.println("Nuova stringa:\n"+ nuovaStringa);
        }
    }

    private static boolean checkVocali(char c) {
        return "AEIOUaeiou".indexOf(c) != -1;
    }
}
