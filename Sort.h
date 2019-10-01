//
// Created by rudri on 9/17/2019.
//

#ifndef SORT_METHODS_SORT_H
#define SORT_METHODS_SORT_H


#include "Definiciones.h"
using namespace std;
template <typename T>
class Sorter {
private:
    vector<T> valores;
public:
    Sorter(const vector<T> &valores) : valores(valores) {}
    void MergeSort(){
        auto it_begin = valores.begin();
        auto it_end= valores.end();
        auto it_mid= next(it_begin, valores.size()/2);
    }
    itr partition(itr left,itr right)
    {
        itr i=left-1;
        itr it=left;
        while(it<right)
        {
            if(*it<=*right){
                ++i;
                std::swap(*i,*it);}
                ++it;
        }
        swap(*(i+1),*right);
        return ++i;
    }

    void quicksort(std::vector<int>& v,itr left, itr right)
    {
        if(distance(left,right)>=2)
        {
            auto mid=partition(left,right);
            quicksort(v,left,mid-1);
            quicksort(v,mid+1,right);
        }
    }
    void Quick(){
        quicksort(valores,begin(valores),end(valores)-1);
    }



    void HeapSort();
    void ShellSort();
};


#endif //SORT_METHODS_SORT_H
