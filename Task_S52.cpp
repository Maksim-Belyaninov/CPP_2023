#include <iostream>
using namespace std;

void print(int value1);
void print(float value1);
void print(char value1);
void print(int value1,int value2);

int main() {
    print(20);
    print(3.14159f);
    print('A');
    print(10,25);

    return 0;
}

void print(int value1) {
    cout << value1 << endl;
}
void print(float value1) {
    cout << value1 << endl;
}
void print(char value1) {
    cout << value1 << endl;
}
void print(int value1,int value2) {
    cout << value1 << endl;
    cout << value2 << endl;
}
