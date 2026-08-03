#include <iostream>
using namespace std;

// class Student {
// public:
//   int weight;
//   int age = 10;

// protected:
//   int height = 99;

// public:
//   void setWeight(int w) { this->weight = w; }
//   int getAge() { return this->age; }
//   Student() { cout << "C created successfully" << endl; }
// };
// class Male : public Student {

// public:
//   string color = "red";
//   void sleep() { cout << "Male sleeping" << endl; }
//   int getHeight() { return this->height; }
// };
// int main() {
//   //   Student first;
//   //   cout << first.getAge() << endl;

//   Male Object1;
//   cout << Object1.age << endl;
//   cout << Object1.color << endl;
//   cout << Object1.getHeight() << endl;
//   Object1.sleep();
// }

// class A {
// public:
//   void func() { cout << "I am A" << endl; }
// };
// class B {
// public:
//   void func() { cout << "I am B" << endl; }
// };
// class C : public A, public B {};

// int main() {
//   C obj;
//   obj.A::func();
//   obj.B::func();
// }

// class A {
// public:
//   void sayHello() { cout << "Yellow world" << endl; }
//   void sayHello(int name) { cout << "Hello" << name << endl; }
// //   // TWO FUNCTIONS CAN'T BE EXACTLY SAME AND EVEN THOUGH THEIR RETURN TYPE
// //   // DIFFER STILL THAT IS NOT ENOUGH. EITHER ADD ARGUMENT OR CHANGE THEIR
// //   //   NAME THIS IS CALLED FUNCTION OVERLOADING
// //   int sayHello(){
// //       cout<<"Hello World!"<<endl;
// //   }
// };

// int main() {
//   A obj1;
//   obj1.sayHello();
// }

// // OPERATOR OVERLOADING
// class B {
// public:
//   int a;
//   int b;

// public:
//   int add() { return a + b; }
//   void operator+(B &obj) {
//     int value1 = this->a;
//     int value2 = obj.a;
//     cout << "Output " << value2 - value1 << endl;
//   }
//   void operator()() { cout << "Main bracket nhi hun" << this->a << endl; }
// };

// int main() {
//   B obj1, obj2;

//   obj1.a = 4;
//   obj2.a = 7;

//   obj1 + obj2;
//   obj2();
// }

// RUNTIME POLYMORPHISM

class Animal {
public:
  void speak() { cout << "Speaking" << endl; }
};
class Dog : public Animal {
public:
  void speak() { cout << "Barking" << endl; }
};

int main() {
  Dog obj;
  obj.speak();
}