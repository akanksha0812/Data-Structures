
class Solution {
public:
    
    Node* copyRandomList(Node* head) {
        
        //mapping original node to its copy
        unordered_map<Node*, Node*> created;
        
        return helper(head, created);
    }
    
    Node* helper(Node* head, unordered_map<Node*, Node*> & created) {
        if (!head) return nullptr;
		
        if (created.find(head) != created.end()) return created[head];
		
        Node * curr = new Node(head->val, nullptr, nullptr);
        created[head] = curr;
        curr->next = helper(head->next, created);
        curr->random = helper(head->random, created);
        return curr;
    }
};