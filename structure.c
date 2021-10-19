#include <stdio.h>
#include <stdlib.h>
#include <MLV/MLV_all.h>
#include "structure.h"

void multiplication(piece result, int m[][], piece box, int tm, int tb){

    int i, j

}
void tourne_piece(piece box, FORME l){

    int m[2][2]; /* matrice multiplication */
    piece result[4][4];
    init_box(result, 4);
    m[0][0]=0;
    m[0][1]=-1;
    m[1][0]=1;
    m[1][1]=0;
    
    

    multiplication(result, m, box, 2, 4); 

}

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
        case A: box[3][3]=1;box[3][2]=1;box[3][1]=1;box[3][0]=1;break;
        case B: box[2][1]=1;box[3][1]=1;box[3][2]=1;box[3][3]=1;break;
        case C: box[2][3]=1;box[3][1]=1;box[3][2]=1;box[3][3]=1;break;
        case D: box[2][1]=1;box[3][1]=1;box[3][2]=1;box[2][2]=1;break;
        case E: box[2][1]=1;box[2][2]=1;box[3][2]=1;box[3][3]=1;break;
        case F: box[3][1]=1;box[2][3]=1;box[2][2]=1;box[3][2]=1;break;
    }
}

void form_alea(piece box){


}


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


/* test */
