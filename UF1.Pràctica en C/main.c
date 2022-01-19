/*
 * main.c
 *
 *  Created on: Jan 12, 2022
 *      Author: admin-pg
 */
#include <stdio.h>
#define ROWS 11
#define COLS  11
void main() {
    int tauler[ROWS][COLS]= {{0,1,2,3,4,5,6,7,8,9,10},{1,0,0,0,0,0,0,0,0,0,0,0},{2,0,0,0,0,0,0,0,0,1,0},{3,0,0,1,0,1,1,0,0,1,0},{4,0,0,1,0,0,0,0,0,1,0},{5,0,0,1,0,0,0,0,0,0,0},{6,0,0,0,0,1,1,1,1,0,0},{7,0,0,0,0,0,0,0,0,0,0},{8,0,0,0,0,0,0,0,0,0,0},{9,0,0,1,1,1,1,1,0,0,0},{10,0,0,0,0,0,0,0,0,0,0}};
    int level,f, i=0, j=0,n;
    char lletra ='A', col;
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("°°°°°°°°°°^^^^^^^^^^^^^^^^^^^^^^^^^°°°°°°°°°°\n");
    printf("°°°°°°°°°°|                       |°°°°°°°°°°\n");
    printf("°°°°°°°°°°|      THE BATTLESHIP   |°°°°°°°°°°\n");
    printf("°°°°°°°°°°|         GAME          |°°°°°°°°°°\n");
    printf("°°°°°°°°°°|                       |°°°°°°°°°°\n");
    printf("°°°°°°°°°°^^^^^^^^^^^^^^^^^^^^^^^^^°°°°°°°°°°\n");
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
    printf("           BENVINGUTS AL JOC :) !!\n");
    printf("\n");
    printf("            Escull un nivell: \n");
    printf("\n");
    printf("  _________________\n");
    printf(" |                 |\n");
    printf(" | 1_ Nivell fàcil |\n");
    printf(" | 2_ Nivell mitjà |\n");
    printf(" | 3_ Nivell alt   |\n");
    printf(" |_________________|\n");
    printf("\n");
    printf("- Introdueix el número del nivell:\n");
    scanf("%d", &level);
    while (level<1 || level>3){
        printf("El valor %d no es vàlid !\n ", level);
        printf("-Introdueix un numero del nivell vàlid:\n");
        scanf("%d", &level);
    }//Si el número introduit no és 1,2,3 , ho tornara ha demanar.

    for (i=0; i<11;i++){
        for(j=0;j<11;j++){
            if(i==0 && j==0){
                printf(" .  ", tauler[i][j]);
            } else if (i==0 ){
                printf("  %c ", lletra);
                lletra++;
            }
            else if (j==0 ){
                printf(" %d  ", tauler[i][j]);
            }
            else if(i==10){
                printf("[]  ", tauler[i][j]);

            }else{
                printf(" [] ", tauler[i][j]);
            }

        }
        printf("\n");
    }
    // Impresió del tauler canviant la primera fila de números per lletres.
    printf("\n");
    printf("-Introdueix el número de fila: \n");
    scanf("%d", &f);
    while(f>11){
        printf("No és vàlid!");
        printf("-Introdueix un número de fila vàlid: \n");
        scanf("%d", &f);
    }// tornar a demanar el número si és més gran que 11.
    printf("\n");
    printf("Introdueix la lletra de la columna: \n");
    scanf("%s", &col);
    while(col > 'J' || islower(col)){
        printf("No és vàlid!\n");
        printf("-Introdueix la lletra de la columna vàlida: \n");
        scanf("%s", &col);
    }// Validar si la lletra introduïda està en majúscules i si està entre la A i la J.

    switch (col){
    case 'A':
        n=1;
        break;
    case 'B':
        n=2;
        break;
    case 'C':
        n=3;
        break;
    case 'D':
        n=4;
        break;
    case 'E':
        n=5;
        break;
    case 'F':
        n=6;
        break;
    case 'G':
        n=7;
        break;
    case 'H':
        n=8;
        break;
    case 'I':
        n=9;
        break;
    case 'J':
        n=10;
        break;
    }//conversió de lletra a número per poder comparar i saber quina posició indica, ja que la matriu es en números.
    lletra ='A';
    for (i=0; i<11;i++){
        for(j=0;j<11;j++){
            if(i==0 && j==0){
                printf(" .   ", tauler[i][j]);
            }
            else if (i==0 ){
                printf(" %c  ", lletra);
                lletra++;
            }
            else if (j==0 ){
                printf(" %d  ", tauler[i][j]);

            }
            else if(f==i && n==j){
                if(tauler[i][j]==1){
                    printf(" [x]", tauler[i][j]);
                }
                else {
                    printf(" [] ", tauler[i][j]);
                }
            }
            else if(i==10){
                printf("[]  ", tauler[i][j]);

            }else{
                printf(" [] ", tauler[i][j]);
            }
        }
        printf("\n");
    }  // Impresió del tauler canviant la primera fila de números per lletres. I si les cordenades coinsideixen on hi ha un vaixell es printarà una X.
}


