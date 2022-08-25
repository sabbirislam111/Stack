#include<bits/stdc++.h>
using namespace std;
template<typename N2> class Node{
public:
    N2 value;
    Node * Next;
    Node * Prev;

    Node(N2 val){
        value = val;
        Next = NULL;
        Prev = NULL;
    }

};

template<typename S> class Stack{


    Node <S> * head;
    Node <S> * top;
    int counte = 0;
public:
    Stack(){
        head = NULL;
        top = NULL;
    }


    // PUAH
    void push(S val){

         Node <S> * newNode = new Node<S>(val);

         if(head == NULL){
            head = top = newNode;
            counte++;
            return;
         }
         top->Next = newNode;
         newNode->Prev = top;
         top = newNode;
         counte++;
    }
    // POP

       S pop(){
        Node <S> * delNode;
        delNode = top;
        S chk;
        if(head == NULL){
            cout<<"List Underflow"<<endl;
            return chk;
        }

        if(top == head){
            head = top = NULL;
        }
        else{
            top = delNode->Prev;
            top->Next = NULL;
        }
        chk = delNode->value;
        delete delNode;
        counte--;
        return chk;
    }
    // EMPTY
    bool empt(){
       if(head == NULL) return true;
       else return false;
    }
    // SIZ
    int siz(){
        return counte;
    }



    // TOP
    S Top(){
        S chk;
        if(top == NULL) cout<<"List Underflow"<<endl;
        else{
            chk = top->value;
        }
        return chk;
    }

};

