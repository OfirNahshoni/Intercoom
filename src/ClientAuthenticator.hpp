//
// Created by ofirnah on 6/23/25.
//

#ifndef CLIENT_AUTHENTICATOR_HPP
#define CLIENT_AUTHENTICATOR_HPP

/**
 * @file ClientAuthenticator.hpp
 * @brief Defines the ClientAuthenticator class for user-side password
 * verification.
 *
 * @details The ClientAuthenticator allows a client to submit a password
 * in the init phase only. Once initialized, password changes must come
 * from the AdminAuthenticator. It inherits from the shared
 * AAuthenticator interface for uniform authentication logic.
 */

#include "AAuthenticator.hpp"

namespace intercoom
{

class ClientAuthenticator : public AAuthenticator
{
public:
    // set ClientBoard as friend class
    ClientAuthenticator(const std::string& pwd);
};  // class ClientAuthenticator

}   // namespace intercoom

#endif  // CLIENT_AUTHENTICATOR_HPP
