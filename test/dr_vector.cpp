/**
 * This file is part of the "dim" project
 *   Copyright (c) 2020 Christian Parpart <christian@parpart.family>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <ostream>
#include <linear_algebra>
#include "support.h"

#include <catch2/catch.hpp>

TEST_CASE("dr_vector.ctor")
{
    SECTION("default")
    {
        auto static const me = dvec<int>();
        CHECK(me.elements() == 0);
    }

    SECTION("initializer_list")
    {
        auto static const me = dvec<int>{0, 1, 2};
        auto static const m2 = me;
        REQUIRE(me == m2);
    }
}


