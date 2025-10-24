#include <iostream>
#include <string>

using namespace std;

// class student {
//    public :
//    string name;
//    int rollno;

// };
// class teacher {
//    public :
//    string subject;
//    double salary;

// };
// class TA :public student ,public teacher{

// };
// int main (){
//    TA t1;
//    t1.name ="TAIJUL ISLAM ";
//    t1.rollno =251400071;
//    t1.subject ="CSE";
//    t1.salary =150000;

//    cout <<"name :"<< t1.name <<endl;
//    cout <<"salary : "<<t1.salary<<endl;

// }


// class print {
//    public:
//    void show (int x){
//       cout << "int :" <<x;
//    }
//    void show (char ch ) {
//       cout << "char :" <<ch ;
//    }
// };
// int main (){
//    print p1;
//    p1.show('T');

// }

// class parent {
//    public :
//    void getinfo (){
//       cout << "parents class ";
//    }
//    virtual void hello (){
//       cout << "hello from parent  ";
//    }
// };
// class child :public parent {
//    public :
//    void getinfo (){
//       cout << "child class";
//    }
//     void hello (){
//       cout << "hello from child ";
//    }
// };
//  int main(){
//   child c1;
//   c1.hello ();
//  }

   // class shape {
   //    virtual void draw()=0;
   // };
   // class circle :public shape {
   //    public :
   //    void draw (){
   //       cout << "drawing the circle ";

   //    }
   // };
   // int main (){
   //    circle c1;
   //    c1.draw ();
   // }

void fun (){
 int x =0;
   cout << "x : "<<x<<endl ;
   x++;
}
int main (){
   fun ();
   fun ();
   fun ();
   fun ();
}
