  #include <stdlib.h>

;

void daoMang2() {
	int arr[100];
	int N = 0;
  	char inputText[8];

	//Nhap chuoi, chuyen doi sang so, neu chuyen doi thanh cong thi them vao mang arr
  	while (1) {
  			gets(inputText);
  			if (inputText[0] == 'q') break;
            char * temp;
			int _val = strtol(inputText, &temp, 10);
			if (temp[0] == '\0') { //convert successfully
        arr[N] = _val;
        N++;
        if (N == sizeof(arr) / sizeof(arr[0])) {
          break;
        }
			}
	}

	//Dao mang
	for (int i = 0; i <= N/2; i++) {
			int temp = arr[i];
			arr[i] = arr[N - 1 - i];
			arr[N - 1 - i] = temp;
	}

	//In ra ket qua
	for (int i = 0; i < N; i++) {
		printf("%d\n", arr[i]);
  	}

  }
