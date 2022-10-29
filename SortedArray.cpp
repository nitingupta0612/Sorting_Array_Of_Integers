#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;
class Sorting {
  int a[2000];
  public:
    void getdata() {
      int n;
      cout << "Enter the number of terms you want to get sort: ";
      cin >> n;
      cout << "Enter the terms: ";
      for (int i = 0; i < n; i++)
        cin >> a[i];
      cout << "Unsorted Array=";
      for (int i = 0; i < n; i++)
        cout << a[i] << ",";
      for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
          if (a[i] <= a[j]) {
            int temp;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
          }
        }
      }
      cout << endl << "Sorted Array= \n";
      for (int i = 0; i < n; i++)
        cout << a[i] << ",";
    }
};
int main() {
  Sorting b;
  b.getdata();
  retun 0;
}
