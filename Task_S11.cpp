#include <iostream>
using namespace std;

int main() {

int number = 0;

while (number <= 100)
{
    number++;
    if (number%3 == 0)
        cout << number << '\t';
}
return 0;
}

