#include<iostream>
using namespace std;
bool linearsearch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        return 1;
    }
    return 0;
}
int main()
{
    int key;
    int arr[10]={2,-7,8,11,0,4,33,5,90,10};
    cout<<"enter the number to search::";
    cin>>key;
    bool ans=linearsearch(arr,10,key);
    if(ans)
    cout<<"Number found";
    else
    cout<<"Number not found";
    return 0;
}

