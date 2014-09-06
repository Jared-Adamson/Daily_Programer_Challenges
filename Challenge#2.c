// Jared Adamson
/* 
Daily Challenge #2:
Hello, coders! An important part of programming is being able to apply your programs, so your challenge for today is to create a calculator 
application that has use in your life. It might be an interest calculator, or it might be something that you can use in the classroom. 
For example, if you were in physics class, you might want to make a F = M * A calc.

EXTRA CREDIT: make the calculator have multiple functions! Not only should it be able to calculate F = M * A, but also A = F/M, 
and M = F/A!
*/

#include <stdio.h>

int main(){

	double F, M, A;

	int choice;

	printf("What would you like to calculate?\n");

	printf("Enter 1 for F = M * A or Enter 2 for A = F/M:");

	scanf("%i\n", &choice);


	if(choice == 1){

		printf("Enter the value of A:");

		scanf("%lf\n", &A);

		printf("Enter the value of M:");

		scanf("%lf\n", &M);

		F = M * A;

		printf("F equals: %f\n", F);


	}else if(choice == 2){
		
		printf("Enter the value of F:");

		scanf("%lf\n", &F);

		printf("Enter the value of M:");

		scanf("%lf\n", &M);

		A = F/M;

		printf("A equals: %f\n", A);

	}


	return 0;
}
