#include <iostream>
#include <string>
#include <vector>
#include "Dealer.h"

/* BONUS PROBLEM (15PTS): Finish the merge algorithm for the Merge Sort with the comparator
*/

void Dealer::merge(CarComparator comp, vector<Car> &S1, vector<Car> &S2, vector<Car> &stock) {
    /*
     * Remove comments and complete the implementation
     */
    int i = 0, j = 0, k=0;
    while(i + j < stock.size()) {
        if(S1[i]< S2[j]){
            stock[k]= S1[i];
            i++;
        }else{
            stock[k] = S2[j];
            j++;
        }
        k++;
    
    }
    while(i<S1.size()){
        stock[k] = S1[i];
        i++; k++;
    }

    while(j< S2.size()){
        stock[k] = S2[j];
        j++; k++;
    }
    
}
  
