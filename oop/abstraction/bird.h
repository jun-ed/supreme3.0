#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>
using namespace std;

class Bird {
    public:

        virtual void eat() = 0;
        virtual void fly() = 0;
        // classes that inherits from this
        // has to implement pure virtual functions
};

class Penguin : public Bird { 
    public:
     
        void eat(){
            cout << "Penguin is eating" << endl;
        }
        void fly(){
            cout << "Penguin is flying" << endl;
        }
};

class Eagle : public Bird { 
    public:
     
        void eat(){
            cout << "Eagle is eating" << endl;
        }
        void fly(){
            cout << "Eagle is flying" << endl;
        }
};



#endif // BIRD_H
