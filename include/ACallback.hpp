//
// Created by ofirnah on 6/24/25.
//

#ifndef ACALLBACK_HPP
#define ACALLBACK_HPP

/**
 * @file ACallback.hpp
 * @brief Defines the abstract base class ACallback for Dispatcher pattern.
 *
 * @details ACallback is the base interface for any object that wishes
 * to receive notifications from a Dispatcher.
 * It provides virtual functions `Notify()` and `NotifyDeath()`,
 * and maintains a weak reference to its owning Dispatcher.
 *
 * @note This class supports automatic unregistration upon destruction and is
 * meant to be subclassed by specific callback implementations (e.g., Callback).
 */

#include <memory>           // std::weak_ptr

namespace intercoom
{

// forward declaration
template <typename Event>
class Dispatcher;

template <typename Event>
class ACallback
{
public:
    virtual ~ACallback();
    virtual void NotifyDeath();
    virtual void Notify(const Event& event) = 0;
    void SetDispatcher(std::weak_ptr<Dispatcher<Event>> dispatcher);

private:
    std::weak_ptr<Dispatcher<Event>> m_dispatcher;
};  // class ACallback

template<typename Event>
ACallback<Event>::~ACallback()
{
    m_dispatcher->UnRegister(this);
}

template<typename Event>
void ACallback<Event>::NotifyDeath()
{ }

template<typename Event>
void ACallback<Event>::SetDispatcher(std::weak_ptr<Dispatcher<Event>> dispatcher)
{
    m_dispatcher = dispatcher;
}

}   // namespace intercoom

#endif  // ACALLBACK_HPP
