// In a school, the administration wants to maintain a specific students roll numbers efficiently.
// They need a program that allows them to create a linked list to store the student roll numbers.
// The program should dynamically allocate memory to optimize memeory usage.
// Input: 11 26 32 49
// Output:  Linked List: 11 26 32 49

#include <bits/stdc++.h>

using namespace std; // Use the standard namespace

// Define a struct for the linked list node
struct Node
{
    int data;
    Node *next;
};

int main()
{
    // Initialize the head pointer as nullptr (empty linked list)
    Node *head = nullptr;

    int numRolls;

    // Ask the user for the number of student roll numbers
    cout << "Enter the number of student roll numbers: ";
    cin >> numRolls;

    if (numRolls <= 0)
    {
        cerr << "Invalid number of student roll numbers." << endl;
        return 1;
    }

    // Input student roll numbers
    int rollNumbers[numRolls];
    cout << "Enter " << numRolls << " student roll numbers:" << endl;
    for (int i = 0; i < numRolls; ++i)
    {
        cin >> rollNumbers[i];
    }

    // Create a linked list by dynamically allocating memory for each node
    for (int i = 0; i < numRolls; ++i)
    {
        Node *newNode = new Node;
        newNode->data = rollNumbers[i];
        newNode->next = nullptr;

        // If the list is empty, set the new node as the head
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            // Otherwise, traverse to the end and add the new node
            Node *current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Display the linked list
    cout << "Linked List: ";
    Node *current = head;
    while (current != nullptr)
    {
        cout << current->data << " "; 
        current = current->next;
    }
    cout << endl;

    // Free the allocated memory
    current = head;
    while (current != nullptr)
    {
        Node *temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
