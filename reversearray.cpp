#include<iostream>
using namespace std;
void reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);  //swap is used to swap between two numbers.
        start++;
        end--;
    }
    return;
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    return;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int brr[6]={7,11,2,-5,22,19};
    reverse(arr,5);
    reverse(brr,6);
    printarray(arr,5);
    printarray(brr,6);
    return 0;
}