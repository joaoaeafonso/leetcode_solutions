
#pragma once

// The link to this problem can be found here: https://leetcode.com/problems/add-two-numbers/description/

namespace medium {

    struct ListNode {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        explicit ListNode(const int x) : val(x), next(nullptr) {}
        ListNode(const int x, ListNode *next) : val(x), next(next) {}
    };

    class AddTwoNumbersListNodes {
        public:
            AddTwoNumbersListNodes() = default;

            [[nodiscard]] static ListNode* addTwoNumbers(const ListNode* l1, const ListNode* l2);
    };

}
