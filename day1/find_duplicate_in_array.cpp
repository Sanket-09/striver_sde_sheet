#include <bits/stdc++.h>
using namespace std;


int findDuplicate(vector<int> &arr, int n){
	// Write your code here.

	sort(arr.begin(),arr.end());
	int ans;

	for(int i = 0 ; i<n ; i++)
	{
		if(arr[i]==arr[i+1])
		ans = arr[i];
	}

	return ans;
}