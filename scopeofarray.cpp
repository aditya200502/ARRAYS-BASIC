//In array the scope changes if we change value of array inside function as we pass array address inside function.
#include<iostream>
using namespace std;
void update(int arr[],int size)
{
    arr[0]=20;
    cout<<"Array values inside function"<<endl;
    for (int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nArray values outside function"<<endl;
    return;
}
int main()
{
    int arr[3]={1,2,3};
    update(arr,3);
    for (int i=0;i<3;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
