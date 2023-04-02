#include <iostream>
#include <math.h>
using namespace std;

double squared_sum(double number1,double number2);

int main() {
cout << squared_sum(12.123,6./5);
return 0;
}

double squared_sum(double number1,double number2) {
return pow(number1,2) + 2*number1*number2 + pow(number2,2);
}
