#include <stdio.h>

int main() {
    int tuoi_benh_nhan[4];
    int co_bao_hiem[4];
    int phi_kham[4];

    int tong_doanh_thu = 0;
    int tong_uu_tien = 0;

    // Nhap du lieu 4 benh nhan
    for (int i = 0; i < 4; i++) {
        printf("\n--- Benh nhan %d ---\n", i + 1);

        printf("Nhap tuoi: ");
        scanf("%d", &tuoi_benh_nhan[i]);

        printf("Co BHYT? (1: Co, 0: Khong): ");
        scanf("%d", &co_bao_hiem[i]);

        // Kiem tra tuoi
        if (tuoi_benh_nhan[i] <= 0 || tuoi_benh_nhan[i] > 120) {
            phi_kham[i] = 0;

            printf("Trang thai: LOI DU LIEU\n");
            printf("Phi kham: 0 VND\n");
        }
        else {
            // Kiem tra BHYT
            if (co_bao_hiem[i] != 0 && co_bao_hiem[i] != 1) {
                co_bao_hiem[i] = 0;
            }

            // Tinh phi kham
            if (co_bao_hiem[i] == 1) {
                phi_kham[i] = 40000;
            }
            else {
                phi_kham[i] = 200000;
            }

            // Phan luong
            if (tuoi_benh_nhan[i] > 70) {
                printf("Trang thai: UU TIEN\n");
                tong_uu_tien++;
            }
            else {
                printf("Trang thai: THUONG\n");
            }

            printf("Phi kham: %d VND\n", phi_kham[i]);

            // Cong doanh thu
            tong_doanh_thu += phi_kham[i];
        }
    }

    // In ket qua tong hop
    printf("\n====================================\n");
    printf("      TONG HOP CA TRUC SANG\n");
    printf("====================================\n");

    for (int i = 0; i < 4; i++) {
        printf("Benh nhan %d: Tuoi = %d, BHYT = %d, Phi = %d VND\n",
               i + 1,
               tuoi_benh_nhan[i],
               co_bao_hiem[i],
               phi_kham[i]);
    }

    printf("\nTong doanh thu: %d VND\n", tong_doanh_thu);
    printf("Tong so ca UU TIEN: %d\n", tong_uu_tien);

    return 0;
}