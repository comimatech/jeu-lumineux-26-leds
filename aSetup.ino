void setup() {

  Serial.begin(9600);


  afficheurScore.init();  //initialisation de l'afficheur
  afficheurScore.set(4);//BRIGHT_TYPICAL = 2,BRIGHT_DARKEST = 0,BRIGHTEST = 7;

  pinMode(boutonVert, INPUT_PULLUP); // on appuie et on a LOW
  pinMode(boutonRouge, INPUT_PULLUP); // on appuie et on a LOW




  //initialisation de la partie strip led
  stripLedCourse.begin();  //demarrage des leds


  for (  int i = 0; i < 26; i++) {  // assignation de la couleur "eteint" à chaque leds
    stripLedCourse.setPixelColor(i, eteint);
  }

  stripLedCourse.setPixelColor(affichageRouge, rouge);  // allume la premiere led
  stripLedCourse.setPixelColor(affichageVert, vert);   // allume la premiere led


  stripLedCourse.show(); //envoi des couleurs à chaques led - sans cela rien ne s'affiche

  affichageScore();


}
