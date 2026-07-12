Co musí funkce udělat?

1) Zkontrolovat, zda seznam existuje.
2) Procházet seznam od prvního prvku.
3) Najít poslední prvek, který má next nastavený na NULL.
4) Vrátit ukazatel na poslední prvek seznamu.


Algoritmus

1) Pokud begin_list == NULL, vrať NULL
2) Dokud begin_list->next není NULL, begin_list = begin_list->next
3) Vrať begin_list

Na co si dát pozor

1. Rozdíl mezi posledním prvkem a NULL
Špatně: while (begin_list) { begin_list = begin_list->next; }
Po cyklu bude begin_list = NULL, ztratili jsme ukazatel na poslední prvek.
Správně: while (begin_list->next) { begin_list = begin_list->next; }
Zastavíme se na posledním prvku.

2. Jeden prvek v seznamu
Pokud máme A -> NULL, podmínka begin_list->next je hned NULL,
takže cyklus se nespustí. Vrátíme A. To je správně, protože
jediný prvek je zároveň první i poslední.

3. Prázdný seznam
Pokud: begin_list = NULL nemůžeme přistupovat k begin_list->next
protože bychom dereferencovali NULL pointer. Proto nejdříve kontrolujeme:
if (!begin_list) return (NULL);

4. Funkce nemění seznam
Používáme: t_list *begin_list protože pouze procházíme seznam.
Nepotřebujeme: t_list **begin_list protože neměníme začátek seznamu.

5. Vracíme existující uzel
Funkce nevytváří nový prvek. Vrací pouze ukazatel na poslední prvek:
return (begin_list);
