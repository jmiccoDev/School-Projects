package it.veronatrento.areadeltriangolo;

import java.io.IOException;
import javafx.fxml.FXML;
import javafx.scene.control.TextField;
import javafx.scene.text.Text;

public class PrimaryController {
    
    @FXML
    private TextField textBase;
    
    @FXML
    private TextField textAltezza;
    
    @FXML
    private Text textRisultato;

    @FXML
    private void Button1_Click() throws IOException {
        try {
            
            String sBase = textBase.getText();
            String sAltezza = textAltezza.getText();
        
            double base = Double.parseDouble(sBase);
            double altezza = Double.parseDouble(sAltezza);
            
            if (base > 0 && altezza > 0){
                
                Triangolo triangolo = new Triangolo(base, altezza);
                double Area = triangolo.getArea();
                textRisultato.setText("Area: " + Double.toString(Area));
               
            } else {
                throw new Exception("La base e l'altezza devono essere maggiori di 0! ");
            }

        } catch (Exception x) {
            textRisultato.setText("Errore: " + x.getMessage());
        }
                  
    }
           
    
}
