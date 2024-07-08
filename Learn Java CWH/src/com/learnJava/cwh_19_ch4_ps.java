package com.learnJava;
import java.util.Scanner;

public class cwh_19_ch4_ps {
    public static void main(String[] args) {
        // Q: Program to find out whether a student is pass or fail; if it requires total
        //40% and at least 33% in each subject to pass. Assume 3 subjects and take marks as
        //an input from the user.

//        byte m1, m2, m3;
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter your marks in Physics.... ");
//        m1 = sc.nextByte();
//
//        System.out.println("Enter your marks in Chemistry.... ");
//        m2 = sc.nextByte();
//
//        System.out.println("Enter your marks in Maths.... ");
//        m3 = sc.nextByte();
//
//        float avg = (m1+m2+m3)/3.0f;
//        System.out.printf("Your Overall percentage is: %.2f \n", avg);
//        if(avg>=40 && m1>=33 && m2>=33 && m3>=33){
//            System.out.println("Congratulations, You have been promoted");
//        }
//        else{
//            System.out.println("Sorry, You have not been promoted. Please try again.");
//        }


        // Q: Calculate Income Tax paid by an employee to the government as per the slabs
        // mentioned below:

//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter your income in Lakhs: ");
//        float income =sc.nextFloat();
//        float tax = 0;
//        if(income<=2.5){
//            tax += 0;
//        }
//        if(income>2.5 && income<=5f){
//            tax = tax + 0.05f*(income - 2.5f);
//        }
//        else if(income>5f && income<=10.0f){
//            tax = tax + 0.05f *(5.0f - 2.5f);
//            tax = tax + 0.2f * (income - 5f);
//        }
//        else if(income>10.0f){
//            tax = tax + 0.05f*(5.0f - 2.5f);
//            tax = tax + 0.2f*(10.0f - 5f);
//            tax = tax + 0.3f * (income - 10.0f);
//        }
//        System.out.printf("The total tax paid by the employee is: %.2f", tax);



        // Q : Program to find out the day of the week given the number [1 for Monday,2 for Tuesday... and so on!]

//        System.out.println("Enter the number of weekday: ");
//        Scanner sc = new Scanner(System.in);
//        int day = sc.nextInt();
//        switch (day){
//            case 1 -> System.out.println("Monday");
//            case 2 -> System.out.println("Tuesday");
//            case 3 -> System.out.println("Wednesday");
//            case 4 -> System.out.println("Thursday");
//            case 5 -> System.out.println("Friday");
//            case 6 -> System.out.println("Saturday");
//            case 7 -> System.out.println("Sunday");
//        }


        // Q : Program to find whether a year entered by user is a leap year or not

//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter the year: ");
//        int year = sc.nextInt();
//        if(year%4==0){
//            System.out.printf("The given year %d is a leap year.... ", year);
//        }
//        else{
//            System.out.printf("The given year %d is not a leap year.... ", year);
//        }


        // Q : Program to find out the type of website from the url

//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter the website.... ");
//        String website = sc.next();
//        if(website.endsWith(".org")){
//            System.out.println("This is an organizational website.... ");
//        }
//        else if(website.endsWith(".com")){
//            System.out.println("This is an Commercial website.... ");
//        }
//        else if(website.endsWith(".in")){
//            System.out.println("This is an Indian website.... ");
//        }

        // Extra Q : Program to develop a rock, paper, scissor game in Java
        //where player gets to play five times with computer!
        Scanner sc = new Scanner(System.in);
        int i = 0;
        while(i < 5){
            System.out.println("Choose rock, paper or scissors!");
            String myMove = sc.next();

            if(!myMove.equals("rock") && !myMove.equals("paper") && !myMove.equals("scissors")){
                System.out.println("Invalid Move! ");
                break;
            }
            else {
                int rand = (int) (Math.random() * 3);

                String opponentMove = "";
                if (rand == 0) {
                    opponentMove = "rock";
                } else if (rand == 1) {
                    opponentMove = "paper";
                } else {
                    opponentMove = "scissors";
                }
                System.out.printf("Opponent move: %s \n", opponentMove);

                if (myMove.equals(opponentMove)) {
                    System.out.println("It's a tie! ");
                } else if (myMove.equals("rock") && opponentMove.equals("scissors") || myMove.equals("scissors") && opponentMove.equals("paper") || myMove.equals("paper") && opponentMove.equals("rock"))
                {
                    System.out.println("You won! ");
                }
                else
                {
                    System.out.println("You Lost! ");
                }
            }
            i++;
        }

    }
}
