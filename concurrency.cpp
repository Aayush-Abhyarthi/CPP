#include <bits/stdc++.h>
using namespace std;

void fun1(int a ,int b){
    for(int i=0;i<b;i++){
        cout<<"Running thread "<<a<<" iteration: "<<i+1<<"\n";
    }
}

void fun2(int x){
    for(int i=0;i<x;i++)
    cout<<i+1<<"\n";
}

int main() {
	
	thread t1(fun1, 3, 4);
	thread t2(fun2, 5);
	
	t1.join();
	t2.join();
	

}
