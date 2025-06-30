# C - Pointeurs, Tableaux et Chaînes de caractères

Ce dépôt contient mon travail et mes exercices sur les pointeurs, les tableaux et les chaînes de caractères en langage C, dans le cadre du programme de la Holberton School. Ce projet est conçu pour mieux comprendre la manipulation bas niveau de la mémoire et comment le langage C gère les structures de données et les appels de fonctions.

## 🎯 Objectifs pédagogiques

Ce projet permet de comprendre et d'appliquer les concepts suivants :

- Ce que sont les pointeurs et comment ils fonctionnent
- Comment utiliser les pointeurs pour accéder et modifier des données
- Comment déclarer et manipuler des tableaux
- Comment les chaînes de caractères sont représentées en C
- L'arithmétique des pointeurs
- La différence (et les similitudes) entre tableaux et pointeurs
- L’utilisation des opérateurs `sizeof`, `&` et `*`
- Comment passer des variables par référence à une fonction

---

## 📄 Fichiers et descriptions

| Fichier                | Description                                                                 |
|------------------------|-----------------------------------------------------------------------------|
| `0-reset_to_98.c`      | Met la valeur pointée à 98                                                  |
| `1-swap.c`             | Échange les valeurs de deux entiers                                         |
| `2-strlen.c`           | Retourne la longueur d'une chaîne                                           |
| `3-puts.c`             | Affiche une chaîne suivie d’un retour à la ligne                           |
| `4-print_rev.c`        | Affiche une chaîne à l'envers                                               |
| `5-rev_string.c`       | Inverse une chaîne de caractères                                            |
| `6-puts2.c`            | Affiche un caractère sur deux d'une chaîne                                 |
| `7-puts_half.c`        | Affiche la seconde moitié d'une chaîne                                      |
| `8-print_array.c`      | Affiche les `n` premiers éléments d’un tableau d'entiers                    |
| `9-strcpy.c`           | Copie une chaîne dans une autre                                             |
| `100-atoi.c`           | Imite la fonction `atoi` : convertit une chaîne en entier                   |

---

## 🧠 Fonctions de manipulation de chaînes et tableaux

| Fichier               | Description                                                                  |
|-----------------------|------------------------------------------------------------------------------|
| `0-memset.c`          | Remplit une mémoire avec une valeur constante                                |
| `1-memcpy.c`          | Copie `n` octets d’une zone mémoire vers une autre                           |
| `2-strchr.c`          | Localise le premier caractère donné dans une chaîne                          |
| `3-strspn.c`          | Compte les octets initiaux composés seulement des caractères acceptés        |
| `4-strpbrk.c`         | Cherche le premier caractère d’un ensemble dans une chaîne                   |
| `5-strstr.c`          | Trouve la première occurrence d’une sous-chaîne dans une chaîne              |
| `7-print_chessboard.c`| Affiche un échiquier 8x8 en mode texte                                       |
| `8-print_diagsums.c`  | Affiche les sommes des diagonales principales d’une matrice carrée           |

---

## 🧩 Fonctions de manipulation de chaînes (niveau 2)

| Fichier               | Description                                                                  |
|-----------------------|------------------------------------------------------------------------------|
| `0-strcat.c`          | Concatène deux chaînes                                                       |
| `1-strncat.c`         | Concatène deux chaînes (limité à `n` caractères)                             |
| `2-strncpy.c`         | Copie une chaîne (limité à `n` caractères)                                   |
| `3-strcmp.c`          | Compare deux chaînes                                                         |
| `4-rev_array.c`       | Inverse le contenu d’un tableau d’entiers                                   |
| `5-string_toupper.c`  | Convertit une chaîne en majuscules                                           |
| `6-cap_string.c`      | Met en majuscule la première lettre de chaque mot                           |
| `7-leet.c`            | Encode une chaîne en style “leet” (1337)                                     |

---

## ⚙️ Compilation

Tous les fichiers `.c` sont compilés avec la commande suivante :

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o nom_programme