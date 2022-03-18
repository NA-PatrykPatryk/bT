#include "BTree.hpp"

BTree::BTree()
    : m_size{0}
    , m_root{nullptr}
    {}

int BTree::size() {
    return m_size;
}

bool BTree::empty() {
    return m_root == nullptr;
}