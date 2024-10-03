#!/bin/bash

# Demander l'impression de toute commande avant exécution
set -x

# Compilation Heptagon -> C
heptc -target c myfun.ept
# Compilation C -> Objet
gcc -c -I./ -I `heptc -where`/c main.c
gcc -c -I./myfun_c -I `heptc -where`/c myfun_c/myfun.c
# Edition de liens
gcc -o myfun main.o myfun.o

# Nettoyage
rm -Rf *~ *.o *.epci *.mls *.log myfun_c 
