/*
Title: Chapter 5 Exercise 23 - Pattern Display
File Name: Chapter_5_Exercise_23_Cody_Drumheller
Programmer: Cody Drumheller
Date:20241206
Requirements: Write a program that uses a loop to to display Pattern A below,
followed by another loop that displays pattern B.

*/

#include <iostream>
using namespace std;

int main() {
   
    cout << "Pattern A:\n";
    for (int i = 1; i <= 8; i++) { 
        for (int j = 1; j <= i; j++) { 
            cout << "+";
        }
        cout << endl; 
    }

    cout << "\nPattern B:\n";
    for (int i = 8; i >= 1; i--) { 
        for (int j = 1; j <= i; j++) { 
            cout << "+";
        }
        cout << endl;
    }

    return 0;
}



















