class Solution {public: ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

ListNode* currentNode = l1;  // Start from the head of the linked list
ListNode* currentNode2 = l2; 
ListNode* l3 = new ListNode(10);
ListNode* currentNode3 = l3;
int carry = 0;
int add;
bool n1 = true;
bool n2 = true;

while (n1 == true || n2 == true || carry != 0) {
  add = carry + currentNode->val + currentNode2->val;
  carry = add /10;
  add = add % 10;

  if (currentNode->next !=nullptr){currentNode = currentNode->next;}  // Move to the next node if able
  else{currentNode->val = 0; n1 = false;} //else stop moving on and turn the last val into a 0

  if (currentNode2->next !=nullptr){currentNode2 = currentNode2->next;}  // Move to the next node if able
  else{currentNode2->val = 0; n2 = false; } 

  if (currentNode3->val != 10) { //if this isn't the first node of l3 make a new l3 node with add
    currentNode3->next = new ListNode(add);
    currentNode3= currentNode3->next;} 
  else{currentNode3->val = add;} //if it was the first node swap add in as the new first node
}

return l3;
}};