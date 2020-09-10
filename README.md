# Buffer-Arrays
Sorted and Unsorted Implementations of a Buffer Array

A buffer is a place where you can put stuff. 
1 key feature of a buffer is the space is reserved before anything is actually being stored. 
So there are two concepts of size: the first is how much space does the buffer have, and the second is how much of that space is actually being used to hold values that have been put into the buffer. 

I created 2 variants, SortedArrayBufferNoDups and SortedArrayBufferWithDups. 
As the name implies, the first class is a sorted array and does not allow the insertion of duplicate values, while the second one does.   