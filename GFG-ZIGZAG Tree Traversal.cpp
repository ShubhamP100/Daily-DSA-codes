class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int> Store;
    	if(root==NULL)
    	return Store;
    	queue<Node*> q;
    	q.push(root);
    	bool leftToright=true;
    	while(!q.empty()){
    	    //vector<int> ans(size);
    	    int size=q.size();
    	    vector<int> ans(size);
    	    for(int i=0;i<size;i++){
    	        Node* frontNode=q.front();
    	        q.pop();
    	        int  ind= leftToright?i:size-i-1;
    	        ans[ind] =frontNode->data;
    	        if(frontNode->left)
    	         q.push(frontNode->left);
    	         if(frontNode->right)
    	         q.push(frontNode->right);
    	    }
    	    leftToright=!leftToright;
    	    for(auto i:ans)
    	    Store.push_back(i);
    	}
    	return Store;
    }
};
