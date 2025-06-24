//
// Created by ofirnah on 6/24/25.
//

#ifndef DISPATCHER_HPP
#define DISPATCHER_HPP

/**
 * @file Dispatcher.hpp
 * @brief Defines the Dispatcher class template for event-based communication.
 *
 * @details The Dispatcher is a key component in the Dispatcher Design Pattern.
 * It maintains a list of callbacks and notifies all registered observers
 * when a specific event occurs. Callbacks can register or unregister
 * asynchronously, and the Dispatcher handles all queue operations before
 * dispatching notifications.
 *
 * @note Expected usage includes registration of event listeners (ACallback
 * objects) from multiple event sources (like ButtonManager or
 * Audio/Video managers) and triggering their execution.
 */

#include <list>         // std::list
#include <queue>        // std::queue
#include <memory>       // std::shared_ptr

namespace itercoom
{

// forward declaration
template <typename Event>
class ACallback;

template <typename Event>
class Dispatcher
{
public:
    enum Operation
    {
        REGISTER = 0,
        UNREGISTER = 1
    };

    ~Dispatcher();
    void Notify(const Event& event);
    void Register(std::shared_ptr<ACallback<Event>> callback);
    void UnRegister(ACallback<Event>* callback);

private:
    std::list<std::shared_ptr<ACallback<Event>>> m_cbs;
    std::queue<std::pair<Operation, std::shared_ptr<ACallback<Event>>>> m_ops;

    void PopFromOpsQueue();
};  // class Dispatcher

template <typename Event>
Dispatcher<Event>::~Dispatcher()
{
    // execute what's left in the queue
    PopFromOpsQueue();

    // TODO: set dispatcher in each callback to nullptr
}

template<typename Event>
void Dispatcher<Event>::Notify(const Event &event)
{
    PopFromOpsQueue();

    // TODO: call Notify() of each callback
}

template<typename Event>
void Dispatcher<Event>::Register(std::shared_ptr<ACallback<Event> > callback)
{
    m_ops.push(std::make_pair(REGISTER, callback));
}

template<typename Event>
void Dispatcher<Event>::UnRegister(ACallback<Event> *callback)
{
    m_ops.push(std::make_pair(UNREGISTER, callback));
}

template<typename Event>
void Dispatcher<Event>::PopFromOpsQueue()
{
    while (!m_ops.empty())
    {
        auto& [operation, callback] = m_ops.front();

        if (operation == REGISTER)
        {
            // call SetDispatcher(this)
            m_cbs.push_back(callback);
        }
        else if (operation == UNREGISTER)
        {
            // call SetDispatcher(nullptr)
            m_cbs.remove(callback);
        }

        m_ops.pop();
    }
}

}   // namespace itercoom

#endif  // DISPATCHER_HPP
