#include <stdio.h>
#include <string.h>

int compare(const char *a, const char *b){
    return strcmp(a,b);
}

void sortString( char *arr[], int size){
    for(int i=0; i<size-1; i++){
        for (int j=0; j<size-i-1; j++){
            if (compare(  arr[j], arr[j+1])>0 ){
               char *temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    char *arr[]={"Bella", "Ann", "Diana", "Elvis"};
    int size = sizeof(arr) / sizeof(arr[0]);


    sortString(arr, size);

    
    for (int i=0; i<size; i++){
    printf("%s\n", arr[i]);}

return 0;
}
