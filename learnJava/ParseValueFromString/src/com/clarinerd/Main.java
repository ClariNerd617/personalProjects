package com.clarinerd;

public class Main {

    public static void main(String[] args) {
        String numberAsString = "2019";
        System.out.println("numberAsString = " + numberAsString);

        int number = Integer.parseInt(numberAsString);
        System.out.println("number = " + number);

        numberAsString += 1;
        number += 1;

        System.out.printf("numberAsString = " + numberAsString);
        System.out.println("\nnumber = " + number);
    }
}
