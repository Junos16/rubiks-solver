#pragma once

#include "../utils/types.hpp"
#include <array>

class Cube {
private:
    std::array<Corner, NUM_CORNERS> corners_;
    std::array<Edge, NUM_EDGES> edges_;

    void rotate_face_corners(Face face);
    void rotate_face_edges(Face face);
};
