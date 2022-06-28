#include <iostream>

using namespace std;

class A{
int a;
public:
A(){a = 3;}

//void test(B &ref){  //gives me error due that B is not friend of A
//  cout<<"a value = "<<ref.b;
//}
friend class B;
private:



};

class B{
int b;
public:
B(){b = 2;}

void test(A &ref){
  cout<<"a value = "<<ref.a;
}


private:


};

int main(){
  A a;
B b;
  b.test(a);
  
}
