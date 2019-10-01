#include <cstdlib>
#include "pixel.hpp"
#include "stdio.h"
#include <iostream>

pixel::pixel(uchar p) {
  len = 1;
  in = (uchar*) malloc(len * sizeof (uchar));
  in[0] = p;
  alpha = 1;
}

pixel::pixel(uchar p1, uchar p2, uchar p3) {
  len = 3;
  in = (uchar*) malloc(len * sizeof (uchar));
  in[0] = p1;
  in[1] = p2;
  in[2] = p3;
  alpha = 1;
}

pixel::pixel(uchar p1, uchar p2, uchar p3, uchar a) : pixel(p1, p2, p3) {
  alpha = a;
}

pixel::pixel(const pixel& other) {
  len = other.len;
  in = (uchar*) malloc(len * sizeof(uchar));
  for (int i = 0; i < len; i++) {
    in[i] = other.in[i];
  }
  alpha = other.alpha;
}

pixel::~pixel() {
  free(in);
}

pixel& pixel::operator=(const pixel& other) {
  alpha = other.alpha;
  len = other.len;
  in = (uchar*) malloc(len * sizeof (uchar));
  for (int i = 0; i < len; i++) {
    in[i] = other.in[i];
  }
  return *this;
}

pixel& pixel::operator+(uchar scalar) {
  for (int i = 0; i < len; i++) {
    in[i] += scalar;
  }
  return *this;
}

pixel& pixel::operator-(uchar scalar) {
  for (int i = 0; i < len; i++) {
    in[i] -= scalar;
  }
}

pixel operator-(uchar scalar, const pixel& px) {
  pixel res(px);
  for (int i = 0; i < res.len; i++) {
    res.in[i] = scalar - px.in[i];
  }
  return res;
}