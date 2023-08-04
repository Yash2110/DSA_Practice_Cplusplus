#include<iostream>
using namespace std;

void reverseArray(int arr[],int start,int end)
{

int temp;

    while (start<end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

    start++;
    end--;
    }


}

int main()
{

    int n;
    cout<<"Enter the array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements"<<endl;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    reverseArray(arr,0,n-1);

    cout<<"Reversed Array is"<<endl;
    
    for (int i = 0; i < n; i++)
    {
      cout<<arr[i]<<" ";
    }

    return 0;
}