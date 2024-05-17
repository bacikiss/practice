// #include <iostream>
// #include <string>
// using namespace std;

// void replaceAll(string& str, const string& from, const string& to) {
//     if(from.empty())
//         return;
//     size_t start_pos = 0;
//     while((start_pos = str.find(from, start_pos)) != string::npos) {
//         str.replace(start_pos, from.length(), to);
//         start_pos += to.length(); // 防止无限循环，如果`to`包含`from`
//     }
// }

// int main(){
//     string str;
//     while(cin>>str){
//         replaceAll(str,"mt","$$");
//         replaceAll(str,"mT","$$");
//         replaceAll(str,"Mt","$$");
//         replaceAll(str,"MT","$$");
//         cout << str <<" ";
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     printf("hello\n");
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//         int num = 0;
//         cin >> num;
//         cout << num <<endl;
//     return 0;
// }


#include <iostream>
#include<string>
using namespace std;

void nameReplace(string &str){
    for(int i =0;i<str.size();i++){
        if(str[i] == 'm' || str[i] == 'M'){
            if(str[i+1] == 't' || str[i+1] == 'T'){
                str[i] = '$';
                str[i+1] = '$';
                i++;
            }
        }
    }
}

int main(){
    string str;
    while(cin>>str){
    nameReplace(str);
    cout<<str<<" ";
     }

    return 0;
}