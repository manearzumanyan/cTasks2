#include <stdio.h>
#include <limits.h>

int main(void) {
  int N, max_length, min_length, max_number = INT_MIN, min_number = INT_MAX, i = 0;
  scanf("%d", &N);
  int arr[N - 1];
  while(i < N){
    scanf("%d", &arr[i]);
    if(arr[i] > max_number){
      max_number = arr[i];
      max_length = i;
    }else if(arr[i] < min_number){
      min_number = arr[i];
      min_length = i;
    }
    i++;
  }
  int temp = arr[max_length];
  arr[max_length] = arr[min_length];
  arr[min_length] = temp;
  i = 0;
  while(i < N){
    printf("%d ", arr[i]);
    i++;
  }
}
