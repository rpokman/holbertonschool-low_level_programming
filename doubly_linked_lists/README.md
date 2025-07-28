# C - Doubly Linked Lists 🔁📗

Ce projet introduit la structure de données **liste doublement chaînée** en langage C. Il s'agit d'une étape importante pour manipuler efficacement des structures dynamiques, accéder aux éléments dans les deux directions et gérer la mémoire de façon précise.

---

## 🎯 Objectifs pédagogiques

À la fin de ce projet, tu devras être capable d’expliquer :

- Ce qu’est une **doubly linked list**
- Comment utiliser les listes doublement chaînées en C
- Comment chercher les bonnes sources d’information sans trop d’aide

---

## 📁 Contenu du projet

| Fichier                   | Description |
|---------------------------|-------------|
| `0-print_dlistint.c`      | Affiche tous les éléments d’une liste `dlistint_t` |
| `1-dlistint_len.c`        | Retourne le nombre d’éléments dans la liste |
| `2-add_dnodeint.c`        | Ajoute un nœud au début de la liste |
| `3-add_dnodeint_end.c`    | Ajoute un nœud à la fin de la liste |
| `4-free_dlistint.c`       | Libère complètement la mémoire d’une liste |
| `5-get_dnodeint.c`        | Retourne le nœud à un index donné |
| `6-sum_dlistint.c`        | Calcule la somme des données `n` de tous les nœuds |
| `7-insert_dnodeint.c`     | Insère un nouveau nœud à une position spécifique |
| `8-delete_dnodeint.c`     | Supprime un nœud à une position donnée |
| `lists.h`                 | Fichier d’en-tête contenant les prototypes et la structure |

---

## 🧱 Structure utilisée

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;