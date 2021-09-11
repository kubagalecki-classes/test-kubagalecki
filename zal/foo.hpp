#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v;
    ret_v.reserve(people.size());
    for (auto&& p : people){
        p.birthday();
        p.isMonster() ? ret_v.push_back('n') : ret_v.push_back('y');
    }
    std::reverse(begin(ret_v), end(ret_v));

    // Twoja implementacja tutaj

    return ret_v;
}
