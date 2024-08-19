// Encapsulation -> wrapping up data members and function.

// Fully Encapsulation Class -> All data members are marked aas private.

// Advantages: Can hides data , security increase , can mark the class as read only , helps in unit testing.

// #include <iostream>
// #include <string.h>
// using namespace std;


// class Student{
//     private:
//         string name;
//         int age;
//         int height;

//     public:
//     int getAge(){
//         return this->age;
//     }
// };


// int main(){
//     Student first;
//     cout<< "Alright";
// }


// Inheritance -> To inherit the properties ,either of writing again the same properties.


// #include <iostream>
// using namespace std;

// class Human{
//     public:
//     int age = 74;
//     string gender;
//     int height = 5;
//     int weight = 60;

//     public:
//     int getAge(){
//         return this->age;
//     }
//     void setWeight(int w){
//          this->weight = w;
//     }
// };


// class Male: public Human{
//     public:
//     string color = "White";
//     void sleep(){
//         cout<< "Male Sleeping" <<endl;
//     }
// };



// int main(){
//     Male object;
//     cout<< object.age << endl;
//     object.setWeight(77);
//     cout<< object.weight << endl;
//     cout<< object.height << endl;
//     cout<< object.color << endl;
//     object.sleep();
//     return 0;
// }


// Single Inheritance 

// #include <iostream>
// using namespace std;

// class Animal{
//     public:
//     int age;
//     int weight;

//     public:
//     void speak(){
//         cout<< "Speaking...." << endl;
//     }
// };
// class Dog:public Animal{};
// int main(){
//     Dog d;
//     d.speak();
//     cout<< d.age << endl;
// }


// Multi-Level Inheritance

// #include <iostream>
// using namespace std;

// class Animal{
//     public:
//     int age = 12;
//     int weight;

//     public:
//     void speak(){
//         cout<< "Speaking...." << endl;
//     }
// };
// class Dog:public Animal{};
// class GermanShephard:public Animal{};
// class Pamelion:public Animal{};
// int main(){
//     Dog d;
//     d.speak();
//     cout<< d.age << endl;

//     GermanShephard c;
//     c.speak();
//     cout<< c.age << endl;

//     Pamelion p;
//     p.speak();
//     cout<< p.age << endl;
// }



// Multiple Inheritance 


// #include <iostream>
// #include <string>
// using namespace std;

// class Animal{
//     public:
//     int age = 12;
//     int weight;

//     public:
//     void Bark(){
//         cout<< "Barking...." << endl;
//     }
// };


// class Human{
//     public:
//     string color = "black";

//     public:
//     void Speak(){
//         cout<< "Speaking...." << endl;
//     }
// };

// class Hybrid:public Animal , public Human{};
// int main(){
//     Hybrid h;
//     h.Speak();
//     h.Bark();
// }


// Hierarchial Inheritance 


// #include <iostream>
// using namespace std;
// class A{
//     public:
//     void Func1(){
//         cout<< "I am func1" << endl;
//     }
// };
// class B{
//     public:
//     void Func2(){
//         cout<< "I am func2" << endl;
//     }
// };
// class C{
//     public:
//     void Func3(){
//         cout<< "I am func3";
//     }
// };


// int main(){
//     A obj1;
//     B obj2;
//     C obj3;
//     obj1.Func1();
//     obj2.Func2();
//     obj3.Func3();
// }



// Hybrid Inheritance 


// #include <iostream>
// using namespace std;
// class A{
//     public:
//     void Func1(){
//         cout<< "I am func1" << endl;
//     }
// };
// class B:public A{
//     public:
//     void Func2(){
//         cout<< "I am func2" << endl;
//     }
// };
// class D{
//     public:
//     void Func4(){
//         cout<< "I am func4" << endl;
//     }
// };
// class C:public A , public D{
//     public:
//     void Func3(){
//         cout<< "I am func3" << endl;
//     }
// };


// int main(){
//     A obj1;
//     B obj2;
//     C obj3;
//     D obj4;
//     obj3.Func3();
//     obj3.Func4();
//     obj3.Func1();
// }



// Inheritance Ambiguity 

// #include <iostream>
// using namespace std;

// class A{
//     public:
//     void func(){
//         cout<< "A speaks....";
//     }
// };
// class B{
//     public:
//     void func(){
//         cout<< "B speaks....";
//     }
// };
// class C: public A , public B{
// };
// int main(){
//         C obj3;
//         obj3.A::func();
// }


// Polymorphism means having many forms


// Compile Time polymorphism 

// Function Overloading 

// #include <iostream>
// using namespace std;

// class A{
//     public:
//     void sayHello(){
//         cout<< "Hello Rishav";
//     }
//     void sayHello(string name){
//         cout<< "Hello Rishav";
//     }
// };
// int main(){
//     A obj;
//     obj.sayHello();
// }


// Operator Overloading

// #include <iostream>
// using namespace std;
// class B{
//     public:
//     int a;
//     int b;

//     public:
//     int add(){
//         return a+b;
//     }
//     void operator+ (B &obj){
//         int value1 = this -> a;
//         int value2 = obj.a;
//         cout<< "Output " << value2 - value1 <<endl;
//     }
// };

// int main(){
//     B obj1 , obj2;
//     obj1.a = 4;
//     obj2.a = 7;
//     obj1 + obj2;
// }


// Runtime Polymorphism is basically a dynamic type of polymorphism 

// Method Overriding 


// Abstracation -> Implementation Hiding 