package com.learnJava;

public class cwh_29_method_overloading {
    static void foo(){
        System.out.println("Good morning bro!");
    }
    static void foo(int a){
        System.out.printf("Good morning %d bro!\n",a);
    }
    static void foo(int a,int b){
        System.out.printf("Good morning %d bro!\n",a);
        System.out.printf("Good morning %d bro!\n",b);
    }
//    static void change(int a){
//        a = 98;
//    }
//    static void change2(int [] arr){
//        arr[0] = 98;
//    }
//    static void tellJoke(){
//        System.out.println("I invented a new word!\n" + "Plagiarism!");
//    }

    public static void main(String[] args) {
//        tellJoke();

        // Case 1: Changing the integer
//        int x = 45;
//        change(x);
//        System.out.printf("The value of x after change is: %d\n", x);

        // Case 2: Changing the array
//        int [] marks = {52,73,77,89,98,94};
//        change2(marks);
//        System.out.printf("The value of x after running change is: %d\n ",marks[0]);


        // Method Overloading
        foo();
        foo(3000);
        foo(3000,4000);
    }
}
