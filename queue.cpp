#include <iostream>
#include <queue>

using namespace std;


int main (){
    queue<int> q;

    q.push(1);
    q.push(5);
    q.push(2);
    q.push(85);

    q.pop();

    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;
    cout << "Size: " << q.size() << endl;
    
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}