/*
** EPITECH PROJECT, 2018
** MY_SORT_INT_ARRAY
** File description:
** Sort an int array
*/

void my_sort_int_array(int *array, int size)
{
    int i;
    int c;

    for (i = 0; i < size * 100; i++) {
        if (array[i] <= array[i + 1]) {
            c = array[i];
            array[i] = array[i + 1];
            array[i + 1] = c;
        }
        my_sort_int_array(array, size);
    }
}
