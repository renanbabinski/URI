#include <stdio.h>
#include <stdlib.h>

int main(){

	int number,work;
	float moneyperhour,salary;

	scanf("%d",&number);
	scanf("%d",&work);
	scanf("%f",&moneyperhour);

	salary = moneyperhour * work;

	printf("NUMBER = %d\n",number);
	printf("SALARY = U$ %.2f\n",salary);

	return 0;
}