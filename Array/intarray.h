#ifndef INTARRAY_H
#define INTARRAY_H


#include <algorithm>
class IntArray
{
    explicit IntArray( size_t size);

    IntArray(IntArray const & a);
    ~IntArray();
    IntArray & operator = (IntArray const & a);
    size_t size() const;
    int get( size_t i) const;
    int &get( size_t i);
    void swap(IntArray & a);
    private :
    size_t mSize;
    int * mData;
    };

#endif // INTARRAY_H
