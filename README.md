# Lazy-Singleton-in-CPP-with-Shared_Ptr
This repo demonstrates the creation of a thread-safe Lazy Singleton in CPP using shared pointers.

 - A singleton pattern is a creational design pattern that restricts the instantiation of a class to an instance. With this implementation, smart pointers are used to reference the singleton class and thus prevent memory leaks. The implementation is also thread safe. which ensures that the whole instance method is executed in a single thread.

 Build: g++ -o main main.cpp Singleton.cpp
