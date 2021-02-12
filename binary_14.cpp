int height(struct Node* node)
{
        if(node==NULL)
        {
            return 0;
        }
        int x=height(node->left);
        int y=height(node->right);
        return x>y?1+x:1+y;
}

bool isBalanced(Node *root)
{
    if(!root)
    {
        return true;
    }
    if(root->left==NULL&&root->right==NULL)
    {
        return true;
    }
    if((height(root->left)-height(root->right))>1)
    {
        return false;
    }
    return(isBalanced(root->left)&&isBalanced(root->right)&&(abs(height(root->right)-height(root->left))<=1));
    
}
