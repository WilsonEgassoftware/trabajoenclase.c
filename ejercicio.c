#include <stdio.h>
int main (){
    int valor;
    int suma = 0;

    printf ("Ingrese un numero positivo:");
    scanf("%d",&valor);

    if (valor < 0){
        printf("Solo puede usar numero mayores a 0.");
        }else{
            for(int i = 1; i <= valor; i++){
                suma = suma + i;
            }
    };
   

}