#include <iostream>
#include <cmath>
#include <iomanip>  // set precision
using namespace std;

// Advanced Calculator Version 2

void showMenu(){ // menu
    cout << "Addition (+)\n";
    cout << "Subtraction (-)\n";
    cout << "Multiplication (*)\n";
    cout << "Division (/)\n";
    cout << "Power (^)\n";
    cout << "Modulus (%)\n";
}

double add(double num1 , double num2){ // addition
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

double option(char op, double num1 , double num2 ){ // option selector
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

int main() {
    // menu -> operator -> operations -> result -> isRepeat ? -> exit

    cout << fixed << setprecision(2);

    cout << "\nWelcome to Advanced Calculator Version 2!\n";
    
    char choice;

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
        char op;
        cin >> op;

        cout << "\n````````````````\n";

        cout << "Result: " << num1 << " " << op << " " << num2 << " = " << option(op, num1 , num2);

        cout << "\n------------------------\n";

        cout << "\nDo you want to perform another calculation? (y/n)(Enter 'y' to continue or 'n' to quit): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y'){
            cout << "\nStarting a new calculation...\n";
        } else if (choice == 'n' || choice == 'N') {
            cout << "\nExiting the calculator...\n";
        } else {
            cout << "\nInvalid choice! Exiting the calculator...\n";
            break;
        } 
    } while (choice != 'n' && choice != 'N');
    
    cout << "\nThanks for using Advanced Calculator!";

    return 0;
}
