#include<stdio.h>
int calculation(int a,int b)
{
  int c =a+b;
}
int main()
{
  printf("github actions tutorial\n");
  int a,b,c;
  scanf("%d%d",&a,&b);
  c= calculation(a,b);
  FILE *file = fopen("result.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(file, "%d\n", c);
    fclose(file);
   printf("Result calculated and saved to result.txt\n");
  return 0;
}
