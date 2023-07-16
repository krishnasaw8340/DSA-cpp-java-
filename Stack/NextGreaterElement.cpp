/* Problem Statement:
  Array = [4,2,6,8,1]
  4 == 6 
  2 == 6
  6 == 8
  8 == null
  1 == null


  Approach:
  1. Using Array: 
     2 for loop: 
  
  2.Using Stack:

 */ 


// #include<vector>
#include<stack>
#include<iostream>
using namespace std;
void NextGreaterElementArray(int arr[], int n)
{
    for(int i=0; i<n;i++)
    {
        int temp = arr[i];
        for(int j=i+1; j<n; j++)
        {
            if(temp < arr[j])
            {
                cout<<"Element found for" << temp << " is "<< arr[j]<<endl;
                break;
            }
        }
    }
}
void NextGreaterElementStack(int arr[], int n)
{
    stack<int> st;
    for(int i=0; i<n; i++)
    {
        int temp = arr[i];
        while(!st.empty() && st.top() < temp)
        {
            cout << "Next greater element for " << st.top() << " is " << temp << endl;
            st.pop();
        }
        st.push(temp);
    }
}
int main() 
{
    int arr[] = {4,2,6,8,1};
    int n = 5;
     cout<<"Using Array"<<endl;
    NextGreaterElementArray(arr,n);
    cout<<endl;
    cout<<"Using stack"<<endl;
    NextGreaterElementStack(arr, n);

}