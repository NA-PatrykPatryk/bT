#include "BTree.hpp"

template <typename T>
Node<T>::Node(T val)
    : m_val{ val }
{}

template <typename T>
BTree<T>::BTree()
    : m_size{ 0 }
    , m_root{ nullptr }
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
    if (m_root == nullptr)
        m_root = new Node(value);
    else
    {
        Node<T>* current = m_root;

        while (true)
        {
            if (value <= current->m_val)
            {
                if (current->m_left == nullptr)
                {
                    current->m_left = new Node(value);
                    break;
                }
                else
                    current = current->m_left;
            }
            else
            {
                if (current->m_right == nullptr)
                {
                    current->m_right = new Node(value);
                    break;
                }
                else
                    current = current->m_right;
            }
        }
    }
    ++m_size;
}

template <typename T>
void BTree<T>::print()
{
    printElements(m_root);
}

template <typename T>
void BTree<T>::printElements(Node<T>* node)
{
    if (node != nullptr)
    {
        printElements(node->m_left);
        std::cout << node->m_val << " ";
        printElements(node->m_right);
    }
}

// template <typename T>
// std::vector<T> BTree<T>::toVector()
// {
//     std::vector<T> result{};
//     Node* currentNode{ m_root };

//     result.push_back(currentNode->m_val);


// }