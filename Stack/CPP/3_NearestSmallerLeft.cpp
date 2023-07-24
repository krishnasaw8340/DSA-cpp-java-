// Nearest Smaller to left / Nearest Smaller elements:
// Input : 4 5 2 10 8
// Output: -1 4 -1 2 2 

#include<iostream>
#include<stack>
#include<vector>
#include <algorithm>
using namespace std;
vector<int> NextSmallerLeft(int arr[] ,int n)
{
    vector<int> v;
    stack<int> st;
    for(int i=0; i<n; i++)
    {
        if(st.size() == 0)
        {
            v.push_back(-1);
        }
        else if (st.size() > 0 && st.top() < arr[i])
        {
            v.push_back(st.top());
        }
        else if(st.size() > 0 && st.top() >= arr[i])
        {
            while(st.size() > 0 && st.top() >= arr[i])
            {
                st.pop();
            }
            if(st.size() == 0)
            {
                v.push_back(-1);
            }
            else{
                v.push_back(st.top());
            }
        }
        st.push(arr[i]);
    }

   
    return v;
}
int main() 
{
    int arr[] = {4, 5, 2, 10, 8};
    int n = 5;

    vector<int> nsleft = NextSmallerLeft(arr,n);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Nearest Smallest to left:";
    for (int i = 0; i < nsleft.size(); i++) {
        cout << nsleft[i] << " ";
    }
    cout << endl;
    return 0;
}