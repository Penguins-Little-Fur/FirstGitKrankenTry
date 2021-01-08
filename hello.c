#include <stdio.h>

// Add a add function remotely
int add(int a, int b){
	return a + b;
}

int test(){
	assert(add(2,2) == 4);
	assert(add(-3,2) == -1);
}

int main(){
	printf("Hello World!");
	printf("a!");
	printf("b!");
	test();
	return 0;
}