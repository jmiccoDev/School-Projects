/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package it.veronatrento.areadeltriangolo;

/**
 *
 * @author Alunno
 */
public class Triangolo {
    
    private double base;
    private double altezza;
    
    public Triangolo(double base, double altezza){
        this.base = base;
        this.altezza = altezza;
    }
    
    public double getAltezza(){
        return altezza;
    }
    
    public double getBase(){
        return base;
    }
    
    public double getArea(){
        return (base * altezza) / 2;
    }
    
}
