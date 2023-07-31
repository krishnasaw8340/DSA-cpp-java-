#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
void nextPermutaion(vector<int> arr)
{
    next_permutation(arr.begin(), arr.end());
    for (auto i:arr)
    {
        cout<<i<<" ";
    }
}
int main() {
    vector<int> arr = {3,1,2};
    // vector<int> arr = { 3, 2, 1, 0 };
    nextPermutaion(arr);
    return 0;
}