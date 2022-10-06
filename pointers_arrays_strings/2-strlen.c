/**
* _strlen - function that returns the length of a string
* @s: output
* Return: Nothing
*/
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
