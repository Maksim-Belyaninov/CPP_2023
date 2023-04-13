#include <iostream>
using namespace std;

void reverse(char name[]);

int main() {
reverse("Testing");

return 0;
}

void reverse(char name[]) {
    int length=0;
    while (name[length]!=0) length++;
    while (length>0) cout << name[--length];
}
