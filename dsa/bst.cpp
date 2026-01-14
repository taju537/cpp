#include <iostream>
#include <vector>
using namespace std;

class node {
    public :
    int data;
    node* left;
    node* right;
    node (int val) {
        data =val;
        left =right =NULL;
    }
};

    node* insert(node* root ,int val) {
        if (root ==NULL) {
            return new node(val);
        }
        if (val <root->data){
            root ->left =insert(root->left,val);
        }
        else{
            root ->right=insert(root ->right,val);
        }
        return root;
    }
  

node* buildBST(vector<int>arr) {
    node* root =NULL;
    for (int val :arr) {
        root =insert(root, val);
    }
    return root;
}
    bool search (node* root, int key ) {
        if (root ==NULL) return false ;

        if (root->data ==key) return true;

        if (key <root->data) {
            return search(root->left,key);
        }else {
            return search (root->right,key); 
        }

    }
node* getinordersuccessor(node* root) {
        while(root !=NULL && root->left !=NULL) {
            root=root->left;
        }
        return root;
}
    node* delnode(node* root ,int key ) {
        if (root == NULL) return NULL;

          if (key <root->data) {
           root->left = delnode(root->left,key);
        }
         else if (key >root->data) {
           root->right = delnode(root->right,key);
        }else{
            if (root->left ==NULL) {
                node* temp =root->right;
                delete root;
               return temp;
            }else if( root->right ==NULL) {
                node* temp =root->left;
                delete root;
               return temp;
        }
        else {
            node* IS =getinordersuccessor(root ->right);
            root->data =IS->data;
            root->right =delnode(root->right,IS->data);

        }
    }
    return root;
}
        void inorder (node* root , vector <int> &arr ) {
            if ( root == NULL) {
                return ;
            }

            inorder ( root ->left ,arr);
            arr.push_back (root->data);
            inorder ( root ->right ,arr);
        }
        node* buildBSTsort (vector <int>&arr , int st , int end ) {
            if ( st > end ) {
                return NULL;
            }
            int mid = st + (end -st ) /2;
            node* root = new node (arr[mid]);
            root ->left = buildBSTsort(arr ,st, mid-1);
             root ->right = buildBSTsort(arr ,mid +1,end);
             return root ;
        }

        node* merge2BST  (node* root1, node* root2) {
            vector <int >arr1, arr2;
            inorder(root1, arr1);
             inorder(root2, arr2);

             vector <int >temp;
             int i =0 ,j =0;
             while ( i < arr1.size() &&  j < arr2.size()) {
                if ( arr1[i] < arr2[j]) {
                    temp.push_back(arr1[i++]);
                }else {
                    temp.push_back(arr2[j++]);
                }
             }
             while (i < arr1.size()) {
                temp.push_back(arr1[i++]);
             }
             while (j <arr2.size()) {
                 temp.push_back(arr2[j++]);
             }
             return buildBSTsort(temp , 0 ,temp.size() -1);
        }
int main () {
    vector <int>arr1 = {8, 2, 1, 10 };
    vector <int >arr2 ={5, 3, 0};

    node* root1 = buildBST(arr1);
    node* root2 = buildBST(arr2);

    node* root = merge2BST(root1,root2);
    vector <int >seq;
    inorder(root, seq);

    for ( int v :seq) {
        cout << v << " ";

    }
    cout << endl;
    return 0;
}