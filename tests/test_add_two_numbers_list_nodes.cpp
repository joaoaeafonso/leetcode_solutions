#include <gtest/gtest.h>
#include <include/add_two_numbers_list_nodes_solution.hpp>

using namespace medium;

class AddTwoNumbersListNodesTest: public ::testing::Test {
public:
    static ListNode* createList(const std::vector<int>& values) {
        ListNode dummy(0);
        ListNode* current = &dummy;
        for (const int val : values) {
            current->next = new ListNode(val);
            current = current->next;
        }
        return dummy.next;
    }

    static std::vector<int> listToVector(const ListNode* head) {
        std::vector<int> result;
        while (head) {
            result.push_back(head->val);
            head = head->next;
        }
        return result;
    }

    static void deleteList(const ListNode* head) {
        while (head) {
            const ListNode* temp = head;
            head = head->next;
            delete temp;
        }
    }
};


TEST_F(AddTwoNumbersListNodesTest, AddTwoNumbers_SimpleCase) {
    const ListNode* l1 = createList({2, 4, 3});
    const ListNode* l2 = createList({5, 6, 4});

    const ListNode* result = AddTwoNumbersListNodes::addTwoNumbers(l1, l2);

    EXPECT_EQ(listToVector(result), (std::vector{7, 0, 8}));

    deleteList(l1);
    deleteList(l2);
    deleteList(result);
}

TEST_F(AddTwoNumbersListNodesTest, AddTwoNumbers_DifferentLengths) {
    const ListNode* l1 = createList({9, 9});
    const ListNode* l2 = createList({1});

    const ListNode* result = AddTwoNumbersListNodes::addTwoNumbers(l1, l2);

    EXPECT_EQ(listToVector(result), (std::vector{0, 0, 1}));

    deleteList(l1);
    deleteList(l2);
    deleteList(result);
}

TEST_F(AddTwoNumbersListNodesTest, AddTwoNumbers_WithCarry) {
    const ListNode* l1 = createList({5});
    const ListNode* l2 = createList({5});

    const ListNode* result = AddTwoNumbersListNodes::addTwoNumbers(l1, l2);

    EXPECT_EQ(listToVector(result), (std::vector{0, 1}));

    deleteList(l1);
    deleteList(l2);
    deleteList(result);
}

TEST_F(AddTwoNumbersListNodesTest, AddTwoNumbers_EmptyLists) {
    const ListNode* l1 = nullptr;
    const ListNode* l2 = nullptr;

    const ListNode* result = AddTwoNumbersListNodes::addTwoNumbers(l1, l2);

    EXPECT_EQ(listToVector(result), (std::vector<int>{}));

    deleteList(result);
}

TEST_F(AddTwoNumbersListNodesTest, AddTwoNumbers_OneEmptyList) {
    const ListNode* l1 = createList({1, 2, 3});
    const ListNode* l2 = nullptr;

    const ListNode* result = AddTwoNumbersListNodes::addTwoNumbers(l1, l2);

    EXPECT_EQ(listToVector(result), (std::vector{1, 2, 3}));

    deleteList(l1);
    deleteList(result);
}
