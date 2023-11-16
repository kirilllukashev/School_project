#include<bits/stdc++.h>

using namespace std;

struct node2 {
    int data;
    node2* next;
    node2* prev;
};

void ins_head(node2*& L) {
    node2* q = new node2;
    int val;
    cin >> val;
    q->data = val;
    q->prev = nullptr;
    q->next = nullptr;
    if (L == nullptr) {
        L = q;
    } else {
        L->prev = q;
        q->next = L;
        L = q;
    }
}

void make_list(node2*& L, int n) {
    for (int i = 0; i < n; ++i) {
        ins_head(L);
    }
}

node2* middle_element(node2* L) {
    node2* pos_1 = L;
    node2* pos_2 = L;
    while (pos_1->next != nullptr && pos_1->next->next != nullptr) {
        pos_1 = pos_1->next->next;
        pos_2 = pos_2->next;
    }

    node2* now = pos_2->next;
    pos_2->next = nullptr;
    return now;
}

node2* merge_now(node2* L1, node2* L2) {
    if (L1 == nullptr) {
        return L2;
    }
    if (L2 == nullptr) {
        return L1;
    }
    if (L1->data < L2->data) {
        L1->next = merge_now(L1->next, L2);
        L1->next->prev = L1;
        L1->prev = nullptr;
        return L1;
    } else {
        L2->next = merge_now(L1, L2->next);
        L2->next->prev = L2;
        L2->prev = nullptr;
        return L2;
    }
}

node2* merge_sort(node2*& L) {
    if (L == nullptr || L->next == nullptr) {
        return L;
    }
    node2* middle = middle_element(L);

    L = merge_sort(L);
    middle = merge_sort(middle);

    node2* now = merge_now(L, middle);

    return now;
}

int main(){
    node2* F = nullptr;
    int n, first_val, val;
    cin >> n;
    make_list(F, n);
    F = merge_sort(F);
    node2* q = F;
    while (n--) {
        val = q->data;
        cout << val << ' ';
        q = q->next;
    }
}
