#include<bits./stdc++.h>
using namespace std;
// class students{
  
//   string name;
//     public:
    
//     int age;
//     bool gender;
// //default constructor
//   students(){
//       cout<<"default constructor called"<<endl;
//   }

//     //parameterized constructor
//     students (string s, int a, int g){
//         cout<<"parameterized constructor called"<<endl;
//         name=s;
//         age=a;
//         gender=g;
//     }

// //copy constructor
// students (students &a){
//     cout<<"copy constructor called"<<endl;
//     name=a.name;
//     age=a.age;
//     gender=a.gender;
// }


// //destructor
//   ~students(){
//       cout<<"destructor called"<<endl;
//   }
//     void setName(string s){
//         name=s;   //set the name for access private data
//     }
//   void getName(){
//       cout<<name<<endl;
//   }
//     void printInfo(){
//         cout<<"name = ";
//         cout<<name<<endl;
//         cout<<"age = ";
//         cout<<age<<endl;
//         cout<<"gender = ";
//         cout<<gender<<endl;

//     }

//      bool operator == ( students &a){
//          if(name==a.name && age==a.age && gender==a.gender){
//              return true ;
//          }else{
//              return false;
//          }
//      }
// };

// int main(){
// // students arr[3];
// // for(int i=0; i<3; i++){
// //     string s;
// //      cout<<"name = ";
// //      cin>>s;
// //      arr[i].setName(s);
// //      cout<<"age = ";
// //      cin>>arr[i].age;
// //      cout<<"gender = ";
// //      cin>>arr[i].gender;
// // }
// // for(int i=0; i<3; i++){
// //     arr[i].printInfo();
// // }

// students a("sonu", 22, 0);
// // a.getName();
// // a.printInfo();
//  students b;

//  students c=a;

//  if(b==a){
//      cout<<"same"<<endl;
//  }else{
//      cout<<"not same"<<endl;

//  }
// }



//encapsulation
// class A{

// public:
// int a;
// void funcA(){
//     cout<<"funcA called"<<endl;
// }

// private:
// int b;
// void funcB(){
//     cout<<"funcB called"<<endl;
// }

// protected:
// int c;
// void funcC(){
//     cout <<"funcC called";
// }

// };

// int main(){
//  A obj;
//  obj.funcA();
//  obj.funcB();
//  return 0;
// }

//inheritance

//single inheritance

// class A{
// public:
// void func(){
//     cout<<"inheritance"<<endl;
// }
// };

// class B:public A{

// };

//multiple inheritance
// class A{
//     public:
//     void funcA(){
//         cout<<"class A inherited"<<endl;
//     }
// };
// class B{
//     public:
//     void funcB(){
//         cout<<"class B inherited"<<endl;
//     }
// };

// class C:public A, public B{

// };

// int main(){
//     C c;
// c.funcA();
// c.funcB();
// }

//multi level inheritance 
// class A{
//     public:
//     void funcA(){
//         cout<<"funcA called"<<endl;

//     }
// };
// class B: public A{
//     public:
//     void funcB(){
//         cout<<"funcB called"<<endl;

//     }
// };

// class C:public B{
//     public:
// };

// int main(){
//     C c;
//     c.funcA();
//     c.funcB();
// }


//gunction overloading
// class A{
//     public:
//     void func(){
//         cout<<"function with no argumetn"<<endl;
//     }

//     void func(int x){
//         cout<<"function with int argument"<<endl;
//     }

//     void func(double x){
//         cout<<"function with double argument"<<endl;
//     }
// };

// int main(){
//        A obj;
//        obj.func();
//        obj.func(4);
//        obj.func(6.2);
// }


//operator overloading
// class Complex{
//     private:
//     int real, imag;
//     public:
//     Complex(int r=0, int i=0){
//         real=r;
//         imag=i;
//     }
//     Complex operator + (Complex const &obj){
//         Complex res;
//         res.imag=imag + obj.imag;
//         res.real=real + obj.real;
//         return res;
//     }
//  void display(){
//      cout<<real<<" +i"<<imag<<endl;
//  }


// };

// int main(){
//     Complex c1(12,7);
//     Complex c2(6,7);
//     Complex c3=c1+c2;
//     c3.display();
//     return 0;
// }

//virtual loading

class base{
    public:
    virtual void print(){
        cout<<"base class print function"<<endl;
    }
    void display(){
        cout<<"base class display function"<<endl;
    }
};
class derived:public base{
    public:
     void print(){
        cout<<"derived class print function"<<endl;
    }
    void display(){
        cout<<"derived
        
         class display function"<<endl;
    }
};

int main(){
    base *baseptr;
    derived d;
    baseptr = &d;

    baseptr ->print();
    baseptr ->display();
}