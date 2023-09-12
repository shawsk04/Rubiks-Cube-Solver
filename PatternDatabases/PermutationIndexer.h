/* Author: Sonu Kumar Shaw (shawsk04) */


#ifndef RUBIKS_CUBE_SOLVER_PERMUTATIONINDEXER_H
#define RUBIKS_CUBE_SOLVER_PERMUTATIONINDEXER_H
#include "bits/stdc++.h"
#include "math.h"
using namespace std;

template <size_t N, size_t K = N>
class PermutationIndexer
{
    array<uint32_t, (1 << N) - 1> onesCountLookup;

    array<uint32_t, K> factorials;

public:

    // Popluate factorials and ones-count tables.

    PermutationIndexer()
    {
        for (uint32_t i = 0; i < (1 << N) - 1; ++i)
        {
            bitset<N> bits(i);
            this->onesCountLookup[i] = bits.count();
        }

        for (uint32_t i = 0; i < K; ++i)
            this->factorials[i] = pick(N - 1 - i, K - 1 - i);
    }


    // Calculate the lexicographic rank (the index) of a permutation in O(n) complexity.

    uint32_t rank(const array<uint8_t, K>& perm) const
    {
        array<uint32_t, K> lehmer;
        bitset<N> seen;
        lehmer[0] = perm[0];
        seen[N - 1 - perm[0]] = 1;

        for (uint32_t i = 1; i < K; ++i)
        {
            seen[N - 1 - perm[i]] = 1;

            uint32_t numOnes = this->onesCountLookup[seen.to_ulong() >> (N - perm[i])];

            lehmer[i] = perm[i] - numOnes;
        }

        uint32_t index = 0;

        for (uint32_t i = 0; i < K; ++i)
            index += lehmer[i] * this->factorials[i];

        return index;
    }
};

#endif //RUBIKS_CUBE_SOLVER_PERMUTATIONINDEXER_H