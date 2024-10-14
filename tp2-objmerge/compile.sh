#!/bin/bash

# Demander l'impression de toute commande avant exécution
set -x

# Compilation Heptagon -> C
heptc -c extern.epi
heptc -target c moteur.ept
sed -i '/#include "pervasives.h"/d' moteur_c/moteur_types.h
# Compilation C -> Objet
gcc -c extern.c
gcc -c -I./ -I `heptc -where`/c main.c
gcc -c -I./moteur_c -I./ `heptc -where`/c moteur_c/moteur.c
# Edition de liens
gcc -o moteur extern.o main.o moteur.o

# Nettoyage
rm -Rf *~ *.o *.epci *.mls *.log counter_c 
