// (a) do // a pair of curly bracket is missed
//         int v1, v2;
//         cout << "Please enter two numbers to sum:" ;
//         if (cin >> v1 >> v2)
//             cout << "Sum is: " << v1 + v2 << endl;
//     while (cin);
// (b) do {
//         // . . .
//     } while (int ival = get_response()); //ival should not declared in this scope.
// (c) do {
//         int ival = get_response();
//     } while (ival); // ival is not declared in this scope.
