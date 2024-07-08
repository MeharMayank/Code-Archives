package com.learnJava;

public class cwh_28_methods {
//    int logic(int x, int y){
    static int logic(int x, int y){
        int z;
        if(x>y){
            z = x + y;
        }
        else{
            z = (x + y) * 5;
        }
        return z;
    }
    public static void main(String[] args) {
        int a =5;
        int b =7;
        int c;
//        Method invocation using Object creation
//        cwh_28_methods obj = new cwh_28_methods();
//        c = obj.logic(a,b);
        c = logic(a,b);
        System.out.println(c);
    }
}
