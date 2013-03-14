/*
Quiz2 Fisica Computacional
Nombre:Jorge Luis Mayorga
Codigo:201110382
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//-----------------------------------------------------//
// Declaracion de funciones auxiliares //
//-----------------------------------------------------//
float fx(float x);
//-----------------------------------------------------//
// Funcion MAIN //
//-----------------------------------------------------//
int main(int argc, char **argv){

 float a=0.0;
 float b=0.0;
 float h=0.0;

 int i=0;
 int numerorectangulos=0;

 float x=0.0;
 float f=0.0;
 float acum=0.0;

 a=atof(argv[1]);
 b=atof(argv[2]);
 h=atof(argv[3]);

 x=a;
 i=0;
 acum=0.0;
 f=0.0;

do{
 x+=h;
 f=fx(x);
 acum+=f*h;
}

while(x<(b-h));
 
printf("La integral es %f \n",acum);

return 0;
}
//Funcion1:fx//
float fx(float x){
float f=0.0;
f=1/(sqrt(1+cos(x)*sin(x)));
return f;
}




