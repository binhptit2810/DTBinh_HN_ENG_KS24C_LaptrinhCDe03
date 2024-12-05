#include <stdio.h>

int main() {
    int arr[100]; 
    int size = 0; 
    int choice;

    do {
        printf("\n      MENU      \n");
        printf("1. Nhap so phan tu va gan gia tri cho mang\n");
        printf("2. In ra gia tri cac phan tu trong mang theo dang arr[0]=1, arr[1]=5...\n");
        printf("3. Dem so luong cac so nguyen to co trong mang\n");
        printf("4. Tim gia tri nho thu 2 trong mang\n");
        printf("5. Them 1 phan tu vao vi tri ngau nhien trong mang\n");
        printf("6. Xoa phan tu tai 1 vi tri cu the (nguoi dung nhap vi tri)\n");
        printf("7. Sap xep mang theo thu tu giam dan (Insertion Sort)\n");
        printf("8. Tim kiem xem phan tu co ton tai trong mang hay khong (Binary search)\n");
        printf("9. Xoa toan bo phan tu trung lap trong mang\n");
        printf("10. Dao nguoc thu tu cac phan tu trong mang\n");
        printf("11. Thoat chuong trinh\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                // Nhap so phan tu va gan gia tri cho mang
                printf("Moi ban nhap vao so phan tu cua mang (toi da 100 phan tu): ");
                scanf("%d", &size);
                if (size <= 0 || size > 100) {
                    printf("So luong phan tu khong hop le! Vui long nhap lai.\n");
                    size = 0; 
                } else {
                    for (int i = 0; i < size; i++) {
                        printf("Gia tri cua phan tu arr[%d]: ", i);
                        scanf("%d", &arr[i]); 
                    }
                }
                break;
            }
            case 2: {
                // In ra gia tri cac phan tu trong mang
                if (size == 0) {
                    printf("Mang khong co phan tu nao.\n");
                } else {
                    printf("Cac phan tu trong mang: ");
                    for (int i = 0; i < size; i++) {
                        printf("arr[%d] = %d", i, arr[i]);
                        if (i < size - 1) 
						printf(", ");
                    }
                    printf("\n");
                }
                break;
            }
            case 3: {
            	// Dem so luong cac so nguyen to co trong mang
            	if (size == 0) {
                    printf("Mang khong co phan tu nao\n");
                } else {
                    printf("Cac phan tu la so nguyen to: ");
                    for (int i = 0; i < size; i++) {
                        int isPrime = 1;
                        if (arr[i] <= 1) isPrime = 0;
                        for (int j = 2; j * j <= arr[i]; j++) {
                            if (arr[i] % j == 0) {
                                isPrime = 0;
                                break;
                            }
                        }
                        if (isPrime) {
                            printf("%d\n ", arr[i]);
                        }
                    }
                    printf("\n");
                }
				break;
			}
			case 4: {
				// Tim gia tri nho thu 2 trong mang
				
				
				break;
			}
			case 5: {
				//Them 1 phan tu vao vi tri ngau nhien trong mang
				if(size >= 100){
					printf("Mang da day khong the them phan tu");
				}else{
					int value;
					printf("Moi ban nhap gia tri can them vao mang :");
					scanf("%d",&value);
					arr[size] = value;
					size++;
					printf("Da them %d vao mang.\n",value);
				}
				
				break;
			}
            case 6: {
            	//Xoa phan tu tai 1 vi tri cu the (nguoi dung nhap vi tri)
            	if (size == 0) {
                    printf("Mang rong, khong co phan tu de xoa!\n");
                } else {
                    int index;
                    printf("Nhap vi tri can xoa (0 - %d): ", size - 1);
                    scanf("%d", &index);
                    if (index < 0 || index >= size) {
                        printf("Vi tri khong hop le!\n");
                    } else {
                        for (int i = index; i < size - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        size--;
                        printf("Da xoa phan tu tai vi tri %d.\n", index);
                    }
                }
            	
				break;
			}
			case 7: {
				// Sap xep mang theo thu tu giam dan (Insertion Sort)
				
				break;
			}
			case 8: {
				// Tim kiem xem phan tu co ton tai trong mang hay khong (Binary search)
				int value, found = 0;
                printf("Nhap gia tri can tim: ");
                scanf("%d", &value);
                printf("Vi tri cua gia tri %d trong mang: ", value);
                for (int i = 0; i < size; i++) {
                    if (arr[i] == value) {
                        printf("%d ", i);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("Khong tim thay gia tri %d trong mang.\n", value);
                } else {
                    printf("\n");
                }
				
				break;
			}
			case 9 :{
				// Xoa toan bo phan tu trung lap trong mang
				for (int i = 0; i < size; i++) {
        			for (int j = i + 1; j < size; ) {
            			if (arr[i] == arr[j]) {
                			for (int k = j; k < size - 1; k++) {
                    			arr[k] = arr[k + 1];
                			}
                			size--;
            			} else{
                			j++;
            			}
        			}
    			}
    			printf("Da xoa cac phan tu trung lap trong mang.\n");
				break;
			}
        }
    } while (choice != 11);
    printf("Ket thuc chuong trinh");
    return 0;
}




