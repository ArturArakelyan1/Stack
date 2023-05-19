#include"vector.hpp"

template <typename T>
class Stack : private Vector<T>{
   using Vector<T>::PushBack;
   using Vector<T>::PopBack;
   using Vector<T>::Find;
   using Vector<T>::GetData;

    public:
    void PushBackSt(T val)
    {
        PushBack(val);
    }
    void PoPBackSt()
    {
        PopBack();
    }
    T FindSt(T val)
    {
        Find(val);
    }
    T Top()
    {
        return (GetData()[0]);
    }
    T Size()
    {
        return (GetTopindex) + 1;
    }
};

