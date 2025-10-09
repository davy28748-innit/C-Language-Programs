#include <stdio.h>
int main(){
	int password;
	
	do {
		printf("Enter Password: ");
		scanf("&d", &password);
	} while (password == 1234? 0 :1);
	printf("Access Granted\n");
	return 0;
}