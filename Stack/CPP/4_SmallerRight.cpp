// Input:   4,5,2,10,8
// Output:  2,2,-1,8,-1


#include<iostream>
#include<stack>
#include<vector>
#include <algorithm>
using namespace std;
vector<int> smallerRight(int arr[] ,int n)
{
  vector<int> v;
    stack<int> st;
    for(int i=n-1; i>=0; i--)
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
    reverse(v.begin(), v.end());
    return v;
}
int main() 
{
    int arr[] = { 4,5,2,10,8};
    int n = 5;

    vector<int> smallRight = smallerRight(arr,n);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Next Greater to Right: ";
    for (int i = 0; i < smallRight.size(); i++) {
        cout << smallRight[i] << " ";
    }
    cout << endl;
    return 0;
}