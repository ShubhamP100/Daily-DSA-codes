class Solution {
public:
    bool isMirror(TreeNode* r1,TreeNode* r2){
         if(r1==NULL&& r2==NULL)
          return true;
         if(r1!=NULL&&r2==NULL|| r2!=NULL&&r1==NULL || r1->val!=r2->val)
         return false;
         //if(r1->right,r2->left&& r1->left,r2->right) 
         return isMirror(r1->right,r2->left)&& isMirror(r1->left,r2->right);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
        return true;
        //bool leftSubTree=isSymmetric(root->left->left);
        //bool rightSubTree=isSymmetric(root->right->right);
        //bool ans=root->left!=root->right;
        return isMirror(root->left,root->right);
    }
};
