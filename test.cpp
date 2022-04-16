#include <bits/stdc++.h>
using namespace std;
void zeroesIndexes(int arr[], int zeroes, int n)
{
   int start = 0, end = 0;
   int zeroesCount = 0;
   int bestWindowCount = 0, bestWindowStartIndex = 0;
   while (end < n)
   {
      if (zeroesCount <= zeroes)
      {
         if (arr[end] == 0)
         {
            zeroesCount++;
         }
         end++;
      }
      if (zeroesCount > zeroes)
      {
         if (arr[start] == 0)
         {
            zeroesCount--;
         }
         start++;
      }
      if ((end - start > bestWindowCount) && (zeroesCount <= zeroes))
      {
         bestWindowCount = end - start;
         bestWindowStartIndex = start;
      }
   }
   cout << "The indexes are ";
   for (int i = 0; i < bestWindowCount; ++i)
   {
      if (arr[bestWindowStartIndex + i] == 0)
         cout << bestWindowStartIndex + i << " ";
   }
}
int main()
{
   int n;
   int arr[100];
   int zeroes;
   cin >> n;
   cin >> arr;
   cin >> zeroes;
   zeroesIndexes(arr, zeroes, n);
   return 0;
}