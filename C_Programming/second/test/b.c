#include <stdio.h>
#include <unistd.h>
int main(){
	char *args[5];
	args[0] = "hello";
	args[1] = "hello ";
	args[2] = "world ";
	args[3] = "!!!\n";
	args[4] = 0;
	int er = execv(".",args);
	if(er == -1){
		printf("execv is error\n");
	}
	printf("b can still exec");
}
