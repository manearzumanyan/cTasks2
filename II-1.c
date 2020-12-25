#include <stdio.h>
int isSim(char *arr){
  int k = 0;
  for(int a = 0, b = k - 1; a < b; a++, b--){
    if(arr[a] != arr[b]){
      return 0;
    }
  }
  return 1;
}

int main(void) {
  int arr[5], k, flag = 0;

  for(int i = 0; i < 5; i++){
    scanf("%d", &arr[i]);
    k = 0;
    char ar[256];

   if(arr[i] > 10){
      while (arr[i]) {
        ar[k++] = arr[i] % 10;
        arr[i] /= 10; 
      }
      if(isSim(ar) == 1){
        flag = 1;
      }
   }
  }
  printf("%d", flag);
}
