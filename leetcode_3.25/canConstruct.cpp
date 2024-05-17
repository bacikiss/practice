#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int record[26] ={0};
        for(int i=0;i<magazine.size();i++){
            record[magazine[i]-'a']++;
        }
        for(int j = 0;j<ransomNote.size();j++){
            record[ransomNote[j]-'a']--;
            if(record[ransomNote[j]-'a']<0){
                return false;
            }
        }
        return true;
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