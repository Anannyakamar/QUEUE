# Queue Data Structures 

## Overview

This repository contains implementations of two fundamental queue data structures in C: a General Queue and a Circular Queue. Queues are essential data structures used in various applications, including scheduling tasks, managing resources, and handling asynchronous events.

## Contents

- *General Queue*: A standard queue implementation using dynamic memory allocation.
- *Circular Queue*: A queue implementation with a fixed size that wraps around, effectively utilizing the available space.

## General Queue

### Description

The General Queue implementation provides a basic queue structure with dynamic memory management. It supports the typical queue operations: enqueue (adding an element), dequeue (removing an element), and checking if the queue is empty or full.

### Features

- Dynamic resizing of the queue.
- Standard operations: enqueue, dequeue, isEmpty, isFull.

### Files

- general_queue.h: Header file for the General Queue implementation.
- general_queue.c: Source file for the General Queue implementation.
- main.c: Example usage of the General Queue.

### Usage

1. *Include the header file* in your C program:
   c
   #include "general_queue.h"
   

2. *Initialize the queue*:
   c
   Queue *q = createQueue();
   

3. *Perform operations*:
   c
   enqueue(q, data);
   data = dequeue(q);
   

4. *Free resources* when done:
   c
   freeQueue(q);
   

## Circular Queue

### Description

The Circular Queue implementation uses a fixed-size array and provides efficient management of the queue by wrapping around when the end of the array is reached. It supports the basic queue operations.

### Features

- Fixed size array with wrap-around capability.
- Standard operations: enqueue, dequeue, isEmpty, isFull.

### Files

- circular_queue.h: Header file for the Circular Queue implementation.
- circular_queue.c: Source file for the Circular Queue implementation.
- main.c: Example usage of the Circular Queue.

### Usage

1. *Include the header file* in your C program:
   c
   #include "circular_queue.h"
   

2. *Initialize the queue*:
   c
   CircularQueue *cq = createCircularQueue(size);
   

3. *Perform operations*:
   c
   enqueue(cq, data);
   data = dequeue(cq);
   

4. *Free resources* when done:
   c
   freeCircularQueue(cq);
   

## Building and Running

1. *Compile the code*:
   sh
   gcc -o queue_program main.c general_queue.c circular_queue.c
   

2. *Run the program*:
   sh
   ./queue_program
   

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contributing

Feel free to contribute to this project by submitting issues or pull requests. 

## Contact

For any questions or feedback, please contact anannyakamar08@gmail.con.
