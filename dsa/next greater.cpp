#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// int main()
// {
//     vector<int> arr = {6, 8, 0, 1, 3};

//     stack<int> s;
//     vector<int> ans(arr.size(), 0);

//     for (int i = arr.size() - 1; i >= 0; i--)
//     {
//         while (s.size() > 0 && s.top() <= arr[i])
//         {
//             s.pop();
//         }
//         if (s.empty())
//         {
//             ans[i] = -1;
//         }
//         else
//         {
//             ans[i] = s.top();
//         }
//         s.push(arr[i]);
//     }
//     for (int val : ans)
//     {
//         cout << val << " ";
//     }
//     cout << endl;
//     return 0;
// }

vector <int>prevsmaller(vector<int>arr) {
    vector<int> ans(arr.size(), 0);
    stack<int>s;

    for (int i = 0;i <arr.size() ; i++) {
        while(s.size() >0 && s.top() >=arr[i]) {
            s.pop();
        }if (s.empty()) {
            ans[i] =-1;
        }else {
            ans[i] =s.top();
        }
        s.push(arr[i]);
    }
    return ans;
}
int  main () {
    vector <int> arr ={3, 1, 0,8 ,6};
    vector <int>ans =prevsmaller(arr);

    
    for (int val :ans) {
        cout << val<< " ";
    }
    cout << endl;
    return 0;
}