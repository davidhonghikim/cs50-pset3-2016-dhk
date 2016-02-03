/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
 
/*
check50 2015.fall.pset3.find helpers.c
*/
       
#include <cs50.h>
#include <stdio.h>
#include "helpers.h"

// recursive search
bool search(int key, int values[], int n){
    int l=0; //first element of array
    int h=n-1; //last element of array
    int m; //middle of array

    while (l <= h)
    {
        m = l + (h - l)/2; // calculate middle
        if (key > values[m]){ // upper half
        l = m + 1; // upper half - first element is now first element
        }
        else if (key < values[m]){ //lower half
        h = m - 1; // lower half - last element is now last element
        } else{
        return true;
    }
}
    return false;
    
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    int temp = 0;
    int count=1;
    bool sorted = false;
    while(sorted!=true){
        if(count!=0){
            count=0;
            for(int i=0; i<n-1; i++){
                if(values[i]>values[i+1]){
                    temp = values[i];
                    values[i] = values[i+1];
                    values[i+1] = temp;
                    count++;
                }
            }
        }else{sorted=true;}
    }
}
