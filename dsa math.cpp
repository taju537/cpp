#include <iostream>
#include <cmath>
using namespace std;

string isprime (int n){
    for (int i =2;i*i <=n ;i++){
        if (n % i ==0){
            return "non prime ";
        }
    }
    return "prime";
}
bool isarmstrong(int n ) {
    int copiesN =n,someofcubes=0;
    while (n != 0){
        int dig =n %10;
        someofcubes += (dig *dig *dig);

        n =n/10;
    }
    return someofcubes ==copiesN;

}
int gcd ( int a,int b){
    while(a>0 && b>0){
        if (a>b){
            a =a%b;
        }else{
            b =b % a;
        }
    }
    if (a ==0) return b;
    return a;
}
int gcdRec(int a ,int b){
    if (b==0) return a;

    return gcdRec(b,a%b);
}
int lcm (int a ,int b){
    int gcd =gcdRec(a,b);
    return (a*b)/gcd;
}
int main (){
    cout <<lcm(20 , 28)<<endl;
}