#include<iostream>
using namespace std;
int maxSubArray(int arr[],int n)
{
    int cur_sum=0;
    int max_sum=INT32_MIN;

    for (int i = 0; i < n; i++)
    {
        cur_sum += arr[i];

        if (cur_sum>max_sum)
        {
            max_sum = cur_sum;
        }
        
        if (cur_sum < 0 )           //Discarding the sum array that generates a total sum in -ve
        {
            cur_sum = 0;
        }
        
    }
    
    return max_sum;
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

    int max=maxSubArray(arr,n);

    cout<<"The Max sum is: "<<max;

    return 0;
}