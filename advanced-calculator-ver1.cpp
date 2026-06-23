#include<iostream>
#include<cmath>
using namespace std;
int main(){

    /*Building Up Advanced Calculator*/

    double a , b ;
    char choice;

    do {

    cout << "\nEnter first number: ";
    cin >> a ;

    // menu of operations
    cout << "\nAvailable Operations:\n";
    cout << "+  Addition\n";
    cout << "-  Subtraction\n";
    cout << "*  Multiplication\n";
    cout << "/  Division\n";
    cout << "%  Modulus\n"; 
    cout << "^  Power\n";
    
    char op;

    cout << "\nChoose an operator: ";
    cin >> op;

    cout << "\nEnter second number: ";
    cin >> b ;

    switch (op) {
    case  '+' :
    cout << "Result: " << a << " + " << b << " = " << a + b ;
    break;

    case '-' :
    cout << "Result: " << a << " - " << b << " = " << a - b ;
    break;

    case  '*' :
    cout << "Result: " << a << " * " << b << " = " << a * b ;
    break;
    
    case '%' :
    if ( b == 0){
        cout << "Error: Cannot perform modulus with zero.";
    } else {
        cout << "Note: Modulus works on whole numbers only.\n";
        cout << "Result: " << (int)a << " % " << (int)b << " = " << (int)a % (int)b ;
    }
    break;

    case '/' :
    if ( b == 0){
        cout << "Error: Cannot divide by zero.";
    } else {
    cout << "Result: " << a << " / " << b << " = " << a / b ;
    }
    break;

    case '^' :
    cout << "Result: " << a << " ^ " << b << " = " << pow(a,b) ;
    break;
    
    default :
    cout << "Invalid calculation!" ;
    break;
    }

    cout << "\nDo you want to perform another calculation? (y/n)(Enter 'y' to continue or 'n' to quit): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        cout << "\nStarting a new calculation...\n";
    } else if (choice == 'n' || choice == 'N') {
        cout << "\nExiting the calculator...\n";
    } else {
        cout << "\nInvalid choice! Exiting the calculator...\n";
        break;
    }

} while (choice != 'n' && choice != 'N');
    
    cout << "\nThanks for using advanced calculator!";

    return 0;
}
