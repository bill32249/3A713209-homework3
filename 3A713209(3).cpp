#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float high,weight,BMI;
	printf("請輸入您的身高(單位為公尺):");
	scanf("%f",&high);
	printf("請輸入您的體重(單位為公斤):");
	scanf("%f",&weight);
	float x = high*high;
	BMI = weight/x;
	printf("您的BMI是%f:",BMI);
	system("PAUSE");	
	return 0;
}
