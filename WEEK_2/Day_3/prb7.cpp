#include <iostream>
using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* curr = head;

        while (curr && curr->next) {

            if (curr->val == curr->next->val) {
                curr->next = curr->next->next;
            }
            else {
                curr = curr->next;
            }
        }

        return head;
    }
};

// Function to insert a node at the end
void insertNode(ListNode*& head, int value) {
    ListNode* newNode = new ListNode(value);

    if (head == NULL) {
        head = newNode;
        return;
    }

    ListNode* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Function to print linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Solution obj;

    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    ListNode* head = NULL;

    cout << "Enter elements of sorted linked list: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        insertNode(head, x);
    }

    head = obj.deleteDuplicates(head);

    cout << "Linked List after removing duplicates: ";
    printList(head);

    return 0;
}