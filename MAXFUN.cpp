#include "bits/stdc++.h"
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> nums;
		for(int i=0;i<n;i++){
			int temp = 0;
			cin>>temp;
			nums.push_back(temp);
		}
		int mx = INT_MIN;
		int mn = INT_MAX;
		int mid = 0;
		int minInd = -1;
		int maxInd = -1;
		for(int i=0;i<n;i++){
			if(nums[i]>mx){
				mx = nums[i];
				maxInd = i;
			}
			if(nums[i]<mn){
				mn = nums[i];
				minInd = i;
			}
		}
		for(int i=0;i<n;i++){
			if(i!=minInd&&i!=maxInd){
				mid = nums[i];
				break;
			}
		}
		int result = abs(mn-mid)+abs(mid-mx)+abs(mx-mn);
		cout<<result<<endl;
	}
	return 0;
}
