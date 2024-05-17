#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
int half_sort(vector <int> &nums, int target){
    int left =0,right = nums.size()-1;
    while(left<=right){
        int middle = (left + right)/2;
        if(nums[middle] == target)
        return middle;
        if(nums[middle] > target){
            right = middle-1;
        }
        else
        {
            left = middle + 1;
        }
        
    }
    return -1;
}
};

int main(){
    int arr[] ={-1,0,3,5,9,12};
   vector<int>nums;
        for (int i = 0; i < sizeof(arr); ++i) {
        nums.push_back(arr[i]);
    }
    Solution s1;
    int s1_answer = s1.half_sort(nums,9);
    cout<<s1_answer<<endl;

    return 0;
}