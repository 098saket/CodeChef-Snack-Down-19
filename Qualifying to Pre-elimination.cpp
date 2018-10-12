#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,count = 0;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;
		long long int arr[n],arr2[n];
		for(int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		sort(arr, arr+n);
		for(int i = n-1,j=0; i >= 0&&j<n; i--,j++)
		    arr2[j] = arr[i];
		for(int i = 0; i < n; i++)
		{
			if(arr2[i] == 0 || arr2[i] < arr2[k-1])
			    break;
			else if(arr2[i] >= arr2[k-1])
			    count++;
		}
		cout<<count<<endl;
		count = 0;
	}
	return 0;
}
