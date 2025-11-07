#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    //constructor
    Node(int x){
        data = x;
        prev = nullptr;
        next = nullptr;
    }
    
};
    void printList(Node* head){
        Node* temp = head;
        while(temp){
            cout <<temp-> data;
            if (temp->next) cout << " <-> ";
            temp = temp -> next;
        }
        cout << endl;
    }

    Node* reverseDLL(Node* head){
        if(!head) return nullptr;
        Node* current = head;
        Node* newHead = nullptr; // will eventually be the new head

    while (current) {
        // Step 1: store original next pointer
        Node* temp = current->next;

        // Step 2: swap next and prev
        current->next = current->prev;
        current->prev = temp;

        // Step 3: update newHead to current (last processed node)
        newHead = current;

        // Step 4: move to next node in original list
        // after swap, original next is in prev
        current = current->prev;
    }

    return newHead; // return new head of reversed list

    }

    int main() {
    // Creating nodes
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);
    Node* n4 = new Node(40);

    // Linking nodes: 10 <-> 20 <-> 30 <-> 40
    n1->next = n2;
    n2->prev = n1; n2->next = n3;
    n3->prev = n2; n3->next = n4;
    n4->prev = n3;
    cout << "Original List: ";
    printList(n1);

    Node* reversedHead = reverseDLL(n1);

    cout << "Reversed List: ";
    printList(reversedHead);

    return 0;
}
