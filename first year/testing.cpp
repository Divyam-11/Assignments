#include<iostream>
#include<bits/stdc++.h>
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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        ListNode* first ;
        ListNode* second;
        int count = 0;
        while(temp){
            if(count == a-1){
                first = temp;

            }
            else if(count == b){
                second = temp;
            }
            temp = temp->next;
            count++;
        }
        first->next = list1;
        temp = list1;
        while(temp->next){
            temp = temp->next;
        }
        temp->next = second->next;
        return list1;
    }
};
int main()
{
    return 0;
}