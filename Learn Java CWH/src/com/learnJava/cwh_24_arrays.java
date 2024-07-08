package com.learnJava;

public class cwh_24_arrays {
    public static void main(String[] args) {
//        There are  three main ways to create an array in java
        // 1. Declaration and memory allocation

//        int [] marks = new int[5];

        //2. Declaration and then memory allocation
//        int [] marks;
//        marks = new int[5];
//        //Initialisation
//        marks[0] = 100;
//        marks[1] = 60;
//        marks[2] = 70;
//        marks[3] = 90;
//        marks[4] = 86;
       // marks[5] = 96; - throws an error

        //3. Declaration, memory and initialisation together
        int [] marks = {98,45,79,99,80};

        System.out.println(marks[4]);

    }
}
