#include <iostream>
#include <vector>
#include <queue>
#include <map>
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
    static int idx =-1;
    node* buildtree(vector<int>preorder) {
        idx++;

            if (preorder[idx] == -1) return NULL;

        node* root =new node(preorder[idx]);
        root->left =buildtree(preorder);
         root->right =buildtree(preorder);

         return root;
    }
    void preOrder(node* root) {
        if (root == NULL) return ;
        cout << root->data<< " ";
        preOrder(root->left);
         preOrder(root->right);
    }
    void inorder (node* root) {
         if (root == NULL) return ;
         inorder(root->left);
         cout <<root->data<<" ";
         inorder(root ->right);
    }
    void postorder(node* root) {
         if (root == NULL) return ;
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
    void levelorder(node* root) {
        queue<node* >q;

        q.push(root);
         q.push(NULL);
       while (q.size() >0) {
        node* curr =q.front();
        q.pop();

        if (curr ==NULL) {
            if (!q.empty()) {
                cout <<endl;
                q.push(NULL);
                continue;
            }else{
                break;
            }
        }

        cout <<curr->data<<" ";
        if (curr->left !=NULL) {
            q.push(curr->left);

        }
           if (curr->right !=NULL) {
            q.push(curr->right);
            
        }
       }
       cout << endl;
    }
    int height(node* root ){
        if (root == NULL) return 0;
        int leftht =height(root ->left);
        int rightht =height(root ->right);
        return max(leftht ,rightht) +1;

    }
    int count (node* root) {
        if (root == NULL) return 0;
        int leftcount = count (root ->left);
        int rightcount =count (root ->right );
        return leftcount +rightcount +1;

    }
    int sumofnodes(node* root ) {
        if (root == NULL) return 0;
        int leftsum =sumofnodes(root ->left);
        int rightsum =sumofnodes(root ->right);
        return leftsum +rightsum +root ->data;
    }
    void topview (node* root) {
        queue <pair<node*,int>>q;
        map<int ,int>m;
        q.push({root,0});

        while (q.size() >0) {
            node* curr =q.front().first;
            int currhd =q.front().second;

            q.pop();
            if (m.find(currhd) == m.end()) {
                m[currhd] =curr->data;
            }

            if (curr->left !=NULL) {
                q.push ({curr->left,currhd -1});
            }
            if (curr ->right != NULL) {
                q.push ({curr->right, currhd+1});

            }

        }
        for (auto it :m) {
            cout << it.second<<" ";
        }
        cout << endl;
    }
    void kthlev(node* root, int k) {
        if (root == NULL) return ;
        if (k ==1) {
            cout << root ->data<<" ";
            return ;
        }
        kthlev(root ->left,k-1);
        kthlev(root ->right,k-1);

    }

    int sumtree (node* root) {
        if (root == NULL) return 0;
        int leftsum =sumtree(root ->left);
        int rightsum =sumtree(root->right);
       root->data +=leftsum +rightsum;
       return root->data;
    }
int main(){
        vector<int>preorder ={1, 2, -1,-1,3,4,-1,-1,5,-1,-1};

        node* root =buildtree(preorder);
  cout <<"before conversation : ";
        preOrder(root);
        cout<<endl;
        sumtree(root);
        cout<< "after converstion : ";
        preOrder(root);
        cout <<endl;

  
        
        return 0;
}