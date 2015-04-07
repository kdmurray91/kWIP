/*
 * Copyright 2015 Kevin Murray <spam@kdmurray.id.au>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef D2_HH
#define D2_HH


#include "distance.hh"

namespace kmerclust
{
namespace metrics
{

class DistanceCalcD2 : public DistanceCalc
{
public:
    float distance(khmer::CountingHash &a, khmer::CountingHash &b);
};

}} // end namespace kmerclust::metrics

#endif /* D2_HH */
