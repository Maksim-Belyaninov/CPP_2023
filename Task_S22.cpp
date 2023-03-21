#include <iostream>
#include <fstream>
using namespace std;

int main() {
setlocale(0,"Russian");
int number,n=1;
ifstream in_file("output.txt");
while(in_file >> number) cout << n++ << "." << number << " ";

return 0;
}

