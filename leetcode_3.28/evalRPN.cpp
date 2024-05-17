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
    int evalRPN(vector<string>& tokens) {
        stack<long long>st;
        long long result;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"){
                long long tmp =st.top();
                st.pop();
                result = tmp+st.top();
                st.pop();
                st.push(result);
            }
            if(tokens[i]=="-"){
                long long tmp =st.top();
                st.pop();
                result = st.top()-tmp;
                st.pop();
                st.push(result);
            }
            if(tokens[i]=="*"){
                long long tmp =st.top();
                st.pop();
                result = tmp*st.top();
                st.pop();
                st.push(result);
            }
            if(tokens[i]=="/"){
                long long tmp =st.top();
                st.pop();
                result = st.top()/tmp;
                st.pop();
                st.push(result);
            }
            else{
                st.push(stoll(tokens[i]));
            }
        }
        int result1 = st.top();
        st.pop(); // 把栈里最后一个元素弹出（其实不弹出也没事）
        return result1;
    }
};

