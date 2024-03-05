/*
Write a program that takes an integer as input and returns an integer with reversed digit
ordering.
Examples:
For input 500, the program should return 5.
For input -56, the program should return -65.
For input -90, the program should return -9.
For input 91, the program should return 19.
*/

import java.util.Scanner;

public class ReverseInteger {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a Number:");

        int num=sc.nextInt();

        int rev=0;
        while(num!=0) {
            rev=rev*10 + num%10;
            num=num/10;
        }
        System.out.print("Reverse Number is:" + rev);
    }
}
