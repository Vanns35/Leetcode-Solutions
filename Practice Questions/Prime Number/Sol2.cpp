// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n = 7;
    bool isPrime = 1;
    for(int i = 2; i < n; i++) {
        if(n%i == 0) {
            isPrime = 0;
            printf("Number is not prime");
            break;
        }
    }
    if(isPrime) {
        printf("Number is prime");
    }

    return 0;
}
