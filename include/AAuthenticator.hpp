//
// Created by ofirnah on 6/23/25.
//

#ifndef AAUTHENTICATOR_HPP
#define AAUTHENTICATOR_HPP

/**
 * @file AAuthenticator.hpp
 * @brief Abstract class that manages the lock mechanism. The lock mechanism
 * is always locked, until a successful unlock is happened. Then, after a
 * pre-defined amount of time it's being locked again.
 *
 * @details The Admin can set the password any time he wants to.
 * There will be a solution for updating the client side when the admin
 * changes the password. The client side should be completely
 * independent to insert a password at any time.
 */

#include <string>           // std::string

namespace intercoom
{

class AAuthenticator
{
public:
    AAuthenticator(const std::string& pwd);
    virtual ~AAuthenticator() = 0;
    bool Unlock(const std::string& pwd);

protected:
    void SetPassword(const std::pmr::string& pwd);

private:
    std::string m_pwd;
};  // class AAuthenticator

}   // namespace intercoom

#endif  // AAUTHENTICATOR_HPP
