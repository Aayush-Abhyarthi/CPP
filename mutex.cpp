#include<bits/stdc++.h>
using namespace std;

mutex m;

void driving(string name){
    unique_lock<mutex>lock(m);
    cout<<name<<" is driving the car"<<"\n";
    cout<<name<<" has stopped driving the car"<<"\n";
    lock.unlock();
}

int main(){
    string p1 = "Person1";
    string p2 = "Person2";
    
    thread t1(driving, p1);
    thread t2(driving, p2);
    
    t1.join();
    t2.join();
}