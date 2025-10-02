/*
Name:Davy Kipkosgei Koech
RegNo:PA106/g/28748/25
Description:Mobile Data Bundle Purchase
*/
#include <stdio.h>

int main(){
	int choice;
	//Creating the Menu
	printf("Select data bundle:\n");
	printf("1. 100MB at 50KES\n");
	printf("2. 500MB at 200KES\n");
	printf("3. 1GB at 350KES\n");
	printf("4. 2GB at 600KES\n");
	
	printf("Enter your choice (1-4):");
	scanf("%d",&choice);
	//Choice selection output
	switch(choice){
		case 1:
			printf("You selected 100MB. Cost=50KES\n");
			break;
		case 2:
			printf("You selected 500MB. Cost=200KES\n");
			break;
		case 3:
			printf("You selected 1GB. Cost=350KES\n");
			break;
		case 4:
			printf("You selected 2GB. Cost=600KES\n");
			break;
		default:
			printf("Invalid choice\n");
			
	}
	return 0;

}
