#include<bits/stdc++.h>
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	// Write your code here.
	sort(arr.begin(),arr.end());
	vector<pair<int,int>>ans;
	int start=0;
	int end=n-1;
	while(start<end){
		if(arr[start]+arr[end]==target){
			ans.push_back(make_pair(arr[start],arr[end]));
			start++;
			end--;
		}else if(arr[start]+arr[end]>target){
			end--;
                } else {
                        start++;
                }
        }
		if(ans.size()==0)
			ans.push_back(make_pair(-1,-1));
		
        return ans;
}
