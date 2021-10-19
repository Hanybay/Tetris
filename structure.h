#ifndef _STRUCTETRIS
#define _STRUCTETRIS
#define T 4 


typedef int piece[T][T]; 
typedef enum{ A, B, C, D, E, F}FORME;

void init_box(piece box, int t);
void affiche_box(piece box, int t);

void dessine_forme(piece box, FORME l);








#endif