#include <iostream>
using namespace std;

class A {
private:
    int num;
public:
void getdata(){
    cin>>num;
}

int number(){
    return num;
}
  
};

class B : public A {
private:
    int num2;

    public:
    void getdata(){
        cin>>num2;
        A::getdata();
        number();

    }
    int number2(){
        return num2;
    }
};

class C : public B{

private:
int num3;
public:

void getdata(){
    cin>>num3;
    B::getdata();
    number2();
}


};

class D: public A,public B,public C{
private:
int sum,avg;

public:
void getdata(){
    A::getdata();
    sum=
}

};

int main() {
    car obj;
    obj.cal();
    obj.display();
    return 0;
}
