#pragma once

#include <queue>
#include <deque>

template <typename T, typename Container = std::deque<T>>
using TQueue = std::queue<T, Container>;