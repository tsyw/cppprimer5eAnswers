// (a) for (int ix = 0; ix != sz; ++ix) { /* ... */ }
//     if (ix != sz)//ix is not defined
//     // . . .
// (b) int ix;
//     for (ix != sz; ++ix) { /* ... */ }//a semicolon is missed
// (c) for (int ix = 0; ix != sz; ++ix, ++sz) { /*...*/ }//will runs forever
