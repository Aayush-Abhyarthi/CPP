#include<bits/stdc++.h>
using namespace std;

mutex m;
condition_variable cv;
int value = 1;

void first(){
    
    unique_lock<mutex>lock(m);
    
    cv.wait(lock,[]{
        if(value==1)
        return true;
        else
        return false;
    });
    
    cout<<"InFirst"<<"\n";
    
    value++;
    cv.notify_all();
}
void second(){
    
    unique_lock<mutex>lock(m);
    
    cv.wait(lock,[]{
        if(value == 2)
        return true;
        else
        return false;
    });
    
    cout<<"InSecond"<<"\n";
    
    value++;
    cv.notify_all();
}
void third(){
    
    unique_lock<mutex>lock(m);
    
    cv.wait(lock,[]{
        if(value == 3)
        return true;
        else
        return false;
    });
    cout<<"InThird"<<"\n";
}

int main(){
    thread t1(first);
    thread t2(second);
    thread t3(third);
    
    t1.join();
    t2.join();
    t3.join();
}
