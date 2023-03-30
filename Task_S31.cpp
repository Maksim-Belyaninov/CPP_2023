#include <iostream>
#include <cstring>
using namespace std;

int main() {
setlocale(0,"Russian");
int number;
char names[10][7]={
"Ноль", "Один", "Два", "Три", "Четыре", "Пять", "Шесть", "Семь", "Восемь", "Девять"
};
cout << "Введите число от 0 до 9: ";
cin >> number;
cout << endl;
cout << names[number] << endl;

return 0;
}
