#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(0,"Russian");
    int a = 30, b = 4;
    cout << "a=" << a << '\n';
    cout << "b=" << b << '\n';
    int c = a/b;
    int d = a%b;
    cout << "������� ������:" << c << '\n';
    cout << "������� �� �������:" << d << '\n';

    return 0;
}

