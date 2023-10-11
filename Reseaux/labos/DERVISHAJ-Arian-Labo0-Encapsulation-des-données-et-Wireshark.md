# Encapsulation des données et Wireshark <!-- omit from toc -->

## Labo 0 <!-- omit from toc -->

### Arian Dervishaj <!-- omit from toc -->

<div class="page"/>

## Table des matières <!-- omit from toc -->

- [A. Capture d’un message ping avec Wireshark](#a-capture-dun-message-ping-avec-wireshark)
  - [A.1 Addresse IPV4 du réseau](#a1-addresse-ipv4-du-réseau)
- [B. Analyse des champs du protocole ICMP](#b-analyse-des-champs-du-protocole-icmp)
  - [B.1 Trouvez, pour les messages ICMP request : l’adresse IP source et l’adresse IP destination](#b1-trouvez-pour-les-messages-icmp-request--ladresse-ip-source-et-ladresse-ip-destination)
  - [B.2 Faites de même pour les messages ICMP response. Que remarquez-vous ?](#b2-faites-de-même-pour-les-messages-icmp-response-que-remarquez-vous-)
  - [B.3 Pour le champs destination, avez-vous la même valeur de vos collègues ?](#b3-pour-le-champs-destination-avez-vous-la-même-valeur-de-vos-collègues-)
  - [B.4 Trouvez, pour les messages ICMP request et response, l’adresse ethernet source et destination](#b4-trouvez-pour-les-messages-icmp-request-et-response-ladresse-ethernet-source-et-destination)
    - [Request](#request)
    - [Reply](#reply)
  - [B.5 Que remarquez-vous ?](#b5-que-remarquez-vous-)
- [C. Encapsulation](#c-encapsulation)
  - [C.1 Décrivez, en détails comment est encapsulé un message ICMP dans un paquet IP, dans une trame Ethernet vers google.com](#c1-décrivez-en-détails-comment-est-encapsulé-un-message-icmp-dans-un-paquet-ip-dans-une-trame-ethernet-vers-googlecom)
  - [C.2 pingez maintenant bbb.hesge.ch et refaites la même analyse que pour google.com. Est-ce que les adresses Ethernet source et destination ont changé ? Même question pour les adresses IP source et destination](#c2-pingez-maintenant-bbbhesgech-et-refaites-la-même-analyse-que-pour-googlecom-est-ce-que-les-adresses-ethernet-source-et-destination-ont-changé--même-question-pour-les-adresses-ip-source-et-destination)
  - [C.3 pinger maintenant \<www.infomaniak.ch\>, Est-ce que les adresses ethernet et destination on changé par rapport à google.com ? Pouvez-vous expliquer pourquoi à l’aide de ce que vos savez sur l’encapsulation ? Est-ce les adresses IP ont changé par rapport à google.com ?](#c3-pinger-maintenant-wwwinfomaniakch-est-ce-que-les-adresses-ethernet-et-destination-on-changé-par-rapport-à-googlecom--pouvez-vous-expliquer-pourquoi-à-laide-de-ce-que-vos-savez-sur-lencapsulation--est-ce-les-adresses-ip-ont-changé-par-rapport-à-googlecom-)
  - [D.1 Pingez l’adresses IP de vos/vôtre collègues de classe](#d1-pingez-ladresses-ip-de-vosvôtre-collègues-de-classe)

<div class="page"/>

## A. Capture d’un message ping avec Wireshark

### A.1 Addresse IPV4 du réseau

10.136.205.47

## B. Analyse des champs du protocole ICMP

### B.1 Trouvez, pour les messages ICMP request : l’adresse IP source et l’adresse IP destination

**Source** : 10.136.205.47

**Destination** : 172.217.168.78

L'addresse source est la même addresse que l'on a noté à la quesiton A.1.

### B.2 Faites de même pour les messages ICMP response. Que remarquez-vous ?

**Source** : 172.217.168.78

**Destination** : 10.136.205.47

Les addresses sont inversées par rapport à la question B.1.

### B.3 Pour le champs destination, avez-vous la même valeur de vos collègues ?

Non ?

### B.4 Trouvez, pour les messages ICMP request et response, l’adresse ethernet source et destination

#### Request

- Source : IntelCor_b3:23:8d (d4:d8:53:b3:23:8d)
- Destination : CheckPoi_a2:ce:08 (00:1c:7f:a2:ce:08)

![Addresse Ethernet Request](../images/../../images/Reseau/labo0/Addr-Ethernet-Request.png)

#### Reply

- Source : CheckPoi_a2:ce:08 (00:1c:7f:a2:ce:08)
- Destination : IntelCor_b3:23:8d (d4:d8:53:b3:23:8d)

![Addresse Ethernet Reply](../images/../../images/Reseau/labo0/Addr-Ethernet-Reply.png)

### B.5 Que remarquez-vous ?

L'addresse source en request est l'addresse destination en reply.
L'addresse destination en request est l'addresse source en reply.

## C. Encapsulation

### C.1 Décrivez, en détails comment est encapsulé un message ICMP dans un paquet IP, dans une trame Ethernet vers google.com

Couche Application (7) :
L'utilisateur exécute une commande ping dans un terminal.

Couche Transport (4) :
Le message ICMP est transmis à la couche IP.

Couche Réseau (3) :
L'adresse IP de destination est déterminée en résolvant le nom "google.com" en une adresse IP grâce à des protocoles de résolution DNS.
Le message ICMP est encapsulé dans un paquet IP. L'adresse IP source et l'adresse IP de destination sont spécifiées dans l'en-tête IP.

Couche Liaison de données (2) :
Le paquet IP est encapsulé dans une trame Ethernet.
L'adresse MAC source est celle de l'interface réseau de la source, tandis que l'adresse MAC de destination est celle du routeur ou de la passerelle de l'HEPIA.

### C.2 pingez maintenant bbb.hesge.ch et refaites la même analyse que pour google.com. Est-ce que les adresses Ethernet source et destination ont changé ? Même question pour les adresses IP source et destination

Les addresses Ethernet sont les mêmes. L'addresse IP source d'un request est la même mais l'addresse IP de la destination est devenue 195.176.241.204.

### C.3 pinger maintenant <www.infomaniak.ch>, Est-ce que les adresses ethernet et destination on changé par rapport à google.com ? Pouvez-vous expliquer pourquoi à l’aide de ce que vos savez sur l’encapsulation ? Est-ce les adresses IP ont changé par rapport à google.com ?

Les addresses ethernet sont les mêmes que pour google.com.
L'addresse IP de la source du request est la même, c'est à dire 10.136.205.47. Cependant l'IP de la destination a changé, elle est devenue : 185.125.25.1.

### D.1 Pingez l’adresses IP de vos/vôtre collègues de classe

Le ping fonctionne sans soucis.

![Ping un camarade](../images/../../images/Reseau/labo0/Ping_Collegue.png)
