#include "Singleton.hpp"
#include <iostream>

std::shared_ptr<Singleton> Singleton::instance{nullptr};
std::mutex Singleton::m_singleton;

Singleton::Singleton() {
    std::cout<<"I am a lazy singleton and I should be instantiated only once!"<<std::endl;
}

std::shared_ptr<Singleton> Singleton::getInstance() {
    std::lock_guard<std::mutex> lock(m_singleton);
    if (instance == nullptr) {
        std::shared_ptr<Singleton> instance1(new Singleton());
        instance1.swap(instance);

    }
    return instance;
}