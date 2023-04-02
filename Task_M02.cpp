#include <iostream>
#include <math.h>
using namespace std;

double Square(int A, int N);

int main() {

cout << Square(4,3);

return 0;
}

double Square(int A, int N) {
const double PI = 3.141592;
double r = A/(2*tan(PI/N));
double S = (1./2)*A*N*r;
return S;
}
