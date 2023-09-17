/*
queue is linear data structure
follows FIFO order (first in first out)

in queue the element is added from rearer end and it is deleted from front end whihc will associates the FIFO order

the complexity of inserting and delting the element from queue is O(1);
becz we donn't have to search the index to delete and insert the element

opeations
1)inqueue()
2)dequeue()
3isfull()
4)isempty()
5).front()
6).rear()

real life examples:
1)A line of people waiting to buy tickets at a movie theater
2)A queue of messages waiting to be processed by a computer system

we can implement queue with 2 ways:
1) Array
2) Linked List


*/

//// queue STL
// #include <iostream>
// #include <queue>
// using namespace std;
// int main()
// {
//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(4);
//     q.push(4);
//     q.push(4);

//     while (!q.empty())
//     {
//         cout << q.front() << " ";
//         q.pop();
//     }

//     return 0;
// }

// queue implementaion with traditional approach

// #include <iostream>
// using namespace std;

// // at strat f anf r both points to 0

// // for push operation:
// // check if it is full or not  =:>  if(rear==n){queue is full}
// // check if it is empty or not  =:>  if(rear==front){queue is empty}
// // if yes =:>    arr[rear]=elment; rear++;

// // note very important condition
// //   to retain the wastage of arry   =:> if ( fornt==rear){front =0;rear=0;}
// //               here if the at both points to index 3 and array before he index 3 is empty then it will lead to wastagte of storage so make them to the start will be th e cure for that

// class Queue
// {

// public:
//     int *arr;
//     int front;
//     int rear;
//     int size;

//     Queue()
//     {
//         size = 100000001;
//         arr = new int[size];
//         front = 0;
//         rear = 0;
//     }

//     bool isempty()
//     {
//         if (front == rear)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }

//     void enqueue(int data)
//     {
//         if (rear == size)
//         {
//             cout << "Queue is full" << endl;
//         }

//         arr[rear] = data;
//         rear++;
//     }

//     int dequeue()
//     {
//         if (front == rear)
//         {
//             cout << "Queue is empty" << endl;
//         }
//         else
//         {
//             int ans = arr[front];
//             arr[front] = -1;
//             front++;
//             if (front == rear)
//             {
//                 front = 0;
//                 rear = 0;
//             }
//             return ans;
//         }
//     }
//     int qfront()
//     {
//         if (front == rear)
//         {
//             return -1;
//         }
//         else
//         {
//             return arr[front];
//         }
//     }
// };
// int main()
// {
//     Queue q;
//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     // cout << q.qfront() << endl; // 10

//     // q.dequeue();
//     // cout << q.qfront() << endl; // 20

//     // q.dequeue();
//     // cout << q.qfront() << endl; // 30
//     while (!q.isempty())
//     {
//         cout << q.qfront() << " ";
//         q.dequeue();
//     }
//     return 0;
// }

// -------------------------------------------------------------------------------------------------------------
// circular queue;

/*
circular queue is bit similar to normal queue but
here if rear pints to n-1 and one more elmeent is added then it will not go to end else it will go to the start index
-> and also if the fron is at n-1 and one more element deleted then front will not do to end else it will got to the start index

*/

// #include <iostream>
// using namespace std;

// class CircularQueue
// {
// public:
//     int *arr;
//     int f, r;
//     int size;

//     CircularQueue()
//     {
//         size = 1000001;
//         arr = new int[size];
//         f = r = -1;
//     }
//     bool isempty()
//     {
//         if (f == -1)
//         {
//             cout << "queue empty" << endl;
//             return false;
//         }
//         else
//         {
//             return true;
//         }
//     }
//     bool enquque(int value)
//     {
//         if ((f == 0 and r == size - 1) || (r == (f - 1) % (size - 1)))
//         {
//             cout << "Queue is full" << endl;
//             return false;
//         }
//         else if (f == -1)
//         {
//             f = r = 0;
//             arr[r] = value;
//         }
//         else if (r == size - 1 and f != 0)
//         {
//             r = 0;
//             arr[r] = value;
//         }
//         else
//         {
//             r++;
//             arr[r] = value;
//         }

//         return true;
//     }

//     int dqueue()
//     {
//         if (f == -1)
//         {
//             cout << "Queue is empty" << endl;
//             return -1;
//         }
//         int ans = arr[f];
//         arr[f] = -1;
//         if (f == r)
//         {
//             f = r = -1;
//         }
//         else if (f == size - 1)
//         {
//             f = 0; // to maintain cyclic nature
//         }

//         else
//         {
//             f++;
//         }
//         return ans;
//     }
// };
// int main()
// {
//     CircularQueue cq;
//     cq.enquque(1);
//     cq.enquque(2);
//     cq.enquque(3);
//     while (cq.isempty())
//     {
//         cout << cq.dqueue() << " ";
//     }
//     return 0;
// }

/*
some other types of queue:
1) input restricted queue:
    input is allowed at rear only  but pop is allowed on bothside
    operations:
        push_back, pop_front, pop_back
2) output restricted queue:
    insert is possible on both the side but pop is possible only at front
    operations:
        push_front, push_back, pop_front

*/

/*------------------------------------------------------------------------------------------------------------*/

/*
double ended queue:
here we can insert and update from both the ends
operations:
push_back, push_fornt, pop_back, pop_front

with it we can implement stack or both
main application cpu process scheduling
*/

// STL implementation of doubly ended queue:
// #include <iostream>
// #include <queue>
// using namespace std;
// int main()
// {
//     deque<int> dq;
//     dq.push_front(1);
//     dq.push_back(-1);
//     dq.push_front(2);
//     dq.push_back(-2);
//     // dq.pop_back();
//     // dq.pop_front();
//     cout << dq.front() << endl;
//     cout << dq.back();

//     if(dq.empty()){
//         cout<<"dqueue is empty"<<endl;
//     }
//     return 0;
// }

/*
standard implementation of dque;
*/

#include <iostream>
using namespace std;

class dqueue
{
public:
    int *arr;
    int f, r;
    int size;


    dqueue(int n){
        size=n;
        arr=new int[n];
        f=-1;r=-1;
    }

    bool pushFront(int val){
        //check full or not
        if((f==0 and r==size-1)||(r==(f-1)%(size-1))){
            return false;
        }
        else if( f==-1 ){
            f=0;
            r=0;
        }
        else if(f==0){
            f= size-1;
        }
        else{
            f--;

        }
    }



};
int main()
{

    return 0;
}