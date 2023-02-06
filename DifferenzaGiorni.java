import java.text.SimpleDateFormat;
import java.time.*;
import java.time.format.*;
import java.util.Date;
import java.util.Scanner;

public class DifferenzaGiorni {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yy");
        LocalDate x = LocalDate.now();

        System.out.print("Inserisci la prima data: (Formato: dd/MM/yy) ");
        String primaDataString = scanner.nextLine();
        System.out.print("Inserisci la seconda data: (Formato: dd/MM/yy) ");
        String secondaDataString = scanner.nextLine();

        try{
            Date primaData = sdf.parse(primaDataString);
            Date secondaData = sdf.parse(secondaDataString);

            if (secondaData.equals(primaData)){
                System.out.println("Le date inserite risultano uguali!");
            }else{
                long diffInMillesecondi = Math.abs(secondaData.getTime() - primaData.getTime());
                long diffInGiorni = diffInMillesecondi / (24 * 60 * 60 * 1000);
                System.out.println("La differenza tra le 2 date e' di " + diffInGiorni + " giorni");
            }

        }catch (Exception exception){
            System.out.println("Errore nella formattazione delle date. Riprova e ricorda di seguire il seguente format (dd/MM/yy)\nEsempio: " + x.format(DateTimeFormatter.ofPattern("dd/MM/yy")));
        }
    }
}