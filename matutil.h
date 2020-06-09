#ifndef OPERATORAUGMENTATION_MATUTIL_H
#define OPERATORAUGMENTATION_MATUTIL_H

#include <vector>
#include <Eigen/Sparse>

// Creates a matrix M that when applied to A has the effect of array slicing A(indices, :)
void createSlicingMatrix(int cols, const std::vector<int>& indices, Eigen::SparseMatrix<double>* out);

#endif //OPERATORAUGMENTATION_MATUTIL_H
