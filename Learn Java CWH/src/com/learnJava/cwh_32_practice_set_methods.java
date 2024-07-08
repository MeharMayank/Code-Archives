package com.learnJava;
import java.util.Scanner;

public class cwh_32_practice_set_methods {
    static void multiplication(int n){
        for(int i=1;i<=10;i++){
            System.out.printf("%d X %d = %d \n",n,i,n*i);
        }
    }
    static void pattern1(int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<i+1;j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    static int sumRec(int n){
        //Base Condition
        if(n==1){
            return 1;
        }
        else{
            return n + sumRec(n-1);
        }
    }
    static void pattern2(int m){
        for(int i=m;i>0;i--){
            for(int j=0;j<i;j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    static int fib(int n){
        if(n==1){
            return 0;
        }
        else if(n==2){
            return 1;
        }
        else{
            return fib(n-1)+fib(n-2);
        }
    }
    static void average(int ...arr){
        float sum =0;
        int i=0;
        while(i<arr.length){
            sum += arr[i];
            i++;
        }
        float average = (sum/arr.length);
        System.out.printf("Required average: %f",average);
    }

    public static void main(String[] args) {
        // Q: Method to print multiplication table of number n
//        multiplication(5);

        // Q: Method to print following pattern
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter a number: ");
//        int x = sc.nextInt();
//        System.out.println("Required Pattern.... ");
//        pattern1(x);
//
        // Q: Recursive function to calculate sum of first n natural numbers
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter a number: ");
//        int c = sc.nextInt();
//        System.out.println(sumRec(c));

        // Q: Function to print following pattern
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter a number: ");
//        int y = sc.nextInt();
//        System.out.println("Required Pattern.... ");
//        pattern2(y);

        //Q: Function to print nth term of fibonacci series using recursion
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter a number: ");
//        int m = sc.nextInt();
//        int result = fib(m);
//        System.out.printf("The required result is: %d\n",result);

        //Q: Function to find average of set of numbers passed as arguments
        average(1,2,3,4,5);
    }
}
