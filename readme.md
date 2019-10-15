# ArrayQueue 

## Description

Small Arduino library to deal with a FIFO queue (First in , First Out).

The library is rather compact but has the main functionalities of a fifo (ie: _enqueue_ and _dequeue_). Each item of the queue has 2 fields (int and string).  
I use it associated to an I2C bus receiver: the queue stores the received messages until they are processed.

> Example:  
> ---FxxxxL----  
> F = First item  
> L = Last item  

----

## Usage
See the given file: [example.ino](example/example.ino)

## API description

### Customisation

These values can be adjusted in the header file, in order to fit your needs.
> MAX_QUEUE_SIZE  
> MAX_DATA_SIZE

### Functions

-----
```c++
ArrayQueue::ArrayQueue()
```
Object constructor.

-----
```c++
void ArrayQueue::enQueue(int element, char* text)
```
Add a item in the FIFO queue (the Last item).  The item has two fields (*element* and *text*) .
When MAX_QUEUE_SIZE is reached, the queue is full and the new items are ignored.
> Examples:  
> xL---------  
> --FxxxxL---  
> xL----Fxxxx

-----
```c++
int ArrayQueue::deQueue()
```
Read an item of the Queue. The item is also removed from the Queue. 
Returns -1 if the Queue is empty.

-----
```c++
int ArrayQueue::getFirst()
```
Returns the first item of the FIFO, but without removing it.
Returns -1 if the Queue is empty.

-----
```c++
int ArrayQueue::getSize()
```
Returns the number of items in the Queue.

-----
```c++
bool ArrayQueue::isEmpty()
```
Returns TRUE if the Queue is empty.

-----
```c++
String ArrayQueue::getData(int index)
```
Returns the second field of the poped item 


