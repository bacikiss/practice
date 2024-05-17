#include <iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i =0;i<nums.size();i++){
            if (nums[i]==val){
                for(int j =i;j<nums.size()-1;j++){
                    nums[j] = nums[j+1];
                }
                i--;
                nums.pop_back();
            }
        }
        return nums.size();
    }
};

int main(){
    int arr[] ={0,1,2,2,3,0,4,2};
   vector<int>nums;
        for (int i = 0; i < sizeof(arr); ++i) {
        nums.push_back(arr[i]);
    }
    Solution s1;
    int s1_answer = s1.removeElement(nums,2);
    cout<<s1_answer<<endl;

    return 0;
}