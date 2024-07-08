package com.learnJava;

public class cwh_30_varargs {
    static int sum(int a,int b){
        return a+b;
    }
    static int sum(int ...arr){
        // Available as int [] arr
        int result =0;
        for(int a: arr){
            result +=a;
        }
        return result;
    }
//    static int sum(int x, int ...arr){
//        int result =x;
//        for(int a: arr){
//            result+=a;
//        }
//        return result;
//    }

    public static void main(String[] args) {
        System.out.println("Welcome to Varargs Tutorial");
        System.out.printf("The sum of 4 and 5 is: %d\n",sum(4, 5));
        System.out.printf("The sum of 2,4,3 and 5 is: %d\n",sum(4, 3,5));
        System.out.printf("The sum of 2,4,3 and 5 is: %d\n",sum(1, 2, 4, 3, 5));
        
    }
}
