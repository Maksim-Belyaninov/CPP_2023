#include <iostream>
#include <cstring>
using namespace std;

int main() {
setlocale(0,"Russian");
int number;
char names[10][7]={
"����", "����", "���", "���", "������", "����", "�����", "����", "������", "������"
};
cout << "������� ����� �� 0 �� 9: ";
cin >> number;
cout << endl;
cout << names[number] << endl;

return 0;
}
