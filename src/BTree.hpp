class Node {

};

class BTree {
public:
    BTree();

public:
    int size();
    bool empty();

private:
    int m_size;
    Node* m_root;
};