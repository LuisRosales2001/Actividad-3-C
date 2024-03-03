#include <stdio.h>
#include <string.h>

int main() {
    char moneda_a_convertir[100];
    printf("¿Qué tipo de moneda tiene?: \n");
    fgets(moneda_a_convertir, sizeof(moneda_a_convertir), stdin);
    moneda_a_convertir[strcspn(moneda_a_convertir, "\n")] = '\0'; // Elimina el carácter de nueva línea

    char moneda_convertida[100];
    printf("¿Qué tipo de moneda necesita?: \n");
    fgets(moneda_convertida, sizeof(moneda_convertida), stdin);
    moneda_convertida[strcspn(moneda_convertida, "\n")] = '\0'; 

    float dinero;
    printf("¿Cuánto dinero tiene?: \n");
    scanf("%f", &dinero); 

    if (strcmp(moneda_a_convertir, "dolar") == 0) {
        if(strcmp(moneda_convertida, "euro") == 0){
            dinero = dinero * 0.92;
        }
        else{
            dinero = dinero * 7.79;
        }
    }
    else if (strcmp(moneda_a_convertir, "euro") == 0){
        if(strcmp(moneda_convertida, "dolar") == 0){
            dinero = dinero * 1.08;
        }
        else{
            dinero = dinero * 8.44;
        }
    }
    else{
        if(strcmp(moneda_convertida, "dolar") == 0){
            dinero = dinero * 0.13;
        }
        else{
            dinero = dinero * 0.12;
        }
    }

    printf("El resultado es: %.2f\n", dinero); // Imprime el resultado como un flotante con 2 decimales

    return 0;
}
