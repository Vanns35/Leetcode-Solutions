// Online C++ compiler to run C++ program online
#include <iostream>
#include<math.h>
using namespace std;

//Function to find unique number in input array
int uniqueArray(int arr[]) {
    int UniqueElement = 0;
    for(int index = 0; index < 5; index++) {
        UniqueElement = UniqueElement^arr[index];
    }
    //Return unique number present in array
    return UniqueElement;
}

//Entry Function
int main() {
    //Input array
    int array[] = {6,4,3,6,4};
    cout << "Unique Element in an array: " << uniqueArray(array);
    return 0;
}
