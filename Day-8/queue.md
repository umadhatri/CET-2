# Queue 101
## What is a Queue?
It is a linear data structure that follows First In First Out (FIFO) order. Insertion into a queue is called 'enqueue' and deletion from a queue is called 'dequeue'.

## Applications of Queue
1. BFS in graphs
2. Job scheduling in OS
3. Data transfer

## Queue important points
1. If queue is empty, front = rear = -1
2. Once element is inserted, front = rear = 0
3. As elements are inserted, rear++ (elements are added wherever rear points)
4. If elements are to be accessed, they need to be dequeued.

## Pseudocode for queue
begin procedure enqueue: queue, data
if(size of queue > N) {
    print "Error: Queue is full"
    return 
}
rear = rear + 1
queue[ rear ] = item