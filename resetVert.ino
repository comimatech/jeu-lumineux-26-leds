void resetVert() {

  affichageVert = affichageVertDepart;
  for (  int i = affichageVertDepart; i <= affichageVertFin; i++) {  // assignation de la couleur "eteint" à chaque leds
    stripLedCourse.setPixelColor(i, eteint);
  }
  stripLedCourse.setPixelColor(affichageVert, vert);
  stripLedCourse.show();

}
