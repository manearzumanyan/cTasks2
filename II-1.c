#include <stdio.h>
#include <string.h>
int isSim(char *arr, int k){
  for(int b = k -1; b >= 0; b--){
    for(int a = 0; a < b; a++){
      if(arr[a] != arr[b]){
        return 0;
      }
    }
  }
  return 1;
}

int main(void) {
  int arr[5], k;
  char flag[3] = "NO";

  for(int i = 0; i < 5; i++){
    scanf("%d", &arr[i]);
    k = 0;
    char ar[256];

   if(arr[i] > 10){
      while (arr[i]) {
        ar[k++] = arr[i] % 10;
        arr[i] /= 10; 
      }
      if(isSim(ar, k) == 1){
        strcpy(flag, "YES");
      }
   }
  }
  printf("%s", flag);
}
