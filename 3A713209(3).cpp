#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float high,weight,BMI;
	printf("�п�J�z������(��쬰����):");
	scanf("%f",&high);
	printf("�п�J�z���魫(��쬰����):");
	scanf("%f",&weight);
	float x = high*high;
	BMI = weight/x;
	printf("�z��BMI�O%f:",BMI);
	system("PAUSE");	
	return 0;
}
