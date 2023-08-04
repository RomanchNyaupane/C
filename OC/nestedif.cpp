#include <stdio.h>

int main(){
	float a,b,c;
	printf("Enter first number: ");
	scanf("%f",&a);
	printf("Enter second number: ");
	scanf("%f",&b);
	printf("Enter third number: ");
	scanf("%f",&c);
	if(a>b && a>c){
		printf("%0.3f is the greatest number.\n",a);
	}else {
		if(c>b && c>a){
			printf("%0.3f is an greatest number.\n",c);
		}else{
			if(b>a && b>c){
				printf("%0.3f is an greatest number.\n",b);
			}
			else{
				printf("All three numbers  are equal");
			}

	}
}
}
