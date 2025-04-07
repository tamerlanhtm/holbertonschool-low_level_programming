/**
 * clear_bit -  sets the value of a bit to 0 at a given index
 * @n: pointer to the value
 * @index: index is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > 64)
		return (-1);

	*n = (1UL << index ^ *n) & *n;

	return (1);
}
