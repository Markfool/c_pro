#include <stdio.h>

double area(double r){
	return 3.14*r*r;
}

int main(){
	printf("the adr is %p\n",main);
	printf("hello world\n");
	printf("the area is %lf\n",area(3.0));
	return 0;
}
