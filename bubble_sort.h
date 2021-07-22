//
// Created by user-pc on 05.04.2021.
//

#ifndef STL_FUNCTION_BUBBLE_SORT_H
#define STL_FUNCTION_BUBBLE_SORT_H
template <typename T >
void bubble_sort( T &a )
{
    for( typename T::size_type i = 0; a.size() && i < a.size() - 1; ++i )
    {
        for( typename  T::size_type j = i; j + 1 > 0; --j )
        {
            if( a[j] > a[j+1] )
                std::swap( a[j], a[j+1] );
        }
    }
}
#endif //STL_FUNCTION_BUBBLE_SORT_H
