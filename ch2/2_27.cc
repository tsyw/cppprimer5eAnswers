//(a) int i = -1, &r = 0;//illegal
//(b) int *const p2 = &i2;//legal
//(c) const int i = -1, &r = 0;//legal
//(d) const int *const p3 = &i2;//legal
//(e) const int *p1 = &i2;//legal
//(f) const int &const r2;//illegal, no reference object
//(g) const int i2 = i, &r = i;//legal
