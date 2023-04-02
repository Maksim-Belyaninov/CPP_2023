#include <iostream>
using namespace std;

void sort(int *massive);

int main() {
int a[10] = {1, 8, 3, 6, 5, 4, 9, 2, 8, 12};
sort(a);

return 0;
}


void sort(int *massive) {
int number=0;
int length=10;

for (int i=0;i<length;i++) {
        for (int j=1+i;j<length;j++) {
        if (massive[i] < massive[j]) {
            number = massive[i];
            massive[i] = massive[j];
            massive[j] = number;
        }
        else if (massive[i] == massive[j]) {
            massive[i] = massive[length-1];
            length--;
        }
 }
cout << massive[i] << " ";
 }
 }
