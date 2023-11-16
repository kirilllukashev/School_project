#include<iostream>
//1000004 696969 159753 66666 1 2 3
//662 709 595 1008 967 219 341
signed main () {
    long long aa, bb, cc, dd, x0, x1, x2;
    std::cin >> aa >> bb >> cc >> dd >> x0 >> x1 >> x2;
    long long loc_x0_ah = x0;
    long long loc_x1_ah = x1;
    long long loc_x2_ah = x2;
    long long loc_x0_tar = x0;
    long long loc_x1_tar = x1;
    long long loc_x2_tar = x2;
    long long dop1, dop2;
    long long pos_ah;
    long long pos_tar;
    long long pos_dop;
    bool f = 1;
    long long quantity = 0;
    do {
        pos_ah = (aa * loc_x2_ah + bb * loc_x1_ah + cc * loc_x0_ah) % dd;
        dop1 = loc_x2_ah;
        dop2 = loc_x1_ah;
        loc_x2_ah = pos_ah;
        loc_x1_ah = dop1;
        loc_x0_ah = dop2;

        pos_tar = (aa * loc_x2_tar + bb * loc_x1_tar + cc * loc_x0_tar) % dd;
        dop1 = loc_x2_tar;
        dop2 = loc_x1_tar;
        loc_x2_tar = pos_tar;
        loc_x1_tar = dop1;
        loc_x0_tar = dop2;

        pos_tar = (aa * loc_x2_tar + bb * loc_x1_tar + cc * loc_x0_tar) % dd;
        dop1 = loc_x2_tar;
        dop2 = loc_x1_tar;
        loc_x2_tar = pos_tar;
        loc_x1_tar = dop1;
        loc_x0_tar = dop2;
        ++quantity;

    } while (!(loc_x0_ah == loc_x0_tar && loc_x1_ah == loc_x1_tar && loc_x2_ah == loc_x2_tar));
    for (long long i = 0; i < quantity; ++i) {
        pos_tar = (aa * loc_x2_tar + bb * loc_x1_tar + cc * loc_x0_tar) % dd;
        dop1 = loc_x2_tar;
        dop2 = loc_x1_tar;
        loc_x2_tar = pos_tar;
        loc_x1_tar = dop1;
        loc_x0_tar = dop2;
    }
    long long start_x0 = x0, start_x1 = x1, start_x2 = x2;
    long long ans_n = 0;
    while (1) {
        if(start_x0 == loc_x0_tar && start_x1 == loc_x1_tar && start_x2 == loc_x2_tar) {
            break;
        }

        pos_tar = (aa * loc_x2_tar + bb * loc_x1_tar + cc * loc_x0_tar) % dd;
        dop1 = loc_x2_tar;
        dop2 = loc_x1_tar;
        loc_x2_tar = pos_tar;
        loc_x1_tar = dop1;
        loc_x0_tar = dop2;

        pos_tar = (aa * start_x2 + bb * start_x1 + cc * start_x0) % dd;
        dop1 = start_x2;
        dop2 = start_x1;
        start_x2 = pos_tar;
        start_x1 = dop1;
        start_x0 = dop2;

        ++ans_n;
    }
    double val[400];
    int z_quan[20];
    for (long long i = 0; i < 20; ++i) {
        z_quan[i] = 0;

    }
    start_x0 = x0;
    start_x1 = x1;
    start_x2 = x2;
    for (long long i = 0; i < 400; ++i) {
        pos_tar = (aa * start_x2 + bb * start_x1 + cc * start_x0) % dd;
        int ind = (double)pos_tar / (double)dd;
        dop1 = start_x2;
        dop2 = start_x1;
        start_x2 = pos_tar;
        start_x1 = dop1;
        start_x0 = dop2;
    }
    double pos_r = 0.05;
    for (long long i = 0; i < 400; ++i) {
        pos_r = 0.05;
        for (long long j = 0; j < 20; ++j) {
            if (val[i] < pos_r) {
                ++z_quan[j];
                break;
            } else {
                pos_r += 0.05;
            }
        }
    }
    double ans_z = 0;
    for (long long i = 0; i < 20; ++i) {
        ans_z += (double)(z_quan[i] - 20) * (z_quan[i] - 20) / 400;
    }
    std::cout << quantity << ' ' << ans_n << ' ' << ans_z;
    return 0;
}
