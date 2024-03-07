#include <iostream>
using namespace std;

int main() {
  int a[6] = {12, 45, 23, 51, 8, 6};
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (a[j] > a[j + 1]) {
        int t = a[j];
        a[j] = a[j + 1];
        a[j + 1] = t;
      }
    }
  }
  for (int i = 0; i < 6; i++) {
    cout << a[i] << " ";
  }
}