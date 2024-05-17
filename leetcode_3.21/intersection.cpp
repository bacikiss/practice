#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<functional>
#include<numeric>
#include<unordered_set>
using namespace std;


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int hash[1005] = {0};
        vector <int>final_result;
        for(int num =0;num<nums1.size();num++){
            hash[nums1[num]] = 1;
        }
        for(int num =0;num<nums2.size();num++){
            if(hash[nums2[num]]==1){
                hash[nums2[num]] = 0;
                final_result.push_back(nums2[num]);
            }
        }
        return final_result;
    }
};


int main(){
    Solution s1;
    string s = "helloee";
    string t = "lloehee";
    s1.intersection(s,t);
    // cout<<flag<<endl;



    system("pause");
    return 0;
}