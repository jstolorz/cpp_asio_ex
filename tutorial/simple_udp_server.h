#pragma once

#include <iostream>
#include <boost/asio.hpp>

int start_udp_server(){

    std::uint16_t port = 15001;

    boost::asio::io_context io_context;
    boost::asio::ip::udp::endpoint receiver(boost::asio::ip::udp::v4(),port);
    

    return 0;
}