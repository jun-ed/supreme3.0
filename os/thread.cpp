#include <iostream>
#include<thread>
#include<unistd.h>
using namespace std;

void taskA() { 
    for (int i = 1; i <= 10; i++)
    {
        sleep(1);
        cout << "Using Thread t1: " << i << endl;
    }
}

void taskB() {
    for (int i = 1; i <= 10; i++)
    {
        sleep(1);
        cout << "Using Thread t2: " << i << endl;
    }
}

int main(){
    thread t1(taskA);
    thread t2(taskB);
    t1.join();
    t2.join();
}