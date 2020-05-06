#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

node* create(int data)
{
  node * new_node = new node;
  new_node->data = data;
  new_node->next = nullptr;
  return new_node;
}

void print(node* p)
{
    while (p != nullptr)
    {
        std::cout << p->data << ", ";
        p = p->next;
    }
    std:cout << endl;
}

int main()
{
    node* head = create(42);
    node* last = head;

    print(head);

    for(int i=0; i<3; i++)
    {
        last->next = create(i);
        last = last-> next;
    }

    print(head);
}
