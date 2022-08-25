#include<bits/stdc++.h>
using namespace std;
    template<typename N> class Nodeq{
    public:
        N value;
        Nodeq * Next;

        Nodeq(N val){
            value = val;
            Next = NULL;
        }


    };

    template<typename Q> class Queue{
        Nodeq<Q>* front;
        Nodeq<Q>* rear;

    public:
        Queue(){
            front = NULL;
            rear = NULL;
        }

        //Enqueue --> push
        void push(Q val){
            Nodeq <Q>* newNode = new Nodeq<Q>(val);

            if(front == NULL){
                front = newNode;
                rear = newNode;
                return;
            }
            rear->Next = newNode;
            rear = rear->Next;

        }


        //Dequeue --> pop

        Q pop(){

            Q chk;
            if(rear == NULL){
                cout<<"Queue Underflow"<<endl;
                return chk;
            }
            Nodeq<Q>* delNode;
            chk;
            delNode = front;
            front = front->Next;
            if(front == NULL){
                rear = NULL;
            }
            chk = delNode->value;
            delete delNode;
            return chk;
        }


        //Peek --> font and back
    Q fronT()
    {
        Q chk = front->value;
        return chk;
    }

    Q back()
    {
        Q chk = rear->value;
        return chk;
    }


        //Empty
        bool empty(){
            if(rear == NULL && front == NULL){
                return true;
            }
            else{
                return false;
            }
        }

    };


