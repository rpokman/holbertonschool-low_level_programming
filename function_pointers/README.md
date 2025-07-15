# 🧠 C - Function Pointers

Ce projet fait partie du programme Holberton Foundations v2.1 (Part 1) et explore en profondeur l'utilisation des **pointeurs vers des fonctions en langage C**. Il développe une compréhension essentielle de la manière dont les fonctions peuvent être manipulées comme des données.

---

## 🎯 Objectifs pédagogiques

À la fin de ce projet, vous serez capable d'expliquer :

- Ce qu’est un **pointeur vers une fonction** et comment l’utiliser
- Ce qu’un pointeur de fonction **contient exactement**
- Où pointe un pointeur de fonction **en mémoire virtuelle**
- Comment utiliser des pointeurs de fonction dans des programmes modulaires et dynamiques

---

## 📁 Contenu

| Fichier / Dossier        | Description |
|-------------------------|-------------|
| `0-print_name.c`        | Appelle une fonction sur un nom passé en paramètre |
| `1-array_iterator.c`    | Applique une fonction sur chaque élément d’un tableau |
| `2-int_index.c`         | Recherche un entier dans un tableau avec une fonction de comparaison |
| `3-calc.h`              | Fichier d’en-tête contenant les structures et prototypes pour la calculatrice |
| `3-op_functions.c`      | Fonctions de base pour une calculatrice (`+`, `-`, `*`, `/`, `%`) |
| `3-get_op_func.c`       | Récupère dynamiquement la fonction correspondant à un opérateur |
| `3-main.c`              | Point d’entrée de la calculatrice basée sur des pointeurs de fonction |
| `function_pointers.h`   | Header principal du projet, incluant tous les prototypes nécessaires |

---

## 🔧 Compilation

Chaque fichier se compile avec `gcc` et les flags recommandés :

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 nom_fichier.c -o nom_executable