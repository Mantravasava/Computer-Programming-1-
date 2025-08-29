#include <stdio.h>

int main() {
    int i,n;
    int sum=0;
    scanf("%d",&n);
    printf("The sum numbers divisible by 3:\n");

    for(i = 1; i <= n; i++) {
    if (i%3==0){
    sum=sum+i;}


    }printf("%d\n",sum);



}
