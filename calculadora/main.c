#include <stdio.h>

int main(){
 int a,b,c;
 float f,g,h;
 char op, op2;

 printf("Selecciona una opciòn\n");
 printf("1. Operaciones con enteros\n");
 printf("2. Operaciones con reales\n");

 scanf("%c", &op);

 printf("Selecciona una opciòn\n");
 printf("1. Suma\n");
 printf("2. Resta\n");
 printf("3. Multplicaciòn\n");
 printf("4. Divisiòn\n");
 printf("5. Mòdulo\n");
 printf("6. Salir\n");
scamf("%c", &op);

 if(op == '1')

{
    printf("Ingresa los dos nùmeros con los que quieres operar");
 scanf("%d %d", &a, &b);
    switch (op2)
    {
case 1: 
 c = a+b;
 break;
case 2: 
 c = a-b;
 break;
case 3:
 c = a*b;
 break; 
case 4:
 c = a/b;
 break;
case 5:
 c = a%b; 
 break;
 default: 
return 0;
}
printf("El resultado ed %d\n", c);

}else{
 printf("Ingresa los dos nùmeros con los que quieres operar");
 scanf("%f %f", &f, &g);
  switch (op2)
    {
case 1: 
 h = f+g;
 break;
case 2: 
 h = f-g;
 break;
case 3:
 h = f*g;
 break; 
case 4:
 h = f/g;
 break;
case 5:
 h = (int)f%(int)g; 
 break;

default: 
  return 0;

}
print("El resultado es %d\n", c);
}


}