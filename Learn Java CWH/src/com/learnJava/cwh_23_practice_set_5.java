package com.learnJava;
import java.util.Scanner;

public class cwh_23_practice_set_5 {
    public static void main(String[] args) {

        // Q: Program to print following pattern
        /*
        ****
        ***
        **
        *
         */
//        int n = 4;
//        for(int i=n;i>0;i--){
//            for(int j=0;j<i;j++){
//                System.out.print("*");
//            }
//            System.out.print("\n");
//        }


        // Q: Program to sum first n even numbers using for loop
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter n numbers: ");
//        int n = sc.nextInt();
//        int sum =0;
//        for(int i=0; i<n; i++){
//            sum += (2*i);
//        }
//        System.out.printf("Sum of even numbers is: %d", sum);


        // Q: Program to print multiplication table of given number n
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter a number: ");
//        int n = sc.nextInt();
//        for(int i=1;i<=10;i++){
//            System.out.printf("%d X %d = %d \n",n,i,n*i);
//        }


        // Q: Program to print multiplication table of 10 in reverse order
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter a number: ");
//        int n = sc.nextInt();
//        for(int i=10; i>=1; i--){
//            System.out.printf("%d X %d = %d \n", n,i,n*i);
//        }


        // Q: Program to find factorial of a given number using while loops
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter a number: ");
//        int n = sc.nextInt();
//        int i =1;
//        int fact =1;
//        while(i<=n){
//            fact *= i;
//            i++;
//        }
//        System.out.printf("The required factorial of %d is %d.... ", n , fact);


        // Q: Program to find factorial of a given number using for loops
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter a number: ");
//        int n = sc.nextInt();
//        int fact =1;
//        for(int i=1;i<=n;i++){
//            fact *= i;
//        }
//        System.out.printf("The required factorial of %d is %d.... ", n, fact);


        /* Q: Program to calculate the sum of the numbers occurring in the
        multiplication table of 8.
         */
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter a number: ");
//        int n = sc.nextInt();
//        int sum =0;
//        for(int i=1; i<=10; i++){
//            sum += n*i;
//            System.out.println(sum);
//        }


        // Q: Program to sum first n even numbers using while loop
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter n numbers: ");
//        int n = sc.nextInt();
//        int sum =0;
//        int i =0;
//        while(i<n){
//            sum += (2*i);
//            i++;
//        }
//        System.out.printf("Sum of even numbers is: %d", sum);


        // Q: Program the first question using while loop

//        int n = 4;
        int i=4;
        while(i>0){
            int j=0;
            while(j<i){
                System.out.print("*");
                j++;
            }
            i--;
            System.out.print("\n");
        }

    }
}
