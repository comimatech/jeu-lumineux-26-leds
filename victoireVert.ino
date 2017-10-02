void victoireVert() {

  tempsAnimationVictoire = millis();

  scoreVert++;
  affichageScore();


  do {
    tempsActuel = millis();

    if (affichageVert > affichageVertFin) {
      resetVert();
    }
    stripLedCourse.setPixelColor(affichageVert, vert);
    stripLedCourse.show();
    affichageVert ++;
    delay(25);



    //   if ( !(digitalRead(BOUTON)) ) break;  // Bouton appuyé ?
    //   delay(50);
  } while ( dureeAnimationVictoire > tempsActuel - tempsAnimationVictoire );

  if (scoreVert >= scoreMax) {
    resetScore();
  }

}

