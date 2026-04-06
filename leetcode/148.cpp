#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
  public:
    ListNode *sortList(ListNode *head) {
        ListNode *curr = head;
        vector<int> A;

        while (curr != nullptr) {
            A.push_back(curr->val);
            curr = curr->next;
        }

        sort(A.begin(), A.end());

        curr = head;
        int i = 0;

        while (curr != nullptr) {
            curr->val = A[i];
            curr = curr->next;
            i++;
        }

        return head;
    }
};

int main() {
    ListNode *n1 = new (nothrow) ListNode(4);
    ListNode *n2 = new (nothrow) ListNode(2);
    ListNode *n3 = new (nothrow) ListNode(1);
    ListNode *n4 = new (nothrow) ListNode(3);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = nullptr;

    ListNode *temp = n1;

    Solution s1;

    s1.sortList(n1);

    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;

    delete n1;
    delete n2;
    delete n3;
    delete n4;
    n1 = n2 = n3 = n4 = nullptr;
}
