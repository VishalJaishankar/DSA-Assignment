    #include <stdio.h>

    #include <math.h>

    #include <stdlib.h>

    unsigned long long int randm(int n);

    unsigned long long int von(unsigned long long int x, int n);

     

    int main(void)

    {

      unsigned long long int x, s;

      int n, i, r;

     

      printf("Enter the number of digits in the seed value ");

      scanf("%d", &n);

     

      printf("\nEnter the total number of random numbers to be generated "); 

      scanf("%d", &r);

     

      if (n >= 12){

        printf("TOO LARGE!!");

        exit(0);

      }

     

      x = 222;

      for(i = 0; i < r; i++){    

         s = von(x, n);

         x = s;

      printf("\nRandom Number generated: %lld\n", s);

      }

      return 0;

    }

     

     

    /*Generating Random Number of desired digit*/

     

    

     

     

    /*Calculating Random Number By Von Neumann Middle Square method*/

     

    unsigned long long int von(unsigned long long int x, int n)

    {

      unsigned long long int y;

      int k;

      k = n / 2;

      y =(unsigned long long int)((x / pow(10.0, k * 1.0)) * x) % (unsigned long long int) (pow(10.0, n * 1.0));

      return y;

    }