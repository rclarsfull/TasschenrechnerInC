#include <iostream> // ausgabe

using namespace std;
int main() {

    double num1,num2;
    char operation,temp;
    bool exit= false;

    while (!exit) {

        cout << "\n\n\nGib die Erste Zahl ein:";
        cin >> num1;
        cout << "Gib die zweite Zahl ein:";
        cin >> num2;

        cout << "Gebe eine der Rechenoparationen an (+,-,*,/):";
        cin >> operation;

        switch (operation) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case '/':
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl ;
                break;
            default:
                cout << "Ungültiger Operator gewählt" << endl;
                break;
        }
        cout << "Willst du das Programm beenden? (j/n)";
        cin>> temp;
        if (temp=='j') exit= true;
    }

    return 0;
}
