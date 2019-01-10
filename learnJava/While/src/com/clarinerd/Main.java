package com.clarinerd;

public class Main {

    public static void main(String[] args) {
        // while loop
        int count = 1;
        while (count != 7) {
            System.out.println("Count value is " + count);
            count++;
        }

        System.out.println("\n"); // puts a linebreak between the two loops

        // equivalent for loop
        count = 1;
        for (int i = 1; i < 7; i++) {
            System.out.println("Count value is " + count);
            count++;
        }

        System.out.println("\n");

        // equivalent while true
        count = 1;
        while (true) {
            if (count == 7) {
                break;
            }
            System.out.println("Count value is " + count);
            count++;
        }

        System.out.println("\n");

        // equivalent do while
        count = 1;
        do {
            System.out.println("Count value is " + count);
            count++;

            if (count > 100) {
                break;
            }
        } while (count < 7);

        System.out.println("\n");

        int number = 4;
        int finishNumber = 20;
        int evenNumbersFound = 0;

        while (number <= finishNumber) {
            number++;
            if (!isEvenNumber(number)) {
                continue;
            }

            System.out.println("Even number " + number);
            evenNumbersFound++;
            if (evenNumbersFound >= 5) {
                break;
            }
        }

        System.out.println("Total even numbers found: " + evenNumbersFound);

    }

    public static boolean isEvenNumber(int number) {
        /*if ((number % 2) == 0) {
            return true;
        } else {
            return false;
        }*/

        // or the simplified version
        return ((number % 2) == 0);
    }
}
