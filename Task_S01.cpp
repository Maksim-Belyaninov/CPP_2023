#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(0,"Russian");
    int a = 10;
    char b = 'F';
    bool c = true;
    float d = 2.5;
    cout << "����� �����:" << "a=" << a << '\n';
    cout << "���������� ���:" << "b=" << b << "; b=" << int(b) << '\n';
    cout << "���������� ���:" << "c=" << c << '\n';
    cout << "����� � ��������� ������:" << "d=" << d << '\n';
    int sum = a+int(c);
    float dif = a-d;
    int mul = d*int(b);
    int div = int(b)/a;
    cout << "a+c=" << sum << '\n';
    cout << "a-d=" << dif << '\n';
    cout << "d*b=" << mul << '\n';
    cout << "b/a=" << div << '\n';

    return 0;
}

