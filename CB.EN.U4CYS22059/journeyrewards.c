#include<stdio.h>
int main(){
	// Declaring of variables
	double initial_reading,final_reading,distance_travelled,reward;


	// Input the values of intial and final readings of the odometer.
	printf("Enter the initial reading of the odometer.\n");
	scanf("%lf", &initial_reading);
	
	printf("Enter the final reading of the odometer.\n");
	scanf("%lf", &final_reading);
	
	// Calculation of the number of kilometers travlled.
	distance_travelled= (final_reading-initial_reading);
	printf("The distance travelled by the traveller is %f \n", distance_travelled);
	reward = (distance_travelled)*20;
	printf("The final Reward given to the tarveller is %f \n", reward);
	
return 0;
	
}
