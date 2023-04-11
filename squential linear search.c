#include <stdio.h>

int sequentialSearch(int arr[], int n, int x) {
   int i;
   for (i = 0; i < n; i++) {
      if (arr[i] == x)
         return i; /* return the index where the element was found */
   }
   return -1; /* return -1 if the element was not found */
}

int main() {
   int arr[] = { 9, 6, 7, 8, 2, 10 };
   int n = sizeof(arr) / sizeof(arr[0]);
   int x = 2; /* element to be searched */

   int index = sequentialSearch(arr, n, x);

   if (index == -1)
      printf("Element not found\n");
   else
      printf("Element found at index %d\n", index);

   return 0;
}
