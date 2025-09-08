#include <iostream>

int main() {
    // Define a 3x3x3 three-dimensional array (3D cube)
    int cube[3][3][3] = {
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        },
        {
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18}
        },
        {
            {19, 20, 21},
            {22, 23, 24},
            {25, 26, 27}
        }
    };

    // Print the elements of the 3D cube
    std::cout << "3D Cube:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << "Layer " << i + 1 << ":" << std::endl;
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 3; ++k) {
                std::cout << cube[i][j][k] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}
