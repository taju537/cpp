#include <iostream>
#include <vector>
#include <list>
#include <stack>
using namespace std;


// class stack{
//     vector<int>v;
//     list<int>l;

//     public:
//     void push (int val) {
//        // v.push_back(val);
//        l.push_front(val);
//     }void pop(){
//        // v.pop_back();
//        l.pop_front();
//     }int top(){
//       //  return v[v.size() -1];
//       return l.front();
//     }bool empty () {
//        // return v.size()==0;
//        return l.size()==0;
//     }

// };
int main () {
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);

    while (!s.empty()){
        cout << s.top()<<" ";
        s.pop();
    }
    cout <<endl;

    return 0;
}