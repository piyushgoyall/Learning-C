// Alternate merge two linked list

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d) : data(d), next(nullptr) {}
};

void print(Node *head)
{
    while (head)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << endl;
}

Node *append(Node *root, int data)
{
    if (root == nullptr)
        return new Node(data);

    Node *temp = root;
    while (temp->next)
    {
        temp = temp->next;
    }

    temp->next = new Node(data);
    return root;
}

Node *merge(Node *root1, Node *root2)
{
    Node *root = nullptr;
    if (!root1)
        return root2;

    if (!root2)
        return root1;

    while (root1 && root2)
    {
        root = append(root, root1->data);
        root = append(root, root2->data);
        root1 = root1->next;
        root2 = root2->next;
    }

    if (root1)
    {
        while (root1)
        {
            root = append(root, root1->data);
            root1 = root1->next;
        }
    }

    if (root2)
    {
        while (root2)
        {
            root = append(root, root2->data);
            root2 = root2->next;
        }
    }

    return root;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    Node *root1 = nullptr;
    for (int i = 0; i < n1; i++)
    {
        int data;
        cin >> data;
        root1 = append(root1, data);
    }

    Node *root2 = nullptr;
    for (int i = 0; i < n2; i++)
    {
        int data;
        cin >> data;
        root2 = append(root2, data);
    }

    print(root1);
    print(root2);
    Node *ml = merge(root1, root2);
    print(ml);

    return 0;
}
