# C - Hello, World

Ce projet marque le tout début du parcours "Low-Level Programming" à Holberton School. Il introduit les bases du langage C, ainsi que le processus de compilation, les scripts Shell et les premières fonctions d’affichage (`puts`, `printf`, `putchar`). C’est ici que commence la maîtrise du C à bas niveau.

---

🎯 **Objectifs pédagogiques**

Ce projet permet de comprendre et appliquer les notions suivantes :

- Pourquoi le langage C est utilisé dans le développement bas niveau
- Qui sont Dennis Ritchie, Brian Kernighan et Linus Torvalds
- Ce que fait réellement la commande `gcc`
- Ce qu’est un point d’entrée dans un programme (`main`)
- Comment afficher du texte en C avec `puts`, `printf`, et `putchar`
- Comment obtenir la taille d’un type avec `sizeof`
- Comment respecter le style de code officiel Holberton avec `Betty`
- Comment écrire et exécuter des scripts Shell simples

---

📄 **Fichiers et scripts**

| Fichier              | Description |
|----------------------|-------------|
| `0-preprocessor`     | Script qui passe un fichier C dans le préprocesseur et enregistre le résultat |
| `1-compiler`         | Script qui compile un fichier `.c` en un fichier `.o` sans lier |
| `2-assembler`        | Script qui génère le code assembleur d’un fichier C |
| `3-name`             | Script qui compile un fichier C et crée un exécutable nommé `cisfun` |
| `4-puts.c`           | Programme qui affiche une phrase avec `puts` |
| `5-printf.c`         | Programme qui affiche une phrase avec `printf` |
| `6-size.c`           | Programme qui affiche la taille de différents types (char, int, long...) |

---

🧠 **Compétences développées**

- Structure de base d’un programme en C
- Compilation manuelle avec `gcc` (préprocessing, compilation, assemblage, linkage)
- Affichage avec les fonctions standards
- Utilisation du Shell pour automatiser des commandes
- Respect du style de codage avec `Betty`
- Compréhension du rôle des headers (`#include`)
- Utilisation du terminal pour tester des programmes C simples

---

⚙️ **Compilation**

Chaque programme C est compilé avec la commande suivante :

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 nom_fichier.c -o nom_executable