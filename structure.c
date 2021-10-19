#include <stdio.h>
#include <stdlib.h>
#include <MLV/MLV_all.h>
#include "structure.h"


void init_box(piece box, int t){

    int i, j;
    for(i=0; i<t; i++){
        for(j=0; j<t; j++){
            box[i][j]=0;
        }
    }
}


void affiche_box(piece box, int t){

    int i, j;
    for(i=0; i<t; i++){
        for(j=0; j<t; j++){
            printf("%d ", box[i][j]);
        }
        printf("\n");
    }
}

void dessine_forme(piece box, FORME l){
    switch (l){
        case A:
            box[3][3]=1;box[3][2]=1;box[3][1]=1;box[3][0]=1;
            break;
        case B:
            box[2][1]=1;box[3][1]=1;box[3][2]=1;box[3][3]=1;
            break;
        case C:
            box[2][3]=1;box[3][1]=1;box[3][2]=1;box[3][3]=1;
            break;
        case D:
            box[2][1]=1;box[3][1]=1;box[3][2]=1;box[2][2]=1;
            break;
        case E:
            box[2][1]=1;box[2][2]=1;box[3][2]=1;box[3][3]=1;
            break;
        case F:
            box[3][1]=1;box[2][3]=1;box[2][2]=1;box[3][2]=1;
            break;
    }
}

