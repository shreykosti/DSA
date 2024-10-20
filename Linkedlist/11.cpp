#include <iostream>
using namespace std;

struct node
{
    int data;
    node *prev;
    node *next;
    node(int x)
    {
        data = x;
        next = prev = NULL;
    }
};

node *fun(node *head)
{
    node *ptr = head;
    node *prev = NULL;
    while (ptr != NULL)
    {
        prev = ptr->prev;
        ptr->prev = ptr->next;
        ptr->next = prev;
        ptr = ptr->prev;
    }

    return prev->prev;
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    node *head = new node(10);
    node *n1 = new node(20);
    node *n2 = new node(30);

    head->next = n1;
    n1->next = n2;

    n2->prev = n1;
    n1->prev = head;
    print(head);
    head = fun(head);
    print(head);
}