#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
using namespace std;

bool comparator(pair <int, int>p1,pair <int,int>p2){
        if (p1.second<p2.second)return true;
        if (p1.second>p2.second)return false;
        if (p1.first<p2.first)return true ;
         else return false ;       
}
int main (){
      
    vector <int> vec  ={2,3,5,6,8};

    cout <<binary_search(vec.begin(),vec.end(),2);

//     reverse(vec.begin() +2,vec.begin()+3);


    

//     for (auto val :vec){
//         cout <<val<<" ";
//     }
   
//     cout <<endl;
 
        
}
