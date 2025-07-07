# C - More Functions, More Nested Loops 🔁🔣

Ce projet approfondit la manipulation des **fonctions**, **boucles imbriquées**, et la **création de formes géométriques** à l’aide de caractères. C’est une suite directe du projet précédent sur les boucles et les fonctions.

---

## 🎯 Objectifs pédagogiques

Tu seras capable d’expliquer :

- L’utilisation des **fonctions** et des **boucles imbriquées**
- La différence entre **déclaration** et **définition** d'une fonction
- Ce qu’est un **prototype**
- La **portée des variables**
- L’usage des options de compilation strictes :
  `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Le rôle des **fichiers d’en-tête** (`main.h`)

---

## 📁 Contenu du projet

| Fichier                   | Description |
|---------------------------|-------------|
| `0-isupper.c`             | Vérifie si un caractère est une majuscule |
| `1-isdigit.c`             | Vérifie si un caractère est un chiffre |
| `2-mul.c`                 | Multiplie deux entiers |
| `3-print_numbers.c`       | Affiche les chiffres de 0 à 9 |
| `4-print_most_numbers.c`  | Affiche les chiffres sauf 2 et 4 |
| `5-more_numbers.c`        | Affiche 10 fois les nombres de 0 à 14 |
| `6-print_line.c`          | Dessine une ligne horizontale |
| `7-print_diagonal.c`      | Dessine une diagonale |
| `8-print_square.c`        | Dessine un carré |
| `9-fizz_buzz.c`           | FizzBuzz de 1 à 100 |
| `10-print_triangle.c`     | Dessine un triangle |

Tous les prototypes sont définis dans `main.h`.

---

## ⚙️ Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 fichier.c -o executable