#include <iostream>
using namespace std;
int birthDate = 16;
class LR1 {
public:
    static void Task1() {
        int i1 = 17, i2 = 2.8, i3 = 0.12, i4 = 4109297291;
        cout <<"i1 = " << i1 << "\n";
        cout <<"i2 = " << i2 << "\n";
        cout <<"i3 = " << i3 << "\n";
        cout <<"i4 = " << i4 << "\n";
    }
public:
    static void Task2() {
        char c1 = 'f', c2 = 123;
        cout << "c1 - " << c1 << "\n";
        cout << "c2 - " << c2 << "\n";
    }
public:
    static void Task3() {
        double d1(2.8), d2(4.8);
        int sum = d1 + d2;
        cout << "d1 = " << d1 << "\n";
        cout << "d2 = " << d2 << "\n";
        cout << "sum = " << sum << "\n";
    }

public:
    static void Task4() {
        int number = 7;
        cout << "birthDate = " << ::birthDate << "\n";
        cout << "number = " << number << "\n";
        birthDate = 32;
        number = 41;
        cout << "birthDate = " << ::birthDate << "\n";
        cout << "number = " << number << "\n";
    }
};

int main()
{
    LR1::Task4();
}
