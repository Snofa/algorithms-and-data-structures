
#ifndef STL_FUNC_QUICK_REMOVE_H
#define STL_FUNC_QUICK_REMOVE_H

#include <vector>

template <typename T>
void quick_remove_at(std::vector<T> &v, std::size_t index){
    if(index < v.size()){
        v[index] = std::move(v.back());
        v.pop_back();
    }
}

#endif //STL_FUNC_QUICK_REMOVE_H
