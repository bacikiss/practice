#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_set>
#include<unordered_map>
#include<stack>
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

//前序
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> result;
        if (root == NULL) return result;
        st.push(root);
        while (!st.empty()) {
            TreeNode* node = st.top();                       // 中
            st.pop();
            result.push_back(node->val);
            if (node->right) st.push(node->right);           // 右（空节点不入栈）
            if (node->left) st.push(node->left);             // 左（空节点不入栈）
        }
        return result;
    }
};






//中序
class Solution{
public:
    vector<int>preorderTraversal(TreeNode *root){
        stack<TreeNode*>st;
        vector<int>result;
        TreeNode* cur=root;
        while(cur!=NULL||!st.empty()){
            if(cur!=NULL){
                st.push(cur);
                cur=cur->left;
            }
            else{
                cur = st.top();
                st.pop();
                result.push_back(cur->val);
                cur =cur->right;

            }
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