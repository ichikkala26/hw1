#ifndef SPLIT_H
#define SPLIT_H




struct Node 
{
  int value;
  Node* next;

  /**
   * Initializing constructor
   */
  Node(int v, Node* n)
  {
    value = v;
    next = n;
  }
};

void split(Node*& in, Node*& odds, Node*& evens);
// WRITE YOUR CODE HERE


/*
1. Check value of the current Node
2. If the current node is odd, move it to the odds list. 
If it is even, move it to the evens list.
3. Change the current and next in odd or even depending 
on what you just modified
4. Change the current and next pointer in the in list
5. Call split again.
*/
#endif
