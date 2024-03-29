using namespace std;
#include <bits/stdc++.h>
int uniqueSubstrings(string input)
{
 // Write your code here
 vector<int> mpp(256, -1);

 int left = 0, right = 0;
 int n = input.size();
 int len = 0;

 while (right < n)
 {
  if (mpp[input[right]] != -1)
   left = max(mpp[input[right]] + 1, left);

  mpp[input[right]] = right;

  len = max(len, right - left + 1);
  right++;
 }
 return len;
}