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

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
}