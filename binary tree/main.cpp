/*
// bool isBalenced(Node* root, int* height){
    if(root==NULL){
        return true;
    }
    int lh=0;
    int rh=0;

    if(isBalenced(root->left, &lh)==false){
        return false;
    }
    if(isBalenced(root->right, &rh)==false){
        return false;
    }

    *height=max(lh, rh)+1;
  if(abs(lh-rh)<=1){
      return true ;
  }else{
      return false;

  }

}*/
