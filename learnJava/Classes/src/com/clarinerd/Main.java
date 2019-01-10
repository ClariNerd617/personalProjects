package com.clarinerd;

public class Main {

    public static void main(String[] args) {
        Car toyota = new Car();
        Car tesla = new Car();

        toyota.setModel("prius");
        System.out.println("Model is " + toyota.getModel());
    }
}
