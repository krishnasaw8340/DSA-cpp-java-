#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isBalanced(string str)
{
    stack<char> st;
    for(char bracket: str)
    {
        if(bracket=='(' || bracket=='{' || bracket=='[')
        {
            st.push(bracket);
        }
        else if(bracket=='}' || bracket==']'||bracket==')')
        {
            if(st.empty())
            {
                return false;
            }
            char top = st.top();
            st.pop();

            if((bracket == ')'&& top !='(') || ( bracket == '}' && top !='{') || (bracket==']' && top !='['))
            {
                return false;
            }
        }
    }
    return st.empty();
}
int main() {
    string str;
    cout<<"Enter the expression : ";
    cin>>str;

    if(isBalanced(str))
    {
        cout<<"Stack is balanced"<<endl;
    }
    else{
        cout<<"Stack is not balanced"<<endl;
    }
    return 0;
}