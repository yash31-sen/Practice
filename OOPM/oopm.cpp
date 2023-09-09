#include <iostream>
using namespace std;
class A
{

    int hello;
public:

void setter(int f){

    hello=f;
}



void getter(){
    cout<<"I am a: "<<hello<<endl;
}

    A()
    {
        cout << "Constructor called!!" << endl;
    }

    static int age;
    // public:
    int health;
    A(int health)
    {
        this->health = health;
    }
    A(A &temp)
    {
        cout << "Copy constructor called!!" << endl;
        int h = temp.health;
        // this->health=temp.name;
        this->health = h;
    }

public:
    void setHealth(int val)
    {
        health = val;
    }
    int getHealth()
    {
        return health;
    }

    static int random()
    {
        return age;
    }
    ~A()
    {
        cout << "Ditructor Called!!";
    }
};
int A::age = 12;

class Parent
{
public:
    int age;
    string name;
    int number;
};

class Child : public Parent
{
public:
    string email;
};
class S
{
public:
    void print()
    {
        cout << "I am class S!!" << endl;
    }
};
class R
{
public:
    void print()
    {
        cout << "I am class R!!" << endl;
    }
};

class T : public S, public R
{
};

class B
{
public:
    int a;
    int b;

public:
    void operator+(B &obj)
    {
        cout << "You cant't use + operator!!" << endl;
        int value = this->a;
        int value1 = obj.a;
        cout << "Output: " << value - value1 << endl;
    }
};
int main()
{
    // Inheritance
    // Child c;
    // c.age=12;
    // c.name="some";
    // c.number=132313312;
    // c.email="someone@gmail.com";
    // cout<<c.age<<","<<c.name<<","<<c.number<<","<<c.email<<endl;
    // Inheritance ambiguity:
    // T t;
    // t.R::print();
    // B ob1;
    // B ob2;
    // ob1.a=2;
    // ob1.a=3;
    // ob1+ob2;

    A a;
    a.setter(10010);
    a.getter();
    B o1;
    B o2;
    o1.a = 34;
    o2.a = 3;
    o1 + o2;
    return 0;
    // A a;//static allocation or craetion of object
    // A *a = new A(1000); // dynamix allocation or creation of  objectḍ
    // (*a).health = 67;
    // // A *b = new A((*a)); // copy constructor called
    // A b((*a));
    // // for this we have to use arrow operator instead of .   or we can give like (*a).getHealth();
    // //  a.health=1;
    // //  a->setHealth(3);
    // cout << (*a).getHealth() << endl;
    // cout << b.getHealth();
    // delete a;

    // cout<<A::random()<<endl;
    // A a;
    // cout<<a.age;//this also runs but for static keyword above one is reccomended
}