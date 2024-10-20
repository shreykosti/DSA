#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

void fun(node *head, int data, int pos)
{
    for (int i = 1; i < pos - 1; i++)
    {
        /* code */
        head = head->next;
    }
    node *temp = new node(data);
    temp->next = head->next;
    head->next = temp;
}

void print(node *head)
{
    while (head != NULL)
    {
        /* code */
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    fun(head, 12, 2);
    print(head);
}