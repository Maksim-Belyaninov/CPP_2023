#include <iostream>
using namespace std;

int same_digits(int from=0, int to=0);

int main() {
cout << same_digits(40) << endl << endl;;
cout << same_digits(200,250) << endl;

return 0;
}

int same_digits(int from, int to) {
int Amount=0;
if (to == 0) {
    int rev=from;
    from=to;
    to=rev;
}
for (;from<=to;from++) {
    int number = from;
    int massive[10];
    int length=0;
    for (int i=0; number>0; i++) {
        massive[i]=number % 10;
        number /= 10;
        length++;
    }
    for (int j=0; j<length ; j++) {
        bool exit=0;
        for (int n=1+j; n<length ; n++) {
            if (massive[j]==massive[n]) {
                for (int t=length-1; t>=0; t--) cout << massive[t];
                cout << " ";
                exit=1;
                Amount++;
                break;
            }
        }
        if (exit==1) break;
    }
}
cout << endl;
return Amount;
}
