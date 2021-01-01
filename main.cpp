#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	return 0;
}
TYPEDEF Struct Bnode{
BTree *left,*right;
int weigh;
} BTree
int WPL(BTree *root) {
return WPL1(root,0);
}
int WPL1(BTree *root,intd){
	if(root->left==NULL&&root->right==NULL)
	return(root->weight*d);
	else
	return(WPL1(root->left,d+1)+WPL1(root->right,d+1));
}
