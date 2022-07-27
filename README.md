# PhysioPods-DIY

**Salut la #TeamKiné !**

Voici ma version DIY des pods, croisés avec le jeu Simon auquel on a tous joué gamin !

![IMG20220727152511](https://user-images.githubusercontent.com/110107959/181264635-5d24c929-0560-473b-9b8d-9cae3c1c27a5.jpg)
![IMG20220727150937](https://user-images.githubusercontent.com/110107959/181264683-26405de4-4932-4a72-a8bf-b01ab4a0a100.jpg)
![IMG20220727150944](https://user-images.githubusercontent.com/110107959/181264690-f1019612-c155-4e71-aeed-6942a2da3a66.jpg)
![IMG20220727151003](https://user-images.githubusercontent.com/110107959/181264694-2bbc43c6-625d-45b6-9c70-518c522f7c40.jpg)


Le principe est simple : un boitier va s'allumer aléatoirement, il faut ensuite appuyer sur le bouton correspondant. Si c'est correct : toutes les Leds s'allument, sinon uniquement la rouge. Au bout de 5 tours, 2 Leds vont ensuite s'allumer successivement. A la fin de l'affichage _(et seulement à la fin)_, il faudra appuyer sur les Leds qui se sont affichées, et dans l'ordre ! Le nombre de tours est réglable facilement dans le code, j'ai même ajouté une option de points négatifs en cas d'erreur. Un signal sonore est également joué au moment de l'affichage par un buzzer actif _(à récupérer sur une vieille imprimante par exemple)_.

Le fonctionnement repose sur un Arduino Nano dans un boitier central et 4 satellites reliés par des câbles à 3 fils. Un pour le neutre mis en commun, un pour la Led et un pour le footswitch. J'ai ajouté une résistance de 220 ohm pour protéger chaque Led. Pensez à ajouter quelques patins en caoutchouc sous les satellites pour éviter qu'ils ne dérapent ! J'ai ajouté du scotch d'électricien pour isoler le module de charge du boitier et le coller facilement avec de la colle chaude.

![IMG20220727151100](https://user-images.githubusercontent.com/110107959/181265048-a442c9a1-c8b6-4a1f-b23d-cf75906f5eb4.jpg)
![IMG20220727151200](https://user-images.githubusercontent.com/110107959/181265054-f651ca59-0117-4cf8-b632-0d7205291248.jpg)
![IMG20220727151219](https://user-images.githubusercontent.com/110107959/181265056-2b456526-99e6-4946-9bcb-25926902a042.jpg)
![IMG20220727151236](https://user-images.githubusercontent.com/110107959/181265066-b0ef9787-7a8a-46ec-a5a7-301f26d5ac8e.jpg)
![IMG20220727151239](https://user-images.githubusercontent.com/110107959/181265069-a003c9c4-b08f-4a09-9037-b06f452dee6f.jpg)
![IMG20220727151244](https://user-images.githubusercontent.com/110107959/181265119-fa1b7d09-0130-48c8-b721-9383f242e16d.jpg)
![IMG20220727151255](https://user-images.githubusercontent.com/110107959/181265137-703fb360-15ed-4767-82c9-0fe9d2a7bbaa.jpg)
![IMG20220727151300](https://user-images.githubusercontent.com/110107959/181265148-970cf87b-5b4a-4d00-a590-128b79bb8bf9.jpg)
![IMG20220727151310](https://user-images.githubusercontent.com/110107959/181265158-7f7375e3-ef61-4945-a15c-ac4ca3763dc0.jpg)


Cette version est la seconde : elle possède maintenant une batterie intégrée _(recyclée d'un smartphone)_ connectée à un module de charge et à l'Arduino en passant par un interrupteur. J'ai déporté une prise USB C à la paroi du boitier pour le brancher facilement. J'ai aussi utilisé des connecteurs Dupont pour facilement brancher et débrancher en cas de panne ou amélioration. C'est également bien utile pour éviter les faux-contacts avec d'autres cables ou le boitier !

J'ajouterai plus de commentaires dans le code pour s'y retrouver !

Modifications  potentielles :
- Création d'un menu au démarrage pour sélectionner une difficulté et aller directement au niveau 2 ou 3 en appuyant sur l'interrupeur bleu, vert, jaune ou rouge.
- Affichage du nombre de points à l'aide de quelques leds RGB avec Data connectées en série et ressortant du boitier principal
- Régler à l'usage les durées d'affichage et de sensibilité avant l'appui
