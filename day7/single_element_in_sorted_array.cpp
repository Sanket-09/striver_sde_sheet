#include <bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int> &arr)
{
 int n = arr.size();
 int low = 0, high = n - 1, mid;

 // Do binary search
 while (low < high)
 {

  // Calculate mid
  mid = (low + high) / 2;

  // Update low and high
  if ((mid % 2 == 1 and arr[mid] == arr[mid - 1]) or (mid % 2 == 0 and arr[mid] == arr[mid + 1]))
  {
   low = mid + 1;
  }
  else
  {
   high = mid;
  }
 }

 return arr[low];
}

/*XoR soln

int singleNonDuplicate(vector<int>& arr)
{
    // Declare a variable to store answer and intialize its value to zero.
    int answer = 0;

    // Do xor of all elements and store the result in answer
    for (int element : arr)
    {
        answer ^= element;
    }

    return answer;
}



*/