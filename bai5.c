#include <stdio.h>

void bai5_TinhTienDien() {
    int soDien;
    long long tienDien = 0;
    printf("--- Bai 5: Tinh tien dien (Theo gia dinh luy tien) ---\n");
    printf("Moi nhap so kWh tieu thu: ");
    scanf("%d", &soDien);

    int soDienConLai = soDien;

    if (soDienConLai > 0) {
        int dienTieuThu = (soDienConLai > 100) ? 100 : soDienConLai;
        tienDien += (long long)dienTieuThu * 500;
        soDienConLai -= dienTieuThu;
    }

    if (soDienConLai > 0) {
        int dienTieuThu = (soDienConLai > 50) ? 50 : soDienConLai;
        tienDien += (long long)dienTieuThu * 550;
        soDienConLai -= dienTieuThu;
    }

    if (soDienConLai > 0) {
        int dienTieuThu = (soDienConLai > 200) ? 200 : soDienConLai;
        tienDien += (long long)dienTieuThu * 650;
        soDienConLai -= dienTieuThu;
    }

    if (soDienConLai > 0) {
        tienDien += (long long)soDienConLai * 700;
    }

    printf("Tong so tien dien phai tra cho %d kWh la: %lld VND\n", soDien, tienDien);
}

int main() {
    bai5_TinhTienDien();
    return 0;
}
