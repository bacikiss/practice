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
    string removeDuplicates(string s) {
        stack<int>st;
        int size = s.size();
        for(int i =0;i<size;i++){
            if(st.empty()||st.top()!=s[i]){
                st.push(s[i]);
            }
            else
            if(st.top()==s[i]){
                st.pop();
            }
            }
            string result = "";
            while (!st.empty()) { // 将栈中元素放到result字符串汇总
                result += st.top();
                st.pop();
            }
        reverse (result.begin(),result.end()); // 此时字符串需要反转一下
        return result;
        
    }
};


int main(){
    Solution s1;
    string a1 = s1.removeDuplicates("11221156985");
    cout<<a1<<endl;

    system("pause");
    return 0;
}