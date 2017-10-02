void loop() {

  affichageScore();
  //lecture de l'etat des boutons de chaques joueurs
  etatBoutonVert = digitalRead(boutonVert);
  etatBoutonRouge = digitalRead(boutonRouge);

  //Serial.println (etatBoutonVert); //pour le debug du bouton vert


  //lorsqu'on appuie bouton vert
  if ((etatBoutonVert != memoireEtatBoutonVert) && (etatBoutonVert == 0))
  {
    if (affichageVert > affichageVertFin-1) {  // joueur vert est arrivé à la ligne de départ
      victoireVert();
      resetVert();
      resetRouge();
    }

    stripLedCourse.setPixelColor(affichageVert, vert);
    stripLedCourse.show();
    affichageVert ++;

    delay(antirebond);
  }
  memoireEtatBoutonVert = etatBoutonVert;


  //lorsqu'on appuie bouton rouge

  if ((etatBoutonRouge != memoireEtatBoutonRouge) && (etatBoutonRouge == 0))
  {
    if (affichageRouge < affichageRougeFin+1) {
      victoireRouge();
      resetRouge();
      resetVert();

    }
    stripLedCourse.setPixelColor(affichageRouge, rouge);
    stripLedCourse.show();
    affichageRouge --;
    delay(antirebond);
  }
  memoireEtatBoutonRouge = etatBoutonRouge;

}
