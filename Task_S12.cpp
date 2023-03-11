#include <iostream>
using namespace std;

int main() {
setlocale (0, "Russian");
int sum = 0;

for (int i=1; i<=1000; i+=4)
{
    if (i%7 == 0)
        sum += i;
}
cout << "Сумма всех чисел от 1 до 1000, которые делятся на 7 = " << sum;

return 0;
}

