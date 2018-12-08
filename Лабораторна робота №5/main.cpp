#include <iostream>
#include "list.cpp"
#include <forward_list>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  cout << "Enter the list`s size: " ;
  int n;
  cin >> n;
  cout << endl;

  forward_list<int> myList;

  int random;
  for(int i = 0; i < n; i++)
  {
    random = MersenneTwister();
    myList.push_front(random);
  }
  myList.reverse();

  cout << "The forward list`s length is: " << findSize(myList) << endl;
  cout << "The elements of forward list are : "; printList(myList);
  listProcessing(myList);
  myList.clear();

  cout << "Enter the forward list values(n to finish): " << endl;
  string nextEl;
  while (cin >> nextEl)
  {
    if(nextEl != "n")
    {
      size_t sz;
      myList.push_front(stoi(nextEl));
    }
    else break;
  }
  myList.reverse();

  cout << "The forward list`s length is: " << findSize(myList) << endl;
  cout << "The elements of forward list are : "; printList(myList);
  listProcessing(myList);
  myList.clear();

  cout << "Гуменчук Артур, ИП-71, Лабораторна робота №5, А" << endl;

}
