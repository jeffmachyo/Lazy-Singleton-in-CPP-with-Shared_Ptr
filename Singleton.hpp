#ifndef SINGLETON_H
#define SINGLETON_H

#include <memory>
#include <mutex>

class Singleton {
    private:
        static std::shared_ptr<Singleton> instance;
        static std::mutex m_singleton;
        Singleton();

    public:
        static std::shared_ptr<Singleton> getInstance();
};

#endif

