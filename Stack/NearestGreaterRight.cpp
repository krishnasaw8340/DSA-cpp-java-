#include<iostream>
#include<stack>
#include<vector>
#include <algorithm>
using namespace std;

vector<int> nextGreaterRight(int arr[], int n) {
    stack<int> st;
    vector<int> v;

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        if (st.empty()) {
            v.push_back(-1);
        } else {
            v.push_back(st.top());
        }

        st.push(arr[i]);
    }
    reverse(v.begin(), v.end());

    return v;
}
vector<int> nextSmallerRight(int arr[], int n)
{
    stack<int> st2;
    vector<int> v2;
    for (int i=n-1; i>=0; i--)
    {
        while(!st2.empty() && st2.top() >=arr[i])
        {
            st2.pop();
        }
        if (st2.empty())
        {
            v2.push_back(st2.top());
        }
        else{
            v2.push_back(arr[i]);
        }
        st2.push(arr[i]);
    }
}

void nextsmallestRight(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        int temp = arr[i];
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]<arr[j])
            {
                cout<<arr[i];
            }

        }
    }
}
int main() {
    int arr[] = {1, 3, 2, 4};
    int n = 4;

    vector<int> nextGreaterToRight = nextGreaterRight(arr, n);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Next Greater to Right: ";
    for (int i = 0; i < nextGreaterToRight.size(); i++) {
        cout << nextGreaterToRight[i] << " ";
    }
    cout << endl;
    nextsmallestRight(arr, n);

    return 0;
}
