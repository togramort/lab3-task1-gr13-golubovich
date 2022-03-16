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

int sortGrades (double *grades1, double *grades2) {
  //sort
  return compareGrades (grades1[2], grades2[2]);
}