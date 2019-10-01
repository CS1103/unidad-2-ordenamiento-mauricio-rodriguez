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
    void QuickSort(vector<T> &valores,itr it_begin,itr it_end){
        if(valores.size()>1)
        {   auto mid=partition(it_begin,it_end);
            QuickSort(valores,it_begin,mid-1);
            QuickSort(valores,mid+1,it_end);
        }
    };
    void Quick(){
        QuickSort(valores,begin(valores),end(valores)-1);
    }

    itr partition(itr left,itr right)
    {
        auto i=left-1;
        auto it=left;
        while(it<right)
        {
            if(*it<=*right){
                ++i;
                swap(*i,*it);
            }
            ++it;
        }
        swap(*(i+1),*right);
        return ++i;
    }

    void HeapSort();
    void ShellSort();
};


#endif //SORT_METHODS_SORT_H
