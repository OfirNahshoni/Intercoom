//
// Created by ofirnah on 6/23/25.
//

#include "AdminAuthenticator.hpp"

intercoom::AdminAuthenticator::AdminAuthenticator(const std::string &pwd) :
                                                            AAuthenticator(pwd)
{}

void intercoom::AdminAuthenticator::ChangePassword(const std::string &pwd)
{
    SetPassword(pwd);
}
