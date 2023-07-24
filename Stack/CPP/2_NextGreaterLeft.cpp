#include<iostream>
#include<stack>
#include<vector>
#include <algorithm>
using namespace std;
vector<int> StackNextGreaterLeft(int arr[] ,int n)
{
    vector<int> v;
    stack<int> st;

    for(int i=0; i<n; i++)
    {
        if(st.size()==0)
        {
            v.push_back(-1);
        }
        else if (st.size() > 0 && st.top() > arr[i] )
        {
            v.push_back(st.top());
        }
        else if(st.size() > 0 && st.top() <= arr[i])
        {
            while(st.size() > 0 && st.top() <= arr[i])
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
        // -1 4 4 3
    }
    return v;
}
int main() 
{
    int arr[] = {1, 3, 2, 4};
    int n = 4;

    vector<int> nextGreaterToLeft = StackNextGreaterLeft(arr,n);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Next Greater to Right: ";
    for (int i = 0; i < nextGreaterToLeft.size(); i++) {
        cout << nextGreaterToLeft[i] << " ";
    }
    cout << endl;
    return 0;
}