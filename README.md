# PhysioPods-DIY

**Salut #TeamKiné !**

Voici ma version DIY des pods, croisés avec le jeu Simon auquel on a tous joué gamin !

Insérer images

Le principe est simple : un boitier va s'allumer aléatoirement, il faut ensuite appuyer sur le bouton correspondant. Si c'est correct : toutes les Leds s'allument, sinon uniquement la rouge. Au bout de 5 tours, 2 Leds vont ensuite s'allumer successivement. A la fin de l'affichage _(et seulement à la fin)_, il faudra appuyer sur les Leds qui se sont affichées, et dans l'ordre ! Le nombre de tours est réglable facilement dans le code, j'ai même ajouté une option de points négatifs en cas d'erreur. Un signal sonore est également joué au moment de l'affichage par un buzzer actif _(à récupérer sur une vieille imprimante par exemple)_.

Insérer vidéo démo

Le fonctionnement repose sur un Arduino Nano dans un boitier central et 4 satellites reliés par des câbles à 3 fils. Un pour le neutre mis en commun, un pour la Led et un pour le footswitch. J'ai ajouté une résistance de 220 ohm pour protéger chaque Led.

Cette version est la seconde : elle possède maintenant une batterie intégrée _(recyclée d'un smartphone)_ connectée à un module de charge et à l'Arduino en passant par un interrupteur. J'ai déporté une prise USB C à la paroi du boitier pour le brancher facilement
