#include <iostream>
using namespace std;
class sorted
{
  int a[1000];

public:
  void getdata()
  {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Enter the terms: ";
    for (int i = 0; i < n; i++)
      cin >> a[i];
    cout << "unsorted array:";
    for (int i = 0; i < n; i++)
      cout << a[i] << ",";
    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        if (a[i] <= a[j])
        {
          int temp;
          temp = a[i];
          a[i] = a[j];
          a[j] = temp;
        }
      }
    }
    cout << endl
         << "sorted array: ";
    for (int i = 0; i < n; i++)
      cout << a[i] << ",";
  }
};

int main()
{
  sorted b;
  b.getdata();
  return 0;
}
