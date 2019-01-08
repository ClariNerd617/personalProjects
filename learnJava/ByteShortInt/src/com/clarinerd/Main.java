package com.clarinerd;

public class Main {

    public static void main(String[] args) {

        // Integer has a width of 32
        int myMinValue = -2_147_483_648;
        int myMaxValue = 2_147_483_647;
        int myTotal = (myMinValue/2);
        System.out.println("myTotal = " + myTotal);

        // Bye has a width of 8
        byte myByteValue = -120;
        byte myNewByteValue = (byte) (myByteValue/2);
        System.out.println("myNewByteValue = " + myNewByteValue);

        // Short has a width of 16
        short myShortValue = 32_767;
        short myNewShortValue = (short) (myShortValue/2);
        System.out.println("myNewShortValue = " + myNewShortValue + "\n");

        // Long has a width of 64
        long myLongValue = 9_223_372_036_054_775_807L;

        int myIntValue = 5 / 3;
        float myFloatValue = 5f / 3f; // float myFloatValue = (float) 5.4;
        double myDoubleValue = 5d / 3d; // or double myDoubleValue = 5d;

        System.out.println("myIntValue = " + myIntValue);
        System.out.println("myFloatValue = " + myFloatValue);
        System.out.println("myDoubleValue = " + myDoubleValue + "\n");

        double numPounds = 200d;
        double convertedKilograms = (numPounds * 0.45359237d);
        System.out.println("Kilograms = " + convertedKilograms);
    }
}
