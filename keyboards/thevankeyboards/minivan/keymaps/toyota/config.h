#pragma once
// place overrides here

#define COMBO_COUNT 4
#define TAPPING_TERM 168
#define COMBO_TERM 160

// RGB
#ifdef RGBLIGHT_ENABLE
#define RGB_DI_PIN D0
#define RGBLED_NUM 3
#endif

#define RGBLIGHT_LAYERS

// LED indicators 
// which layer is on - pin 1
// Combos are off - pin 2
// discord is muted pin 3

// COMBOS!!!!!!
// Left Hand Combos
// qw 
// w+esc 
// q+esc
// qd qf
// vf
// sx

//Right hand combos
// '+;
// jm 

// two hand combos
// fj qp qk qj vm vk vj 

// Combo Possibilities
// bq bz 
// cf* cj* cv cx
// fq fv* fx fz 
// gq gv gx 
// hx hz 
// jb jd* jf* jg jh jl jm* jp jq jr js jt jv jw jx jy jz
// kq kx kz
// mx mz
// pq pv px 
// qb qc qd qf qg qh qj qk ql qm qn qp qq qv qw* qx qy qz 
// sx 
// tq 
// vb vf vh vj vk vm vp vq vw vx 
// wv wx
// xd xj xk xr xz 
// yq yy 
// zf zr zx*