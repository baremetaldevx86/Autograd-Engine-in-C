// loss = mean ((y_pred - y_true)**2)
#include "engine.h"

Tensor* mse_loss(Tensor* y_pred, Tensor* y_true) {
    Tensor* diff = tensor_sub(y_pred, y_true); 
    Tensor* sq = tensor_mul(diff, diff);
    Tensor* loss = tensor_mean(sq);
    
    // Release local references to intermediates
    tensor_release(diff);
    tensor_release(sq);
    
    return loss;
}

