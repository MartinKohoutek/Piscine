Co musí funkce udělat?

1) Vytvořit nový prvek pomocí ft_create_elem(data).
2) Zkontrolovat, zda byl nový prvek úspěšně vytvořen.
3) Pokud je seznam prázdný, nastav nový prvek jako začátek seznamu.
4) Pokud seznam není prázdný, najdi poslední prvek seznamu.
5) Připojit nový prvek za poslední prvek.

Algoritmus
1) Vytvoř proměnné: new typu t_list *, last typu t_list *
2) Pokud begin_list == NULL, vrať se
3) new = ft_create_elem(data)
4) Pokud new == NULL, vrať se
5) Pokud *begin_list == NULL: *begin_list = new a vrať se
6) Nastav: last = *begin_list
7) Dokud last->next není NULL: last = last->next
8) Připoj nový prvek: last->next = new


Na co si dát pozor

1. Proč používáme t_list **?

Protože funkce může měnit začátek seznamu. Příklad prázdného seznamu:
t_list *list; list = NULL;
Po zavolání: ft_list_push_back(&list, "A"); musíme změnit:
list = NULL na: list = A -> NULL
Proto předáváme adresu ukazatele: &list

2. Rozdíl mezi begin_list a *begin_list
begin_list: adresa ukazatele na začátek seznamu
*begin_list: samotný první prvek seznamu
Příklad: t_list *list; ft_list_push_back(&list, "A");
&list  -> adresa proměnné list
list   -> první prvek seznamu
*begin_list -> první prvek seznamu

3. Speciální případ prázdného seznamu
Pokud: *begin_list == NULL, není žádný poslední prvek.
Proto musíme nastavit: *begin_list = new
Výsledek: NULL se změní na: A -> NULL

4. Hledání posledního prvku
Špatně: while (last) { last = last->next; }
Po cyklu ztratíme poslední prvek: last = NULL
Správně: while (last->next) { last = last->next; }
Zastavíme se na posledním uzlu: A -> B -> C -> NULL

5. Nový prvek už má next nastavený
ft_create_elem() vytvoří: new->next = NULL;
Proto po připojení: last->next = new;
vznikne: A -> B -> C -> new -> NULL

6. Rozdíl mezi push_front a push_back
push_front: new->next = *begin_list; *begin_list = new;
Výsledek: X -> A -> B -> C
push_back: najdeme poslední prvek: last->next = new;
Výsledek: A -> B -> C -> X
