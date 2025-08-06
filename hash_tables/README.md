# Holberton - C - Hash Tables 📊

Ce dépôt contient mon projet sur les **tables de hachage** réalisé dans le cadre du cursus "Low-Level Programming" de Holberton School. Ce projet a pour but de comprendre, concevoir et implémenter une structure de données de type table de hachage en C, en utilisant la méthode de chaînage pour gérer les collisions.

---

## 📁 Contenu du dépôt

| Projet | Description |
|--------|-------------|
| [`0-hash_table_create.c`](https://github.com/rpokman/holbertonschool-low_level_programming/tree/main/hash_tables/0-hash_table_create.c) | Implémente une fonction pour créer une table de hachage. |
| [`1-djb2.c`](https://github.com/rpokman/holbertonschool-low_level_programming/tree/main/hash_tables/1-djb2.c) | Implémente l'algorithme de hachage **djb2**. |
| [`2-key_index.c`](https://github.com/rpokman/holbertonschool-low_level_programming/tree/main/hash_tables/2-key_index.c) | Calcule l'index d'une clé dans le tableau de la table de hachage. |
| [`3-hash_table_set.c`](https://github.com/rpokman/holbertonschool-low_level_programming/tree/main/hash_tables/3-hash_table_set.c) | Ajoute un élément à la table de hachage, gérant les collisions. |
| [`4-hash_table_get.c`](https://github.com/rpokman/holbertonschool-low_level_programming/tree/main/hash_tables/4-hash_table_get.c) | Récupère la valeur associée à une clé. |
| [`5-hash_table_print.c`](https://github.com/rpokman/holbertonschool-low_level_programming/tree/main/hash_tables/5-hash_table_print.c) | Affiche le contenu de la table de hachage. |
| [`6-hash_table_delete.c`](https://github.com/rpokman/holbertonschool-low_level_programming/tree/main/hash_tables/6-hash_table_delete.c) | Libère la mémoire allouée à la table de hachage. |

---

## 🧠 Compétences développées

- Compréhension des **tables de hachage** et de leur fonctionnement interne.
- Conception et implémentation d'une fonction de hachage (djb2).
- Gestion des **collisions** par chaînage.
- Implémentation des opérations de base : création, insertion, récupération, affichage et suppression.
- Maîtrise de l'allocation et de la désallocation dynamique de mémoire (`malloc` et `free`) pour éviter les fuites.
- Utilisation de `valgrind` pour la détection de fuites de mémoire.

---

## ⚙️ Compilation

Chaque fichier source peut être compilé de la manière suivante. Par exemple, pour compiler le projet complet :

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 main.c hash_table_create.c hash_djb2.c key_index.c hash_table_set.c hash_table_get.c hash_table_print.c hash_table_delete.c -o hash_tables_test