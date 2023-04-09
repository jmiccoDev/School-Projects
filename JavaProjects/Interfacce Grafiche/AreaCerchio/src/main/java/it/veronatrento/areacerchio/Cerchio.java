/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package it.veronatrento.areacerchio;

/**
 *
 * @author mirkou
 */
public class Cerchio {
    
    private double raggio;
    
    public Cerchio(double raggio){
        this.raggio = raggio;
    }
    
    public double getRaggio(){
        return raggio;
    }
    
    public double getArea(){
       return Math.PI * Math.pow(raggio, 2);
    }     
}
