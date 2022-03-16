#include <stdlib.h>

int compareGrades (double grades1, double grades2) {
  if (grades1 > grades2) {
    return 0;
  } else if (grades1 < grades2) {
  return 1;
  } else if (grades1 == grades2) {
  return 3;
  }
  return -1;
}

static int compare (const void * a, const void * b)
{
  if (*(double*)a > *(double*)b) return 1;
  else if (*(double*)a < *(double*)b) return -1;
  else return 0;  
}

int sortGrades (double *grades1, double *grades2) {
  int size1 = sizeof(grades1) / sizeof(double);
  qsort(grades1, size1, sizeof(double), compare);

  int size2 = sizeof(grades2) / sizeof(double);
  qsort(grades2, size2, sizeof(double), compare);

  return compareGrades (grades1[2], grades2[2]);
}