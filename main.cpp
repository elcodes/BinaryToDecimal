#include <iostream>
#include <cmath>

using namespace std;

int bin2dec(long long);

int main(int argc, char *argv[])
{
    long long n;
    cout<<"Enter #: ";
    cin>>n;

    cout << n << " in binary is "<<bin2dec(n)
         <<" in decimal";

    return 0;
}

int bin2dec(long long n) {
    int dec = 0;
    int i = 0;
    int remainder = 0;

    while (n != 0) {

        remainder = n%10;
        n /= 10;
        dec += remainder*pow(2,i);
        ++i;
    }
    return dec;

}

