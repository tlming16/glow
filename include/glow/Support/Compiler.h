/**
 * Copyright (c) 2017-present, Facebook, Inc.
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
 */
#ifndef GLOW_SUPPORT_COMPILER_H
#define GLOW_SUPPORT_COMPILER_H

#include <stdio.h>

#if !defined(__has_builtin)
#define __has_builtin(builtin) 0
#endif

#define GLOW_ASSERT(e)                                                         \
  ((void)((e) ? ((void)0) : GLOW_ASSERT_IMPL(#e, __FILE__, __LINE__)))
#define GLOW_ASSERT_IMPL(e, file, line)                                        \
  ((void)printf("%s:%u: failed assertion `%s'\n", file, line, e), abort())

#define GLOW_UNREACHABLE(msg)                                                  \
  ((void)printf("%s:%u: %s\n", __FILE__, __LINE__, msg), abort())

#endif // GLOW_SUPPORT_COMPILER_H
