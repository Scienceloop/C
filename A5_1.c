#include <stdio.h>

int power(int n, int x){
	
	int i = 1;
	int temp = x;

	while (i<n){
		x = x*temp;
		i++;	
	}
	return x;
	
}

int swap(int a, int b){
	
	int t = a;
	a = b;
	b = t;
	printf("Swaped number are %d, %d \n", a, b);
}

int gcd(int num1, int num2){
	
	if(num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    while(num2 != 0) {
        int remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }

    printf("GCD of the entered numbers is: %d\n", num1);
}


int sum_arr(int n, int arr[n]){
	
	int sum = 0;

	for (int i = 0; i < n; i++){
		sum = sum + arr[i];	
	}

	printf("The Sum is %d \n", sum);
}

int rm_s(char c[100]){
	
	int count1=0,count2=0;char strnew[100];
	while(c[count1]!='\0'){
		if(c[count1]!=' '){
		 strnew[count2]=c[count1];
			count2++;
		}
		count1++;
	}	
	
	for(int i=0;i<count2;i++){
           printf("%c",strnew[i]);
	}

}

void main(){
	int x, n = 0;
	char str[100];
	printf("Enter 2 numbers x and n: ");
	scanf("%d %d", &x, &n);

	int result_a = 	power(n, x);

	printf("The result of X^n is: %d\n", result_a);

	//--------------------------------------------------------
	swap(x, n);

	gcd(x, n);
	
	//--------------------------------------------------------
	
	int arr1[n];

        printf("Enter the elements of array of element %d\n ", n);
        for (int i =0; i < n; i++){
                scanf("%d", &x);
                arr1[i] = x;
        }

	sum_arr(n ,arr1);

	//--------------------------------------------------------
	printf("Enter the string\n");
	scanf(" %[^\n]s", str);
	rm_s(str);	

}
