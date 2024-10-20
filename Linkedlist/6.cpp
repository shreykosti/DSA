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
void fun(node *head)
{
    while (head->next->next != NULL)
    {
        /* code */
        head = head->next;
    }
    head->next = NULL;
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
    print(head);
    fun(head);
    print(head);
}