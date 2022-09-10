#include <cstddef>
#include <stdexcept>
#include "ulliststr.h"

ULListStr::ULListStr()
{
  head_ = NULL;
  tail_ = NULL;
  size_ = 0;
}

ULListStr::~ULListStr()
{
  clear();
}

bool ULListStr::empty() const
{
  return size_ == 0;
}

size_t ULListStr::size() const
{
  return size_;
}

void ULListStr::push_back(const std::string& val)
{
  //checking if the list is empty
  if(head_==nullptr && tail_==nullptr)
  {
    //creating the first node
    Item* my_Item = new Item();
    head_= my_Item;
    tail_= my_Item;

    //adding string to first node 
    my_Item->val[0]=val;

    //setting up first and last
    my_Item->first=0;
    my_Item->last= my_Item->first + 1;

    //setting up the rest of the linked list
    my_Item->prev=nullptr;
    my_Item->next=nullptr;

    //incrementing size
    size_++;

  }
  //checking if the list is nonempty
  else if(head_!=nullptr && tail_!=nullptr)
  {
    //case 1:last is less than ARRSIZE
    if(tail_->last>=0 && tail_->last<ARRSIZE)
    {
      tail_->val[tail_->last]=val;
      if(tail_->last + 1 <= ARRSIZE)
      {
        tail_->last = tail_->last + 1;
      }
    }
    //case 2:last is equal to ARRSIZE
    else if(tail_->last==ARRSIZE)
    {
      Item* my_new_Item = new Item();
      my_new_Item->first=0;
      my_new_Item->last= my_new_Item->first + 1;
      my_new_Item->val[0]=val;
      my_new_Item->next=nullptr;
      my_new_Item->prev=tail_;
      tail_->next = my_new_Item;

      tail_=my_new_Item;

    }

    //incrementing size
    size_++;

  }
}

void ULListStr::pop_back()
{
  
  //Base case 1: empty list
  if(head_==nullptr && tail_==nullptr)
  {
    return;
  }
  //Base case 2: single node
  else if(head_==tail_)
  {
    //decrementing last to "pop_back" element
    tail_->last = tail_->last-1;

    //checking if the node is empty after pop_back
    if(tail_->last - tail_->first==0)
    {
      Item* temp_head = head_;
      Item* temp_tail = tail_;
      head_=nullptr;
      tail_=nullptr;

      delete temp_head;
      delete temp_tail;
    }
  }
  //Rest of the cases
  else
  {
    tail_->last = tail_-> last - 1;

    //deleting current tail if it is empty
    if(tail_->last - tail_->first==0)
    {
      Item* temp_tail = tail_;
      tail_=tail_->prev;
      tail_->next=nullptr;
      delete temp_tail;
    }
  }

  if(size_>0)
  {
    size_--;
  }
  

}

void ULListStr::push_front(const std::string& val)
{
  //checking if the list is empty
  if(head_==nullptr && tail_==nullptr)
  {
    //creating the first node
    Item* my_Item = new Item();
    head_= my_Item;
    tail_= my_Item;

    //adding string to first node 
    my_Item->val[ARRSIZE-1]=val;

    //setting up first and last
    my_Item->first= ARRSIZE-1;
    my_Item->last=ARRSIZE;

    //setting up the rest of the linked list
    my_Item->prev=nullptr;
    my_Item->next=nullptr;

    //incrementing size
    size_++;


  }
  //checking if the list is nonempty
  else if(head_!=nullptr && tail_!=nullptr)
  {
    //case 1:first is greater than 0
    if(head_->first>0 && head_->first<=ARRSIZE)
    {
      if(head_->first >= 1)
      {
        head_->val[head_->first - 1]=val;
        head_->first = head_->first - 1;
      }
      /*if(head_->first - 1 >= 0)
      {
        head_->first = head_->first - 1;
      }*/
    }
      
    //case 2:first is equal to 0
    else if(head_->first==0)
    {
      Item* my_new_Item = new Item();
      my_new_Item->first=ARRSIZE-1;
      my_new_Item->last=ARRSIZE;
      my_new_Item->val[ARRSIZE-1]=val;
      my_new_Item->prev=nullptr;
      my_new_Item->next=head_;
      head_->prev=my_new_Item;

      head_=my_new_Item;
    }

    //incrementing size
    size_++;

  }

}

void ULListStr::pop_front()
{
  
  //Base case 1: empty list
  if(head_==nullptr && tail_==nullptr)
  {
    return;
  }
  //Base case 2: single node
  else if(head_==tail_)
  {
    //incrementing first to "pop_front" element
    head_->first = head_->first + 1;

    //checking if the node is empty after pop_front
    if(head_->last - head_->first==0)
    {
      Item* temp_head = head_;
      Item* temp_tail = tail_;
      head_=nullptr;
      tail_=nullptr;

      delete temp_head;
      delete temp_tail;
    }
  }
  //Rest of the cases
  else
  {
    head_->first = head_->first + 1;

    //deleting current head if it is empty
    if(head_->last - head_->first ==0)
    {
      Item* temp_head = head_;
      head_=head_->next;
      head_->prev=nullptr;
      delete temp_head;
    }
  }

  if(size_>0)
  {
    size_--;
  }
  

}


std::string const & ULListStr::back() const
{
  if(head_==nullptr && tail_==nullptr)
  {
    return NULL;
  }
  else
  {
    return tail_->val[tail_->last-1];
  }
}

std::string const & ULListStr::front() const
{
  if(head_==nullptr && tail_==nullptr)
  {
    return NULL;
  }
  else
  {
    return head_->val[head_->first];
  }
}

std::string* ULListStr::getValAtLoc(size_t loc) const
{
  size_t elementsVisited=0;
  Item* currNode = head_;
  size_t nodeIndexer=currNode->first;
  if(loc<size_)
  {
    while(currNode!=nullptr)
    {
      if(elementsVisited!=loc)
      {

        elementsVisited++;
        nodeIndexer++;
        if(nodeIndexer==currNode->last)
        {
          currNode=currNode->next;
          if(currNode!=nullptr)
          {
            nodeIndexer=currNode->first;
          }
        }
      }
      if(elementsVisited==loc)
      {
        break;
      }
    }
    
  }
  else
  {
    return NULL;
  }

  return &currNode->val[nodeIndexer];

}




void ULListStr::set(size_t loc, const std::string& val)
{
  std::string* ptr = getValAtLoc(loc);
  if(ptr == NULL){
    throw std::invalid_argument("Bad location");
  }
  *ptr = val;
}

std::string& ULListStr::get(size_t loc)
{
  std::string* ptr = getValAtLoc(loc);
  if(ptr == NULL){
    throw std::invalid_argument("Bad location");
  }
  return *ptr;
}

std::string const & ULListStr::get(size_t loc) const
{
  std::string* ptr = getValAtLoc(loc);
  if(ptr == NULL){
    throw std::invalid_argument("Bad location");
  }
  return *ptr;
}

void ULListStr::clear()
{
  while(head_ != NULL){
    Item *temp = head_->next;
    delete head_;
    head_ = temp;
  }
  tail_ = NULL;
  size_ = 0;
}
