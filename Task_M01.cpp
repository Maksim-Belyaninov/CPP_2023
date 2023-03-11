#include <iostream>
using namespace std;

int main() {
setlocale (0, "Russian");
cout << "\t\t\t\tТаблица Пифагора\n\n";
for (int num_v=1;num_v<=10;num_v++)
{
    for (int num_h=1;num_h<=10;num_h++)
    {
        cout << num_h*num_v << '\t';
    }
    cout << "\n\n";
    }
return 0;
}

