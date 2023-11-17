// Online C++ compiler to run C++ program online
#include <iostream>
#include<math.h>
using namespace std;

//Function to find duplicate number in input vector
int findDuplicate(vector<int> &arr) 
{
    //One answer for sum of unique number
    //One answer for sum of elements from vector
    int ans1 = 0, ans2 = 0;
    int arraySize = arr.size();
	  for(int index=1; index < arraySize; index++) {
        ans1 += i;
    }
    for(int index=0; index < arraySize; index++) {
        ans2 += arr[i];
    }
    return ans2 - ans1;
}

//Entry Function
int main() {
    //Input vector
    vector<int> arr1 = {1,2,3,4,5,3};
    cout << "Duplicate Element in an array: " << findDuplicate(array);
    return 0;
}
