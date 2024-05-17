#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map <int ,int>map;
        for(int i = 0 ;i<nums.size();i++){
            auto iter = map.find(target - nums[i]);
            if(iter!=map.end()){
                return {iter->second,i};
            }
            map.insert(pair<int,int>(nums[i],i));

        } 
        return {};
};
}




int main(){
    Solution s1;
    bool f ;
    int num;
    cin>>num;
    f = s1.twoSum(num);
    cout<<f<<endl;
    system("pause");
    // return 0;
}