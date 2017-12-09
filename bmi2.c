#include <stdio.h>

int main ()
{
	float height, weight, BMI;

	printf ("Your height (centimeters): ");
	scanf ("%f", &height);

	printf ("Your weight (kilograms): ");
	scanf ("%f", &weight);

	BMI = weight / (height/100 * height/100);
	printf ("\nYour BMI is: %.2f \n", BMI);

	if (BMI < 18.5)
		printf ("\nYOU ARE UNDERWEIGHT, BITCH");
	else if (BMI >= 18.5 && BMI <= 24.9)
		printf ("\nYou are normal weight...............");
	else if (BMI >= 25 && BMI <= 29.9)
		printf ("\nYou are overweight :(" );
	else if (BMI >= 30)
		printf ("\nYou are in the obesity category. Sorry.");

	
	return 0;

}