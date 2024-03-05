//Write a program to generate the Fibonacci sequence up to 100.

#include<iostream>
using namespace std;

int main() {
    int num , first = 1, second = 1 ;

    cout<<"Enter the number of terms to be printed"<<endl;
    
    while(first + second <= 100) {
        num = first + second;
        cout << num <<" ";

        first = second;
        second = num;
    }
    return 0;
}