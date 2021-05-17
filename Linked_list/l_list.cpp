#include <iostream>
using namespace std;

class Node{
public:
    Node(int d, Node* p): data(d), next(p){}
    int data;
    Node* next;
};


void print_list(Node* head){
    while(head != nullptr){
        std::cout << head->data << "->";
        head = head->next;
    }
    std::cout  << "NULL\n";
}

void delete_from_list(Node* node){
    Node* node_to_del = node->next;
    node->data = node->next->data;
    node->next = node->next->next;
    delete(node_to_del);
}

Node* search(Node* head, const int& value){
    Node* local_head = head;
    while(local_head != nullptr){
       if(local_head->data == value)
           return local_head;
       local_head = local_head->next;
    }
}

int main(){

    Node* n_5 = new Node(5, nullptr);
    Node* n_4 = new Node(4, n_5);
    Node* n_3 = new Node(3, n_4);
    Node* n_2 = new Node(2, n_3);
    Node* head = new Node(1,n_2);

    print_list(head);

    //Node* my = search(head,3);
    //delete_from_list(my);
    delete_from_list(n_3);

    print_list(head);
}