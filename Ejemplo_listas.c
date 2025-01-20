#include "libft.h"

void del(void *content)
{
    free(content);
}
int main(void)
{
    //Creo la lista vacia
    t_list *lst = NULL;

    //Valores
    int *a = malloc(sizeof(int));
    int *b = malloc(sizeof(int));
    int *c = malloc(sizeof(int));

    *a = 1;
    *b = 2;
    *c = 3;

    //Creo los nodos
    t_list *nodo1 = ft_lstnew(a);
    t_list *nodo2 = ft_lstnew(b);
    t_list *nodo3 = ft_lstnew(c);

    //Añado los nodos al principio de la lista
    ft_lstadd_front(&lst, nodo1);
    ft_lstadd_front(&lst, nodo2);
    ft_lstadd_front(&lst, nodo3);

    //Contar los elementos de la lista
    int size = ft_lstsize(lst);
    printf("El tamaño de la lista es: %d\n", size);

    //Recorrer e imprimir la lista
    t_list *current = lst;
    while (current != NULL)
    {
        printf("%d\n", *(int *)current->content);
        current = current->next;
    }

    //Devolver el ultimo nodo
    t_list *last_node = ft_lstlast(lst);
    printf("El ultimo nodo es: %d\n", *(int *)last_node->content);

    //Añadir un nodo a la ultima posicion
    int *d = malloc(sizeof(int));
    *d = 4;

    t_list *nodo4 = ft_lstnew(&d);

    ft_lstadd_back(&lst, nodo4);

    current = lst;
    while (current != NULL)
    {
        printf("%d\n", *(int *)current->content);
        current = current->next;
    }

    //Elimino el ultimo elemento
    ft_lstdelone(nodo4, del);

    printf("Despues de eliminar uno: \n");

    current = lst;
    while (current != NULL)
    {
        printf("%d\n", *(int *)current->content);
        current = current->next;
    }
    
}
    