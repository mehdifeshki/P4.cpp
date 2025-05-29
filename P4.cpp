#include <iostream>
#include <thread>
using namespace std;

void func(int i){
	cout<<"Mehdi Feshki "<< i <<endl;
}

int main(){
	for (int i=0 ; i<10 ; i++){
		thread t0(func,i);
		t0.join();
	}
	
	return 0 ;
}
