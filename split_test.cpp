#include "split.h"
#include <iostream>
using namespace std;

void split(Node*&, Node*&, Node*&);

int main()
{

  /*Node* a = new Node(1,nullptr);
  Node* b = new Node(2,nullptr);
  Node* c = new Node(3,nullptr);
  Node* d = new Node(4,nullptr);
  Node* e = new Node(5,nullptr);
  Node* f = new Node(6,nullptr);*/

  Node* a = new Node(0,nullptr);
  Node* b = new Node(0,nullptr);
  Node* c = new Node(0,nullptr);
  Node* d = new Node(42,nullptr);
  Node* e = new Node(67,nullptr);
  Node* f = new Node(89,nullptr);

  a->next = b;
  b->next = c;
  c->next = d;
  d->next = e;
  e->next = f;

  Node* input = a;
  Node* odd = nullptr;
  Node* even = nullptr;

  split(input, odd, even);

  while(odd!=nullptr)
  {
    cout << odd->value << endl;
    //if(odd->next!=nullptr)
    if(odd->next)
    {
      odd = odd->next;
      /*if(odd==nullptr)
      {
        break;
      }*/
    }
    //else if(odd->next==nullptr)
    else if(!(odd->next))
    {
      break;
    }
  }

  cout<<endl;

  while(even!=nullptr)
  {
    cout << even->value << endl;
    //if(even->next!=nullptr)
    if(even->next)
    {
      even = even->next;
      /*if(even==nullptr)
      {
        break;
      }*/
    }
    //else if(even->next==nullptr)
    else if(!(even->next))
    {
      break;
    }
  }

  delete a;
  delete b;
  delete c;
  delete d;
  delete e;
  delete f;
}

/*void split(Node*& in, Node*& odds, Node*& evens)
{
  if(in==nullptr)
  {
    //in = nullptr;
    odds=nullptr;
    evens=nullptr;
    return;
  }

  if (in->value%2==0)
  {
    evens = in;
    in = in -> next;
    //odds->next = split(in, odds,evens->next);
    split(in, odds,evens->next);
  }
  else if(in->value%2!=0)
  {
    odds = in;
    in = in -> next;
    //odds->next = split(in, odds->next,evens);
    split(in, odds->next,evens);
  }
}*/