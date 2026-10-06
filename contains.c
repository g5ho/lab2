#include <stdio.h>

int contains(int item, int arr[], int size) {
<<<<<<< HEAD
=======
<<<<<<< HEAD
	for(int i = 0; i < size; i++) {

		if(arr[i] == item) {
			return 1;
		}
	}

	return 0;
}

int main() {

	int arr[] = {2, 9, 2, 0, 2, 5};

	printf("Result: %d\n", contains(2, arr, 6));


	printf("Result: %d\n", contains(0, arr, 6));

	printf("Result: %d\n", contains(9, arr, 6));

	printf("Result: %d\n", contains(-1, arr, 6));

	printf("Result: %d\n", contains(5, arr, 6));


=======
>>>>>>> 4d6f4fbdc824778fc1b9bd4030fc1629a72b9af7
    for (int i = 0; i < size; i++) {
        if (arr[i] == item) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr[] = {2, 9, 2, 0, 2, 5};

    printf("contains 2? %d\n", contains(2, arr, 6));
    printf("contains 4? %d\n", contains(4, arr, 6));
    printf("contains 9? %d\n", contains(9, arr, 6));
    printf("contains 3? %d\n", contains(3, arr, 6));

    return 0;
<<<<<<< HEAD
=======
>>>>>>> 91dc7a46ee7073b61c6b1ef0ed347c026e68a9ff
>>>>>>> 4d6f4fbdc824778fc1b9bd4030fc1629a72b9af7
}
