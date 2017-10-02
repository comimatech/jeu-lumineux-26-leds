void victoireRouge() {

  tempsAnimationVictoire = millis();

  scoreRouge++;
  affichageScore();
  do {
    tempsActuel = millis();

    if (affichageRouge < affichageRougeFin) {
      resetRouge();
    }
    stripLedCourse.setPixelColor(affichageRouge, rouge);
    stripLedCourse.show();
    affichageRouge --;
    delay(25);

    //   if ( !(digitalRead(BOUTON)) ) break;  // Bouton appuyé ?
    //   delay(50);
  } while ( dureeAnimationVictoire > tempsActuel - tempsAnimationVictoire );

  if (scoreRouge >= scoreMax) {
    resetScore();

  }

}

