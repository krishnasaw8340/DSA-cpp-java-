#include<iostream>
using namespace std; 
void rotate90degree(int arr[4][4])
{
    for (int i=0; i<4;i++)
    {
        for (int j=3; j>=0; j--)
        {
            cout<<arr[i][j]<<" "<<endl;
            break;
        }
    }

}
int main() 
{
    int arr[4][4] = {{1,2,3,4}, {5,6,7,8},{9,10,11,12},{13,14,15,16}};
    rotate90degree(arr);

    return 0; 
}