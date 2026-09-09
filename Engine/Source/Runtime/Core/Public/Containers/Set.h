#pragma once

#include <memory>
#include <unordered_set>

template <
	typename KeyType,
	typename Hash = std::hash<KeyType>,
	typename KeyEqual = std::equal_to<KeyType>,
	typename Allocator = std::allocator<KeyType>>
using TSet = std::unordered_set<KeyType, Hash, KeyEqual, Allocator>;