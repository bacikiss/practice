#include <iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& nums) {
//         int final_count =0;
//         for(int i=0;i<=nums.size();i++){
//             int sum = 0;
//             int count = 0;
//             for(int j =i;sum<target;++j){
//                 if(count>final_count)
//                 final_count = count;
//                 sum += nums[j];
//                 count++;
//             }
//             return final_count;
            
//         }
//         return 0;
//     }
// };
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int result =1000;
        int sum = 0;
        int subLength = 0;
        int i = 0;
        for(int j=0;j<nums.size();j++){
           sum+=nums[j];
           while(sum>=target){
            subLength = j-i+1;
            result = result<subLength ? result:subLength;
            sum -= nums[i++];
           }
        }
        return result== 1000 ? 0 : result;//不太理解这个，为什么不能return result
    }




//     public:
//     vector<vector<int>> generateMatrix(int n) {
//         vector<vector<int>> res(n, vector<int>(n, 0));
//         int startx =0,starty =0;
//         int loop =n/2;
//         int mid = n/2;
//         int count = 1;
//         int offset = 1;
//         int i,j;
//         while (loop --) {
//             i = startx;
//             j = starty;
//             for (j = starty; j < n - offset; j++) {
//                 res[startx][j] = count++;
//             }
//             for (i = startx; i < n - offset; i++) {
//                 res[i][j] = count++;
//             }
//             // 模拟填充下行从右到左(左闭右开)
//             for (; j > starty; j--) {
//                 res[i][j] = count++;
//             }
//             // 模拟填充左列从下到上(左闭右开)
//             for (; i > startx; i--) {
//                 res[i][j] = count++;
//             }
//             startx++;
//             starty++;
//              offset += 1;
//         }
//              if (n % 2) {
//             res[mid][mid] = count;
//         }
//         return res;
//     }
// };




    public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>res(n,vector<int>(n,0));
        int loop = n/2;
        int middle =n/2;
        int offset = 1;
        int startx = 0,starty=0;
        int count = 1;
        int i=startx,j=starty;
        while(loop--){
            for(j=starty;j<n-offset;j++){
                res[startx][j]=count++;
            }
            for(i=startx;i<n-offset;i++){
                res[i][j]=count++;
            }
            for(;j>starty;j--){
                res[i][j]=count++;
            }
            for(;i>startx;i--){
                res[i][j]=count++;
            }
            startx++;
            starty++;
            offset++;
        }
        if(n%2){
            res[middle][middle] = count;
        }
        return res;
}
};










int main(){
    int arr[] ={2,3,1,2,4,3};
   vector<int>nums;
        for (int i = 0; i < sizeof(arr); ++i) {
        nums.push_back(arr[i]);
    }
    Solution s1;
    int s1_answer = s1.minSubArrayLen(7,nums);
    // cout<<s1_answer<<endl;

    vector<vector<int>> res1(11, vector<int>(11, 0));
    res1=s1.generateMatrix(11);


// std::for_each(res1.begin(), res1.end(), [](int element){
//     std::cout << element << " ";
// });
for (vector<vector<int>>::iterator it = res1.begin(); it < res1.end(); it++)
	{
		for (vector<int>::iterator vit = (*it).begin(); vit < (*it).end(); vit++)
		{
			cout << *vit << " ";
		}
		cout << endl;
	}
    
system("pause");
    return 0;
}