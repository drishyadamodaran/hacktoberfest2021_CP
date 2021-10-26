//binary
#include <iostream>
using namespace std;

int main ()
{
int n, i, s, l, mid, element;
cout<<"Enter size "<<endl;
cin >> n ;
 int a[n];
cout<<"Enter the elements in ascending order"<<endl;//0 1 2 4 5 6 8 9 11 12 and then search 11
 for (i = 0; i < n; i++)
  cin >> a[i];
  cout<<"Enter the value you want to search"<<endl;
   cin>>element;
 
 s = 0;
 l = n - 1;
 while (s <= l)
  {
 mid = (s + l) / 2; 
 if (a[mid] == element) 
{
 cout <<"Element is present at "<<mid<<" index value"<<endl;
 break;
}
   else if (a[mid] > element) 
 l = mid - 1;
   else 
 s = mid + 1;
  }

 if (a[mid] != element){
 cout << "Search element not found";

}

 return 0;
}
