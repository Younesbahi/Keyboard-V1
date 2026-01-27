#pragma once

#include "quantum.h"

/*
 * Layout macro for 5x15 matrix.
 * This maps physical keys to matrix intersections.
 * The arguments (k00, k01...) represent the switch at Row X, Col Y.
 */

#define LAYOUT( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, k0D, k0E, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, k1D, k1E, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B,      k2C, k2D, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A,      k3B, k3C, k3D, \
    k40, k41, k42,                k46,                k4A, k4B, k4C, k4D, k4E  \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, k0D, k0E }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, k1D, k1E }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, k2C, k2D, KC_NO }, \
    { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B, k3C, k3D, KC_NO }, \
    { k40, k41, k42, KC_NO, KC_NO, KC_NO, k46, KC_NO, KC_NO, KC_NO, k4A, k4B, k4C, k4D, k4E } \
}