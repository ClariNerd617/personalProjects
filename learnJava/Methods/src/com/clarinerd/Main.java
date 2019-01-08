package com.clarinerd;

public class Main {

    public static void main(String[] args) {
        boolean gameOver = true;
        int score = 1500;
        int levelCompleted = 0;
        int bonus = 0;

        int highScore = calculateScore(gameOver, score, levelCompleted, bonus);
        int scoreRank = calculateHighScorePosition(highScore);
        displayHighScorePosition("ClariNerd617", highScore);
        System.out.println("Your rank is: " + scoreRank);

        score = 900;
        levelCompleted = 0;
        bonus = 0;

        highScore = calculateScore(gameOver, score, levelCompleted, bonus);
        scoreRank = calculateHighScorePosition(highScore);
        displayHighScorePosition("ClariNerd617", highScore);
        System.out.println("Your rank is: " + scoreRank);

        score = 400;
        levelCompleted = 0;
        bonus = 0;

        highScore = calculateScore(gameOver, score, levelCompleted, bonus);
        scoreRank = calculateHighScorePosition(highScore);
        displayHighScorePosition("ClariNerd617", highScore);
        System.out.println("Your rank is: " + scoreRank);

        score = 50;
        levelCompleted = 0;
        bonus = 0;

        highScore = calculateScore(gameOver, score, levelCompleted, bonus);
        scoreRank = calculateHighScorePosition(highScore);
        displayHighScorePosition("ClariNerd617", highScore);
        System.out.println("Your ranks is: " + scoreRank);
    }

    public static int calculateScore(boolean gameOver, int score, int levelCompleted, int bonus) {

        if (gameOver) {
            int finalScore = score + (levelCompleted + bonus);
//            finalScore += 2000;
            return finalScore;
        } else {
            return -1;
        }
    }

    public static void displayHighScorePosition(String playerName, int highScore) {
        System.out.println("Congratulations, "
                + playerName +
                " your score is: "
                + highScore);
    }

    public static int calculateHighScorePosition(int highScore) {
        int position = 4;

        if (highScore >= 1000) {
            position = 1;
        } else if (highScore >= 500) {
            position = 2;
        } else if (highScore >= 100) {
            position = 3;
        }
        return position;
    }
}