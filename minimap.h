#ifndef functionminimap_H_INCLUDED
#define functionminimap_H_INCLUDED

struct minimap
{
	SDL_Surface* mini_map;
	SDL_Rect pos_minimap;
	SDL_Surface* mini_hero;
	SDL_Rect pos_minihero;
};
typedef struct minimap minimap; 

void initminimap(minimap* m);
void MAJMinimap (SDL_Rect* pos_perso,minimap *m , SDL_Rect camera,int redimensionnement);
void afficherminimap( minimap m,SDL_Surface *screen);
void sauvegarder (int score , char nomjoueur[] , char nomfichier[]);
void meilleur(char nomfichier[] , int * score , char nomjoueur[]);
void free_minimap(minimap* mp);

#endif 
