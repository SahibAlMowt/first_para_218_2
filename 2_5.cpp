#include <iostream>
#include <vector>
#include <string>

int maxt(std::vector<std::string> nam)
{
	int l;
	int m_l = 0;
	size_t t = 0;
	while(t < nam.size())
	{
//		nam[t].pop_back();
		l = nam[t].size();
//		std::cout << l;
		if(m_l < l)
		{
			m_l = l;
		}
		t++;
	}
	return m_l;
}

std::string LCP(std::vector<std::string> nam)
{	
	int j = 0;
	std::string c;
	int dd = maxt(nam);
	while(j < dd)
	{
		for(size_t i = 0; i < nam.size() - 1; i++)
		{	
			if(nam[i+1][j] == '\0')
			{
				return c;
			}
			if(nam[i][j] != nam[i+1][j])
			{
//				std::cout << "gg\n";
				return c;
			}	
		}
		c += nam[0][j];
		j++;
	}
	return c;
}

int main()
{
	std::string x;
	std::vector<std::string> nam;
	
	while(std::getline(std::cin, x))
	{
		nam.push_back(x);
	}
	
	/*for(std::string w: nam)
	{
		std::cout << w << "\n";
	}*/
	
	x = LCP(nam);
//	int g = max(nam);
	std::cout << x;
//	std::cout << nam[1];
	
	return 0;
}
