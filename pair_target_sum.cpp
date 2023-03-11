/*
  This problem is inspired from the 
  https://www.designgurus.io/course-play/grokking-the-coding-interview/doc/638c9e2788f1e1c16f41c35c

  Here the issue is we have given array of sorted elements, need to find 
  a pair of numbers whose sum is equal to target.

*/
#include <iostream>
#include <vector>
using namespace std;
int main () {
  vector<int> v{1, 3, 7, 8, 12, 20};
  int left_idx = 0;
  int right_idx = v.size() - 1;
  int target_num = 15;

  while (left_idx < right_idx) {
      if (v[left_idx] + v[right_idx] == target_num) {
        cout << "These are pair of numbers: ( " << v[left_idx] << "," << v[right_idx] << " )" << endl;
        return 0;
      }

      if (v[left_idx] + v[right_idx] < target_num) {
        left_idx += 1;
      } else {
        right_idx -= 1;
      }
  }
}