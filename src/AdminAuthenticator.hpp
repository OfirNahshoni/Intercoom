//
// Created by ofirnah on 6/23/25.
//

#ifndef ADMIN_AUTHENTICATOR_HPP
#define ADMIN_AUTHENTICATOR_HPP

/**
 * @file AdminAuthenticator.hpp
 * @brief Defines the AdminAuthenticator class for administrator-side control.
 *
 * @details AdminAuthenticator allows full control over the access password
 * at any time, providing a secure mechanism for the admin to change the
 * password and validate users. It inherits from the AAuthenticator base class.
 */

#include "AAuthenticator.hpp"

namespace intercoom
{

class AdminAuthenticator : public AAuthenticator
{
public:
    AdminAuthenticator(const std::string& pwd);
    void ChangePassword(const std::string& pws);
};  // class AdminAuthenticator

}   // namespace intercoom

#endif  // ADMIN_AUTHENTICATOR_HPP
