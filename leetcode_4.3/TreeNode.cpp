#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
#include<unordered_map>
#include<stack>
#include<queue>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };

// class Solution {
// public:
//     void traversal(TreeNode* cur, vector<int>& vec) {
//         if (cur == NULL) return;
//         traversal(cur->left, vec);  // 左
//         vec.push_back(cur->val);    // 中
//         traversal(cur->right, vec); // 右
//     }
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> result;
//         traversal(root, result);
//         return result;
//     }
// };

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};

class Solution {
public:

    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> que;
        if (root != NULL) que.push(root);
        vector<vector<int>> result;
        while (!que.empty()) {
            int size = que.size();
            vector<int> vec;
            // 这里一定要使用固定大小size，不要使用que.size()，因为que.size是不断变化的
            for (int i = 0; i < size; i++) {
                TreeNode* node = que.front();
                que.pop();
                vec.push_back(node->val);
                if (node->left) que.push(node->left);
                if (node->right) que.push(node->right);
            }
            result.push_back(vec);
        }
        return result;
    }
};





















// int main(){
//     Solution s1;
//     string a1 = s1.removeDuplicates("11221156985");
//     cout<<a1<<endl;

//     system("pause");
//     return 0;
// }