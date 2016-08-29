vector<int> v1;
const vector<int> v2;
auto it1 = v1.begin(), it2 = v2.begin();// an error, because it2 must be const_iterator, but auto is iterator
auto it3 = v1.cbegin(), it4 = v2.cbegin();// const_iterator
