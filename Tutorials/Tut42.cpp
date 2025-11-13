///Good exercise.cpp
#include<bits/stdc++.h>

using namespace std;

class SimpleCalculator {
protected:
    int num1, num2;

public:
    void setdata1() {
        cout << "Enter the first number: " << endl;
        cin >> num1;
        cout << "Enter the second number: " << endl;
        cin >> num2;
    }

    void op() {
        char ch;
        while (1) {
            cout << "Menu:" << endl
                 << "1. Press + for addition" << endl
                 << "2. Press - for subtraction" << endl
                 << "3. Press * for multiplication" << endl
                 << "4. Press / for division" << endl
                 << "5. Press % for remainder" << endl
                 << "6. Press ^ for power" << endl
                 << "7. Press 0 to exit" << endl;
            cin >> ch;
            switch (ch) {
            case '+':
                setdata1();
                cout << num1 + num2 << endl;
                break;
            case '-':
                setdata1();
                cout << num1 - num2 << endl;
                break;
            case '*':
                setdata1();
                cout << num1 * num2 << endl;
                break;
            case '/':
                setdata1();
                cout << num1 / num2 << endl;
                break;
            case '%':
                setdata1();
                cout << num1 % num2 << endl;
                break;
            case '^':
                setdata1();
                cout << pow(num1, num2) << endl;
                break;
            case '0':
                return;  // Exit the function
            default:
                cout << "Invalid character!!!" << endl;
            }
        }
    }
};

class ScientificCalculator {
protected:
    int n;

public:
    void setdata2() {
        cout << "Enter the number: " << endl;
        cin >> n;
    }

    void op1() {
        int op;
        while (1) {
            cout << "Menu:" << endl
                 << "1. Press 1 for square root" << endl
                 << "2. Press 2 for sin" << endl
                 << "3. Press 3 for log" << endl
                 << "4. Press 4 for exit" << endl;
            cin >> op;
            switch (op) {
            case 1:
                setdata2();
                cout << sqrt(n) << endl;
                break;
            case 2:
                setdata2();
                cout << sin(n * 180 / 3.14) << endl;
                break;
            case 3:
                setdata2();
                cout << log(n) << endl;
                break;
            case 4:
                return;  // Exit the function
            default:
                cout << "Invalid Character!!!" << endl;
            }
        }
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator {
public:
    void show() {
        while (1) {
            char chr;
            cout << "Enter S for Menu Of Simple Calculator or C for Menu of Scientific Calculator or E for exit" << endl;
            cin >> chr;
            switch (chr) {
            case 'S':
                op();
                break;
            case 'C':
                op1();
                break;
            case 'E':
                return;  // Exit the function
            default:
                cout << "Invalid Character entered!!" << endl;
            }
        }
    }
};

int main() {
    HybridCalculator h;
    h.show();
    return 0;
}
