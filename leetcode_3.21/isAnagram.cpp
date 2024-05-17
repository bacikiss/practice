#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) {
        int record[26] = {0};
        for(int i = 0;i<s.size();i++){
            record[s[i]-'a']++;
        }
        for(int j = 0;j<t.size();j++){
            record[t[j]-'a']--;
        }
        for(int tmp=0;tmp<26;tmp++){
            if(record[tmp]!=0){
                return false;
            }
        }
        return true;
    }
};

int main(){
    Solution s1;
    string s = "helloee";
    string t = "lloehee";
    bool flag = s1.isAnagram(s,t);
    cout<<flag<<endl;
    system("pause");
    return 0;
}


