//
// Created by tri-z on 12/29/22.
//

#include "stdio.h"
#include "math.h"

int min(int first,int second) {
    if (first < second) {
        return first;
    } else {
        return second;
    }

}
int jumpSearch(int arr[], int size, int key) {
    int step = size / 2;
    int previous;

    if(arr[min(step,size)-1] == key){
        return min(step,size)-1;
    }


    while(arr[min(step,size)-1] < key) {
            previous = step;
            step = step + size / 2;

            if ( previous >= size ){
                return -1;
            }
    }

    for(int j=previous ; j < step ; j++){
        if(arr[j] == key){
            return j;
        }

    }
    return -1;
}


int main(){
    int arr[]={1,2,4,5,7,9,34,57,78,487,547,548};
    int size = sizeof(arr)/sizeof(arr[1]);
    int toFind = 7;
    int indexNumber = jumpSearch(arr,size,toFind);
    if (indexNumber != -1) {
        printf("We found\n");
        printf("We found %d at index number %d", arr[indexNumber], indexNumber);
    } else {
        printf("Not found");
    }



    return 0;
}
