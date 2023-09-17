/*
stack is linear data strucutre
follows LIFO order

we can implement it with the help of arrya and with linked list
all operations are performed in O(1) time complexity

*/
// #include <iostream>
// #include <stack>
// using namespace std;
// int main()
// {
//     stack<int> s;
//     s.push(1);
//     s.push(2);
//     while (!s.empty())
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     return 0;
// }

// traditional approach to implement stack

// #include <iostream>
// using namespace std;

// class Stack
// {
// public:
//     // data memebers
//     //  int *arr=new int[3];//dynamically craeted array
//     int top;
//     int size;
//     int *arr;

//     // properties or behaviour

//     Stack(int size)
//     {
//         top = -1;
//         this->size = size;
//         arr = new int[size];
//     }

//     void push(int val)
//     {
//         if (size - top > 1)
//         {
//             top++;
//             arr[top] = val;
//         }
//         else
//         {
//             cout << "Stack is full" << endl;
//         }
//     }

//     void pop()
//     {
//         if (top >= 0)
//         {
//             top--;
//         }
//         else
//         {
//             cout << "Stack is empty" << endl;
//         }
//     }

//     int peek()
//     {
//         if (top >= 0)
//         {
//             return arr[top];
//         }
//         else
//         {
//             cout << "Stack is empty" << endl;
//             return -1;
//         }
//     }

//     bool isEmplty()
//     {
//         if (top == -1)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     void PrintStack(Stack &s)
//     {
//         // If stack is empty then return
//         if (s.isEmplty())
//             return;

//         int x = s.peek();

//         // Pop the top element of the stack
//         s.pop();

//         // Recursively call the function PrintStack
//         PrintStack(s);

//         // Print the stack element starting
//         // from the bottom
//         cout << x << " ";

//         // Push the same element onto the stack
//         // to preserve the order
//         s.push(x);
//     }
// };

// int main()
// {
//     Stack st(5);
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.push(5);
// st.PrintStack(st);
//     return 0;
// }