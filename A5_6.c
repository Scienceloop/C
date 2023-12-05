#include<stdio.h>

int reverse(int n){
        int rev=0,d=0;

        while(n!=0){

                d = n%10;
                rev = rev*10+d;
                n /= 10;

        }
        return rev;
}
int main(){
        int num1=0;
        int num2=0;

        printf("Enter a number\n");
        scanf("%d.%d",&num1, &num2);
        printf("The reversed number is %d.%d\n",reverse(num2), reverse(num1));

        return 0;
}
