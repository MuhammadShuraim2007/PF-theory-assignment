#include <stdio.h>
// i is 3, j is 5, and k is 7
int main(){
    int i=3;
    int j =5;
    int k =7;

if (i < j){
    if (j < k)
        i = j;
    else
        j = k;
}else{
if (j > k)
    j = i;
else
    i = k;
}
printf("%d , %d , %d", i, j, k);
    return 0;
}