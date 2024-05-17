#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;


class Solution{
public:
    void getNext(int* next,const string &s){
        int j = -1;
        next[0]=j;
        for(int i=1;i<s.size();i++){
            while(j>=0&&s[i]!=s[j+1]){
                j=next[j];
            }
            if(s[i]==s[j+1]){
                j++;
            }
            next[i] =j;
        }
    }
    bool repeatedSubstringPattern (string s) {
        if (s.size() == 0) {
            return false;
        }
         int next[s.size()];

        // cout<<next<<endl;
        getNext(next, s);
        // const int c[s.size()]= next[s.size()];
        // for( int i=0;i<s.size();i++ )
        // cout<< next[i]<<" ";
        int len = s.size();
        for( int i=0;i<s.size();i++ ){
            cout<< next[i]<<endl;
        }
        if (next[len - 1] != -1 && len % (len - (next[len - 1] + 1)) == 0) {
            return true;
        }
        return false;
    }
};





int main(){
    Solution s1;
    string f="abcabcabc" ;
    string g="abcf";
    // int num;
    // cin>>num;
    bool  tt=  s1.repeatedSubstringPattern(f);
    // f = s1.reverseWords(f);
    cout<<tt<<endl;
    system("pause");
    // return 0;
}