#include<stdio.h>

int main(){
int n,i;
int factorial=1;
printf("Enter the factorial no;\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
factorial=factorial*i;
printf("factorial ;%d",factorial);
}
