#include <stdio.h> 
#include <stdlib.h>


int win(){
	printf("flag{Y0u_w1n!}");
	system("/bin/sh");
}


int vuln(){
	char buf[0x40];
	gets(buf);
}


int main(){
	int a = 5;
	int b = 20;
	vuln();
	int c = a + b;
	printf(c);
	
	return 0;
}

