#include <iostream>
int main()
{
	int a=5,b=9,c,choice;
	std::cout<<"provide any choice";
	std::cin>>choice;
	switch(choice)
	case 1:
		c=a+b;
		std::cout<<"add c="<<c;
		break;
		case 2:
			c=a-b;
			std::cout<<"sub c="<<c;
			break;
			case 3:
				c=a*b;
				std::cout<<"multiple c="<<c;
				break;
				case 4:
					c=a/b;
					std::cout<<"division c="<<c;
					break;
					case 5:
						c=a%b;
						std::cout<<"module c="<<c;
						break;	
    }
return 0;
}

