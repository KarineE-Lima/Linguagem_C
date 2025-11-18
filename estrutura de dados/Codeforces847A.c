#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int key;
    struct Node * next;
    struct Node * prev;
}Node;

typedef struct List{
    Node * head;
}List;

List * create_list(){
    List * new_list = malloc(sizeof(List));
    new_list->head = NULL;
    return new_list;
}

Node * create_node(int key){
    Node * new_node = malloc(sizeof(Node));
    new_node->key = key;
    new_node->next = NULL;
    new_node->prev = NULL;
    return new_node;
}

void insert(List * l, Node * n){
    if(l->head == NULL){
        l->head = n;
    }
    else{
        Node * can_tail = l->head;
        while(can_tail->next != NULL){
            can_tail = can_tail->next;
        }
        can_tail->next = n;
        n->prev = can_tail;
    }
}
int main()
{
    int qtd, l, r, i, j;
    scanf("%d", &qtd);
    Node *nos[qtd + 1];

    for(int i = 1; i <= qtd; i++)
        nos[i] = create_node(i);

    for(i = 1; i <= qtd; i++){
        scanf("%d %d", &l, &r);
        if (l > 0 && nos[l] == NULL)
            nos[l] = create_node(l);
        if (l > 0)
            nos[i]->prev = nos[l];
        else
            nos[i]->prev = 0;
        if (r > 0 && nos[r] == NULL)
            nos[r] = create_node(r);
        if (r > 0)
            nos[i]->next = nos[r];
        else
            nos[i]->next = 0;
    }
    Node *head = NULL;
    Node *tail = NULL;
    Node *lista;
    for (i = 1; i <= qtd; i++) {
        if (nos[i]->prev == NULL) {
            lista = nos[i];
            if (head == NULL) {
                head = lista;
            } else {
                tail->next = lista;
                lista->prev = tail;
            }
            while (lista->next != NULL) {
                lista = lista->next;
            }
            tail = lista;
        }
    }


    for (i = 1; i <= qtd; i++)
    {
        lista = head;
        while (lista != NULL)
        {
            if (lista->key == i)
            {
                int prev_key = lista->prev ? lista->prev->key : 0;
                int next_key = lista->next ? lista->next->key : 0;
                printf("%d %d\n", prev_key, next_key);
                break;
            }
            lista = lista->next;
        }
    }

}