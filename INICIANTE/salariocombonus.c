#include <stdio.h>
#include <stdlib.h>

int main(){

	char nome[20];
	double fixo,montante,salary;

	fgets(nome,20,stdin);
	scanf("%lf",&fixo);
	scanf("%lf",&montante);

	salary = (montante * 0.15) + fixo;

	printf("TOTAL = R$ %.2lf\n",salary);

	return 0;
}