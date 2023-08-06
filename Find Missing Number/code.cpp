#include<iostream>
using namespace std;

int findMissing(int a[],int N)
{
    int total=0;
    int arrsum=0;
    int missing=0;

    total = N*(N+1)/2;

    for (int i = 0; i < N; i++)
    {
        arrsum+=a[i];
    }
    
    missing=total-arrsum;

    return missing;
}

int main()
{
    int n;
    cout<<"Enter Array Size"<<endl;
    cin>>n;
    int ans;

    int arr[n];

    cout<<"Enter elements in the array in range[0-N] missing any one number"<<endl;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    ans=findMissing(arr,n);

    cout<<"The missing number is:"<<ans;

    return 0;
}