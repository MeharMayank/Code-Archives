package com.learnJava;
import java.util.Scanner;

public class cwh_31_recursion {
    static int factorial(int n){
        if(n==0 || n==1){
            return 1;
        }
        else{
            return n*factorial(n-1);
        }
    }
    static int factorial_iterative(int n){
        if(n==0 || n==1){
            return 1;
        }
        else{
            int product =1;
            for(int i=1;i<=n;i++){
                product *= i;
            }
            return product;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int x = sc.nextInt();
        System.out.printf("The value of factorial is: %d\n",factorial(x));
        System.out.printf("The value of factorial is: %d\n", factorial_iterative(x));
    }
}
