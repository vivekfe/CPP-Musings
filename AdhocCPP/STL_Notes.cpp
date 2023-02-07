////////////////////////////////////////////////////////////////////
why do we use heaps in the first place? to get the maximum value
out of a collection in not too much time (constant actually)

To convert a range like this[0, 1, 2, 3, 4, 5, 6, 7, 8, 9] to 
[9, 8, 6, 7, 4, 5, 2, 0, 3, 1]

std::make_heap(begin(numbers), end(numbers));
Add a new element
numbers.push_back(8.88); 

this is the heap form of numbers unsorted

////////////////////////////////////////////////////////////////////

std::push_heap()

std::pop_heapbegin(numbers), end(numbers)); 
it first swaps the firstand last element, so now the structure is not a heap

then we use numbers.pop_back() to remvoe the last element
now if we don't pop back, and keep applying pop_heap we get a  sorted collection

////////////////////////////////////////////////////////////////////

sorting algorithms

sort
partial_sort - being and some point between begin & end
nth_element - sorts the nth element but anything other than that is unsorted
sort_heap
inplace_merge - this merges and sorts the two already sorted collections

////////////////////////////////////////////////////////////////////

Permutation algorithms


rorate - it takes elements from the end and places them in the beginning
shuffle - it shuffles the elements of a collection

///////////////////////////////////////////////////////////////////

using is_*

is_sorted
is_partitioned
is_heap

////////////////////////////////////////////////////////////////////
returns an iterator, for sorted array, it returns end of the collection


is_sorted_until
is_partitioned_until
is_heap_until

////////////////////////////////////////////////////////////////////
land of queries - some sort of information extraction like a value

count - takes begin, endand a valueand returns how many times this value occured in collection

accumulate / (transform_)reduce
so transform takes a function, applies it to collectionand then calls reduce

c++ introduced reduce which also supports parallel

///////////////////////////////////////////////////////////////////
numeric algorithms

inner_product : product between counterpart multiplication, then summing the whole thing

adjacent different : difference between adjacent elements

sample : generates a collection of n elements selected from a collection randomly

////////////////////////////////////////////////////////////////////

Querying a property - meaning if elements satisfy a condition or property

all_of - if on emtpy collection, returns true
any_of - if run on empty collection, returns false
none_of - if run on empty collectiom, returns true

//////////////////////////////////////////////////////////////////////

querying a property on 2 ranges

equal : which compars element by element
lexicographical_compare
mismatch - stops at element where they start to differ retuns a pair of iterators

//////////////////////////////////////////////////////////////////////

searching a value

in not sorted - find - returns an ierator pointing to the element
adjacent_find - it finds location where it finds the element but two in a row

sorted : equal_range

binary_search - it just tells whether the value is there, true or false

searching a range in a range : search
find_first_of
find_end

////////////////////////////////////////////////////////////////////////

max_element
min_element
minmax_element returns a pair of std::pair<iterator, iterator>

////////////////////////////////////////////////////////////////////////

algos on sets

std::set_difference: it gives those elements which are in first but not in second

std::std_difference(begin(A), end(A);
                    begin(B), end(B),
                    std::back_inserter(results));

assuming Aand B are sorted

std::set_intersection
std::set_symmetric_difference : returns elements which are in A but not B + elements
which are in B but not in A

std::merge

/////////////////////////////////////////////////////////////////////////

std::copy(first, last, out) //cpopies to out iterator

std::move(first, last, out); 
std::swap(first, last, out); // size must be same between two ranges

[1,2,3,4,5,6,7,8,9,20]

copy first 5 elements 4 positions down

[1,2,3,1,2,3,4,5,9,10]

use std::copy_backward
std::move_backward

////////////////////////////////////////////////////////////////////////

std::fill(first, last, 42);
std::generate(first, last, f)  // f is a function with no args and call it for each element

std::iota(first, last, 42); starts with 42 and increments next no
std::replace(first, last, 42, 43)

/////////////////////////////////////////////////////////////////////////

changing structures

std::remove(begin(collection), end(collection), 99)

so it pulls everything which is not 99, puts them at startand then leaves last values
so remove returens an iterator which is first of crosses(where there is removals)

std::erase(std::remove(begin(collection), end(collection), 99), end(collection)

std::unique(begin(collection), end(collection),99);
std::erase(std::unique(begin(collection), end(collection)), end(collection)

remove_copy
unique_copy
reverse_copy
rotate_copy
replace_copy
partition_copy
partial_sort_copy

find_if
find_if_not
count_if
remove_if
remove_copy_if
replace_if
replace_copy_if
copy_if

std::transform(being(collection), end(collection), std::back_inserter(results), f);

there is an overload function as well


std::transform(being(collection), end(collection), begin(ys), std::back_inserter(results), f);
so f takes two params

std::for_each(being(collection, end(collection, f));

so for_each does not care what f returns, so for_each is designed to cause side effects

/////////////////////////////////////////////////////////////////////////////////

raw memory

fill - operator=
copy - operator=
move - operator=

std::fill(being(collection), end(collection), 42);
std::fill_n(being(collection),n, 42);
