#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define BUFFERTAM 150
void main()
{
    menu();
    return 0;
}

void menu()
{
    char comando[]=" ";

    printf("root@201314292$ ");
    char buffer[BUFFERTAM];

    while(fgets(comando,BUFFERTAM,stdin) != NULL)
    {
        lexico(comando);
        printf("root@201314292$ ");
    }
}

void lexico(char cadena[])
{
    char espacio[] = " ";

    char *tocken = NULL;

    tocken = strtok( cadena, espacio);

    while( tocken != NULL ) {
        printf( "Tocken : %s \n", tocken);

        tocken = strtok( NULL, espacio);
    }



/*
    switch(letra)
    {
        case 'a':printf("aaa");break;
        case 'b':printf("bbb");break;
        case 'c':printf("ccc");break;
        case 'd':printf("ddd");break;
        case 'e':printf("eee");break;
        default:printf("Def");break;

    }*/
}
