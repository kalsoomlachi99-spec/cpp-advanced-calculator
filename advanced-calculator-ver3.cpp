#include <iostream>
#include <iomanip>
#include <cmath> // NAN
using namespace std;

// Advanced Calculator Version 3

void showMenu(){  // menu
    cout << "Addition (+)\n";
    cout << "Subtraction (-)\n";
    cout << "Multiplication (*)\n";
    cout << "Division (/)\n";
    cout << "Modulus (%)\n";
    cout << "Power (^)\n";
}

double add(double num1, double num2){
    return num1 + num2;
}

double sub(double num1 , double num2){ // subtraction
    return num1 - num2;
}

double mul(double num1 , double num2){ // multiplication
    return num1 * num2;
}

double divide(double num1 , double num2){ // division
    if (num2 == 0) {
    cout << "Error: Division by zero!\n";
    return NAN;
}
    return num1 / num2;
}

double mod(double num1 , double num2){ // modulus
    if ((int)num2 == 0 || num2 == 0) {
    cout << "Error: Modulus by zero!\n";
    return 0;
}
    return (int)num1 % (int)num2;
}

double powe(double num1 , double num2){ // power
    return pow(num1 , num2);
}

double option(char op, double num1 , double num2){ // option selector
    switch (op){
        case '+':
        return add(num1 , num2);
        case '-':
        return sub(num1 , num2);
        case '*':
        return mul(num1 , num2);
        case '/':
        return divide(num1 , num2);
        case '%':
        return mod(num1 , num2);
        case '^':
        return powe(num1 , num2);
        default:
        cout << "Invalid operator!\n";
        return NAN;
    }
}

void output(char op,double num1 , double num2){
    cout << "\n---------------------------\n";
    cout << "Result: " << num1 << " " << op << " " << num2 << " = " << option(op , num1 , num2);
    cout << "\n---------------------------\n";
}

bool choiceSelector(){ // select a choice to continue or quit
    char choice;
    cout << "\nDo you want to perform another calculation? (y/n)(Enter 'y' to continue or 'n' to quit): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y'){
        cout << "\nStarting a new calculation...\n";
        return true;
    } else if (choice == 'n' || choice == 'N') {
        cout << "\nExiting the calculator...\n";
        return false;
    } else {
        cout << "\nInvalid choice! Exiting the calculator...\n";
    } 
    return false;
}

int main() {
    cout << fixed << setprecision(2);
    cout <<  "\nWelcome to Advanced Calculator Version 3!\n";
    do{
        cout << "\n=====Available Operators=====\n\n";
        showMenu();
        cout << "\n````````````````\n";
        double num1 , num2;
        
        cout << "For calculation enter two numbers.\n";
        cout << "Number 1: ";
        cin >> num1;
        cout << "Number 2: ";
        cin >> num2;
        cout << "Select an operator for calculation.\n"; 
        cout << "Operator: ";
        char op;
        cin >> op;
        output( op, num1 , num2);
        // choiceSelector();
        // cout << "\n------------------------\n";
    } while (choiceSelector());
    cout << "\nThanks for using Advanced Calculator Version 3!";
    
    return 0;
}