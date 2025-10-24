#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bubblesort (int arr[],int n){
    for (int i=0;i<n-1;i++){

        bool isswap =false;
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap (arr[j],arr[j+1]);
                isswap =true ;
            }
        }
        if (!isswap){
            return ;
        }
    }
}

void printarray (int arr[],int n){
     for (int i=0;i<n;i++){
        cout << arr[i]<<" ";
     }
     cout << endl;
}
void selectionsort (int arr[],int n){
    for (int i =0;i<n-1;i++){
        int smallestidx = i;
        for (int j =i+1;j<n;j++){
            if (arr[j] >arr[smallestidx]) {
                smallestidx =j;
            }
        }
        swap (arr[i],arr[smallestidx]);
    }
}
void insertionsort (int arr [],int n ){
    for (int i =1;i<n;i++){
        int curr =arr[i];
        int prev = i-1;

        while (prev>= 0 && arr[prev] >curr){
        arr [prev + 1 ] =arr [prev];
        prev --;
    }
    arr [prev +1 ] =curr;

}

}

        int main (){
             int n =5;
             int arr[] ={4,1,5,2,3};

             selectionsort (arr,n);
             printarray (arr, n);
             cout << "taijul";
            


          
                return 0;
        }


        






        