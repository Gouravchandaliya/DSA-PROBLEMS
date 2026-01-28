/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

/* Should return true if linked list is circular, else false */
class Solution {
  public:
    bool isCircular(Node *head) {
    if(head == NULL) return false;

    Node* curr = head->next;

    while(curr != NULL && curr != head) {
        curr = curr->next;
    }

    return (curr == head);
}

};

