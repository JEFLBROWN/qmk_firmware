/* Copyright 2020 Jef Brown
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
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

#pragma once

#include "quantum.h"

#define ____ KC_NO

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

#define LAYOUT_SPLIT( \ // Split Spacebar
K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014,\
K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114,\
      K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213,      \
      K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313, K314,\
K400, K401,       K403,       K405, K406,       K408, K409,             K412, K413, K414 \
) { \
{ K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014 },\
{ K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114 },\
{ ____, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, ____ },\
{ ____, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313, K314 },\
{ K400, K401, ____, K403, ____, K405, K406, ____, K408, K409, ____, ____, K412, K413, K414 } \
},

#define LAYOUT_SINGLE( \ // Single 6u Spacebar
K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014,\
K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114,\
      K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213,      \
      K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313, K314,\
K400, K401, K402,       K404,             K407,             K410,       K412, K413, K414 \
) { \
{ K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014 },\
{ K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114 },\
{ ____, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, ____ },\
{ ____, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313, K314 },\
{ K400, K401, K402, ____, K404, ____, ____, K407, ____, ____, K410, ____, K412, K413, K414 } \
}
