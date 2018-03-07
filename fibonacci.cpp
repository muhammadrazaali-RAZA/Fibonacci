#include <iostream>
#include <stdlib.h> 
using namespace std;


//////// START OF MARKER FOR fib
long long fib(int x){
	if (x<=0)
		return 0;
	if (x<3)
		return 1;
		
	long long result,a,b;
	a=b=1;
	result=0;
	
	for(int i=2; i<x ; i++){
		result=a+b;
		a=b;
		b=result;
	} 
	return result;
}


//////// END OF MARKER 



//////// DO NOT MODIFY CODE BEYOND THIS LINE

int main(int argc, char* argv[]) {
    cout << (fib(atoi(argv[1]))) <<endl;
    return 0;
}
