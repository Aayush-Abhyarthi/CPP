#include<bits/stdc++.h>
using namespace std;

counting_semaphore<3> sem(3);

void driving(int id){
    sem.acquire();
    cout<<id<<" has started driving the car"<<"\n";
    cout<<id<<" has stopped driving the car"<<"\n";
    sem.release();
}

int main(){
    
    vector<thread>t;
    
    for(int i=0;i<10;i++){
        thread x(driving,i);
        t.push_back(move(x)); // Using move(x) because threads are non copyable
    }
    
    for(int i=0;i<10;i++){
        t[i].join();
    }
    
}