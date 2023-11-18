# A. Configuration de base du switch

## A1. Combien d’adresses MAC peut contenir la table du switch GS308T au maximum ?

Il peut contenir 8k addresse mac.

## A2. A quel vitesse en Mb/s le switch peut-ils commuter des trames ?

A 16 Gb/s

## A3. Quelle est la taille du buffer utilisé pour commutation ? A combien de trames Ethernet de taille maximum et minimum cela correspond ?

512kb

# B. Mise en place du réseau et création d’une boucle réseau

## B5. Comment réagissent les switch ? Est-ce qu’ils sont toujours joignables par ssh ? Est-ce que ping d’un PC à l’autre fonctionne toujours ?

Les switchs clignotent beaucoup (comme en boite).
Pas joignable par ssh no route to host.
Les pings ne passent plus non plus.


## B6. Enlever la boucle du réseau en débranchant l’un des câbles responsables. Comment réagit le switch ?

Lorsqu'on débranche, le switch arretent de clignoter.
Le ping ne fonctionne toujours pas. (on a cassé le switch pour le reparer on a reboot le switch)
Le ssh fonctionne.

## B8. Donner la séquence de traitement/commutation local des paquets sur le switch qui provoque cette boucle pour chaque switch. Est ce que la table du switch contient une entrée pour l'addresse FF:FF:FF:FF:FF:FF ?

La table n'a pas d'entrée pour FF:FF:FF:FF:FF:FF car c'est du broadcast et le but du broadcast est d'envoyé sur toutes les sorties.

# D. Détermination de l’arbre couvrant STP

## D1. Qui est le switch racine ? Pourquoi ? Donner la commande pour le retrouver et faites une capture d’écran.

La racine est le switch S-5. Car sur le S-16 on voit que le port g5 pointe vers la racine

La commande est

```bash
show spanning tree
```

## D2. Quels sont les ports racines ? Les ports désignés ? les ports bloqués ?

Ports racines : g5 du switch 16
Ports designées : G8, du switch 16 et G2,G5 du switch 5

## D3. Dessinez l’arbre couvrant construit par le protocole STP.

# E. Extension du réseau et vérification de topologie avec Link Layer Discovery Protocol (LLDP)

## E1. A quoi sert le champs TTL dans le tableau indiqué par le protocole LLDP ? Aidez vous de la documentation sur LLDP pour trouver la réponse.

Le TTL est Time to live c'est à dire le temps que les données restent dans la table du switch

# F. Création d’une boucle étendue

## F1. Comment réagissent les switches sur cette nouvelle boucle ?

## F2. Tentez de retirer la boucle à la main sans couper la connectivité entre les PC. Arrivez-vous à déterminer où se trouve la boucle facilement ?

# G. Arbres couvrant sur la nouvelle topologie

## G1. Réactiver STP sur tous les switches et déterminer la racine construite par l’algorithme.

## G2. Est-ce que la racine à changé par rapport à la topologie précédente ? Pourquoi ?

## G3. Dessiner l’arbre couvrant de la topologie étendue.

## G4. Pouvez-vous prédire quel autre switch sera élu racine si on débranche le switch racine de la topologie ? Comment ?

## G5. Vérifier si votre prédiction est juste en débranchant le switch racine.

## G6. Combien de temps prends la ré-élection du la nouvelle racine ? Déterminez le en pingant le switch à intervalle d’une seconde pendant le changement. Montrez par un capture d’écran de la ligne de commande que la racine a effectivement changé en utilisant la commande:


## G7. Redessinez le nouvel arbre couvrant sur une feuille avec indication des ports racines et des ports désignés.

## G8. Combien de temps prends environ la ré-électrion du switch racine ? Expliquez où est passé ce temps ?

## G10. On aimerait rajouter un switch sur la topologie, sans qu’il devienne racine. Comment doit-on le configurer pour être sûr que celà ne sera pas le cas ?

# H. Reflexions et fin du labo.

## H1. Comment STP converge-t-il ? Faites une recherche sur Internet sur les états possibles des ports lorsque la convergence de STP et expliquez ce qu’ils signifient