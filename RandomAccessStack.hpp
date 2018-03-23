#ifndef RANDOM_ACCESS_STACK_HPP
#define RANDOM_ACCESS_STACK_HPP

#include<vector>

namespace vm
{
    template<class T>
    class RandomAccessStack
    {
    private:
        std::vector<T> list;

    public:
        RandomAccessStack() {
        }

        int Count() {
          return list.size();
        }

        void Clear()
        {
            list.clear();
        }

        void Insert(int index, T item)
        {
            //if (index > list.size()) throw new InvalidOperationException();
            list.insert(list.begin()+list.size() - index, item);
        }

        T Peek(int index = 0)
        {
            //if (index >= list.size()) throw new InvalidOperationException();
            return list[list.size() - 1 - index];
        }

        T Pop()
        {
            return Remove(0);
        }

        void Push(T item)
        {
            list.push_back(item);
        }

        void Push(std::vector<T> items)
        {
            for(unsigned i=0; i < items.size(); i++)
              Push(items[i]);
        }

        T Remove(int index)
        {
            //if (index >= list.size()) throw new InvalidOperationException();
            T item = list[list.size() - index - 1];
            list.erase(list.begin()+list.size() - index - 1);
            return item;
        }

        void Set(int index, T item)
        {
            //if (index >= list.size()) throw new InvalidOperationException();
            list[list.size() - index - 1] = item;
        }
    };
}

#endif
