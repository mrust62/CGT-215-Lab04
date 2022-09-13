// CGT 215 Lab04.cpp : 
// This file contains the 'main' function. 
// Program execution begins and ends there.
//Written by MAtthew Rust 9/13/2022

#include <iostream>

using namespace std;

// Print out the menu of choices for the user to select from
void printMenu() {
    cout << "Please Select which operation to perform:" << endl;
    cout << "\t1. Factorial" << endl;
    cout << "\t2. Arithmetic Series" << endl;
    cout << "\t3. Geometric Series" << endl;
    cout << "\t4. Exit" << endl;
    cout << "Your Selection: ";
}
void factorial() {
    int factorialNumb;
    int total = 1;
    cout << "Factorial: " << endl;
    cout << "please enter a positive number: ";
    cin >> factorialNumb;
    // to check that it is possible to do the factorial of the number given
    if (factorialNumb < 1)
    {
        // to prevent the code from breaking if the user puts in more negative numbers
        while (factorialNumb < 1)
        {
            cout << "please enter a POSITIVE number: ";
            cin >> factorialNumb;
        }
    }

    // this loop does the math
    for (int n(1); n <= factorialNumb; n++)
    {
        // the if statements check to see where in the equation the program is and displays it appropriatly
        if (n == 1)
        {
            cout << factorialNumb << "! = ";
            total = n * total;
        }
        else if (n == factorialNumb)
        {
            total = n * total;
            cout << n << " = " << total << endl;
        }
        else
        {
            total = n * total;
            cout << n << " * ";
        }
    }
}
void arithmetic() {
    int startNumb;
    int difference;
    int numbElements;
    int newNumb;
    int total = 0;
    // get the values for the math
    cout << "enter a number to start at: ";
    cin >> startNumb;
    cout << "enter a number to add each time: ";
    cin >> difference;
    cout << "enter the number of time you want it to be added: ";
    cin >> numbElements;

    //to check if it is possible to do
    if (numbElements < 1)
    {
        // repeates until it is possible
        while (numbElements < 1)
        {
            cout << "a number can only be added a positive amount of times, please enter a POSITIVE number";
            cin >> numbElements;
        }
    }
    
    // does the math
    for (int count(0); numbElements > count; count++)
    {
        // if statements are to ensure that the equation displays appropriatly
        if (count == 0)
        {
            total = startNumb;
            cout << startNumb << " + ";
            newNumb = startNumb + difference;
        }
        else if (count == (numbElements - 1))
        {
            total = total + newNumb;
            cout << newNumb << " = " << total << endl;
        }
        else
        {
            total = total + newNumb;
            cout << newNumb << " + ";
            newNumb = newNumb + difference;
        }
    }
}
void geometric() {
    // I recommend writing your geometric series code here
}

int main()
{
    int choice;
    char again;
    do {
        printMenu();
        cin >> choice;
        // Quit if user chooses to exit (or any invalid choice)
        if (choice > 3 || choice < 1) {
            return 0;
        }
        else if (choice == 1) {
            factorial();
        }
        else if (choice == 2) {
            arithmetic();
        }
        else if (choice == 3) {
            geometric();
        }
        cout << "Go Again? [Y/N] ";
        cin >> again;
    } while (again == 'y' || again == 'Y');
}
