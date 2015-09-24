/**
 * Authors: Hampus Liljekvist, Isak Nilsson
 */
#pragma once
#include "interval.hpp"
#include "set.hpp"
#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>

#define MAX_LINT std::numeric_limits<long int>::max()


/**
 * Try to cover the given full interval using the interval parts.
 * Assume the intervals are distinguishable as doubles.
 *
 * @param interval: The full interval to cover.
 * @param parts:    The available intervals.
 * @return:         Indices of the intervals used, an empty array if the
 *                  interval could not be covered.
 */
const std::vector<int> cover(const Interval&, std::vector<Interval>&);

/**
 * Find the longest increasing subsequence of positive integers.
 *
 * @param integers: A vector containing the full sequence.
 * @return:         The indices of the longest increasing subsequence.
 */
const std::vector<long int> lis(const std::vector<long int>&);

/**
 * Find parent recursively using DFS.
 *
 * @param:  The set to start searching from.
 * @return: The found set.
 */
set* find(set*);

/**
 * Check if the given sets are connected.
 *
 * @param x: The first set to compare.
 * @param y: The second set to compate.
 * @return:  True if x and y are in the same set.
 */
bool same(set*, set*);

/**
 * Union sets by attaching the root of one to the root of the other.
 *
 * @param x: The first set to union.
 * @param y: The second set to union.
 */
void set_union(set*, set*);
