#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int>umap;
        for(int i :nums1){
            for(int j :nums2){
                umap[i+j]++;
            }
        }
        int count =0;
        for(int i :nums3){
            for(int j :nums4){
                if(umap.find(0-(i+j))!=umap.end()){
                    count+=umap[0 - (i+j)];
                }
            }
        }
        return count;

    }
};




int main(){
    Solution s1;
    bool f ;
    int num;
    cin>>num;
    f = s1.fourSumCount({1,2},{1,2},{1,2},{1,2});
    cout<<f<<endl;
    system("pause");
    // return 0;
}