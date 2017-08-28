#include <iostream>

using namespace std;

class Base
{
public:
    Base(){cout<<"Base class constructor"<<endl;}
    virtual ~Base(){cout<<"Base class desconstructor"<<endl;}
    virtual void printSomething() {cout<<"Base class print some thing"<<endl;}

protected:
    void printProtected(){cout<<"Base class protected print"<<endl;}

private:
    void printPrivate(){cout<<"Base class private print"<<endl;}
};

class Derived : public Base
{
public:
    Derived(){cout<<"Derived class constructor"<<endl;}
    virtual ~Derived(){cout<<"Derived class desconstructor"<<endl;}
    virtual void printSomething() {cout<<"Derived class print some thing"<<endl;}

protected:
    void printProtected(){
        Base::printProtected();
    }

private:
    void printPrivate(){
        Base::printPrivate();
    }
};
