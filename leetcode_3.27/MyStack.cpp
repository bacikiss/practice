#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<unordered_set>
#include<unordered_map>
using namespace std;


class MyStack {
public:
    queue<int>que1;
    queue<int>que2;
    MyStack() {

    }
    
    void push(int x) {
        que1.push(x);
    }
    
    int pop() {
        int size = que1.size();
        size--;
        while(size--){
            que2.push(que1.front());
            que1.pop();
        }
        int result = que1.front();
        que1.pop();
        que1=que2;
        while(!que2.empty()){
            que2.pop();
        }
        return result;
    }
    
    int top() {
        int res = this->pop();
        que1.push(res);
        return res;
        // return que1.back();
    }
    
    bool empty() {
        return que1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */





// int main(){
//     Solution s1;
//     string f="abcabcabc" ;
//     string g="abcf";
//     // int num;
//     // cin>>num;
//     bool  tt=  s1.repeatedSubstringPattern(f);
//     // f = s1.reverseWords(f);
//     cout<<tt<<endl;
//     system("pause");
//     // return 0;
// }