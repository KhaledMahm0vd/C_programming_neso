#include <stdio.h>

int main(){
	char x = 1, y = 2; //x = 1 (0000 0001), y = 2 (0000 0010)
	if(x&y)		//1&2 = 0 (0000 0000)
		printf("Result of x&y is 1\n");
	else
		printf("Result of x&y is 0\n");
	if(x&&y)	//1&&2 = TRUE && TRUE = TRUE = 1
		printf("Result of x&&y is 1\n");
	
	return 0;
}
