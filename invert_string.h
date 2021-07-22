//
// Created by user-pc on 05.04.2021.
//

#ifndef STL_FUNCTION_INVERT_STRING_H
#define STL_FUNCTION_INVERT_STRING_H

template <typename T >
void invert_string( T &a )
{
    typename T::size_type length = a.size();
    for( typename T::size_type i = 0; i < (length/2); ++i )
    {
        std::swap( a[i], a[length - i - 1] );
    }
}
#endif //STL_FUNCTION_INVERT_STRING_H
