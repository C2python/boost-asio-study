#ifndef UTILITY_H_
#define UTILITY_H_

#include <iosfwd>
#include <string>

#include "boost/asio/ip/tcp.hpp"

namespace utility {

void PrintEndpoint(std::ostream& ostream,
                   const boost::asio::ip::tcp::endpoint& endpoint);

void PrintEndpoints(
    std::ostream& ostream,
    const boost::asio::ip::tcp::resolver::results_type& endpoints);

std::string EndpointToString(const boost::asio::ip::tcp::endpoint& endpoint);

}  // namespace utility

#endif  // UTILITY_H_
