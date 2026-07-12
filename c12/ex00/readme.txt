Co musí funkce udělat?
1) Alokovat paměť pro jeden t_list.
2) Zkontrolovat, zda malloc uspěl.
3) Uložit data.
4) Nastavit next = NULL.
5) Vrátit nový uzel.

Algoritmus
1) vytvoř proměnnou node typu t_list *
2) node = malloc(sizeof(t_list))
3) pokud node == NULL vrať NULL
4) node->data = data
5) node->next = NULL
6) vrať node

Na co si dát pozor
1. Alokuješ strukturu, ne data (Protože vytváříš uzel, ne kopii dat.)
Správně: malloc(sizeof(t_list))
Špatně: malloc(sizeof(void *)), malloc(sizeof(data))
2. Data se nekopírují
node->data = data;  // nekopíruje obsah, ale pouze uloží ukazatel.
pr.: int x = 42; t_list *node = ft_create_elem(&x);
