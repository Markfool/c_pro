#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	int a = 0;
	int pid = fork();
	if(pid > 0){
		//pid = wait((int *)0);
		write(1,"hello",6);
	}
	else if(pid == 0){
		printf("ok,");
	}
	else{
		printf("fork error\n");
	}
}
