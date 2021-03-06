/*
 * Software License Agreement (Apache License)
 *
 * Copyright (c) 2019 Joshua Hatzenbuehler
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PACKML_STACKLIGHT_LIGHT_H
#define PACKML_STACKLIGHT_LIGHT_H

#include <map>

namespace packml_stacklight
{
class Light
{
public:
  enum Values
  {
    UNDEFINED = 0,
    RED = 1,
    AMBER = 2,
    GREEN = 3,
    BLUE = 4,
  } typedef Value;

  const std::map<Value, std::string> map_ = { { UNDEFINED, "UNDEFINED-LIGHT" },
                                              { RED, "red" },
                                              { AMBER, "amber" },
                                              { GREEN, "green" },
                                              { BLUE, "blue" } };
  Value current_ = UNDEFINED;
  bool active_ = false;
  bool flashing_ = false;
};
}  // namespace packml_stacklight

#endif  // PACKML_STACKLIGHT_LIGHT_H
