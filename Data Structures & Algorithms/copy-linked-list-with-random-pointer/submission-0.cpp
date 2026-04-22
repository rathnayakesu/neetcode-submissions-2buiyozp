/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        unordered_map<Node*, Node*> mapper;
        mapper[NULL] = NULL;

        Node* curr = head;

        while(curr != NULL){
            Node* copy = new Node(curr->val);
            mapper[curr] = copy;
            curr = curr->next;
        }
        curr = head;

        while(curr!=NULL){
            Node* copy = mapper[curr];
            copy->next = mapper[curr->next];
            copy->random = mapper[curr->random];
            curr = curr->next;
        }

        return mapper[head];
        
    }
};
