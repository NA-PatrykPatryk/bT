#pragma once
#include <vector>

template <typename T>
struct Node
{
    Node(T input);
    T m_val{};
    Node* m_left{ nullptr };
    Node* m_right{ nullptr };
};

template <typename T>
class BTree {
public:
    BTree();

public:
    int size();
    bool empty();
    void insert(T);
    void print();
    std::vector<T> toVector();

private:
    void printElements(Node<T>*);
    void addElements(std::vector<T>&, Node<T>*);

private:
    int m_size;
    Node<T>* m_root;
};

#include "BTree.inl"