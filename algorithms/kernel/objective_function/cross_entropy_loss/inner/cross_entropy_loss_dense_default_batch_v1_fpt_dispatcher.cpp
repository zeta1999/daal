/* file: cross_entropy_loss_dense_default_batch_v1_fpt_dispatcher.cpp */
/*******************************************************************************
* Copyright 2014-2020 Intel Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

//++
//  Implementation of cross_entropy_loss calculation algorithm container.
//--

#include "algorithms/kernel/objective_function/cross_entropy_loss/inner/cross_entropy_loss_dense_default_batch_container_v1.h"

namespace daal
{
namespace algorithms
{
__DAAL_INSTANTIATE_DISPATCH_CONTAINER(optimization_solver::cross_entropy_loss::interface1::BatchContainer, batch, DAAL_FPTYPE,
                                      optimization_solver::cross_entropy_loss::defaultDense)

namespace optimization_solver
{
namespace cross_entropy_loss
{
namespace interface1
{
using BatchType = Batch<DAAL_FPTYPE, optimization_solver::cross_entropy_loss::defaultDense>;

template <>
services::SharedPtr<BatchType> BatchType::create(size_t nClasses, size_t numberOfTerms)
{
    return services::SharedPtr<BatchType>(new BatchType(nClasses, numberOfTerms));
}

} // namespace interface1

} // namespace cross_entropy_loss
} // namespace optimization_solver
} // namespace algorithms

} // namespace daal
