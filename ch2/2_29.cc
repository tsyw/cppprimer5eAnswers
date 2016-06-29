//(a) i = ic;//legal(top-level const)
//(b) p1 = p3;//illegal low-level const p3
//(c) p1 = &ic;//illegal
//(d) p3 = &ic;//illegal
//(e) p2 = p1;//illegal
//(f) ic = *p3//illegal
