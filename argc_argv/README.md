# C - argc, argv

Ce dossier contient des programmes écrits en langage C permettant de manipuler les arguments passés à la fonction `main`. Ce projet s'inscrit dans le cursus "Low-Level Programming" de Holberton School, et met l'accent sur la gestion de la ligne de commande, l’utilisation des arguments `argc` et `argv`, ainsi que la gestion d’erreurs simples.

---

🎯 **Objectifs pédagogiques**

Ce projet m’a permis de comprendre et d’appliquer les notions suivantes :

- Comment récupérer et utiliser les arguments passés à `main`
- La différence entre les deux prototypes de `main` : `int main(void)` et `int main(int argc, char *argv[])`
- Comment ignorer proprement des variables non utilisées (avec `__attribute__((unused))` ou `(void)`)
- Comment afficher ou traiter dynamiquement les arguments en ligne de commande

---

📄 **Fichiers et descriptions**

| Fichier        | Description |
|----------------|-------------|
| `0-whatsmyname.c` | Affiche le nom du programme (même s'il a été renommé) |
| `1-args.c`         | Affiche le nombre d’arguments passés au programme |
| `2-args.c`         | Affiche tous les arguments passés à `main`, un par ligne |
| `3-mul.c`          | Multiplie deux entiers passés en argument, ou affiche une erreur |
| `4-add.c`          | Additionne des entiers positifs passés en argument, ou affiche une erreur |

---

⚙️ **Compilation**

Chaque fichier source peut être compilé avec la commande suivante :

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 nom_du_fichier.c -o nom_executable