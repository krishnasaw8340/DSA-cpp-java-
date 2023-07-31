 /*  Algorithm:
Using Pivot Element and then sort on the basis of ascending order 
for Example: 2 4 1 7 5 0     Output would be 2 4 5 0 1 7

Step 1 :  Find the longest suffix:
          2 4 1  7 5 0 
                 <----
Step 2 :  Find the pivot:
          2 4 (1) 7 5 0  
Step 3 :  Find rightmost successor of pivot in the suffix:
          2 4 (1) 7 [5] 0

Step 4 :  Swap the pivot to right most successor:
          2 4 5 7 1 0

Step 5 :  Reverse the suffix: 
          2 4 5 0 1 7 

Step 6 : Final Sequence 
         2 4 5 0 1 7
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void nextPermutation(vector<int> arr){
    int n = arr.size(), i, j;
    for(i = n-2; i>=0; i--)
    {
        if(arr[i]<arr[i+1])
        {
            cout<<"pivot is found  "<<arr[i]<<" "<<endl;
            break;
        }
    }
    if (i < 0) {
        reverse(arr.begin(), arr.end());
    }
    else{
        for (j=n-1; j>i; j--)
        {
            if(arr[j] > arr[i])
            {
                break;
            }

            // pivot and successor
            swap(arr[i], arr[j]);

            // Minimize the suffix part:
            reverse(arr.begin()+i+1, arr.end());
        }
    }
     for (auto i : arr) {
        cout << i << " ";
    }
}
int main()
{
    // vector<int> arr = { 1, 2, 3, 6, 5, 4 };
    vector<int> arr = {2,4,1,7,5,0};
 
    // Function call
    nextPermutation(arr);

    return 0;
}