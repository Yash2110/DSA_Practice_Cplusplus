#include<iostream>
using namespace std;
void getMaxMin(int arr[],int n)
{
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
        else if (arr[i]>max)
        {
            max=arr[i];
        } 
    }
    
cout<<"The Max number is "<<max<<endl;
cout<<"The Min number is "<<min<<endl;
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
    
    getMaxMin(arr,n);
    return 0;
}