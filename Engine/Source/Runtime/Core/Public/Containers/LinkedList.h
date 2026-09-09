#pragma once

#include <memory>
#include <forward_list>
#include <list>

template <typename T, typename Allocator = std::allocator<T>>
using TLinkedList = std::forward_list<T, Allocator>;

template <typename T, typename Allocator = std::allocator<T>>
using TDoublyLinkedList = std::list<T, Allocator>;