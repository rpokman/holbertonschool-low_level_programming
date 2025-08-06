# Holberton - Low Level Programming 📚

Ce dépôt contient mes projets réalisés dans le cadre du cursus "Low-Level Programming" de Holberton School. Il s'agit d'une introduction au langage C, couvrant les concepts fondamentaux tels que les variables, les boucles, les fonctions, les pointeurs, les tableaux, les chaînes de caractères, la récursivité, la gestion des arguments et l’allocation dynamique de mémoire.

---

## 📁 Contenu du dépôt

| Projet | Description |
|--------|-------------|
| [`hello_world`](https://github.com/rpokman/holbertonschool-low_level_programming/tree/main/hello_world) | Premiers pas en C : compilation, `printf`, `puts` |
| [`variables_if_else_while`](https://github.com/rpokman/holbertonschool-low_level_programming/tree/main/variables_if_else_while) | Structures conditionnelles et boucles |
| [`functions_nested_loops`](https://github.com/rpokman/holbertonschool-low_level_programming/tree/main/functions_nested_loops) | Fonctions, portée des variables, boucles imbriquées |
| [`more_functions_nested_loops`](https://github.com/rpokman/holbertonschool-low_level_programming/tree/main/more_functions_nested_loops) | Fonctions supplémentaires et manipulations avancées |
| [`pointers_arrays_strings`](https://github.com/rpokman/holbertonschool-low_level_programming/tree/main/pointers_arrays_strings) | Introduction aux pointeurs, tableaux, manipulation de chaînes |
| [`recursion`](https://github.com/rpokman/holbertonschool-low_level_programming/tree/main/recursion) | Résolution de problèmes à l’aide de la récursivité, sans boucles |
| [`argc_argv`](https://github.com/rpokman/holbertonschool-low_level_programming/tree/main/argc_argv) | Utilisation des arguments `argc` et `argv`, traitement de la ligne de commande |
| [`malloc_free`](https://github.com/rpokman/holbertonschool-low_level_programming/tree/main/malloc_free) | Allocation dynamique de mémoire avec `malloc` et libération avec `free` |
| [`more_malloc_free`](https://github.com/rpokman/holbertonschool-low_level_programming/tree/main/more_malloc_free) | Projets supplémentaires sur l'allocation dynamique de mémoire |
| [`structures_typedef`](https://github.com/rpokman/holbertonschool-low_level_programming/tree/main/structures_typedef) | Déclaration et utilisation de structures, `typedef`, fonctions sur structures |
| [`function_pointers`](https://github.com/rpokman/holbertonschool-low_level_programming/tree/main/function_pointers) | Utilisation des pointeurs vers fonctions |
| [`variadic_functions`](https://github.com/rpokman/holbertonschool-low_level_programming/tree/main/variadic_functions) | Fonctions à nombre variable d'arguments avec `stdarg.h` |
| [`singly_linked_lists`](https://github.com/rpokman/holbertonschool-low_level_programming/tree/main/singly_linked_lists) | Implémentation et manipulation de listes chaînées simples |
| [`doubly_linked_lists`](https://github.com/rpokman/holbertonschool-low_level_programming/tree/main/doubly_linked_lists) | Implémentation et manipulation de listes doublement chaînées |
| [`file_io`](https://github.com/rpokman/holbertonschool-low_level_programming/tree/main/file_io) | Lecture et écriture de fichiers en C |
| [`hash_tables`](https://github.com/rpokman/holbertonschool-low_level_programming/tree/main/hash_tables) | Création et utilisation d'une table de hachage |

---

## 🧠 Compétences développées

- Compilation avec `gcc` et Makefile
- Utilisation de `betty` pour le style C
- Écriture de fonctions simples
- Manipulation des pointeurs et compréhension de la mémoire
- Utilisation de boucles `for`, `while`, `do...while`
- Utilisation de tableaux et chaînes de caractères
- Mise en œuvre de la récursivité pour résoudre des problèmes sans boucles
- Lecture et traitement des arguments passés à un programme via `argc` et `argv`
- Utilisation de `malloc` et `free` pour gérer dynamiquement la mémoire
- Utilisation de structures, `typedef`, et gestion de la mémoire dans les structures
- Pointeurs vers fonctions pour passer des comportements en argument
- Création et gestion de fonctions variadiques (`va_start`, `va_arg`, `va_end`)
- Détection de fuites mémoire avec `valgrind`
- Manipulation des listes chaînées (simples et doubles)
- Opérations d'entrée/sortie sur fichiers
- Compréhension et implémentation des tables de hachage

---

## ⚙️ Compilation

Chaque fichier source peut être compilé de la manière suivante :

```bash
gcc -Wall -Wextra -Werror -pedantic nom_du_fichier.c -o nom_executable