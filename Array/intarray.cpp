#include "intarray.h"

IntArray::IntArray(size_t size)
    :mSize(size), mData(new int[size])
{
    for(size_t i = 0; i != mSize ; i++)
    {
        mData[i] = 0;
    }
}

IntArray::IntArray(const IntArray &a)
    :mSize(a.mSize) , mData(new int[mSize])
{

    for (size_t i = 0;i != mSize; i++) {
        this->mData[i] = a.mData[i];
    }
}

IntArray::~IntArray()
{
    delete [] mData;
}


size_t IntArray::size() const
{
    return mSize;
}

int IntArray::get(size_t i) const
{
    return  mData[i];
}

int &IntArray::get(size_t i)
{
    return mData[i];
}


void IntArray::swap(IntArray &a)
{
        std::swap(mSize , a.mSize);
        std::swap(mData , a.mData);
}
