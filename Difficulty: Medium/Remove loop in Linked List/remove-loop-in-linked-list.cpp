/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        // code here
        Node* prev = 0;
        Node* curr = head;
        
        map<Node*,bool> visited;
        while(curr!=nullptr){
            if(visited[curr] == true){
                prev->next = nullptr;
                return;
            }
            visited[curr] = true;
            prev = curr;
            curr= curr -> next;
        }
    }
};