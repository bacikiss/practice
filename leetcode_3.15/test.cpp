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