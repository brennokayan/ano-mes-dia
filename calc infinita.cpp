#include<stdlib.h>
#include<stdio.h>
int main (){
	char janeiro[12][12] = {{"Janeiro"},
						   {"Fevereiro"},
						   {"Marco"},
						   {"Abril"},
						   {"Maio"},
						   {"Junho"},
						   {"Julho"},
						   {"Agosto"},
						   {"Setembro"},
						   {"Outubro"},
						   {"Novembro"},
						   {"Dezembro"}
	};
	int i,j =0;
	int dia,mes,ano;
	printf("\t\t\t\t------|Digite sua data de Aniversario ex.: 12/07/2000\n");
	scanf("%d%d%d:\n", &dia, &mes, &ano);
	system("cls");
	printf("Aguarde Calculando\n");
	system("pause");
	system("pause");
	printf("Obrigado por esperar!!! \n");
	system("pause");
	system("cls");
	printf("\n\n\n\t\t\t\t|------%d/%d/%d--- | ---",dia,mes,ano);
	switch(mes){
		case 1:
			printf("%d/%s/%d------|\n\n", dia,janeiro[0],ano);
		break;
		case 2:
			printf("%d/%s/%d------|\n\n", dia,janeiro[1],ano);
		break;
		case 3:
			printf("%d/%s/%d------|\n\n", dia,janeiro[2],ano);
		break;
		case 4:
			printf("%d/%s/%d------|\n\n", dia,janeiro[3],ano);
		break;
		case 5:
			printf("%d/%s/%d------|\n\n", dia,janeiro[4],ano);
		break;
		case 6:
			printf("%d/%s/%d------|\n\n", dia,janeiro[5],ano);
		break;
		case 7:
			printf("%d/%s/%d------|\n\n", dia,janeiro[6],ano);
		break;
		case 8:
			printf("%d/%s/%d------|\n\n", dia,janeiro[7],ano);
		break;
		case 9:
			printf("%d/%s/%d------|\n\n", dia,janeiro[8],ano);
		break;
		case 10:
			printf("%d/%s/%d------|\n\n", dia,janeiro[9],ano);
		break;
		case 11:
			printf("%d/%s/%d------|\n\n", dia,janeiro[10],ano);
		break;
		case 12:
			printf("%d/%s/%d------|\n\n", dia,janeiro[11],ano);
		break;
	}
}
