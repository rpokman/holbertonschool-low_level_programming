# 📚 C - Variadic Functions

Ce projet fait partie du programme **Foundations v2.1 - Part 1** et a pour but de vous familiariser avec un concept puissant du langage C : les **fonctions variadiques**, c’est-à-dire les fonctions pouvant recevoir un nombre variable d’arguments.

---

## 🧠 Objectifs pédagogiques

À la fin de ce projet, vous devez être capable d’expliquer :

- Ce que sont les **fonctions variadiques** en C
- L’utilisation des macros `va_start`, `va_arg`, `va_end` définies dans `stdarg.h`
- Pourquoi et comment utiliser le mot-clé **const**

---

## 📁 Fichiers du projet

| Fichier                    | Description |
|---------------------------|-------------|
| `0-sum_them_all.c`        | Retourne la somme de tous les paramètres (variadiques) |
| `1-print_numbers.c`       | Affiche des nombres, séparés par une chaîne donnée |
| `2-print_strings.c`       | Affiche des chaînes, séparées par une chaîne donnée |
| `3-print_all.c`           | Affiche tout type de donnée, selon un format |
| `variadic_functions.h`    | Header contenant tous les prototypes du projet |

---

## ⚙️ Compilation

Toutes les fonctions doivent être compilées avec les options suivantes :

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89