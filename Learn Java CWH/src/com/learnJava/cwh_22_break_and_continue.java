package com.learnJava;

public class cwh_22_break_and_continue {
    public static void main(String[] args) {
        //BREAK AND CONTINUE USING LOOPS

        //FOR LOOP
//        for(int i=0;i<5;i++){
//            System.out.println(i);
//            System.out.println("Java is great!");
//            if(i==2){
//                System.out.println("Ending the loop");
//                break;
//            }
//        }

        //WHILE LOOP
//        int i=0;
//        while(i<5){
//            System.out.println(i);
//            System.out.println("Java is great!");
//            if(i==2){
//                System.out.println("Ending the loop");
//                break;
//            }
//            i++;
//        }
//        System.out.println("Loop ends here.... ");

        //DO WHILE LOOP
//        int i=0;
//        do{
//            System.out.println(i);
//            System.out.println("Java is great");
//            if(i==2){
//                System.out.println("Ending the loop");
//                break;
//            }
//            i++;
//        }while(i<5);
//        System.out.println("Loop ends here");




        //FOR LOOP
//        for(int i=0;i<50;i++){
//            if(i==2){
//                System.out.println("Ending the loop");
//                continue;
//            }
//            System.out.println(i);
//            System.out.println("Java is great!");
//        }

        //WHILE LOOP
//        int i=0;
//        while(i<5){
//            i++;
//            if(i==2){
//                System.out.println("Ending the loop");
//                continue;
//            }
//            System.out.println(i);
//            System.out.println("Java is great!");
//        }
//        System.out.println("Loop ends here.... ");

        //DO WHILE LOOP
        int i=0;
        do{
            i++;
            if(i==2){
                System.out.println("Ending the loop");
                continue;
            }
            System.out.println(i);
            System.out.println("Java is great");
        }while(i<5);
        System.out.println("Loop ends here");

    }
}
