package com.clarinerd;

public class Main {

    public static void main(String[] args) {
        int result = 1 + 2; // 3
        System.out.println("1 + 2 = " + result);

        int previousResult = result;

        result = result - 1;
        System.out.println(previousResult + " - 1 = " + result);

        previousResult = result;

        result = result * 10;
        System.out.println(previousResult + " * 10 = " + result);

        previousResult = result;

        result = result / 5;
        System.out.println(previousResult + " / 5 = " + result);

        previousResult = result;

        result = result % 3;
        System.out.println(previousResult + " % 3 = " + result);

        previousResult = result;
        result = result + 1;
        result++;
        System.out.println("Result++\nResult is now " + result);
        result--;
        System.out.println("Result--\nResult is now " + result);
        result += 2;
        System.out.println("Result += 2\nResult is now " + result);
        result *= 10;
        System.out.println("Result *= 10\nResult is now " + result);
        result -= 10;
        System.out.println("Result -= 10\nResult is now " + result);
        result /= 10;
        System.out.println("Result /= 10\nResult is now " + result);

        boolean isAlien = false;
        if (isAlien == false)
            System.out.println("\nIt is not an alien!\n");

        int topScore = 80;
        if (topScore < 100)
            System.out.println("You got the high score!\n");

        int secondTopScore = 81;
        if ((topScore > secondTopScore) && (topScore < 100))
            System.out.println("Greater than second top core and less than 100\n");

        if ((topScore > 90) || (secondTopScore <= 90))
            System.out.println("One of these tests is true.");

        int newValue = 50;
        if (newValue == 50)
            System.out.println("This is true");

        boolean isCar = false;
        if (isCar)
            System.out.println("This is not supposed to happen");

        isCar = true;
        boolean wasCar = isCar ? true : false;
        if (wasCar)
            System.out.println("wasCar is true");
    }
}
