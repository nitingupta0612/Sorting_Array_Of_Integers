#include<iostream>

#include<conio.h>
#include<math.h>
using namespace std;
class Sorted {
  int a[1000];
  public:
    void getdata() {
      int n;
      cout << "Enter the number of terms: ";
      cin >> n;
      cout << "Enter the terms: \n";
      for (int i = 0; i < n; i++)
        cin >> a[i];
      cout << "Unsorted array:";
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
      cout << endl << "Sorted array: \n";
      for (int i = 0; i < n; i++)
        cout << a[i] << ",";
    }
};
int main() {
  Sorted b;
  b.getdata();
  retun 0;
}
