#!/bin/bash

# Demander l'impression de toute commande avant exécution
set -x

# Compilation Heptagon -> C
heptc -target c sum2.ept
# Compilation C -> Objet
gcc -c -I./ -I `heptc -where`/c main.c
gcc -c -I./sum2_c -I `heptc -where`/c sum2_c/sum2.c
# Edition de liens
gcc -o sum2 main.o sum2.o

# Nettoyage
rm -Rf *~ *.o *.epci *.mls *.log sum2_c 
