# C - Functions, Nested Loops 🔁📘

Ce projet approfondit la logique de programmation en C avec les **fonctions** et les **boucles imbriquées**. Il constitue une étape essentielle dans la construction d’une base solide en programmation procédurale.

---

## 🎯 Objectifs pédagogiques

À la fin de ce projet, tu seras capable d’expliquer :

- Ce qu’est une fonction et comment l’écrire/utiliser
- La différence entre **déclaration** et **définition** de fonction
- Ce qu’est un **prototype**
- Le concept de **portée des variables**
- Comment utiliser des boucles **imbriquées**
- Le rôle des options de compilation `-Wall -Werror -Wextra -pedantic -std=gnu89`
- À quoi servent les fichiers d’en-tête (`.h`)
- L’importance du style de code **Betty**

---

## 📁 Contenu du projet

| Fichier                | Description |
|------------------------|-------------|
| `0-putchar.c`          | Affiche `_putchar` suivi d’un retour à la ligne |
| `1-alphabet.c`         | Affiche l’alphabet en minuscule |
| `2-print_alphabet_x10.c` | Affiche 10 fois l’alphabet |
| `3-islower.c`          | Détermine si un caractère est en minuscule |
| `4-isalpha.c`          | Vérifie si un caractère est une lettre |
| `5-sign.c`             | Affiche le signe d’un nombre |
| `6-abs.c`              | Retourne la valeur absolue d’un entier |
| `7-print_last_digit.c` | Affiche le dernier chiffre d’un nombre |
| `8-24_hours.c`         | Affiche toutes les minutes de 00:00 à 23:59 |
| `9-times_table.c`      | Affiche la table de multiplication de 9 |
| `10-add.c`             | Additionne deux entiers |
| `11-print_to_98.c`     | Affiche les nombres de `n` à `98` |

Tous les prototypes de fonctions sont définis dans le fichier `main.h`.

---

## ⚙️ Compilation

Chaque programme doit être compilé avec :

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 nom_du_fichier.c -o nom_executable
