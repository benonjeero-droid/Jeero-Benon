package Jeero.benon;

import java.util.Scanner;

public class Class_practical {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double sum = 0;

        System.out.println("Enter 5 numbers:");
        for(int i = 1; i <= 5; i++){
            System.out.print("Number " + i + ": ");
            double num = input.nextDouble();
            sum = sum + num;
        }

        double average = sum / 5;
        System.out.println("Average is: " + average);
        
        input.close();
    }
}