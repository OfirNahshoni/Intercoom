//
// Created by ofirnah on 6/23/25.
//

#include "AAuthenticator.hpp"

intercoom::AAuthenticator::AAuthenticator(const std::string& pwd) : m_pwd(m_pws)
{ }

bool intercoom::AAuthenticator::Unlock(const std::string &pwd)
{
    return (pwd == m_pwd);
}

void intercoom::AAuthenticator::SetPassword(const std::string &pwd)
{
    m_pwd = pwd;
}
