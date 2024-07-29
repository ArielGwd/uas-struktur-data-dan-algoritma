#include <iostream>
using namespace std;

struct Node
{
    char label;
    Node *kiri, *kanan, *parent;
};

Node *root, *newNode;

void tambahRoot(char label)
{
    root = new Node;
    root->label = label;
    root->kiri = root->kanan = root->parent = NULL;
    cout << "Berhasil menambahkan root " << label << endl << endl;
}

Node *tambahKeKiri(char label, Node *node)
{
    newNode = new Node;
    newNode->label = label;
    newNode->kiri = newNode->kanan = NULL;
    newNode->parent = node;
    node->kiri = newNode;
    cout << "Berhasil menambahkan node " << label << " ke kiri dari root " << node->label << endl;
    return newNode;
}

Node *tambahKeKanan(char label, Node *node)
{
    newNode = new Node;
    newNode->label = label;
    newNode->kiri = newNode->kanan = NULL;
    newNode->parent = node;
    node->kanan = newNode;
    cout << "Berhasil menambahkan node " << label << " ke kanan dari root " << node->label << endl;
    return newNode;
}

void preOrder(Node *node = root)
{
    if (node != NULL)
    {
        cout << node->label << ", ";
        preOrder(node->kiri);
        preOrder(node->kanan);
    }
}

int main()
{
    tambahRoot('a');
    Node *nodeB, *nodeC, *nodeD, *nodeE, *nodeF, *nodeG, *nodeH, *nodeI, *nodeJ;
    nodeB = tambahKeKiri('b', root);
    nodeC = tambahKeKanan('c', root);
    nodeD = tambahKeKiri('d', nodeB);
    nodeE = tambahKeKanan('e', nodeB);
    nodeF = tambahKeKiri('f', nodeC);
    nodeG = tambahKeKiri('g', nodeE);
    nodeH = tambahKeKanan('h', nodeE);
    nodeI = tambahKeKiri('i', nodeG);
    nodeJ = tambahKeKanan('j', nodeG);

    cout << endl;

    cout << "Tampilan data setelah melakukan Traversal PreOrder" << endl;
    preOrder();

    return 0;
}