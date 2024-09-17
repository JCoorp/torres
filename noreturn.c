#include  <stdio.h>
int potencia(int x){
    return x * x; 
}

void mensaje(){
    printf("esta funcion no retona nada\n");
}

int suma(int a, int b){
    return a+ b;
}

int main(){
    int num= 5;
    int resultado = potencia(num); 
    printf("la potencia de 5 es: %d\n", num, resultado);
    
    mensaje();

    int res =suma (5,3);
    printf("ls suma de 5 y 3 es; %d\n" , res);

    return 0;


}