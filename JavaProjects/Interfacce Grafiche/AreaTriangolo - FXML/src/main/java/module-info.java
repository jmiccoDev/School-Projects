module it.veronatrento.areadeltriangolo {
    requires javafx.controls;
    requires javafx.fxml;

    opens it.veronatrento.areadeltriangolo to javafx.fxml;
    exports it.veronatrento.areadeltriangolo;
}
