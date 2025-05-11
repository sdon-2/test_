#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <unistd.h>
int main()
{
   int random_num[10], cnt = 0, sum = 0;
   float ans;
   
   srand(time(NULL)); 
   printf("Cap nhat phan tu mang voi so ngau nhien:\n");
   for(int i = 0; i<10; i++){
      random_num[i] = rand() % 100; 
      printf("Phan tu thu %d: %d\n", i+1, random_num[i]);
      sum+= random_num[i];
      cnt++;
      sleep(1);
   }
   ans = (float)sum/cnt;
   printf("ket qua: %f",ans);
   return 0;
}
