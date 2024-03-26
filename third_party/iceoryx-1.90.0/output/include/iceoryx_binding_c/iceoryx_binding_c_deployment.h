// Copyright (c) 2022 by Apex.AI Inc. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// SPDX-License-Identifier: Apache-2.0
#ifndef IOX_BINDING_C_DEPLOYMENT_H
#define IOX_BINDING_C_DEPLOYMENT_H

/// @note must be equal to MAX_NUMBER_OF_NOTIFIERS in iceoryx_posh_types.hpp
/// @todo The following files need to be touched when activating the CMake configuration of IOX_MAX_NUMBER_OF_NOTIFIERS
/// enable constexpr IOX_MAX_NUMBER_OF_NOTIFIERS in iceoryx_posh/cmake/iceoryx_posh_deployment.hpp.in
/// enable IOX_MAX_NUMBER_OF_NOTIFIERS parameter in iceoryx_posh/cmake/IceoryxPoshDeployment.cmake
/// use build::IOX_MAX_NUMBER_OF_NOTIFIERS parameter in iceoryx_posh/include/iceoryx_posh/iceoryx_posh_types.hpp
#define IOX_BUILD_GENERATED_MAX_NUMBER_OF_NOTIFIERS 256

#endif // IOX_BINDING_C_DEPLOYMENT_H
