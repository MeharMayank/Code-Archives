package com.learnJava;
import java.util.Scanner;

public class cwh_27_PracticeSet_6 {
    public static void main(String[] args) {

        // Q: Create an array of 5 floats and calculate their sum
//        float [] marks ={45.7f,67.8f,63.4f,99.2f,100.0f};
//        float sum =0;
//        for(float element: marks){
//            sum += element;
//        }
//        System.out.printf("The value of sum is :  %f \n",sum);


        // Q: Program to find out whether a given integer is present in an array or not
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter the number: ");
//        int num = sc.nextInt();
//        int [] marks = {45, 67, 63, 99, 100};
//        boolean isInArray = false;
//        for(int element: marks){
//            if(num == element){
//                isInArray = true;
//                break;
//            }
//        }
//        if(isInArray){
//            System.out.println("The value is present in the array.... ");
//        }
//        else{
//            System.out.println("The value is not present in the array.... ");
//        }


        /* Q: Calculate the average marks from an array containing marks of all
        students in Physics using for-each loop
         */
//        int [] marks = {45, 67, 63, 99, 100};
//        int sum =0;
//        for(int element: marks){
//            sum += element;
//        }
//        System.out.printf("The value of average marks is: %d \n",sum/marks.length);


        // Q: Program to add two matrices of size 2 X 3
//        int [][] mat1 = {{1,2,3},{4,5,6}};
//        int [][] mat2;
//        mat2 = new int[2][3];
//        mat2[0][0]=2;
//        mat2[0][1]=6;
//        mat2[0][2]=15;
//        mat2[1][0]=3;
//        mat2[1][1]=7;
//        mat2[1][2]=1;
//        int [][] result = {{0,0,0},{0,0,0}};
//
//        for(int i=0;i<mat1.length;i++){ //row number of times
//            for(int j=0; j<mat1[i].length; j++){ // column number of times
//                System.out.printf("Setting value for i= %d and j= %d \n", i,j);
//                result[i][j] = mat1[i][j] + mat2[i][j];
//            }
//        }
//        // Printing the elements of a 2-D Array
//        for(int i=0;i<mat1.length;i++){ //row number of times
//            for(int j=0; j<mat1[i].length; j++){ // column number of times
//                System.out.print(result[i][j] + " ");
//                result[i][j] = mat1[i][j] + mat2[i][j];
//            }
//            System.out.println("");
//        }


        // Q: Program to reverse an array
//        int [] arr = {1,2,3,4,5,6};
//        int l =arr.length;
//        int n = Math.floorDiv(l,2);
//        int temp;
//        for(int i=0; i<n; i++){
//            // Swap a[i] and a[l-1-i]
//            temp = arr[i];
//            arr[i] = arr[l-1-i];
//            arr[l-1-i] = temp;
//        }
//        for(int element: arr){
//            System.out.println(element);
//        }


        // Q: Program to find maximum element in array
//        int [] arr = {1, 21,  3, 455, 5 , 34, 67};
//        int max =0;
//        for(int e:arr){
//            if(e>max){
//                max =e;
//            }
//        }
//        System.out.printf("The value of the max element is: %d \n",max);


        // Q: Program to find minimum element in array
//        int [] arr = {1, 21, 3, 455, 5, 34, 67};
//        int min =Integer.MAX_VALUE;
//        for(int e: arr){
//            if(e<min){
//                min = e;
//            }
//        }
//        System.out.printf("The value of the min element is: %d \n",min);


        // Q: Program to find whether an array is sorted or not
        int [] arr = {1, 21, 3, 455, 5, 34, 67};
        boolean isSorted = true;
        for(int i=0;i<arr.length-1;i++){
            if(arr[i]>arr[i+1]){
                isSorted = false;
                break;
            }
        }
        if(isSorted){
            System.out.println("The array is sorted.... ");
        }
        else{
            System.out.println("The array is not sorted.... ");
        }

    }
}
