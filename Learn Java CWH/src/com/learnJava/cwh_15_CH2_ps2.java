package com.learnJava;
import java.util.Scanner;

public class cwh_15_CH2_ps2 {
    public static void main(String[] args) {
        // Q: Program to convert a string to lowercase
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter a string... ");
//        String alpha = sc.next();
//        String lstring  = alpha.toLowerCase();
//        System.out.println(lstring);

        // Q: Program to replace spaces with underscores
//         String text = "Alpha test";
//         text = text.replace(" ","_");
//         System.out.println(text);

        // Q: Program to fill in a letter template as given in the question
//        String letter = "Dear name <!name!>, Thanks a lot!";
//        letter = letter.replace("<!name!>", "Harry");
//        System.out.println(letter);

        // Q: Program to detect double and triple spaces in a string
//        String alpha1 = "This string contains    double and triple spaces";
//        System.out.println(alpha1.indexOf("  "));
//        System.out.println(alpha1.indexOf("   "));

        // Q: Program to format the following letter using escape sequence characters
        String myLetter = "Dear Harry, \n\tThis Java Course is nice. \nThanks!";
        System.out.println(myLetter);

    }
}
