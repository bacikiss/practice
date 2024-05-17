// #include<iostream>
// #include<string>
// #include<algorithm>
// #include<vector>
// #include<unordered_set>
// #include<unordered_map>
// using namespace std;




// class Solution {
// public:
//     string number_replace(string s,string to) {
//         for(int i =0;i<s.size();i++){
//             if(s[i]>=0&&s[i]<=9){
//                 count++;
//             }
//         }
//     }
// };




// int main(){
//     Solution s1;
//     string f ;
//     // int num;
//     // cin>>num;
//     f = s1.reverseStr("abcdefgh",3);
//     cout<<f<<endl;
//     system("pause");
//     // return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;
// void replaceAll(string& str, const string& from, const string& to) {// &代表引用修饰符它表示str是对某个std::string对象的引用，而不是该对象的一个新副本，内部函数对字符串的修改会影响外部状态
//     if(from.empty())
//         return;
//     size_t start_pos = 0;
//     while((start_pos = str.find(from, start_pos)) != string::npos) {
//     str.replace(start_pos, from.length(), to);
//     start_pos += to.length(); // 防止无限循环，如果`to`包含`from`
//     }
// }
// int main(){
//      string str;
//      while(cin>>str){
//      replaceAll(str,"0","number");
//      replaceAll(str,"1","number");
//      replaceAll(str,"2","number");
//      replaceAll(str,"3","number");
//      replaceAll(str,"4","number");
//      replaceAll(str,"5","number");
//      replaceAll(str,"6","number");
//      replaceAll(str,"7","number");
//      replaceAll(str,"8","number");
//      replaceAll(str,"9","number");
//     cout << str <<" ";
//      }//不止一个字符串例如：I love mt ，mT is good！//这是好几个字符串
//     return 0;
// }

#include<iostream>
using namespace std;
int main() {
    string s;
    while (cin >> s) {
        int count = 0; // 统计数字的个数
        int sOldSize = s.size();
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                count++;
            }
        }
        // 扩充字符串s的大小，也就是每个空格替换成"number"之后的大小
        s.resize(s.size() + count * 5);
        int sNewSize = s.size();
        // 从后先前将空格替换为"number"
        int c = 0;
        for (int i = 0, j = 0; j <sOldSize, i<sNewSize; i++, j++) {
            if (s[j] > '9' || s[j] < '0') {
                s[i+c*5] = s[j];
            } else {
                s[+c*5] = 'n';
                s[i+c*5 + 1] = 'u';
                s[i+c*5 + 2] = 'm';
                s[i+c*5 + 3] = 'b';
                s[i+c*5 + 4] = 'e';
                s[i+c*5 + 5] = 'r';
                c++;
            }
        }
        cout << s << endl;
    }
}