//
// Created by Prateek Thakur on 01/02/23.
//
int sequential_search(int element, int *arr, int size) {
    for(int i=0;i<size;i++){
        if(arr[i]==element)
            return i;
    }
    return -1;
}