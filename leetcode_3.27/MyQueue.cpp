#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
#include<unordered_set>
#include<unordered_map>
using namespace std;



class MyQueue {
public:
    stack<int>stIn;
    stack<int>stOut;
    MyQueue() {


    }
    
    void push(int x) {
        stIn.push(x);
    }
    
    int pop() {
            if (stOut.empty()) {
            // 从stIn导入数据直到stIn为空
            while(!stIn.empty()) {
                stOut.push(stIn.top());
                stIn.pop();
            }
        }
        int result = stOut.top();
        stOut.pop();
        return result;
    }
    
    int peek() {
        int res = this->pop(); // 直接使用已有的pop函数
        stOut.push(res); // 因为pop函数弹出了元素res，所以再添加回去
        return res;
    }
    
    bool empty() {
         return stIn.empty() && stOut.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */




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