Co musí funkce udělat?

1) Vytvořit nový prvek pomocí ft_create_elem(data).
2) Zkontrolovat, zda byl nový prvek úspěšně vytvořen.
3) Nastavit nový prvek před současný začátek seznamu.
4) Aktualizovat ukazatel na začátek seznamu.


Algoritmus

1) Vytvoř proměnnou node typu t_list *
2) Zkontroluj, zda begin_list není NULL. Pokud je NULL, vrať se.
3) node = ft_create_elem(data)
4) Pokud node == NULL: vrať se
5) node->next = *begin_list
6) *begin_list = node


Na co si dát pozor

1. Proč používáme t_list **?

Špatně: void ft_list_push_front(t_list *begin_list, void *data)
// Funkce by dostala pouze kopii ukazatele. Nemohla by změnit začátek seznamu.
Správně: void ft_list_push_front(t_list **begin_list, void *data)
Používáme ukazatel na ukazatel, protože potřebujeme změnit hodnotu původního ukazatele.

2. Rozdíl mezi begin_list a *begin_list

begin_list: adresa proměnné, která drží začátek seznamu
*begin_list: samotný první prvek seznamu
Příklad: t_list *list; ft_list_push_front(&list, "Hello");
&list  -> adresa ukazatele list
list   -> první prvek seznamu
*list  -> totéž co list

3. Pořadí při přidávání prvku

Správně: Nejdříve připoj nový prvek ke starému seznamu, až potom změň začátek seznamu:
Kdybychom nejdříve udělali: *begin_list = node; ztratili bychom původní seznam.
