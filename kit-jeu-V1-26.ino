

//declaration d'un delai antirebond
int antirebond = 100;

//declaration des boutons

int boutonVert = 8;              //entree pin bouton vert
boolean etatBoutonVert = 0;        //etat du bouton dans une variable
boolean memoireEtatBoutonVert = 0; //memoire de l'état du bouton pour que meme avec le doigt appuyé
int affichageVertDepart = 0;
int affichageVertFin = 12;
int affichageVert = affichageVertDepart; //selection de la led vert à afficher au depart


int boutonRouge = 7;
boolean etatBoutonRouge = 0;        //etat du bouton dans une variable
boolean memoireEtatBoutonRouge = 0; //memoire de l'état du bouton pour que meme avec le doigt appuyé
int affichageRougeDepart = 25;
int affichageRougeFin = 13;
int affichageRouge = affichageRougeDepart; //selection de la led rouge à afficher au depart

//declaration du bandeau de led programmable WS2812  60mA par led (20mA par couleur)

#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel stripLedCourse = Adafruit_NeoPixel(26, 10, NEO_GRB + NEO_KHZ800); // 26 est le nombre de leds et 10 est le pin de l'arduino
//declarations des couleurs led à afficher
uint32_t vert = stripLedCourse.Color(0, 50, 0);//(rouge , vert , bleu ) entre 0 et 255
uint32_t rouge = stripLedCourse.Color(50, 0, 0);// choix de la couleur et assignation au joueur "vert" ou "rouge"
uint32_t eteint = stripLedCourse.Color(0, 0, 0);


//gestion du temps de sequences
unsigned long tempsActuel;
unsigned long tempsAnimationVictoire;
int dureeAnimationVictoire = 3000;


//gestion de l'afficheur des score
#include "TM1637.h"
#define CLK 4//pins definitions for TM1637 and can be changed to other ports       
#define DIO 5
TM1637 afficheurScore(CLK, DIO);


//gestion des scores
int scoreVert = 0;
int scoreRouge = 0;
int scoreMax = 3;
