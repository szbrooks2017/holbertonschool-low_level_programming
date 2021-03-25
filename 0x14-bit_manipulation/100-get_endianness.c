/**
* get_endianness - gets endians
* Return: - returns 1 or 0
*
*/
int get_endianness(void)
{
	int x = 1;

	char *y = (char *)&x;

	if (*y + 48 == 48)
		return (0);
	else
		return (1);
}
