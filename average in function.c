#include<stdio.h>
int main(){
   int n,result;
   printf("Enter array value");
   scanf("%d",&n);
   result = avg(n);
   printf("The average is : %d",result);
   }
   int avg (int n)
   {
   int i,sum=0,arr[n],average;
   printf("Enter the values");
   for(i=0;i<n;i++)
    {
   scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
   sum=sum+arr[i];
   }
   printf("Sum is : %d",sum);
   average=sum/n;
   }
