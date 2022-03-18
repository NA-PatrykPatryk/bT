#include "BTree.hpp"

template <typename T>
Node<T>::Node(T val)
    : m_val{ val }
{}

template <typename T>
BTree<T>::BTree()
    : m_size{0}
    , m_root{nullptr}
{}

template <typename T>
int BTree<T>::size() {
    return m_size;
}

template <typename T>
bool BTree<T>::empty() {
    return m_root == nullptr;
}

template <typename T>
void BTree<T>::insert(T input)
{
    m_root = new Node(input);
    ++m_size;
}