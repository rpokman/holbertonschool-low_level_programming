# 📦 C - More malloc, free

Projet du programme **Foundations v2.1 - Low-Level Programming** de Holberton School.  
Ce projet approfondit l'utilisation de l'allocation dynamique en C, avec `malloc`, `free`, `exit`, et la réimplémentation de fonctions similaires à `calloc` et `realloc`.

---

## 🎯 Objectifs d'apprentissage

À la fin de ce projet, tu seras capable d’expliquer :

- Comment utiliser la fonction `exit` pour terminer proprement un programme
- Comment allouer dynamiquement de la mémoire avec `malloc`
- Comment initialiser la mémoire comme avec `calloc`
- Comment ajuster une allocation comme avec `realloc` (à travers l'exercice)
- Comment vérifier et sécuriser une allocation mémoire

---

## 📁 Contenu

| Fichier | Prototype | Description |
|--------|-----------|-------------|
| `0-malloc_checked.c` | `void *malloc_checked(unsigned int b);` | Alloue de la mémoire. Termine avec `exit(98)` si l’allocation échoue. |
| `1-string_nconcat.c` | `char *string_nconcat(char *s1, char *s2, unsigned int n);` | Concatène `s1` et les `n` premiers caractères de `s2`. |
| `2-calloc.c` | `void *_calloc(unsigned int nmemb, unsigned int size);` | Alloue une mémoire initialisée à 0, comme `calloc`. |
| `3-array_range.c` | `int *array_range(int min, int max);` | Crée un tableau d'entiers de `min` à `max` inclus. |

---

## ⚙️ Compilation

Chaque fichier peut être compilé avec les options standards du projet :

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 fichier.c -o executable