// (a) unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
//     char ch = next_text();
//     switch (ch) {
//         case 'a': aCnt++;
//         case 'e': eCnt++;
//         default: iouCnt++;
//     }//need break at each case's end
// (b) unsigned index = some_value();
//     switch (index) {
//         case 1:
//             int ix = get_value();
//             ivec[ ix ] = index;
//             break;
//         default:
//             ix = ivec.size()-1;
//             ivec[ ix ] = index;
//     }//you should define ix outside the switch
// (c) unsigned evenCnt = 0, oddCnt = 0;
//     int digit = get_num() % 10;
//     switch (digit) {
//         case 1, 3, 5, 7, 9:
//             oddcnt++;
//             break;
//         case 2, 4, 6, 8, 10:
//             evencnt++;
//             break;
//     }//should be like this: case 1: case 3: case 5: case 7: case 9:
// (d) unsigned ival=512, jval=1024, kval=4096;
//     unsigned bufsize;
//     unsigned swt = get_bufCnt();
//     switch(swt) {
//         case ival:
//             bufsize = ival * sizeof(int);
//             break;
//         case jval:
//             bufsize = jval * sizeof(int);
//             break;
//         case kval:
//             bufsize = kval * sizeof(int);
//             break;
//     }//case should not use a variable
