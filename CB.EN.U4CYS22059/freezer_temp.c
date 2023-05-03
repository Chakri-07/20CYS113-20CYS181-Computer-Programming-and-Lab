#include<stdio.h>
int main(){
double t,temp;
printf("Enter the time\n");
scanf("%lf",&t);
temp=((4*t*t)/(t+2))-20;
printf("The temparature is %f degree centigrades\n",temp);
return 0;
}
