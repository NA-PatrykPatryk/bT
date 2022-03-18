#pragma once

template <typename T>
struct Node 
{
    Node(T input);
    T m_val{};
    Node* m_left {nullptr};
};

template <typename T>
class BTree {
public:
    BTree();

public:
    int size();
    bool empty();
    void insert(T);

private:
    int m_size;
    Node<T>* m_root;
};

#include "BTree.inl"