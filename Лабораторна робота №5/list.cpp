#include <iostream>
#include <random>
#include <forward_list>
#include <algorithm>
using namespace std;

int MersenneTwister()
{
  random_device rd;
  mt19937 gen(rd());
  return gen()%100;
}

int findSize(forward_list<int> myList)
{
  int size = 0;
  while (myList.empty() == false)
  {
    size++;
    myList.pop_front();
  }
  return size;
}

void printList(forward_list<int> myList)
{
  for (int &a : myList)
  cout << a << " ";
  cout << endl;
}

int findEl(forward_list<int> myList, int el)
{
  int i = 0;
  bool found = false;
  for (std::forward_list<int>::iterator it = myList.begin(); it != myList.end(); ++it)
  {
    i++;
    if(*it == el)
    {
       found = true;
       break;
    }
  }
  if( found == true ) return i; else return -1;
}

void listProcessing(forward_list<int> myList)
{
  bool done = false;
  while (done != true)
  {
    cout << "Enter the value: ";
    int k;
    cin >> k;
    int i = findEl(myList, k);
    if (i != -1)
    {
      cout << "Element found at position: " << i << endl;
    }
    else cout << "Element not found" << endl;

    char answer;
    cout << "Do thou wish to continue? (y/n)" << endl;
    cin >> answer;
    if( answer != 'y' ) done = true;
  }
}
