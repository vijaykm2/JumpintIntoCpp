#include<iostream>

using namespace std;

struct Node{
    int key_value;
    Node *p_left;
    Node *p_right;
};
Node* insert(Node *p_tree, int key);
Node* search(Node *p_tree, int key);
void destroyTree(Node *p_tree);
Node* remove(Node *p_tree, int key);

Node* insert(Node *p_tree, int key){
        if(p_tree == null){
            Node* node = new Node;
            node -> p_left = NULL;
            node -> p_right = NULL;
            node ->key_value = key;
            return node;
        }
        if(p_tree -> key_value > key){
            p_tree ->p_left =  insert(p_tree -> p_left, key);
        } else {
            p_tree ->p_left = insert(p_tree -> p_right, key);

        }
        return p_tree;
}
