//template if_even realization
bool if_even(T number)
{
if (number==0) return false;
else
	{
	if(fmod(number,2)==0) return true;
	else                  return false;
	}
}