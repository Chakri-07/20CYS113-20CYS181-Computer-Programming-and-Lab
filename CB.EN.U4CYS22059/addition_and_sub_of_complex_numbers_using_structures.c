#include<stdio.h>
#include<string.h>
struct comp{
         int real;
         int imaginary;    
       };
int main(){
        struct comp n1,n2,result;
        scanf("%d %d",&n1.real,&n1.imaginary);
        scanf("%d %d",&n2.real,&n2.imaginary);
        result.real=n1.real+n2.real;
        result.imaginary=n1.imaginary+n2.imaginary;
        printf("%d+%di\n",result.real,result.imaginary);
         result.real=n1.real-n2.real;
        result.imaginary=n1.imaginary-n2.imaginary;
        if(n1.imaginary>n2.imaginary){
         printf("%d+%di\n",result.real,result.imaginary);            
        }
        else
        printf("%d%di\n",result.real,result.imaginary);   
        return 0;
      }

