package com.clarinerd;

public class Main {

    public static void main(String[] args) {
        int myVariable = 50;
	    // myVariable = 50 is expression, entire line is statement
        myVariable++; // also a statement

        System.out.println("This is a test"); // complete statement

        // semicolon at end makes it a statement

        System.out.println("This is " +
                "another " +
                "still more.");
        // still a statement. see the semicolon

        int anotherVariable = 50;myVariable--; /* technically accurate
        but please don't do that*/

        // technically
        int myOtherVariable
                =
                5;
        // is valid but looks ugly
        // Java ignores whitespace, the whitespace is there for us

        /* also, if you remove the indents, it is harder to read.
        However, Java is still able to read it.
         */

        // Ctrl-Alt-L will correct the format and make it human-readable



    }
}
