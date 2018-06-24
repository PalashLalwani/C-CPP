/*
Vectors are same as dynamic arrays with the ability to resize itself automatically
when an element is inserted or deleted, with their storage being handled automatically by the container.
Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators.
In vectors, data is inserted at the end. Inserting at the end takes differential time,
as sometimes there may be a need of extending the array.Removing the last element takes only constant time,
because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
 //cout<<"hello";

 vector <int> v(10);

for(int i=0;i<v.size();i++){
  v[i]=i*5;
}

 cout<<v.empty()<<endl; //will return boolean value

  vector <int> g1;

    for (int i = 1; i <= 5; i++)
        g1.push_back(i);

    cout << "Size : " << g1.size();
    cout << "\nCapacity : " << g1.capacity();
    cout << "\nMax_Size : " << g1.max_size()<<endl;


 // accessing the elements

    cout << "Reference operator [g] : g1[2] = " << g1[2];
    cout << endl;
    cout << "at : g1.at(4) = " << g1.at(4);
    cout << endl;
    cout << "front() : g1.front() = " << g1.front();
    cout << endl;
    cout << "back() : g1.back() = " << g1.back();
    cout << endl;

 return 0;
}

