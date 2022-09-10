/* Write your test code for the ULListStr in this file */

#include <iostream>
using namespace std;
#include "ulliststr.h"


int main(int argc, char* argv[])
{



  //testing push_front when the list is empty
  ULListStr dat;
  dat.push_front("hello");
  cout<<"The first element is "<<dat.front()<<endl;


  //adding 9 more elements to complete the node
  dat.push_front("world");
  dat.push_front("my");
  dat.push_front("name");
  dat.push_front("is");
  dat.push_front("iha");
  dat.push_front("chikkala");
  dat.push_front("how");
  dat.push_front("are");
  dat.push_front("you");

  //printing each one using front() and then popping front
  cout<<"The first element is "<<dat.front()<<endl;
  dat.pop_front();
  cout<<"The first element is "<<dat.front()<<endl;
  dat.pop_front();
  cout<<"The first element is "<<dat.front()<<endl;
  dat.pop_front();
  cout<<"The first element is "<<dat.front()<<endl;
  dat.pop_front();
  cout<<"The first element is "<<dat.front()<<endl;
  dat.pop_front();
  cout<<"The first element is "<<dat.front()<<endl;
  dat.pop_front();
  cout<<"The first element is "<<dat.front()<<endl;
  dat.pop_front();
  cout<<"The first element is "<<dat.front()<<endl;
  dat.pop_front();
  cout<<"The first element is "<<dat.front()<<endl;
  dat.pop_front();
  cout<<"The first element is "<<dat.front()<<endl;
  dat.pop_front();

  //testing push_front with 10+ elements
  dat.push_front("new");
  dat.push_front("test");
  dat.push_front("with");
  dat.push_front("eleven");
  dat.push_front("elements");
  dat.push_front("kinda");
  dat.push_front("scared");
  dat.push_front("im");
  dat.push_front("really");
  dat.push_front("hungry");
  dat.push_front("sigh");

  cout<<"The first element is "<<dat.front()<<endl;
  dat.pop_front();
  cout<<"The first element is "<<dat.front()<<endl;
  dat.pop_front();
  cout<<"The first element is "<<dat.front()<<endl;
  dat.pop_front();
  cout<<"The first element is "<<dat.front()<<endl;
  dat.pop_front();
  cout<<"The first element is "<<dat.front()<<endl;
  dat.pop_front();
  cout<<"The first element is "<<dat.front()<<endl;
  dat.pop_front();
  cout<<"The first element is "<<dat.front()<<endl;
  dat.pop_front();
  cout<<"The first element is "<<dat.front()<<endl;
  dat.pop_front();
  cout<<"The first element is "<<dat.front()<<endl;
  dat.pop_front();
  cout<<"The first element is "<<dat.front()<<endl;
  dat.pop_front();
  cout<<"The first element is "<<dat.front()<<endl;
  dat.pop_front();




//testing push_back when the list is empty
  ULListStr dat2;
  dat2.push_back("i'm stressed");
  //cout<<"The last element is "<<dat2.back()<<endl;

  //adding 9 more elements to complete the node
  dat2.push_back("i");
  dat2.push_back("was");
  dat2.push_back("really");
  dat2.push_back("sick");
  dat2.push_back("this");
  dat2.push_back("week");
  dat2.push_back("it");
  dat2.push_back("kinda");
  dat2.push_back("sucked");

  //printing each element using back() and then popping back
  cout<<"The last element is "<<dat2.back()<<endl;
  dat2.pop_back();
  cout<<"The last element is "<<dat2.back()<<endl;
  dat2.pop_back();
  cout<<"The last element is "<<dat2.back()<<endl;
  dat2.pop_back();
  cout<<"The last element is "<<dat2.back()<<endl;
  dat2.pop_back();
  cout<<"The last element is "<<dat2.back()<<endl;
  dat2.pop_back();
  cout<<"The last element is "<<dat2.back()<<endl;
  dat2.pop_back();
  cout<<"The last element is "<<dat2.back()<<endl;
  dat2.pop_back();
  cout<<"The last element is "<<dat2.back()<<endl;
  dat2.pop_back();
  cout<<"The last element is "<<dat2.back()<<endl;
  dat2.pop_back();
  cout<<"The last element is "<<dat2.back()<<endl;
  dat2.pop_back();

  //testing push_back with 10+ elements
  dat2.push_back("it");
  dat2.push_back("is");
  dat2.push_back("day");
  dat2.push_back("785");
  dat2.push_back("on");
  dat2.push_back("this");
  dat2.push_back("godforsaken");
  dat2.push_back("island");
  dat2.push_back("yuh");
  dat2.push_back("iykyk");
  dat2.push_back("from tiktok");

  cout<<"The last element is "<<dat2.back()<<endl;
  dat2.pop_back();
  cout<<"The last element is "<<dat2.back()<<endl;
  dat2.pop_back();
  cout<<"The last element is "<<dat2.back()<<endl;
  dat2.pop_back();
  cout<<"The last element is "<<dat2.back()<<endl;
  dat2.pop_back();
  cout<<"The last element is "<<dat2.back()<<endl;
  dat2.pop_back();
  cout<<"The last element is "<<dat2.back()<<endl;
  dat2.pop_back();
  cout<<"The last element is "<<dat2.back()<<endl;
  dat2.pop_back();
  cout<<"The last element is "<<dat2.back()<<endl;
  dat2.pop_back();
  cout<<"The last element is "<<dat2.back()<<endl;
  dat2.pop_back();
  cout<<"The last element is "<<dat2.back()<<endl;
  dat2.pop_back();
  cout<<"The last element is "<<dat2.back()<<endl;
  dat2.pop_back();


//testing the given test case
ULListStr dat3;
dat3.push_back("7");
dat3.push_front("8");
dat3.push_back("9");
cout << dat3.get(0) << " " << dat3.get(1) << " " << dat3.get(2) << endl;
cout << dat3.size() << endl;


//testing get with 10+ elements
  ULListStr dat4;
  dat4.push_back("testing");
  dat4.push_back("is");
  dat4.push_back("kind");
  dat4.push_back("of");
  dat4.push_back("hard");
  dat4.push_back("im");
  dat4.push_back("so");
  dat4.push_back("tired");
  dat4.push_back("almost");
  dat4.push_back("there");
  dat4.push_back("though");

  cout << dat4.get(0) << " " << dat4.get(1) << " " << dat4.get(2) << endl;
  cout << dat4.get(3) << " " << dat4.get(4) << " " << dat4.get(5) << endl;
  cout << dat4.get(6) << " " << dat4.get(7) << " " << dat4.get(8) << endl;
  cout << dat4.get(9) << " " << dat4.get(10) << endl;

  //testing set
  dat4.set(4, "applessssss");
  cout <<  dat4.get(4) << endl;





  return 0;
}
