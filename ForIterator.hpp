#pragma once
/**
 * C++11 range-for loop with iterators
 *
 * Usage:
 *
 *   for(auto i : ForIterator(some_list)) {
 *     // i is the iterator, which was returned by some_list.begin()
 *     // might be useful for whatever reason
 *   }
 */
template <typename T> struct Iterator {
#define ForIterator(X) Iterator<decltype(X)>(X)
    T& list;
    typedef decltype(list.begin()) I;

    struct InnerIterator {
        I i;
        InnerIterator(I i) : i(i) {}
        I operator * () { return i; }
        I operator ++ () { return ++i; }
        bool operator != (const InnerIterator& o) { return i != o.i; }
    };

    Iterator(T& list) : list(list) {}
    InnerIterator begin() { return InnerIterator(list.begin()); }
    InnerIterator end() { return InnerIterator(list.end()); }
};
/*
 * Free Software under [MIT License][http://opensource.org/licenses/MIT],
 * see [LICENSE][https://github.com/payload/ForIterator/blob/master/LICENSE] file.
 */
