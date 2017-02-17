// -*- mode: c++; indent-tabs-mode: nil; -*-
//
// Manta - Structural Variant and Indel Caller
// Copyright (c) 2013-2016 Illumina, Inc.
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
//

///
/// \author Xiaoyu Chen
///

#pragma once

#include <cassert>
#include <cmath>
#include <cstdlib>

#include <iosfwd>
#include <set>
#include <string>


/// consolidate all RNA scoring results applied to an SV candidate
///todo This is mostly a placeholder. Add real RNA scoring model
struct SVScoreInfoRna
{
    void
    clear()
    {
        filters.clear();
        altScore=0;
    }

    std::set<std::string> filters;

    unsigned altScore = 0; ///< quality score indicating any non-reference state (regardless of specific genotype)

    static const std::string rnaFilterLabel;

};

std::ostream&
operator<<(
    std::ostream& os,
    const SVScoreInfoRna& sid);
