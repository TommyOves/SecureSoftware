#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int array[] = {110, 1, 105, 110, 1, 106, 2, 97, 123, 100, 3, 117, 53, 5, 116, 95, 48, 102, 8, 102, 95, 121, 48, 117, 114, 95, 67, 125};
	//char* flag = (char*)malloc(sizeof(array[]) * sizeof(char));;
	char flag[28];
	int a = 0;
	for (int i=0; i < 28; i++){
		if (array[i] > 10){
			flag[a] = (char)array[i];
			a++;
		}
	}
	printf("The flag is: %s\n", flag);
	return 0;
}
