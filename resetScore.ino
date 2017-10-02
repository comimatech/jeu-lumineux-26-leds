void resetScore() {
  resetRouge();
  resetVert();
  for (int i = 0 ; i < 5 ; i++) {
    affichageScore();
    delay (1000);
    afficheurScore.init();
    delay (200);

  }
  scoreRouge = 0;
  scoreVert = 0;
}

