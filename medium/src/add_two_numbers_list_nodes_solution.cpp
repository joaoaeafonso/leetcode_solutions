
#include <include/add_two_numbers_list_nodes_solution.hpp>

namespace medium {
    ListNode* AddTwoNumbersListNodes::addTwoNumbers(const ListNode* l1, const ListNode* l2) {
        ListNode dummy(0);
        ListNode* currentPtr = &dummy;

        int sumOverflow = 0;
        while (l1 || l2 || sumOverflow) {
            int sum = sumOverflow;
            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }

            sumOverflow = sum / 10;
            currentPtr->next = new ListNode(sum % 10);
            currentPtr = currentPtr->next;
        }

        return dummy.next;
    }
}
