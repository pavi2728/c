#include <stdio.h>
int main(void)
{ 
int array[100], n, i, j, pos,temp;
 
   scanf("%d", &n);
for ( i= 0 ; i < n ; i++ )
      scanf("%d", &array[i]);
 
   for ( i= 0 ; i < ( n - 1 ) ; i++ )
   {
      pos= i;
 
      for ( j = i + 1 ; j < n ; j++ )
      {
         if ( array[pos] > array[j] )
            pos = j;
      }
      if ( pos != i )
      {
         temp= array[i];
         array[i] = array[pos];
         array[pos]=temp;
      }
   }
 
  
   for ( i = n-1 ; i>=0 ; i-- )
      printf("%d", array[i]);
 
   return 0;
}
