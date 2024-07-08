package com.learnJava;
import java.util.Scanner;

public class cwh_21_for_loop {
    public static void main(String[] args) {
//        for(int i =1; i<=10;i++){
//            System.out.println(i);
//        }

        // Q: Program to print first n odd no.s using for loop
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter the number: ");
//        int n = sc.nextInt();
//        for(int i=0;i<n;i++){
//            System.out.println(2*i+1);
//        }

        // Q: Program to print first n natural no.s in reverse order
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int n = sc.nextInt();
        for(int i=n; i>0;i--){
            System.out.println(i);
        }

    }
}
