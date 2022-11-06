#include<stdio.h>
int recurcive(int n){
    if(n%2==0){
        return n/2;
    }
    else return 3*n+1;
}
int main(){
    int sum= 0;
    int n;
    sum = n;
    printf("please enter an number");
    scanf("%d",&n);
    while(n>0){
        int p = recurcive(n);
        sum = sum + p;
    }
    printf("sum =   %d",sum);
    return 0;
}
 