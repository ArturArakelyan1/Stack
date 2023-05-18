# Stack Class using Vector

This code implements a stack data structure using a vector as the underlying container. The Stack class is derived privately from the Vector class, allowing it to inherit and use the vector's functionalities for managing the stack.

 ## Available Member Functions
* **The Stack** class provides the following member functions:

* **PushBackSt(val**): Pushes the value val onto the top of the stack.

* **PoPBackSt()**: Removes the top element from the stack.

* **FindSt(val)**: Searches for the value val in the stack and returns its index if found, otherwise returns -1.

* **Top()**: Returns the top element of the stack without removing it.

* **Size()**: Returns the current size of the stack.


Note: The Stack class inherits the member functions PushBack, PopBack, Find, and GetData from the Vector base class. These inherited functions are used internally by the Stack class and are not meant to be directly accessed by the user.
