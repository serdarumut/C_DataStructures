#include <stdio.h>

// Struct tan�m�
struct node {
    int data;
    struct node* next;
};

// count fonksiyonu tan�m�
int count(struct node* head)
{
    int counter = 0;
    while (head != NULL)
    {
        counter++;
        head = head->next;
    }
    return counter;
}

int main()
{
    // struct node'lar olu�turulur
    struct node node1, node2, node3;
    node1.data = 1;
    node1.next = &node2;
    node2.data = 2;
    node2.next = &node3;
    node3.data = 3;
    node3.next = NULL;

    // count fonksiyonu �a�r�l�r
    int result = count(&node1);

    printf("DUGUMm sAYISI: %d\n", result);

    return 0;
}

