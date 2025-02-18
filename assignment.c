#include<stdio.h>

int main(){
int x,y,z,maxi;
printf("------------------To find biggest number----------------------\n");
printf("Enter value x :");
scanf("%d\n",x);
printf("Enter value y :");
scanf("%d\n",y);
printf("Enter value z :");
scanf("%d\n",z);
maxi = (x>y && x>z)?x:(y>z)?y:z;


return 0;









}
