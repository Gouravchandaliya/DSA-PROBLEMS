/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
  public:
    bool detectLoop(Node* head) {
        // code here
         Node* temp = head;
        map<Node*, bool>visited;
        if(head == NULL) return false;
        while(temp != NULL){
            if(visited[temp] == true) return 1;
            visited[temp] = true;
            temp = temp -> next;
        }
        return false;
    }
};