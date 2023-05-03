#include<stdio.h>
int main(){
double v,hr,infusion,min;
printf("Enter the volume in litre\n");
scanf("%lf",&v);
printf("Enter the time in minutes\n");
scanf("%lf",&min);
hr=min/60;
infusion=v/hr;
printf("The influsion rate is %f\n",infusion);
return 0;
}
