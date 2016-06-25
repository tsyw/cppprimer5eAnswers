// /*1_9*/
// #include <iostream>

// int main ()
// {
// 	int sum = 0;

// 	for(int i = 50; i <= 100; ++i)
// 	{
// 		sum += i;
// 	}

// 	std::cout << "The sum of 50 to 100 is: " << sum << std::endl;

// 	return 0;
// }

// /*1_10*/
// #include <iostream>

// int main()
// {
// 	std::cout << "10 to 0: " << std::endl;
// 	for (int i = 10; i >= 0; --i)
// 	{
// 		std::cout << i << std::endl;
// 	}

// 	return 0;
// }

// /*1_11*/
// #include <iostream>

// int main()
// {
// 	int v1 = 0, v2 = 0;

// 	std::cout << "Enter two numbers: ";
// 	std::cin >> v1 >> v2;

// 	int tmp = v1;
// 	if (v1 > v2)
// 	{
// 		v1 = v2;
// 		v2 = tmp;
// 	}

// 	for (int i = v1; i <= v2; ++i)
// 	{
// 		std::cout << i << " ";
// 	}
// 	std::cout << std::endl;

// 	return 0;
// }