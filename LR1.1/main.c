#if defined(_WIN32) || defined(__WIN32__) || defined(WIN32)
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#endif

#include <stdio.h>

int main(){
	//defining local variables: speed of the car, speed of the bike and the time in which they met, 
	//distance for the car, distance for the bike and the result being the sum of the two.
	float v1 = 0, v2 = 0, t = 0, s1 = 0, s2 = 0, res = 0;
	int exit = 0; //exit flag from do while.

	do{
		printf("\nPlease, input the speed of the car:\t\t");
		scanf("%f", &v1);
		printf("Please, input the speed of the bike:\t\t");
		scanf("%f", &v2);
		printf("Please, input the time in which they met:\t");
		scanf("%f", &t);

		if (v1 < 0 || v2 < 0 || t < 0){ //checking if any of the variables are negative.
			printf("The values must not be negative! Please try again. \n");
			exit = 0;
		}
		else{
			if (v1 == 0 && v2 == 0 && t != 0){ //checking if the variables are possible.
				printf("The values are impossible! Please try again. \n");
				exit = 0;
			}
			else{
				s1 = v1 * t; //calculating the distance for the car, for the bike and the result being the sum of the two.
				s2 = v2 * t;
				res = s1 + s2;
				printf("Marks A and B are located in %.2f kilometers away from each other.\n\n", res); //the output of the result.

				printf("\nPlease choose from the following:\n\t1 - Count again.\n\t2 - Exit.\n"); //suggesting to user to run program again or exit.
				scanf("%d", &exit);
				switch (exit){
					case 1: exit = 0; break;
					case 2: exit = 1; break;
					default: printf("Incorrect answer. The program will be closed."); exit = 1; break;
				}
			}
		}

	} while (exit != 1); // exit from cycle.
	
	return 0;
}