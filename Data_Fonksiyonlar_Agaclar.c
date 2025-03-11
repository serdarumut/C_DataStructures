#include <stdio.h>
#include <stdlib.h>


struct node{
	int data;
	struct node * left, * right;
};

typedef struct node BTREE;
BTREE* new_node(int data){
	
	BTREE* p = (BTREE*)malloc(sizeof(BTREE));
	p->left = NULL;
	p->right = NULL;
	p->data = data;
	return p;
}

BTREE* insert(BTREE* root, int data){
	if(root != NULL){
		if(data<root->data)
		root->left = insert(root->left , data);
		else
		root->right = insert(root->right, data);
	}
	else 
		root = new_node(data);
		
	return root;
}

int size(BTREE* root){
	if(root!=NULL)
		return (size(root->left) + 1 + size(root->right));
	else 
		return 0;
}

BTREE* searchtree(BTREE* tree, int data_){
	if(tree != NULL){
		if(tree -> data == data_)
			return tree;
		else if(tree->data > data_)
			searchtree(tree->left,data_);
		else
			searchtree(tree->right, data_);
	}
	else
		return NULL;
	
}
void preorder(BTREE * root){
	if(root != NULL){
		printf("%d - ", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(BTREE * root){
	if(root != NULL){
		printf("%d - ", root->data);
		inorder(root->left);
		inorder(root->right);
	}
}

void postorder(BTREE * root){
	if(root != NULL){
		printf("%d - ", root->data);
		postorder(root->left);
		postorder(root->right);
	}
}

int main(int argc, char *argv[]) {
	 int i;
    int dizi[14] = {25, 14, 23, 40, 24, 23, 48, 7, 5, 34, 10, 7, 17, 36};
    
    BTREE* root = NULL;  // Aðaç kökü tanýmlanmalý
    
    for (i = 0; i < 14; i++) {
        root = insert(root, dizi[i]);
    }

    printf("\nSize of the tree: %d", size(root));
    BTREE* result = searchtree(root, 25);
    if (result != NULL)
        printf("\nNode found with data: %d \n\n", result->data);
    else
        printf("\nNode not found \n\n");
	
	
	printf("Preorder : ");
	preorder(root);
	printf("\nInorder : ");
	inorder(root);
	printf("\nPostorder : ");
	postorder(root);
	return 0;
}
