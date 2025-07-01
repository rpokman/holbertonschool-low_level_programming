# C - Recursion

Ce dépôt contient mon travail et mes exercices sur la récursivité en langage C, dans le cadre du programme de la Holberton School. Ce projet permet de comprendre comment utiliser la récursivité pour résoudre des problèmes sans utiliser de boucles, en s’appuyant uniquement sur des appels de fonctions.

---

🎯 **Objectifs pédagogiques**

Ce projet permet de comprendre et d'appliquer les concepts suivants :

- Ce qu’est la récursivité et comment elle fonctionne
- Comment implémenter des fonctions récursives en C
- Dans quels cas la récursivité est pertinente
- Dans quels cas elle doit être évitée
- Comment écrire des fonctions sans utiliser de boucles
- L’importance des cas de base et des appels récursifs
- L’analyse de la pile d’appels (stack)

---

📄 **Fichiers et descriptions**

| Fichier                   | Description                                                   |
|---------------------------|---------------------------------------------------------------|
| `0-puts_recursion.c`      | Affiche une chaîne de caractères suivie d’un saut de ligne    |
| `1-print_rev_recursion.c` | Affiche une chaîne de caractères à l’envers                   |
| `2-strlen_recursion.c`    | Retourne la longueur d’une chaîne de caractères               |
| `3-factorial.c`           | Calcule la factorielle d’un nombre entier                     |
| `4-pow_recursion.c`       | Calcule la puissance d’un nombre                              |
| `5-sqrt_recursion.c`      | Calcule la racine carrée naturelle d’un nombre                |
| `6-is_prime_number.c`     | Détermine si un nombre est un nombre premier                  |

---

⚙️ **Compilation**

Tous les fichiers `.c` sont compilés avec la commande suivante :

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o nom_programme