#include <stdio.h>

int main(){
	int a;
	int *p;
	
	a=5;
	p=&a;
	
	printf("the value of a:\n",a,*p);
	
	*p=20;
	
	printf("the value of %d after changing:");
	printf("the value of p=%d after changing a=%d, ",a,&*p);
}
