/* Copyright (C) 2017 Beijing Didi Infinity Technology and Development Co.,Ltd.
All rights reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "feature_extraction_wrapper.h"

namespace inference {

namespace dynload {

std::once_flag feature_dso_flag;
void *feature_dso_handle = nullptr;

#define DEFINE_WRAP(__name) struct dynload__##__name __name

FEATURE_EXTRACTION_ROUTINE_EACH(DEFINE_WRAP);

}  // namespace dynload

}  // namespace inference
