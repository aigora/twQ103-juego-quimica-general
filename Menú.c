#include <stdio.h>
int main(){
    int opcion;
    
    printf("JUEGO QUIMICA\n");
    printf("MENU\n");
    do{ 
        printf("Elige una opcion:\n");
        printf("1-Jugar\n");
        printf("2-Puntuaciones\n");
        printf("3-Creditos\n");
        printf("4-Salir\n");
        scanf("%i",&opcion);
        
    switch(opcion){
        case 1:printf("Empieza el juego\n");
        break;
        case 2:printf("Puntuaciones de los jugadores\n");
        break;
        case 3:printf("Los creditos\n");
        break;
        case 4:printf("Has salido del juego");
        break;
        }
    }
    while(opcion!=4); // El menu se repite hasta que el usuario elige salir.
}


