#include<bits/stdc++.h>

using namespace std;

struct node {
    int data;
    node* next;
};

void ins_head(node*& L) {
    node* q = new node;
    int val;
    cin >> val;
    q->data = val;
    L->next = q;
    L = q;
}

void make_list(node*& L, int n) {
    for (int i = 0; i < n; ++i) {
        ins_head(L);
    }
}

int length(node*& F, node*& L) {
    int len = 0;
    node* now = F;
    while (now != L) {
        now = now->next;
        len++;
    }
    return len + 1;
}

int middle_element(node*& F, node*& L) {
    int len = length(F, L);
    node* now = F;
    for (int i = 0; i < len / 2; ++i) {
        now = now->next;
    }
    return now->data;
}

void quick_sort(node*& l, node*& r) {
    if (l == nullptr || l->next == nullptr) return;
    node* l_beg = nullptr;
    node* m_beg = nullptr;
    node* r_beg = nullptr;
    node* l_end = l_beg;
    node* m_end = m_beg;
    node* r_end = r_beg;

    node* now = l;
    int p = middle_element(l, r);

    while (now != nullptr) {
        if (now->data < p) {
            if (l_beg == nullptr) {
                l_beg = now;
                l_end = l_beg;
            } else {
                l_end->next = now;
                l_end = l_end->next;
            }
        } else if (now->data == p) {
            if (m_beg == nullptr) {
                m_beg = now;
                m_end = m_beg;
            } else {
                m_end->next = now;
                m_end = m_end->next;
            }
        } else {
            if (r_beg == nullptr) {
                r_beg = now;
                r_end = r_beg;
            } else {
                r_end->next = now;
                r_end = r_end->next;
            }
        }
        now = now->next;
    }
    if (l_end != nullptr) {
        l_end->next = nullptr;
        quick_sort(l_beg, l_end);
    }
    if (r_end != nullptr) {
        r_end->next = nullptr;
        quick_sort(r_beg, r_end);
    }

    if (l_beg != nullptr) {
        l = l_beg;
        l_end->next = m_beg;
    } else {
        l = m_beg;
    }

    if (r_beg != nullptr) {
        m_end->next = r_beg;
        r = r_end;
        r_end->next = nullptr;
    } else {
        m_end->next = nullptr;
        r = m_end;
    }
}

int main(){
    node* F = new node;
    node* L = F;
    int n, first_val;
    cin >> n >> first_val;
    F->data = first_val;
    make_list(L, n - 1);
    L->next = nullptr;
    quick_sort(F, L);
    node* q = F;
    int val;
    while (n--) {
        val = q->data;
        cout << val << ' ';
        q = q->next;
    }
}
