#pragma once

#ifndef X_SWAP_H
#define X_SWAP_H

template<class TYPE>
inline void swap(TYPE& left, TYPE& right) noexcept
{
	TYPE t = move(left);
	left = move(right);
	right = move(t);
}

#endif