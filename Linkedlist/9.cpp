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

node *fun(node *head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head->prev = temp;

    return temp;
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
    head = fun(head, 1);
    print(head);
}