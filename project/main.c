#include <stdio.h>
#include <stdlib.h>
typedef struct{// con esto se define una estructura
char nombre[50];
int nota;
int numero;


}eAlumno;// este es el nombre que recibe la estructura
int main()
{
eAlumno unAlumno;// esto es para llamar a la estructura
printf("ingrese nota :");
scanf("%d",&unAlumno.nota);//para llamar la estructura se requiere el punto y que parte de la estructura estoy llamando.
printf("ingrese alumno :");
scanf("%s",&unAlumno.nombre);

printf("el numero ingresado es : %d",unAlumno.nota);
printf("\nel alumno ingresado es : %s",unAlumno.nombre);
    return 0;
}
