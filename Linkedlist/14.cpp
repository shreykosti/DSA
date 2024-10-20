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
void print(node *head)
{
    node *curr = head;
    do
    {
        /* code */
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head);
}
int main()
{
    node *head = new node(10);
    node *n1 = new node(20);
    node *n2 = new node(30);

    head->next = n1;
    n1->next = n2;
    n2->next = head;
    print(head);
}