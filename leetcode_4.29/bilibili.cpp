#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution
{
public:
    int second(int a,int b,int c,int d){
    // sort(iterator beg, iterator end, _Pred);
    //对容器内元素进行排序//_Pred:greater:降序 less<int>()：升序
    vector<int>v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    sort(v.begin(), v.end(),greater<int>());
    return v[1];
    }

    int generateMattix(int n,vector<vector<int>>& sqr){
        vector<vector<int>> res_begin=sqr;
        // res_begin = sqr;
        while(n>1){
            // cout<<"hello"<<endl;
            n = n/2;
            // vector<vector<int>> res_after(n,vector<int>(n,0));
            for(int i = 0;i<n;i++){
                for(int j = 0;j<n;j++){
                    res_begin[i][j] = second(res_begin[2*i][2*j],res_begin[2*i+1][2*j],res_begin[2*i][2*j+1],res_begin[2*i+1][2*j+1]);
                }
            }
            // cout<<res_after[0][0]<<endl;
            // vector<vector<int>> res_begin(n,vector<int>(n,0));
            
            // res_begin = res_after;
            // cout<<res_begin[0][0]<<endl;
            // cout<<"n="<<n<<endl;
        }
        // cout<<res_begin[0][0]<<endl;
        return res_begin[0][0];
    }
};

int main(){
    int n = 8;
    vector<vector<int>> sqr={{1,2,3,4,5,6,7,8},{4,3,2,1,5,6,7,8},{1,2,3,4,5,6,7,8},{4,3,2,1,5,6,7,8},{4,3,2,1,5,6,7,8},{4,3,2,1,5,6,7,8},{4,3,2,1,5,6,7,8},{4,3,2,1,5,6,7,8}};
    Solution s1;
    int a = s1.generateMattix(n,sqr);
    cout<<a<<endl;
    system("pause");
    return 0;
}
