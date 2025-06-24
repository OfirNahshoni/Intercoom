//
// Created by ofirnah on 6/24/25.
//

#ifndef CALLBACK_HPP
#define CALLBACK_HPP

/**
 * @file Callback.hpp
 * @brief Implements the concrete Callback class in the Dispatcher pattern.
 *
 * @details Callback is a templated implementation of ACallback that binds
 * an object and its member functions for event notification
 * and optional death notification.
 *
 * @note This class allows type-safe event delegation using method pointers
 * and enables Dispatcher to invoke arbitrary functions upon receiving events.
 */

#include "ACallback.hpp"

namespace intercoom
{

template <typename Event, typename Object>
class Callback : public ACallback<Event>
{
public:
    Callback(Object& object, void(Object::*notifyFunc)(const Event&),
                                    void(Object::*notifyDeathFunc)() = nullptr);
    void Notify(const Event& event);
    void NotifyDeath();

private:
    Object& m_object;
    void(Object::*m_notifyFunc)(const Event&);
    void(Object::*m_notifyDeathFunc)();
};  // class Callback

template<typename Event, typename Object>
Callback<Event, Object>::Callback(Object &object,
                                    void (Object::*notifyFunc)(const Event &),
                                    void (Object::*notifyDeathFunc)()) :
                                    m_object(object),
                                    m_notifyFunc(notifyFunc),
                                    m_notifyDeathFunc(notifyDeathFunc)
{ }

template<typename Event, typename Object>
void Callback<Event, Object>::Notify(const Event &event)
{
    (m_object.*m_notifyFunc)(event);
}

template<typename Event, typename Object>
void Callback<Event, Object>::NotifyDeath()
{
    if (m_notifyDeathFunc)
    {
        (m_object.*m_notifyDeathFunc)();
    }
}

}   // namespace intercoom

#endif  // CALLBACK_HPP
