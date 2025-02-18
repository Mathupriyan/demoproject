#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("%s",evenodd(n));
    return 0;
}
int evenodd(int n)
{
     if(n%2==0){
        printf("The number is even");
     }
     else{
         printf("The number is odd");
      }
     return evenodd;

}


