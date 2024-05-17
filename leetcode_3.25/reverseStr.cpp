#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;



//缓冲区溢出
// class Solution {
// public:
//     string reverseStr(string s, int k) {
//     int num = s.size();
//     if(num<k){
//         for(int i=0;i<num/2;i++){
//             swap(s[i],s[s.size()-i-1]);
//         }
//     }else
//     {for(int i=0;i<num-1;i++){
//         if(i%(2*k)<(k/2)){
//             int n = i/k*k+(k-i%k)-1;
//             swap(s[i],s[n]);
//         }
//     }}
//     return s;
//     }
// };

class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.size(); i += (2 * k)) {
            // 1. 每隔 2k 个字符的前 k 个字符进行反转
            // 2. 剩余字符小于 2k 但大于或等于 k 个，则反转前 k 个字符
            if (i + k <= s.size()) {
                reverse(s.begin() + i, s.begin() + i + k );
            } else {
                // 3. 剩余字符少于 k 个，则将剩余字符全部反转。
                reverse(s.begin() + i, s.end());
            }
        }
        return s;
    }
};





int main(){
    Solution s1;
    string f ;
    // int num;
    // cin>>num;
    f = s1.reverseStr("abcdefgh",3);
    cout<<f<<endl;
    system("pause");
    // return 0;
}