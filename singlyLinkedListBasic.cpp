#include <iostream>
using namespace std;

// ---------------- NODE STRUCTURE ----------------
struct Node {
    int data;
    Node* next;
};

// ---------------- PRINT LIST ----------------
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// ---------------- INSERT AT START ----------------
void insertAtStart(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// ---------------- INSERT AT END ----------------
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

// ---------------- INSERT AT SPECIFIC POSITION ----------------
void insertAtPosition(Node*& head, int value, int pos) {
    if (pos == 0) {
        insertAtStart(head, value);
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) return;

    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = temp->next;
    temp->next = newNode;
}

// ---------------- DELETE AT START ----------------
void deleteAtStart(Node*& head) {
    if (head == NULL) return;

    Node* temp = head;
    head = head->next;
    delete temp;
}

// ---------------- DELETE AT END ----------------
void deleteAtEnd(Node*& head) {
    if (head == NULL) return;

    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;

    delete temp->next;
    temp->next = NULL;
}

// ---------------- DELETE AT SPECIFIC POSITION ----------------
void deleteAtPosition(Node*& head, int pos) {
    if (head == NULL) return;

    if (pos == 0) {
        deleteAtStart(head);
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos && temp->next != NULL; i++)
        temp = temp->next;

    if (temp->next == NULL) return;

    Node* delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;
}

// ---------------- SORT LINKED LIST ----------------
void sortList(Node* head) {
    if (head == NULL) return;

    for (Node* i = head; i->next != NULL; i = i->next) {
        for (Node* j = i->next; j != NULL; j = j->next) {
            if (i->data > j->data) {
                int temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}

// ---------------- MAIN FUNCTION ----------------
int main() {
    Node* head = NULL;

    // Initial insertions
    insertAtEnd(head, 103);
    insertAtEnd(head, 101);
    insertAtEnd(head, 105);
    insertAtEnd(head, 102);

    cout << "Initial List: ";
    printList(head);

    // Insertions
    insertAtStart(head, 100);
    insertAtEnd(head, 106);
    insertAtPosition(head, 104, 3);

    cout << "After Insertions: ";
    printList(head);

    // Deletions
    deleteAtStart(head);
    deleteAtEnd(head);
    deleteAtPosition(head, 2);

    cout << "After Deletions: ";
    printList(head);

    // Sorting
    sortList(head);
    cout << "After Sorting: ";
    printList(head);

    return 0;
}
