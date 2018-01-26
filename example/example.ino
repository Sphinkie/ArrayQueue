/* ************************************************************************************************
* Example for Arduino library "ArrayQueue"
* by David de Lorenzo
************************************************************************************************* */
#include "ArrayQueue.h"

ArrayQueue        Fifo;

// *******************************************************************************
// The setup function runs once when you press reset or power the board
// *******************************************************************************
void setup() 
{
}

// *******************************************************************************
// The loop function runs over and over again forever
// *******************************************************************************
void loop() 
{
  int     field_1;
  String  field_2;

  // we add some items in the queue
  Fifo.enQueue(1, "data 1");
  Fifo.enQueue(5, "data 5");
  
  // Is there something in the queue ?
  if (!Fifo.isEmpty())  
    {
    // We remove the first item from the Queue.
	// The item contains field_1 and field_2
	field_1 = Fifo.deQueue();
    field_2 = Fifo.getData(field_1);
    }
}



