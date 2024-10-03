#!/bin/bash

# Demander l'impression de toute commande avant exécution
set -x

# Compilation Heptagon -> C
heptc -target c rcounter.ept
# Compilation C -> Objet
gcc -c -I./ -I `heptc -where`/c main.c
gcc -c -I./rcounter_c -I `heptc -where`/c rcounter_c/rcounter.c
# Edition de liens
gcc -o rcounter main.o rcounter.o

# Nettoyage
#rm -Rf *~ *.o *.epci *.mls *.log rcounter_c 
