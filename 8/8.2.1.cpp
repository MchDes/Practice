#include <stdio.h>
#define row 10
#define column 10


int main()
{
  int arr[row][column];
  int count_row = 0;
  int count_column = 0;
  scanf("%d %d", &count_row, &count_column);
  for (int i = 0; i < count_row; ++i)
  {   
    for(int j = 0; j < count_column; ++j)
    {
      scanf("%d ", &arr[i][j]);
    }
  }
  for (int i = 0; i < count_row; ++i)
  {
    for(int j = 0; j < count_column; ++j)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  
}