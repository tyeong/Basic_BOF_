#include <stdio.h>
#include <windows.h>

int main(int argc, char ** argv){
	char buffer[100];
	if(argc<2) {
		printf("Usage : %s [String]\n", argv[0]);
		exit(-1);
	}

	printf("buffer address : %p\n", buffer);
	strcpy(buffer, argv[1]);
	printf("%s", buffer);
	return 0;
 }