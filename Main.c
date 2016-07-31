#include <stdio.h>
int main(int argc, char *argv[]) {
        
	int opcion;
	printf("Ingrese un comando");
	scanf("%d",&opcion);
	switch(opcion)
	{
		case 1:
			printf("uno\n");
			break;
		case 2:
			printf("dos\n");
			break;
		case 3:
			printf("tres\n");
			break;
		case 4:
			printf("cuatro\n");
			break;
		case 5:
			printf("cinco\n");
			break;
		case 6:
			printf("seis\n");
			break;
		case 7:
			printf("siete\n");
			break;
		case 8:
			printf("ocho\n");
			break;
		case 9:
			printf("nueve\n");
			break;
		default:
			printf("Default\n");
			break;
	}
}
