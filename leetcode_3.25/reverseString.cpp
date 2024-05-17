#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;




class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i = 0 ; i < s.size()/2;i++){
            swap(s[i],s[s.size()-i-1]);
        }
    }
};


int main(){
    Solution s1;
    bool f ;
    // int num;
    // cin>>num;
    f = s1.canConstruct("abc","acjd");
    cout<<f<<endl;
    system("pause");
    // return 0;
}