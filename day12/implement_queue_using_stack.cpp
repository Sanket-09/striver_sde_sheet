using namespace std;
#include <stack>
class Queue
{
 // Make 2 stacks ans size
 stack<int> s1;
 stack<int> s2;
 int size;

public:
 Queue()
 {
  // Initialize your size structure here.
  size = 0;
 }

 void enQueue(int val)
 {
  // Enque or push operation

  // Push into stack 1
  s1.push(val);

  // Update the size
  size++;
 }

 int deQueue()
 {
  // Dequeue or pop opeation

  int ans;
  // Step 1 : Chcek if s2 is empty or not
  if (!s2.empty())
  {
   ans = s2.top();
   s2.pop();
  }
  else
  {
   // If s2 is e,pty put all the elements from s1 to s2
   while (!s1.empty())
   {
    int val = s1.top();
    s1.pop();
    s2.push(val);
   }

   // Again check if s2 is empty or not
   // if s1 was empty the s2 will also be empty
   if (!s2.empty())
   {
    ans = s2.top();
    s2.pop();
   }
   // If both are empty (s1, s2)
   else
   {
    return -1;
   }
  }
  size--;
  return ans;
 }

 int peek()
 {
  // if s2 is not empty then s2.top() is answer
  if (!s2.empty())
  {
   return s2.top();
  }
  else
  {
   // if both s1 and s2 is empty
   if (s1.empty())
   {
    return -1;
   }
   else
   {
    // if only s2 is empty
    while (!s1.empty())
    {
     s2.push(s1.top());
     s1.pop();
    }
    return s2.top();
   }
  }
 }

 bool isEmpty()
 {
  if (size == 0)
  {
   return true;
  }
  else
  {
   return false;
  }
 }
};
