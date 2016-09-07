ForIterator
===========

C++11 range-for loop with iterators.
This isn't state-of-the-art ;-)
Look into Boost iterator transformers for the whole range of possible iterators.

Usage:

```c++
for(auto i : ForIterator(some_list)) {
    // i is the iterator, which was returned by some_list.begin()
    // might be useful for whatever reason
}
```

Free Software under [MIT License](http://opensource.org/licenses/MIT), see [LICENSE](https://github.com/payload/ForIterator/blob/master/LICENSE) file.
