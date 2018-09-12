#include <stdio.h>

int main () {
	
	char phrase[256];
	int i;
	
	printf("Enter a phrase to be encrypted:\n");
	gets(phrase);
	
	for (i = 0; ( i<256 && phrase[i]!='\0' ); i++){
		phrase[i] = phrase[i] - 5;
	}
	
	printf("\nEncrypted file:\n\n%s", phrase);
	return 0;
}