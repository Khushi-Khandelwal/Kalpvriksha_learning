/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int value;
    struct Node*left;
    struct Node*right;
}node;


node* createNode(int value){
    node* newNode=(node*)malloc(sizeof(node*));
    newNode->value=value;
    newNode->left=NULL;
    newNode->right=NULL;
    return  newNode;
}

 node* insertNode(int value, node *newNode){   
    if(newNode==NULL){
      newNode=createNode(value);
        return newNode;
    }
    
  else if(value<=newNode->value){
       newNode->left=insertNode(value,newNode->left);
   }
    else{
       newNode->right=insertNode(value , newNode->right);
   }
    return newNode;
}


int sumAllPathsFromRootToLeaf(node* root,int sum) {
    int total_sum=0;
    
    if (root == NULL) {
        return 0;
    } 
    else if (root->left == NULL && root->right == NULL) {
        total_sum+= sum+ root->value;
    } 
    else {
       total_sum+= sumAllPathsFromRootToLeaf(root->left ,sum + root->value);
       total_sum+= sumAllPathsFromRootToLeaf(root->right,sum + root->value);
    }
    return total_sum;
}

void traverse(node*displayNode)
{
   if(displayNode==NULL)
   {
       return;
   }
   traverse(displayNode->left);
   
   printf("%d ", displayNode->value);
   traverse(displayNode->right);
}

int main() {
    int i,number,value,Finalsum;
    node *root = NULL;
    
    printf("Enter the number : \n");
    scanf("%d", &number);
    
    printf("Enter the value : \n");
    for (i=0; i<number; i++){
        
        scanf("%d",&value);
        root = insertNode(value,root);
    }
    
    traverse(root);
    
   printf("\nSum of all the paths of tree from root to leaf : \n");
   Finalsum = sumAllPathsFromRootToLeaf(root,0);
   printf("%d",Finalsum);
    
}
    
