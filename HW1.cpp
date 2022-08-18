// Convert this program to C++
// change to C++ io
// change to one line comments
// change defines of constants to const
// change array to vector<>
// inline any short function

#include <iostream>
#include <vector>

using namespace std;

const int N = 40;

inline void sum(int* p, const vector<int>& d)
{
  *p = 0;
  for (int i = 0; i < d.size(); ++i)
    *p = *p + d[i];
}

int main()
{
  int accum = 0;
  vector<int> data;

  for (int i = 0; i < N; ++i)
    data.push_back(i);

  sum(&accum, data);
  cout << "sum is " << accum;

  return 0;
}