Co musí funkce udělat?

1) Projít všechny prvky seznamu od začátku až do konce.
2) Počítat počet nalezených prvků.
3) Vrátit výsledný počet prvků.


Algoritmus

1) Vytvoř proměnnou count typu int.
2) Nastav: count = 0
3) Dokud begin_list není NULL: count++, begin_list = begin_list->next
4) Vrať count.


Na co si dát pozor

1. Nepotřebujeme t_list **, Funkce pouze čte seznam, nemění jeho začátek.
Správně: int ft_list_size(t_list *begin_list)
Špatně: int ft_list_size(t_list **begin_list)
-- t_list ** používáme pouze tehdy, když chceme změnit samotný ukazatel na začátek seznamu.

2. Posouváme pouze lokální kopii ukazatele
Příklad: t_list *list; // list = A -> B -> C;
Uvnitř funkce: begin_list = begin_list->next;
změní pouze lokální proměnnou begin_list: B -> C
Původní list zůstává: A -> B -> C

3. NULL seznam
Pokud begin_list = NULL; cyklus se vůbec nespustí a funkce vrátí 0

4. Nepřistupujeme k next bez kontroly
Špatně: while (begin_list->next)
Pokud je begin_list NULL, program spadne.
Správně: while (begin_list)
