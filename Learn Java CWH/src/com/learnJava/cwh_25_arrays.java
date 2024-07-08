package com.learnJava;

public class cwh_25_arrays {
    public static void main(String[] args) {
        int [] marks = {98,45,79,99,80};
//        float [] marks = {98, 45, 79, 99, 80};
//        String [] students = {"Harry", "Shubham", "Lovish", "Rohan"};
//        System.out.println(students.length);
//        System.out.println(students[2]);

//        for(int i=0; i<marks.length;i++){
//            System.out.println(marks[i]);
//        }

        // Q: Program to print arrays in reverse order
//        for(int i=marks.length -1; i>=0;i--){
//            System.out.println(marks[i]);
//        }


        // Q: Program displaying the array (for-each loop)
        for(int element : marks){
            System.out.println(element);
        }

    }
}
