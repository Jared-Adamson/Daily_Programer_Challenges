//Jared Adamson
/*
Daily Programing Challenge #1:
Create a program that will ask the users name, age, and reddit username. have it tell them the information back, in the format:

your name is (blank), you are (blank) years old, and your username is (blank)

for extra credit, have the program log this information in a file to be accessed later.
*/

#include <stdio.h>

int main() 
{
	char strName[100];
        char strReddit[100];
	int intAge;
	
	FILE *txtFile;
	
	txtFile = fopen("userInfo.txt","a+");

	printf( "Please enter your name:" );
	scanf("%s",strName);
	printf( "Please enter your age:" );
        scanf("%d",&intAge);
	printf( "Please enter your Reddit user name:" );	
	scanf("%s",strReddit);

	printf( "Your name is %s, you are %d years old, and your username is %s.\n", strName, intAge, 		strReddit);

	fprintf(txtFile,"Your name is %s, you are %d years old, and your username is %s.\n", strName, 		intAge, strReddit); 
	
	fclose(txtFile);
