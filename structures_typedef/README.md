# 🐶 C - Structures, typedef

Projet du programme **Foundations v2.1 - Part 1** de Holberton School.  
Ce projet introduit l'utilisation des structures (`struct`) et des alias de type (`typedef`) en langage C, à travers la modélisation d’un **chien**.

---

## 🎯 Objectifs d'apprentissage

À la fin de ce projet, tu sauras expliquer :

- Ce qu’est une structure (`struct`) en C, pourquoi et quand l’utiliser
- Comment initialiser une structure
- Comment accéder aux champs d’une structure via un pointeur
- Comment utiliser `typedef` pour créer un alias de type
- Comment allouer dynamiquement une structure et la libérer proprement

---

## 📁 Fichiers et prototypes

| Fichier | Prototype | Description |
|--------|-----------|-------------|
| `dog.h` | `struct dog { char *name; float age; char *owner; };` | Définition de la structure `dog` |
| `1-init_dog.c` | `void init_dog(struct dog *d, char *name, float age, char *owner);` | Initialise une variable `struct dog` |
| `2-print_dog.c` | `void print_dog(struct dog *d);` | Affiche les informations d’un `struct dog` |
| `dog.h` (update) | `typedef struct dog dog_t;` | Déclare un alias `dog_t` pour `struct dog` |
| `4-new_dog.c` | `dog_t *new_dog(char *name, float age, char *owner);` | Crée un nouveau chien dynamiquement |
| `5-free_dog.c` | `void free_dog(dog_t *d);` | Libère la mémoire associée à un chien |

---

## ⚙️ Compilation

Chaque fichier peut être compilé comme suit :

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 fichier.c -o executable
