//// Encryption And Decryption Hub.

#include<stdio.h>
#include<string.h>
#include<conio.h>
void encrypt(char *c){
	char *ptr=c;
	while(*ptr!='\0'){ //Value at address ptr is not equal to 
		*ptr= *ptr+78; // Encryption Key. ASCII 
		ptr++;
	}
	}
	
void decrypt(char *z){
	char *ptr=z;
	while(*ptr!='\0'){
		*ptr= *ptr-78; // Decryption Key. 
		ptr++;
	}
	}
	
int main(){
	char c[2000];
	char z[2000];
	int option;
	
	printf("Press 1 for Encryption and 2 for Decrption: \n");
	scanf("%d",&option);
	getchar(); ///// very imp line
	switch (option) {
		case 1:
			printf("Enter Your Message To Encrypt:\n");
			fgets(c, 2000, stdin); // See this line carefully.
			printf("\n");
			encrypt(c);
			printf("Encrypted Message is:\n%s",c);
			break;
			
		case 2:
			printf("Enter Your Message To Decrypt:\n");
			fgets(z, 2000, stdin);// Use fgets not gets.
			printf("\n");
			decrypt(z);
			printf("Decrypted Message is:\n%s",z);
			break;
			
			default:
			printf("Invalid Input\n");
	}
	getch(); // For stabliziation of ouput screen.
	return 0;
}


