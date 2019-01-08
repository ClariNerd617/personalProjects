package com.clarinerd;

public class Main {

    public static void main(String[] args) {

        boolean gameOver = true;
        int score = 5000;
        int levelCompleted = 5;
        int bonus = 100;

/*        if (score <= 5000 && score > 1000) {
            System.out.println("Your score was less than 5000 but greater than 1000");
        } else if (score < 1000) {
            System.out.println("Your score was less than 1000");
        } else {
            System.out.println("Got here");
        }*/

        if (gameOver) { // if (gameOver == true) is the same as if (gameOver)
            int finalScore = score + (levelCompleted + bonus);
            System.out.println("Your final score was " + finalScore);
        }

        // codeblock lets me put more than one line in if-statement
        // codeblock is preferred. codeblock is love. codeblock is life



    }
}
