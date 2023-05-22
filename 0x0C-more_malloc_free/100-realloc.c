/**
 * _realloc - function that returns a memory block using malloc and free
 * @ptr: pointer to the previously allocated memory
 * @old_size: previously allocated space
 * @new_size: newly allocated size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	

