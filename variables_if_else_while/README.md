# C - Variables, if, else, while 🧮🔁

Ce projet constitue une introduction aux **opérateurs arithmétiques**, **structures conditionnelles** et **boucles `while`** en langage C. Tu y découvriras également l’usage des **types de base**, la **fonction `putchar`**, et les premières règles de **style Betty**.

---

## 🎯 Objectifs pédagogiques

À l’issue du projet, tu dois être capable d’expliquer :

- Les **opérateurs arithmétiques**, relationnels et logiques
- Les différences entre les valeurs **TRUE / FALSE** en C
- L’usage des instructions **if** et **if…else**
- La **déclaration et affectation** de variables (`char`, `int`, `unsigned int`)
- L’utilisation de **`putchar`** et `printf` pour afficher des variables
- Le fonctionnement de la **boucle `while`**
- Le **jeu de caractères ASCII**
- Le rôle des options de compilation `-Wall -Werror -Wextra -pedantic -std=gnu89`

---

## 📁 Contenu du projet

| Fichier                 | Description |
|-------------------------|-------------|
| `0-positive_or_negative.c` | Affiche si un entier est positif, nul ou négatif |
| `1-last_digit.c`        | Affiche le dernier chiffre d’un entier et sa nature |
| `2-print_alphabet.c`    | Affiche l’alphabet en minuscules |
| `3-print_alphabets.c`   | Affiche l’alphabet en minuscules puis en majuscules |
| `4-print_alphabt.c`     | Affiche l’alphabet sans les lettres `q` et `e` |
| `5-print_numbers.c`     | Affiche les chiffres de 0 à 9 |
| `6-print_numberz.c`     | Même chose que `5` mais sans variable `char` |
| `7-print_tebahpla.c`    | Affiche l’alphabet en minuscule, à l’envers |
| `8-print_base16.c`      | Affiche tous les chiffres de la base 16 (hexadécimal) |
| `9-print_comb.c`        | Affiche toutes les combinaisons possibles de chiffres simples, séparées par des virgules |

---

## ⚙️ Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 fichier.c -o executable