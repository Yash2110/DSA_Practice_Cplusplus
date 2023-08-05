#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for (int i = 0; i < n; i++)
    {
            cin>>arr[i];
    }
    cout<<"Original array elements:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    for (int i = 0; i < n; i+=2)
    {
        if(i+1 < n)
        {
            swap(arr[i],arr[i+1]);
        }

    }
    
    cout<<endl;

    cout<<"Alt Swapped array elements:"<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}