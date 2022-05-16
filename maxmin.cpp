#include<iostream>
#include<climits>
using namespace std;
int min(int arr[],int size)
{
    int mini=INT_MAX;
    for(int i=0;i<size;i++)
    {
        mini=min(mini,arr[i]);
    }
    return mini;
}
int max(int arr[],int size)
{
    int maxi=INT_MIN;
    for(int i=0;i<size;i++)
    {
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}
int main()
{
    int arr[5]={1,5,-19,22,0};
    cout<<"the maximum number is"<<max(arr,5)<<endl;
    cout<<"the minimum number is"<<min(arr,5);
    return 0;
}