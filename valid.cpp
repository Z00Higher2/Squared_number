/*
Author: Zuhayer Tashin
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2A

Write a program valid.cpp, which asks the user to input an integer in the range 0 < n < 100.
If the number is out of range, the program should keep asking to re-enter until a valid number is input.
*/
 #include <iostream>
 #include <math.h>
 using namespace std;

 int main(){
    int num_1; // Declared a number variable
    cout << "Please enter an integer: ";
    cin >> num_1; // User input for the number variable

    while(num_1 <= 0 || num_1 >= 100){ // Check if the number is out of range or if it is the user re-enter the number until the number is within the range 0 < n < 100
        cout << "Please re-enter: ";
        cin >> num_1;
    }

    cout << pow(num_1, 2) << endl; // prints the power of 2 of the number

 }
