#include <iostream>
#include <fstream>
using namespace std;

int main() {
setlocale(0,"Russian");
int A,B;
cout << "������� �������� A: "; cin >> A; cout << endl;
cout << "������� �������� B: "; cin >> B;
if (B>A) {
    ofstream file_to_write;
    file_to_write.open("output.txt");
    for (;A<=B;A++) {
        file_to_write << A*3 << " ";
    }
    file_to_write.close();
}
else cout << "\n �������� ����� B ������ ���� ������ ����� A";

return 0;
}
