class Node
{
    int data;

public:
    Node *next;
    Node(int d) : data(d), next(nullptr) {}

    int getdata()
    {
        return data;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    Node *begin()
    {
        return head;
    }

    List() : head(nullptr), tail(nullptr) {}

    void push_front(int data)
    {
        if (head == nullptr)
        {
            Node *n = new Node(data);
            head = tail = n;
        }

        else
        {
            Node *n = new Node(data);
            n->next = head;
            head = n;
        }
    }

    void push_back(int data)
    {
        if (head == nullptr)
        {
            Node *n = new Node(data);
            head = tail = n;
        }

        else
        {
            Node *n = new Node(data);
            tail->next = n;
            tail = n;
        }
    }

    void insert(int data, int pos)
    {
        if (pos == 0)
        {
            push_front(data);
            // return;
        }

        Node *n = new Node(data);
        Node *temp = head;
        for (int jump = 1; jump <= pos - 1; jump++)
        {
            temp = temp->next;
        }

        n->next = temp->next;
        temp->next = n;
    }

    bool search(int key)
    {
        Node *start = head;
        while (start != nullptr)
        {
            if (start->getdata() == key)
            {
                return true;
            }

            start = start->next;
        }
        return false;
    }

    bool recsearch(Node *head, int key)
    {
        Node *start = head;
        // base
        if (start == nullptr)
        {
            return false;
        }

        if (start->getdata() == key)
        {
            return true;
        }

        return recsearch(start->next, key);
    }

    int searchidx(int key)
    {
        int idx = 0;
        Node *start = head;
        while (start != nullptr)
        {
            if (start->getdata() == key)
            {
                return idx;
            }

            idx++;
            start = start->next;
        }
        return -1;
    }
};