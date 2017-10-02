void resetRouge() {

  affichageRouge = affichageRougeDepart;
  for (  int i = affichageRougeFin; i <= affichageRougeDepart; i++) {  // assignation de la couleur "eteint" à chaque leds
    stripLedCourse.setPixelColor(i, eteint);
  }
  stripLedCourse.setPixelColor(affichageRouge, rouge);
  stripLedCourse.show();

}

