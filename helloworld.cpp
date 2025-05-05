#include<iostream>
#include<vector>
using namespace std;
intfindPeakElement(vector<int>& nums) {
	intleft =0;
	intright = nums.size() -1;二分法
   while (left < right) {
	intmid = (left + right) / 2;右边是往下，不一定有坡峰
   if (nums[mid] > nums[mid +1])
	right = mid;右边是往上，一定能找到波峰
   else
	left = mid;
	   }其中一个波峰
   returnright;
	}
int main(){
	vector<int> num(16);
	for(int i=0;i<=15;i++)cin>>num[i];
	intfindPeakElement(&num);
	return 0;
}