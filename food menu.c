#include<stdio.h>
main()
{
	printf("Pick an Item \n1.Pizza \nPrice=239 \n2.Burger \nPrice=129 \n3.Pasta \nPrice=179 \n4.FrenchFries \nPrice=99 \n5.Sandwich \nPrice=149");
	int ch=0;
	scanf("%d",&ch);
	switch(ch)
	{
		case1:
			printf("FoodItem-Pizza \n Price-239");
			break;
			case2:
				printf("FoodItem-Burger \n Price-129");
				break;
				case3:
					printf("FoodItem-Pasta \n Price-179");
					break;
					case4:
						printf("FoodItem-FrenchFries \n Price-99");
						break;
						case5:
							printf("FoodItem-Sandwich \n Price-149");
							break;
							default:
								printf("Invalid Choice");
								break;
							}
							return 0;
						}
						
	


