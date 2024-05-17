#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int getSum(int n){
            int sum =0;
     while (n) {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
            return sum;
        }
    bool isHappy(int n) {
        unordered_set<int>p;
        while(1){
            int sum = getSum(n);
            if(sum==1){
                return true;
            }
            if (p.find(sum) != p.end()){
                return false;
            }
            else{
                p.insert(sum);
            }
            n = sum;
        }
    }
};

int main(){
    Solution s1;
    bool f ;
    int num;
    cin>>num;
    f = s1.isHappy(num);
    cout<<f<<endl;
    system("pause");
    // return 0;
}