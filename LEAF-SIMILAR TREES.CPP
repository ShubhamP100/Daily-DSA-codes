class Solution {
public:
    void CheckifSimilar(TreeNode* root,string &s){
        if(root==NULL)
        return;
        if(root->left==NULL&& root->right==NULL){
             s+=to_string(root->val)+"_";
             return;
        }
        CheckifSimilar(root->left,s);
        CheckifSimilar(root->right,s);

    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string s1="";
        string s2="";
        CheckifSimilar(root1,s1);
        CheckifSimilar(root2,s2);
        //if(s1==s2 return true;
        return s1==s2;
       // we can also take string in this solution to store the value in it but  there is an twist in string we can take value continuously so a chance
      // to fail a test case so i take append a string with _ to compare both string...
    }
};
