#ifndef _STRUCTETRIS
#define _STRUCTETRIS
#define T 4 


typedef struct {

    short int forme[T][T];
    short int posx;
    short int posy;

}piece; 
typedef enum{ A, B, C, D, E, F}FORME;

void init_box(piece box, int t);
void affiche_box(piece box, int t);

void dessine_forme(piece box, FORME l);

void tourne_piece(piece box, FORME l);








#endif