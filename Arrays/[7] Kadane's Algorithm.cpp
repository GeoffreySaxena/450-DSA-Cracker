#include<bits/stdc++.h>
using namespace std;


// arr: input array
// n: size of array
//Function to find the sum of contiguous subarray with maximum sum.
int maxSubarraySum(int arr[], int n){
    
    int max_until_now = 0, max_ending_here = 0;
    for (int i = 0; i < n; i++)
    {
        // max_ending_here = max_ending_here + arr[i];
        max_ending_here += arr[i];
        
        if(max_ending_here < 0)
        max_ending_here = 0;
        
        else if(max_until_now < max_ending_here)
        max_until_now = max_ending_here;
    }
    return max_until_now;
}

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
        
        cout << maxSubarraySum(a, n) << endl;
    }
}
