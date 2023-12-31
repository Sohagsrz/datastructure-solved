/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 /**

 class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* curr = dummyHead;
        int carry = 0;
        while (l1 != NULL || l2 != NULL || carry != 0) {
            int x = l1 ? l1->val : 0;
            int y = l2 ? l2->val : 0;
            int sum = carry + x + y;
            carry = sum / 10;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }
        return dummyHead->next;
    }
};

**/

 #include <cmath>
using namespace std;

class Solution {
public:

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

      int myHand=0;
      ListNode* currentl1 = l1;
      ListNode* currentl2 = l2;
      ListNode* result = new ListNode(NULL , NULL);
      ListNode* last = new ListNode(NULL , NULL);
      int x= 0;
      while(currentl1 != NULL ||  currentl2 != NULL){

        //values
        int myN1= currentl1 != NULL ? currentl1->val : 0;
        int myN2= currentl2 != NULL ? currentl2->val : 0 ;

        //calculations
        int sumofThem= myN1 + myN2 + myHand;
        int leftN= sumofThem % 10;
        myHand= floor(sumofThem / 10);

        //nodes
        ListNode* nMyNode = new ListNode(leftN , NULL);
        if(x==0){
         result = nMyNode;
        }else{
         last->next = nMyNode;
        }

     // cout << myN1 << " + " << myN2 << " = " << sumofThem << " bosbe = " <<  leftN << " , hate ache => " << myHand  <<" \n";

        //next node
        x++;
        last = nMyNode;
        currentl1 = currentl1 != NULL ? currentl1->next : NULL;
        currentl2 = currentl2 != NULL ? currentl2->next : NULL;
      }

      //last left calculation
      if(myHand > 0){
        ListNode* nMyNode = new ListNode(myHand , NULL);
        if(x==0){
         result = nMyNode;
        }else{
         last->next = nMyNode;
        }
      }
      return result;
    }
};
