#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i = 0 ; i < nums.size() ; i ++){
            nums[i] = nums[i] * nums[i];
        }
        sort(nums.begin(),nums.end(),less());
        return nums;
    }
};

int main(){
    int arr[] ={-7,-3,2,3,11};
   vector<int>nums;
        for (int i = 0; i < sizeof(arr); ++i) {
        nums.push_back(arr[i]);
    }
    Solution s1;
    int s1_answer = s1.sortedSquares(nums);
    cout<<s1_answer<<endl;

    return 0;
}