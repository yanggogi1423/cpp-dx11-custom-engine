#pragma once

#include <memory>
#include <unordered_map>
#include <utility>

template <
	typename KeyType, 
	typename ValueType, 
	typename Hash = std::hash<KeyType>, 
	typename KeyEqual = std::equal_to<KeyType>, 
	typename Allocator = std::allocator<std::pair<const KeyType, ValueType>>>
using TMap = std::unordered_map<KeyType, ValueType, Hash, KeyEqual, Allocator>;