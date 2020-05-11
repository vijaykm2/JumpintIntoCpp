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
Node* removeMaxNode(Node *p_tree, Node *p_max_node);

Node* insert(Node *p_tree, int key){
        if(p_tree == NULL){
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

Node* search(Node* p_tree, int key){
    if(p_tree == NULL){
        return NULL;
    }
    if(p_tree -> key_value == key){
        return p_tree;
    }
    if(p_tree -> key_value > key){
        return search(p_tree -> p_left, key);
    } else {
        return search( p_tree -> p_right, key);
    }
}
void destroyTree(Node* p_tree){
    if(p_tree != NULL){
        destroyTree(p_tree -> p_left);
        destroyTree(p_tree -> p_right);
        delete p_tree;
    }
}

Node* findMax(Node* p_tree){
    if(p_tree == NULL) return NULL;
    if(p_tree -> p_right == NULL) return p_tree;
    return findMax(p_tree -> p_right);
}
Node* remove(Node* p_tree, int key){
    if(p_tree == NULL){
        return NULL;
    }
    if( p_tree -> key_value == key){
        if(p_tree->p_right == NULL){
            Node* p_left_sub = p_tree -> p_left;
            delete p_tree;
            return p_left_sub;
        }
        if(p_tree->p_left == NULL){
            Node* p_right_sub = p_tree -> p_right;
            delete p_tree;
            return p_right_sub;
        }
        Node* p_max = findMax(p_tree -> p_left);
        p_max -> p_left = removeMaxNode(p_tree -> p_left, p_max);
        p_max -> p_right = p_tree -> p_right;
        delete p_tree;
        return p_max;

    } else if(p_tree -> key_value > key){
        return remove(p_tree ->p_left, key);
    } else {
        return remove(p_tree ->p_right, key);
    }
}

Node* removeMaxNode (Node* p_tree, Node* p_max_node){
    if(p_tree == NULL){
        return NULL;
    }
    if(p_tree == p_max_node){
        return p_max_node -> p_left;
    }
    p_tree -> p_right = removeMaxNode(p_tree -> p_left, p_max_node);
    return p_tree;
}

int main(){

}