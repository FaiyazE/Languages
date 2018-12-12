#include <stdio.h>



#if 0
// one way of fibonacci series program
void main()
{
	int i = 0, j = 0, m = 1;


      printf("fib series\n");

      for(i = 0; i < 10; i = j)
      {
        
        j = m;
        m = m + i;
        printf("%d\n",i);

      }


}
#endif


void main()
{

     int first = 0, second = 1, next = 0, i = 0;

      for(i = 0; i < 10 ; i ++){
          if (i <= 1)
              next  = i;
          else {
              next =  first + second;
              first = second;
              second  = next;
          }
          printf("%d\t", next);
    

      }

}
