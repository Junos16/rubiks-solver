# pragma once

#include <cstdint>
#include <vector>

using u8 = std::uint8_t;
using u16 = std::uint16_t;
using u32 = std::uint32_t;
using u64 = std::uint64_t;

using i8 = std::int8_t;
using i16 = std::int16_t;
using i32 = std::int32_t;
using i64 = std::int64_t;

inline constexpr u8 NUM_CORNERS = 8;
inline constexpr u8 NUM_EDGES = 12;
inline constexpr u8 NUM_FACE = 6;
inline constexpr u8 MAX_MOVES = 20;

enum class Face : u8 {
    Front = 0,
    Back = 1,
    Right = 2,
    Left = 3,
    Up = 4,
    Down = 5
};

enum class Move : u8 {
    F = 0, F2 = 1, Fp = 2,    
    B = 3, B2 = 4, Bp = 5,    
    R = 6, R2 = 7, Rp = 8,    
    L = 9, L2 = 10, Lp = 11,  
    U = 12, U2 = 13, Up = 14, 
    D = 15, D2 = 16, Dp = 17,
    INVALID = 255
};

struct Corner {
    u8 position : 4;
    u8 orientation : 2;
    u8 unused : 2;
};

struct Edge {
    u8 position : 4;
    u8 orientation : 1;
    u8 unused : 3;
};

using MoveSequennce = std::vector<Move>;
