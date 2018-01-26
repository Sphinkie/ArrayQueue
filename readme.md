# ArrayQueue 

Small Arduino library to deal with a FIFO queue (First in , First Out).
By D. de Lorenzo.

The library is rather compact but has the main functionalities of a fifo (ie: _enqueue_ and _dequeue_). Each item of the queue has 2 fields (int and string).  
I use it associated to an I2C bus receiver: the queue stores the received messages until they are processed.

> Example:  
> ---FxxxxL----  
> F = First item  
> L = Last item  


See the API description of the methods offered by this library in the attached file: ![**API_description.md**](API_description.md).  

Available on GitHub @Sphinkie/ArrayQueue