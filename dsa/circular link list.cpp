#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
class circularlist
{
    node *head;
    node *tail;

public:
    circularlist()
    {
        head = tail = NULL;
    }
    void insertHead(int val)
    {
        node *newnode = new node(val);

        if (head == NULL)
        {
            head = tail = newnode;
            tail->next = head;
        }
        else
        {
            newnode->next = head;
            head = newnode;
            tail->next = head;
        }
    }
    void print()
    {
        if (head == NULL)
            return;
        cout << head->data << "=>";
        node *temp = head->next;

        while (temp != head)
        {
            cout << temp->data << "=>";
            temp = temp->next;
        }

        cout << temp->data << endl;
    }
    void insertTail(int val)
    {
        node *newnode = new node(val);

        if (head == NULL)
        {
            head = tail = newnode;
            tail->next = head;
        }
        else
        {
            newnode->next = head;
            tail->next = newnode;
            tail = newnode;
        }
    }
    void deletehead()
    {
        if (head == NULL)
            return;
        else if (head == tail)
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            node *temp = head;
            head = head->next;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }
    void deletetail()
    {
        if (head == NULL)
            return;
        else if (head == tail)
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            node *temp = tail;
            node *prev = head;

            while (prev->next != tail)
            {
                prev = prev->next;
            }
            tail = prev;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }
};

int main()
{
    circularlist cll;

    cll.insertTail(1);
    cll.insertTail(2);
    cll.insertTail(3);

    cll.print();
    cll.deletetail();
    cll.print();
    cll.deletetail();
    cll.print();
    return 0;
}