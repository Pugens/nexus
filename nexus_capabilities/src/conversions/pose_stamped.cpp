/*
 * Copyright (C) 2023 Johnson & Johnson
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
 *
 */

#include <nexus_capabilities/conversions/pose_stamped.hpp>

namespace BT {

template<>
geometry_msgs::msg::PoseStamped convertFromString(StringView str)
{
  geometry_msgs::msg::PoseStamped pose;
  pose.header.frame_id = str.to_string();
  return pose;
}

}
