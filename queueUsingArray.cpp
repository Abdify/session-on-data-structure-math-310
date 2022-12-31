#include <iostream>

using namespace std;

int queue[100], n = 100, front = -1, back = -1;

void push(int val){
    if(back >= n - 1){
        cout << "Queue is full!" << endl;
        return;
    }

    if(front <= -1){
        front = 0;
    }

    back++;
    queue[back] = val;

}

void pop(){
    if(front == -1 || front > back){
        cout << "Queue empty" << endl;
        return;
    }

    cout << "Popped: " << queue[front] << endl;
    front++;
}

void display(){
    if(front == -1 || front > back){
        cout << "Queue empty" << endl;
        return;
    }

    for(int i = front; i <= back; i++){
        cout << queue[i] << endl;
    }
}

int main(){
    push(3);
    push(4);
    // push(5);
    // push(8);
    // push(1);


    pop();
    pop();
    pop();

    display();


    return 0;
}


// ************************** FROM SHAMIM *************************

#include <iostream>

using namespace std;
#define N 5
class Queue{
    public:
        int head, tail;
        int arr[N];
        Queue(){
            head = 0;
            tail = 0;
        }
        void enqueue(int element){
            if ((tail+1)%N==head){
                cout<<"Queue Overflow"<<endl;
            }else{
                arr[tail] = element;
                cout<<arr[tail]<<" Enqueued"<<endl;
                tail = (tail+1) % (N);
            }
        }
        void dequeue(){
            if(head == tail){
                cout<<"Queue is empty"<<endl;
                
            }else{
                cout<<arr[head]<<" dequeued"<<endl;
                head = (head+1) % (N);
            }
        }
        void display(){
            if(head == tail){
                cout<<"Queue is empty, nothing to display "<<endl;
            }else{
                cout<<"Queue elements are:\n";
                int i = head%N;
                while(i!=tail){
                    cout<<arr[i]<<" ";
                    i = (i+1)%N;
                }
                cout<<"\n"<<endl;
            }
        }  
};

int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.display();
    q.dequeue();
    q.dequeue();
    q.display();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.enqueue(1);
    q.enqueue(2);
    q.display();
    return 0;
}
