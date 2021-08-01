
#LRU-Cache Implementation

The LRU is the Least Recently Used cache. LRU Cache is a type of high-speed memory, that is used to quicken the retrieval speed of frequently used data. 

It is implemented with the help of Linked List and Hash data structures.

1.Strengths:
Super fast accesses. LRU caches store items in order from most-recently used to least-recently used. That means both can be accessed in O(1)O(1) time.

Super fast updates. Each time an item is accessed, updating the cache takes O(1)O(1) time.

2.Weaknesses
Space heavy. An LRU cache tracking nn items requires a linked list of length nn, 
and a hash map holding nn items. That's O(n)O(n) space, but it's still two data structures (as opposed to one).
Why Use A Cache?
Say you're managing a cooking site with lots of cake recipes. As with any website, you want to serve up pages as fast as possible.

When a user requests a recipe, you open the corresponding file on disk, read in the HTML, and send it back over the network.
 This works, but it's pretty slow,  
since accessing disk takes a while.

Ideally, if lots of users request the same recipe, you'd like to only read it in from disk once, 
keeping the page in memory so you can quickly send it out again when it's requested. Bam. You just added a cache.

A cache is just fast storage. Reading data from a cache takes less time than reading it from something else (like a hard disk).

Here's the cache catch: caches are small. You can't fit everything in a cache, so you're still going to have to use larger,
 slower storage from time to time.
