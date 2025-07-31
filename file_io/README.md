# C - File I/O 📂📄

Ce projet introduit les appels système liés à la gestion des **fichiers en C** : ouverture, lecture, écriture, fermeture, permissions et gestion des descripteurs de fichiers. Il repose exclusivement sur les fonctions système POSIX (`open`, `read`, `write`, `close`) et exclut toute fonction de la bibliothèque standard comme `printf`.

---

## 🎯 Objectifs pédagogiques

À la fin de ce projet, tu devras être capable d’expliquer :

- Ce qu’est un **descripteur de fichier**
- Les appels système `open`, `read`, `write`, `close` et leurs options (ex : `O_RDONLY`, `O_WRONLY`, `O_CREAT`, etc.)
- Les **trois descripteurs standards** : `STDIN_FILENO`, `STDOUT_FILENO`, `STDERR_FILENO`
- Les **permissions** d’un fichier en mode octal (`rw-------` etc.)
- La différence entre une **fonction** et un **appel système**
- Comment créer, lire, écrire et appendre dans un fichier
- Comment manipuler les erreurs lors des opérations sur les fichiers

---

## 📁 Contenu du projet

| Fichier                 | Description |
|--------------------------|-------------|
| `0-read_textfile.c`      | Lit et affiche le contenu d’un fichier |
| `1-create_file.c`        | Crée un fichier avec permissions `rw-------` et y écrit du contenu |
| `2-append_text_to_file.c`| Ajoute du texte à la fin d’un fichier existant |
| `3-cp.c`                 | Programme qui copie le contenu d’un fichier dans un autre |
| `main.h`                 | Header contenant tous les prototypes nécessaires |
| **Compilation**          | `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 fichier.c -o executable` |

---

## ⚙️ Contraintes techniques

- Éditeurs autorisés : `vi`, `vim`, `emacs`
- OS : Ubuntu 20.04 LTS
- Pas de variables globales
- Max **5 fonctions par fichier**
- Fonctions autorisées : `malloc`, `free`, `exit`, `_putchar`
- **Appels système obligatoires** : `read`, `write`, `open`, `close`
- Interdiction d’utiliser : `printf`, `puts`, `calloc`, `realloc`, etc.
- Respect du **style Betty** (`betty-style.pl`, `betty-doc.pl`)
- Tous les fichiers doivent se terminer par un saut de ligne
- Tous les prototypes doivent être dans `main.h` (avec include guard)

---

## 🧪 Exemple de compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-read_textfile.c -o readfile
./readfile mon_fichier.txt