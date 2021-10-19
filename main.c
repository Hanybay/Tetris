#include <stdio.h>
#include <stdlib.h>
#include "structure.h"
#include <MLV/MLV_all.h>
#define T 4


int main(){


    piece p1, p2, p3, p4, p5, p6;
    init_box(p1, T);
    dessine_forme(p1, A);
    affiche_box(p1 ,T);

    printf("\n");
    init_box(p2, T);
    dessine_forme(p2, B);
    affiche_box(p2 ,T);
    printf("\n");

    init_box(p3, T);
    dessine_forme(p3, C);
    affiche_box(p3 ,T);
    printf("\n");

    init_box(p4, T);
    dessine_forme(p4, D);
    affiche_box(p4 ,T);
    printf("\n");

    init_box(p5, T);
    dessine_forme(p5, E);
    affiche_box(p5 ,T);
    printf("\n");
    
    init_box(p6, T);
    dessine_forme(p6, F);
    affiche_box(p6 ,T);
    printf("\n");

 
    return 1;

}