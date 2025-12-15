 #include <iostream>
 #include <vector>
 using namespace std;

    class node {
        public :
        int data ;
        node* next;

        node(int val) {
            data =val;
            next =NULL;

        }
    };

    class list{
        node* head;
        node* tail;
        public :
        list () {
            head =tail =NULL;
        }
        void push_front (int val) {  //0(1)
        node* newnode =new node(val);
        if (head ==NULL) {
            head =tail =newnode;
            return ;
        }else {
            newnode->next =head;
            head =newnode;
        }
      
        }
        void push_back (int val) { //0(1)
            node* newnode =new node (val);
            if (head == NULL) {
                head =tail =newnode;

            }else {
                tail ->next =newnode;
                tail =newnode;
            }
        }
        void pop_front () {  //0(1)
            if (head ==NULL) {
                cout << "LL is empty" ;
return ;
            }else {
                node* temp =head;
                head =head ->next;
                temp->next =NULL;
                delete temp;
            }
        }
        void pop_back () {  //0(n)
            if (head ==NULL) {
                cout << "LL is empty ";
                return ;
            }else {
                node* temp =head;
               while (temp->next !=tail ) {
                temp =temp->next;
            }
            temp->next =NULL;
            delete tail;
            tail =temp;
            }
        }
        void insert (int val ,int pos) { //0(1)

            if (pos < 0) {
                cout << "invalid position";
                return ;
            }if (pos == 0 ) {
                push_front (val);
                return ;
            }
            node* temp =head;
            for (int i =0;i <pos-1;i++) {
                if (temp ==NULL) {
                    cout << "invalid";
                    return ;
                }
                temp =temp->next;

            }
            node* newnode =new node (val);
            newnode->next =temp->next;
            temp->next =newnode;
        }
        void printLL () {  //0(n)
            node* temp =head;

            while(temp !=NULL) {
                cout << temp->data <<" ";
                temp =temp->next;
            }
            cout <<endl;
        }
        int search (int key ) {   //0(n)
            node* temp =head;
            int idx =0;

            while (temp != NULL) {
                if (temp->data ==key) {
                    return idx;
                } 
                temp =temp->next;
                idx++;


            }
            return -1;
        }


    };

 int main () {
    list ll;
    
    ll. push_front (3);
    ll. push_front (2);
    ll. push_front (1);

    ll.insert(4,1);
    
    ll.printLL();
    cout << ll.search(4)<<endl;

    return 0;
 }
