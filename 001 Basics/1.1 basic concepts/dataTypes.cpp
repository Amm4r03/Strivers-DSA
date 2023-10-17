// link : https://www.codingninjas.com/studio/problems/data-type_8357232?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int dataTypes(char* type) // was string in code but changed to char* for the sake of removing the squiggly error line 
{
	int result = 0;

	if(type[0] == 'I')
	{
		result =sizeof(int);
	}
	else if (type[0] == 'L')
	{
		result = sizeof(long);
	}
	else if (type[0] == 'F')
	{
		result =  sizeof(float);
	}
	else if (type[0] == 'D')
	{
		result =  sizeof(double);
	}
	else
	{
		result = 1;
	}

	return result;
}
