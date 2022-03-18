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
void BTree<T>::insert(T value)
{
    if (m_root == nullptr) {
        m_root = new Node(value);
        ++m_size;
    } else {
        Node<T>* current = m_root;
        while(true) {
            if (value < current->m_val) {
                if (current->m_left == nullptr) {
                    current->m_left = new Node(value);
                    ++m_size;
                    break;
                } else {
                    current = current->m_left;
                }
            }
        }
    }

}