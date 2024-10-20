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
void fun(node *head, int data)
{
    int i = 1;
    if (head == NULL)
    {
        cout << "not found" << " ";
        return;
    }

    while (head->next != NULL)
    {
        i++;
        head = head->next;
        /* code */
        if (head->data == data)
        {
            /* code */
            cout << i << endl;
            return;
        }
    }
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
    head->next = new node(23);
    head->next->next = new node(3);
    fun(head, 23);
}