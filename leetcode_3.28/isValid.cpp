#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
#include<unordered_map>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        int size = s.size();
        for(int i =0;i<size;i++){
            if(s[i]=='('){
                st.push('(');
            }
            if(s[i]=='['){
                st.push('[');
            }
            if(s[i]=='{'){
                st.push('{');
            }
            if(s[i]==')'){
                if(st.empty()){
                    return false;
                }
                else
                if(st.top()=='(')
                st.pop();
                else
                return false;
            }
            if(s[i]==']'){
                if(st.empty()){
                    return false;
                }
                else
                if(st.top()=='[')
                st.pop();
                else
                return false;
            }
            if(s[i]=='}'){
                if(st.empty()){
                    return false;
                }
                else
                if(st.top()=='{')
                st.pop();
                else
                return false;
            }
            // if(s[i]==')'||s[i]==']'||s[i]=='}'){
            //     return false;
            // }
        }
        if(st.empty()==true)
        return true;
        else
        return false;
    }
};



int main(){
    Solution s1;
    bool a1 = s1.isValid("{[()]}");
    cout<<a1<<endl;

    system("pause");
    return 0;
}