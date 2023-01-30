//
// Created by Prateek Thakur on 30/01/23.
//
#include <cmath>
#include "iostream"

int binary_search(int element, int *arr, int size, int &it) {
    int first = 0;
    int last = size;
    int mid = (first+last)/2;

    while(mid != first || mid != last){

        if(arr[mid] == element)
            return mid;
        else if(element < arr[mid])
            last = mid;
        else
            first = mid+1;

        mid = (first+last)/2;
        it++;
    }
    return -1;
}

void run_binary_search(){
    std::cout << "Binary search" << std::endl;
    std::cout<<"Enter number of elements"<<std::endl;
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cout<<"Enter element at "<<i<<" position: ";
        std::cin>>arr[i];
    }
    int e;
    int it=0;
    std::cout<<"Enter element to search"<<std::endl;
    std::cin>>e;
    std::cout << binary_search(e, arr, n, it) << std::endl;

    if (it == 0)
        std::cout<<"Best case"<<std::endl;
    else if(it == log(n))
        std::cout<<"Worst case";
    else
        std::cout<<"Average case";
}
