#include <stdio.h>

void bai5_TinhTienDien() {
    int soDien;
    int tienDien = 0; 
    
    printf("--- Bai 5: Tinh tien dien (Theo gia dinh luy tien) ---\n");
    printf("Moi nhap so kWh tieu thu: ");
    scanf("%d", &soDien);

    int soDienConLai = soDien;
    if (soDienConLai > 0) {
        int dienTieuThu;
        if (soDienConLai > 100) {
            dienTieuThu = 100;
        } else {
            dienTieuThu = soDienConLai;
        }
        
        tienDien += dienTieuThu * 500; 
        soDienConLai -= dienTieuThu;
    }
    if (soDienConLai > 0) {
        int dienTieuThu;
        if (soDienConLai > 50) {
            dienTieuThu = 50;
        } else {
            dienTieuThu = soDienConLai;
        }
        
        tienDien += dienTieuThu * 550;
        soDienConLai -= dienTieuThu;
    }
    if (soDienConLai > 0) {
        int dienTieuThu;
        if (soDienConLai > 200) {
            dienTieuThu = 200;
        } else {
            dienTieuThu = soDienConLai;
        }

        tienDien += dienTieuThu * 650;
        soDienConLai -= dienTieuThu;
    }
    if (soDienConLai > 0) {
        tienDien += soDienConLai * 700; 
    }
    printf("Tong so tien dien phai tra cho %d kWh la: %d VND\n", soDien, tienDien);
}

int main() {
    bai5_TinhTienDien();
    return 0;
}
