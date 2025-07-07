# C - malloc, free

Ce dossier contient des fonctions écrites en C qui utilisent l’allocation dynamique de mémoire avec `malloc` et la libération avec `free`. Ce projet fait partie du programme de la Holberton School et introduit les notions fondamentales de gestion de mémoire manuelle.

---

🎯 **Objectifs pédagogiques**

Ce projet permet de comprendre et de mettre en œuvre les concepts suivants :

- Différence entre allocation automatique (pile) et dynamique (tas)
- Utilisation des fonctions `malloc` et `free`
- Pourquoi et quand allouer dynamiquement de la mémoire
- Comment manipuler des chaînes et des tableaux en mémoire dynamique
- Utilisation de `valgrind` pour détecter les fuites de mémoire

---

📄 **Fichiers et descriptions**

| Fichier            | Description |
|--------------------|-------------|
| `0-create_array.c` | Crée un tableau de caractères alloué dynamiquement et l'initialise |
| `1-strdup.c`       | Duplique une chaîne de caractères avec `malloc` |
| `2-str_concat.c`   | Concatène deux chaînes dans une nouvelle zone mémoire |
| `3-alloc_grid.c`   | Crée une matrice (tableau 2D) d'entiers initialisée à 0 |
| `4-free_grid.c`    | Libère une matrice allouée dynamiquement par `alloc_grid` |

---

🧪 **Tests et comportement attendu**

Tous les fichiers peuvent être testés avec des `main.c` fournis en exemple. Par exemple :

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-create_array.c -o create_array
./create_array