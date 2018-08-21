
struct s0 {
    struct s0* f0;
    unsigned char f1;
    signed char[2] pad4;
    struct s0* f4;
    signed char[3] pad8;
    struct s0* f8;
    signed char[11] pad20;
    struct s0* f20;
    signed char[3] pad24;
    uint32_t f24;
    int32_t f28;
    signed char[8] pad40;
    int32_t f40;
    struct s0* f44;
    signed char[31] pad76;
    void* f76;
};

struct s0* g31fc = reinterpret_cast<struct s0*>(67);

struct s0* fun_31ec(struct s0* r0, void* r1) {
    struct s0* r0_3;

    r0_3 = g31fc;
    __asm__("bic r0, r0, #0x7f00");
    __asm__("bic r0, r0, #0xff");
    return r0_3;
}

struct s1 {
    unsigned char f0;
    signed char f1;
};

void fun_3348() {
    int32_t r2_1;
    struct s1* r0_2;

    r2_1 = 0;
    while (++r2_1, r0_2->f0 = static_cast<unsigned char>(static_cast<uint32_t>(r0_2->f0) & 0x70), r0_2->f1 = 0, ++r0_2, r2_1 != 12) {
    }
    return;
}

int32_t fun_3598(uint32_t r0, uint32_t r1) {
    int1_t below_or_equal3;
    int32_t r3_4;
    int32_t r0_5;
    int1_t less_or_equal6;

    below_or_equal3 = r0 <= 11;
    if (!below_or_equal3) {
        r3_4 = 0;
    }
    if (below_or_equal3) {
        r3_4 = 1;
    }
    if (reinterpret_cast<int32_t>(r1) < reinterpret_cast<int32_t>(0)) {
        r3_4 = 0;
    }
    r0_5 = r3_4;
    if (!r3_4) {
        return r0_5;
    } else {
        less_or_equal6 = reinterpret_cast<int32_t>(r1) <= reinterpret_cast<int32_t>(2);
        if (!less_or_equal6) {
            r0_5 = 0;
        }
        if (less_or_equal6) {
            r0_5 = 1;
        }
        return r0_5;
    }
}

void fun_3774(void* r0, void* r1, void* r2) {
}

struct s0** g3810 = reinterpret_cast<struct s0**>(0x40000000);

void fun_3804(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3) {
    struct s0** r3_5;

    r3_5 = g3810;
    *r3_5 = r0;
    return;
}

struct s0* g3850 = reinterpret_cast<struct s0*>(0x7c);

struct s0* g3854 = reinterpret_cast<struct s0*>(0xcc);

struct s0* fun_3814(struct s0* r0) {
    struct s0* r2_2;
    struct s0* r1_3;
    struct s0* r0_4;
    struct s0* r3_5;

    r2_2 = g3850;
    r1_3 = r0;
    while (1) {
        r0_4 = r2_2;
        r2_2 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r2_2) + 12);
        if (reinterpret_cast<unsigned char>(r1_3) < reinterpret_cast<unsigned char>(r0_4->f4)) {
            if (reinterpret_cast<unsigned char>(r1_3) <= reinterpret_cast<unsigned char>(r0_4->f8)) 
                goto label_5;
        }
        r3_5 = g3854;
        if (r2_2 == r3_5) 
            break;
    }
    return 0;
    label_5:
    return r0_4;
}

int32_t fun_3fa0(void* r0, struct s0* r1, struct s0* r2, struct s0** r3);

struct s0** g3d84 = reinterpret_cast<struct s0**>(0x40000000);

int32_t fun_3f3c(void* r0, struct s0* r1, struct s0* r2);

int32_t fun_3cd4(uint32_t r0, struct s0* r1, struct s0* r2, struct s0* r3) {
    uint32_t r7_5;
    void* r5_6;
    struct s0** r3_7;
    int1_t z8;
    void* r4_9;
    struct s0* r6_10;
    int32_t r0_11;
    struct s0** r3_12;
    int32_t r0_13;
    int1_t z14;

    r7_5 = r0;
    r5_6 = reinterpret_cast<void*>(0);
    while (1) {
        r3_7 = reinterpret_cast<struct s0**>(r7_5 & 1 << reinterpret_cast<uint32_t>(r5_6));
        z8 = r3_7 == 0;
        if (!z8) {
            r4_9 = r5_6;
        }
        if (!z8) {
            do {
                r4_9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r4_9) + 1);
                if (reinterpret_cast<uint32_t>(r4_9) > 27) 
                    break;
                r3_7 = reinterpret_cast<struct s0**>(r7_5 & 1 << reinterpret_cast<uint32_t>(r4_9));
            } while (r3_7);
            goto label_9;
        } else {
            r4_9 = r5_6;
            goto addr_3d68_12;
        }
        addr_3d0c_13:
        r6_10 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(r4_9) - 1);
        r0_11 = fun_3fa0(r5_6, r6_10, r2, r3_7);
        if (r0_11 == 7) 
            break;
        if (r0_11 == 11) 
            goto addr_3d2c_15;
        r3_12 = g3d84;
        r2 = *r3_12;
        r0_13 = fun_3f3c(r5_6, r6_10, r2);
        if (r0_13) 
            goto addr_3d54_18;
        addr_3d68_12:
        r5_6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r4_9) + 1);
        if (reinterpret_cast<uint32_t>(r5_6) > 27) 
            goto addr_3d74_20;
        continue;
        label_9:
        goto addr_3d0c_13;
    }
    return -22;
    addr_3d2c_15:
    addr_3d7c_24:
    return -16;
    addr_3d54_18:
    z14 = r0_13 == 11;
    if (!z14) {
        r0_13 = -5;
    }
    if (!z14) {
        return r0_13;
    } else {
        goto addr_3d7c_24;
    }
    addr_3d74_20:
    return 0;
}

struct s2 {
    signed char[172] pad172;
    int32_t f172;
    int32_t f176;
    int32_t f180;
};

struct s2* g3e84 = reinterpret_cast<struct s2*>(0xe0028000);

void fun_4d28(int32_t* r0);

void fun_3e14(void* r0, void* r1) {
    struct s2* r4_3;

    r4_3 = g3e84;
    fun_4d28(reinterpret_cast<int32_t>(__zero_stack_offset()) - 36 - 4);
    r4_3->f176 = 0;
    r4_3->f180 = 0;
    r4_3->f172 = -1;
    r4_3->f172 = -1;
}

struct s3 {
    signed char[255] pad255;
    struct s0* f255;
};

struct s0* fun_4144(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3, struct s0* a5, uint32_t a6, struct s3* a7, struct s0* a8);

struct s0* fun_4368(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3, struct s3* a5, struct s0* a6) {
    struct s0* r0_7;

    r0_7 = fun_4144(r0, r1, r2, r3, 0, 0, a5, a6);
    return r0_7;
}

struct s4 {
    struct s0* f0;
    signed char[3] pad4;
    struct s0* f4;
};

struct s0* fun_476c(struct s4* r0, struct s0* r1, struct s0* r2) {
    while (1) {
        if (r0->f0) {
            if (reinterpret_cast<unsigned char>(r1) < reinterpret_cast<unsigned char>(r0->f0)) 
                goto addr_4778_5;
        } else {
            if (!r0->f4) 
                goto addr_47ac_7;
            goto addr_4778_5;
        }
        addr_478c_10:
        r0 = reinterpret_cast<struct s4*>(reinterpret_cast<int32_t>(r0) + 8);
        continue;
        addr_4778_5:
        if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(r1) + reinterpret_cast<unsigned char>(r2)) <= reinterpret_cast<unsigned char>(r0->f4)) 
            break;
        goto addr_478c_10;
    }
    return 1;
    addr_47ac_7:
    return r0->f4;
}

void fun_538c(struct s0* r0, struct s0* r1, struct s0* r2);

void* g490c = reinterpret_cast<void*>(0x5f10);

struct s0* fun_102c(struct s0* r0, void* r1, struct s0* r2);

uint32_t g4910 = 0x47b4;

uint32_t g4914 = 0x56000;

struct s0* g4918 = reinterpret_cast<struct s0*>(0);

void* g491c = reinterpret_cast<void*>(0x6344);

struct s0* fun_38e0(struct s0* r0, struct s0* r1, struct s0** r2, struct s0** r3);

struct s5 {
    signed char[8] pad8;
    uint32_t f8;
    int32_t f12;
};

struct s5* g4920 = reinterpret_cast<struct s5*>(0x40000004);

int32_t g4924 = 0x7e000;

struct s0* g4928 = reinterpret_cast<struct s0*>(48);

struct s0* g492c = reinterpret_cast<struct s0*>(0x70);

struct s0* fun_5648(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3);

void fun_1028(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3, struct s0* a5, uint32_t a6, struct s3* a7, struct s0* a8);

struct s0* fun_47d4(struct s0* r0, struct s0* r1) {
    int1_t z3;
    struct s0* r5_4;
    struct s0** sp5;
    struct s0* r6_6;
    void* r1_7;
    struct s0* r0_8;
    int1_t z9;
    uint32_t r2_10;
    uint32_t r3_11;
    struct s0* lr12;
    void* r12_13;
    struct s5* r1_14;
    int32_t r3_15;
    int32_t v16;
    struct s0* v17;
    struct s0* r1_18;
    struct s0* r3_19;
    struct s0* r0_20;
    struct s0* r0_21;
    struct s0* v22;
    uint32_t v23;
    struct s3* v24;
    struct s0* r4_25;
    struct s0* r3_26;
    int1_t z27;
    int1_t z28;

    z3 = r0 == 0;
    if (!z3) {
        z3 = r1 == 0;
    }
    r5_4 = r0;
    sp5 = reinterpret_cast<struct s0**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 16 - 12);
    if (!z3) {
        r6_6 = reinterpret_cast<struct s0*>(0);
    }
    if (z3) {
        r6_6 = reinterpret_cast<struct s0*>(1);
    }
    if (z3) {
        r5_4 = reinterpret_cast<struct s0*>(0xffffffea);
    }
    if (!z3) {
        fun_538c(r1, r6_6, 76);
        r1->f4 = reinterpret_cast<struct s0*>(1);
        r1->f8 = reinterpret_cast<struct s0*>(1);
        r1_7 = g490c;
        r0_8 = fun_102c(r5_4, r1_7, 76);
        z9 = r0_8 == 0;
        *reinterpret_cast<struct s0**>(&r1->f0) = r0_8;
        if (z9) {
            r5_4 = reinterpret_cast<struct s0*>(0xfffffffe);
        }
        if (z9) 
            goto label_14; else 
            goto addr_4834_15;
    }
    addr_4900_16:
    return r5_4;
    label_14:
    goto addr_4900_16;
    addr_4834_15:
    r2_10 = g4910;
    r3_11 = g4914;
    if (r2_10 >= r3_11) {
        lr12 = g4918;
        r12_13 = g491c;
        __asm__("stm sp, {ip, lr}");
        fun_38e0(lr12, reinterpret_cast<int32_t>(r12_13) - reinterpret_cast<unsigned char>(lr12), sp5 + 4, sp5);
        r1_14 = g4920;
        r3_15 = g4924;
        r1_14->f8 = v16 + reinterpret_cast<unsigned char>(v17);
        r1_14->f12 = r3_15;
    }
    r1_18 = g4928;
    r3_19 = reinterpret_cast<struct s0*>(sp5 + 8);
    r0_20 = g492c;
    r0_21 = fun_5648(r0_20, r1_18, r1, r3_19);
    r5_4 = r0_21;
    fun_1028(*reinterpret_cast<struct s0**>(&r1->f0), r1_18, r1, r3_19, v22, v23, v24, r4_25);
    if (reinterpret_cast<signed char>(r5_4) >= reinterpret_cast<signed char>(0)) 
        goto addr_48ac_20;
    goto addr_4900_16;
    addr_48ac_20:
    if (r1->f4) {
        if (r1->f40 != 4) {
            r1->f4 = r6_6;
        }
    }
    if (r1->f8) {
        r3_26 = r1->f44;
        z27 = reinterpret_cast<int1_t>(r3_26 == 11);
        if (!z27) {
            r3_26 = reinterpret_cast<struct s0*>(0);
        }
        if (!z27) {
            r1->f8 = r3_26;
        }
    }
    if (r1->f4) 
        goto addr_48ec_32;
    addr_48fc_34:
    r5_4 = reinterpret_cast<struct s0*>(0);
    goto addr_4900_16;
    addr_48ec_32:
    z28 = r1->f8 == 0;
    if (!z28) {
        r5_4 = reinterpret_cast<struct s0*>(0xffffff7e);
    }
    if (z28) 
        goto addr_48fc_34;
    goto addr_4900_16;
}

struct s0* g4adc = reinterpret_cast<struct s0*>(0xe0);

struct s0* fun_4ad4(struct s0* r0, struct s0* r1, struct s0* r2) {
    struct s0* r0_4;

    r0_4 = g4adc;
    return r0_4;
}

struct s6 {
    signed char[196] pad196;
    uint32_t f196;
    signed char[216] pad416;
    uint32_t f416;
};

struct s6* g4d0c = reinterpret_cast<struct s6*>(0xe01fc000);

struct s7 {
    signed char[40] pad40;
    int32_t f40;
};

struct s7* g4d10 = reinterpret_cast<struct s7*>(0xe002c000);

void fun_4ce0() {
    struct s6* r2_1;
    struct s7* r3_2;

    r2_1 = g4d0c;
    r2_1->f416 = r2_1->f416 | 1;
    r3_2 = g4d10;
    r3_2->f40 = 0;
    r2_1->f196 = r2_1->f196 | 0x40000000;
    return;
}

int32_t g5334 = 0x631c;

int32_t g5338 = 0x631c;

struct s8 {
    signed char[4] pad4;
    int32_t f4;
};

struct s8* g533c = reinterpret_cast<struct s8*>(0x6318);

int32_t* g5340 = reinterpret_cast<int32_t*>(0x40000328);

void fun_52f0(struct s0* r0) {
    int32_t r3_2;
    int32_t r2_3;
    struct s8* r5_4;
    uint32_t r4_5;
    int32_t* r3_6;

    r3_2 = g5334;
    r2_3 = g5338;
    r5_4 = g533c;
    r4_5 = reinterpret_cast<uint32_t>(r3_2 - r2_3) >> 2;
    while (--r4_5, r5_4 = reinterpret_cast<struct s8*>(reinterpret_cast<int32_t>(r5_4) - 4), r4_5 != -1) {
        r5_4->f4();
    }
    r3_6 = g5340;
    *r3_6 = 1;
    return;
}

int32_t fun_5344(struct s0* r0, struct s0* r1, int32_t r2) {
    void* lr4;
    uint32_t r2_5;
    uint32_t r3_6;

    lr4 = reinterpret_cast<void*>(0);
    while (__intrinsic()) {
        r2_5 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(lr4) + reinterpret_cast<unsigned char>(r0));
        r3_6 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(lr4) + reinterpret_cast<unsigned char>(r1));
        lr4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(lr4) + 1);
        if (r2_5 >= r3_6) 
            goto addr_5368_5;
        if (r2_5 > r3_6) 
            goto addr_5374_8;
    }
    return 0;
    addr_5368_5:
    return -1;
    addr_5374_8:
    return 1;
}

struct s0* fun_556c(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3) {
    fun_538c(r0, 0, 20);
    goto r1;
}

struct s0* fun_548c(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3);

struct s0* fun_5648(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3) {
    struct s0* sp5;
    struct s0* r0_6;
    struct s0* r12_7;
    struct s0* r0_8;

    sp5 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 20 - 20);
    r0_6 = fun_556c(sp5, r0, r2, r3);
    r12_7 = r0_6;
    if (!r12_7) {
        r0_8 = fun_548c(sp5, r0, r1, r2);
        r12_7 = r0_8;
    }
    return r12_7;
}

int32_t g5948 = 0x4000032c;

uint32_t** g594c = reinterpret_cast<uint32_t**>(0x6158);

struct s9 {
    uint32_t* f0;
    uint32_t* f4;
    signed char[24] pad32;
    uint32_t* f32;
};

struct s10 {
    uint32_t* f0;
    signed char[4] pad8;
    uint32_t* f8;
    uint32_t* f12;
    signed char[4] pad20;
    uint32_t* f20;
};

int32_t g5950 = 0x40000344;

uint32_t fun_4d68(int32_t r0);

uint32_t fun_5698(uint32_t r0, uint32_t r1, uint32_t r2);

uint32_t fun_574c(uint32_t r0, uint32_t r1, uint32_t r2, uint32_t r3, uint32_t a5) {
    int1_t below_or_equal6;
    int32_t r3_7;
    int1_t z8;
    uint32_t r4_9;
    uint32_t** r1_10;
    uint32_t r3_11;
    uint32_t* r5_12;
    uint32_t* r6_13;
    uint32_t r4_14;
    struct s9* r3_15;
    uint32_t** r3_16;
    struct s10* r3_17;
    uint32_t* v18;
    uint32_t* r10_19;
    uint32_t* r9_20;
    uint32_t r4_21;
    uint32_t r1_22;
    uint32_t r2_23;
    int32_t r2_24;
    int32_t v25;
    uint32_t r2_26;
    int32_t r2_27;
    uint32_t r0_28;
    int32_t v29;

    below_or_equal6 = r0 <= 4;
    if (below_or_equal6) {
        below_or_equal6 = r1 <= 31;
    }
    if (below_or_equal6) {
        r3_7 = g5948;
        z8 = (1 & *reinterpret_cast<uint32_t*>(r3_7 + r0 << 2)) == 0;
        if (z8) {
            r4_9 = 0xfffffff3;
        }
        if (z8) 
            goto label_8; else 
            goto addr_5794_9;
    }
    addr_5938_10:
    r4_9 = 0xffffffea;
    addr_593c_11:
    return r4_9;
    label_8:
    goto addr_593c_11;
    addr_5794_9:
    if ((r2 & 0xc0) == 64) {
        goto addr_5938_10;
    } else {
        r1_10 = g594c;
        if (r1 <= 15) {
            r3_11 = r0 * 36;
            r5_12 = *reinterpret_cast<uint32_t**>(r3_11 + reinterpret_cast<int32_t>(r1_10));
            r6_13 = *reinterpret_cast<uint32_t**>(r3_11 + reinterpret_cast<int32_t>(r1_10) + 28);
            r4_14 = r1;
        } else {
            r3_15 = reinterpret_cast<struct s9*>(r1_10 + r0 * 9);
            r6_13 = r3_15->f32;
            r5_12 = r3_15->f4;
            r4_14 = r1 - 16;
        }
        r3_16 = g594c;
        r3_17 = reinterpret_cast<struct s10*>(r3_16 + r0 * 9);
        v18 = r3_17->f20;
        r10_19 = r3_17->f8;
        r9_20 = r3_17->f12;
        r4_21 = (r4_14 & 15) << 1;
        fun_4d28(reinterpret_cast<int32_t>(__zero_stack_offset()) - 36 - 16 + 12);
        r1_22 = reinterpret_cast<uint32_t>(~(3 << r4_21));
        *r5_12 = *r5_12 & r1_22;
        *r5_12 = *r5_12 | (r2 & 3) << r4_21;
        if (r6_13) {
            r2_23 = r2 >> 6 & 3;
            if (r2_23) {
                *r6_13 = *r6_13 & r1_22;
                *r6_13 = *r6_13 | r2_23 << r4_21;
            }
        }
        if (r2) 
            goto addr_5860_23;
    }
    if (r3 == 1) 
        goto addr_587c_26;
    if (r3 != 2) 
        goto addr_58a0_29;
    *r10_19 = *r10_19 & 0xfffffffe;
    *r9_20 = *r9_20 & 0xfffffffe;
    *v18 = 1;
    r2_24 = g5950;
    *reinterpret_cast<uint32_t*>(r2_24 + r0 << 2) = *reinterpret_cast<uint32_t*>(r2_24 + r0 << 2) | 1;
    r4_9 = r2;
    addr_592c_32:
    fun_4d68(v25);
    goto addr_593c_11;
    addr_58a0_29:
    r4_9 = r2;
    addr_58a4_33:
    *r10_19 = *r10_19 & 0xfffffffe;
    r2_26 = r3;
    if (r2_26) {
        r2_26 = 1;
    }
    *r10_19 = *r10_19 | r2_26 << r1;
    *r9_20 = *r9_20 & 0xfffffffe;
    r2_27 = g5950;
    *reinterpret_cast<uint32_t*>(r2_27 + r0 << 2) = *reinterpret_cast<uint32_t*>(r2_27 + r0 << 2) & 0xfffffffe;
    goto addr_592c_32;
    addr_587c_26:
    r0_28 = fun_5698(r0, r1, a5);
    r4_9 = r0_28;
    goto addr_58a4_33;
    addr_5860_23:
    fun_4d68(v29);
    r4_9 = 0;
    goto addr_593c_11;
}

int32_t g59e8 = 0x4000032c;

uint32_t fun_5954(uint32_t r0, uint32_t r1, uint32_t r2, uint32_t r3, uint32_t a5) {
    int1_t below_or_equal6;
    uint32_t r1_7;
    int32_t r12_8;
    int32_t v9;
    int32_t v10;
    uint32_t r0_11;

    below_or_equal6 = r0 <= 4;
    if (below_or_equal6) {
        below_or_equal6 = r1 <= 31;
    }
    r1_7 = 0xffffffea;
    if (below_or_equal6) {
        fun_4d28(reinterpret_cast<int32_t>(__zero_stack_offset()) - 20 - 8 + 4);
        r12_8 = g59e8;
        if (*reinterpret_cast<uint32_t*>(r12_8 + r0 << 2) & 1) {
            fun_4d68(v9);
            r1_7 = 0xfffffff0;
        } else {
            *reinterpret_cast<uint32_t*>(r12_8 + r0 << 2) = *reinterpret_cast<uint32_t*>(r12_8 + r0 << 2) | 1;
            fun_4d68(v10);
            r0_11 = fun_574c(r0, r1, r2, r3, a5);
            r1_7 = r0_11;
        }
    }
    return r1_7;
}

void fun_5ef4();

uint32_t fun_5bc0(uint32_t r0, uint32_t r1) {
    uint32_t r2_3;
    int1_t z4;
    int1_t z5;
    uint32_t r3_6;
    int1_t c7;
    int1_t c8;
    uint32_t r2_9;
    int1_t c10;
    int1_t c11;
    int1_t c12;
    int1_t c13;
    int1_t z14;
    int1_t c15;
    int1_t c16;
    int1_t c17;
    int1_t below_or_equal18;

    r2_3 = r1 - 1;
    if (!r2_3) {
        return r0;
    }
    if (!__intrinsic()) {
        fun_5ef4();
        return 0;
    }
    z4 = r0 == r1;
    if (r0 > r1) 
        goto addr_5bd4_7;
    if (!z4) 
        goto addr_5c64_10;
    r0 = 1;
    addr_5c64_10:
    if (!z4) {
        r0 = 0;
    }
    return r0;
    addr_5bd4_7:
    if (r1 & r2_3) {
        z5 = (r1 & 0xe0000000) == 0;
        if (z5) {
            r1 = r1 << 3;
        }
        if (z5) {
            r3_6 = 8;
        }
        if (!z5) {
            r3_6 = 1;
        }
        while (1) {
            c7 = r1 < 0x10000000;
            if (!c7) {
                c7 = r1 < r0;
            }
            if (!c7) {
                r1 = r1 << 4;
            }
            if (!c7) {
                r3_6 = r3_6 << 4;
            }
            if (c7) 
                break;
        }
        while (1) {
            c8 = r1 < 0x80000000;
            if (!c8) {
                c8 = r1 < r0;
            }
            if (!c8) {
                r1 = r1 << 1;
            }
            if (!c8) {
                r3_6 = r3_6 << 1;
            }
            if (c8) 
                break;
        }
        r2_9 = 0;
        while (1) {
            c10 = r0 < r1;
            if (c10) {
                r0 = r0 - r1;
            }
            if (c10) {
                r2_9 = r2_9 | r3_6;
            }
            c11 = r0 < r1 >> 1;
            if (c11) {
                r0 = r0 - (r1 >> 1);
            }
            if (c11) {
                r2_9 = r2_9 | r3_6 >> 1;
            }
            c12 = r0 < r1 >> 2;
            if (c12) {
                r0 = r0 - (r1 >> 2);
            }
            if (c12) {
                r2_9 = r2_9 | r3_6 >> 2;
            }
            c13 = r0 < r1 >> 3;
            if (c13) {
                r0 = r0 - (r1 >> 3);
            }
            if (c13) {
                r2_9 = r2_9 | r3_6 >> 3;
            }
            z14 = r0 == 0;
            if (!z14) {
                r3_6 = r3_6 >> 4;
            }
            if (!z14) {
                r1 = r1 >> 4;
            }
            if (z14) 
                break;
        }
        return r2_9;
    }
    c15 = r1 < 0x10000;
    if (!c15) 
        goto addr_5c74_62;
    r1 = r1 >> 16;
    addr_5c74_62:
    if (c15) {
    }
    if (!c15) {
    }
    c16 = r1 < 0x100;
    if (c16) {
        r1 = r1 >> 8;
    }
    if (c16) {
    }
    c17 = r1 < 16;
    if (c17) {
        r1 = r1 >> 4;
    }
    if (c17) {
    }
    below_or_equal18 = r1 <= 4;
    if (!below_or_equal18) {
    }
    if (below_or_equal18) {
    }
    return r0;
}

struct s11 {
    uint32_t f0;
    uint32_t f4;
};

struct s12 {
    uint32_t f0;
    uint32_t f4;
    signed char[4] pad12;
    uint32_t f12;
    signed char[12] pad28;
    uint32_t f28;
};

struct s0* fun_50a0(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3, struct s0** a5) {
    int1_t z6;
    struct s0* v7;
    uint32_t r3_8;
    uint32_t r3_9;
    int1_t less_or_equal10;
    uint32_t r3_11;
    uint32_t lr12;
    int1_t z13;
    int1_t less_or_equal14;
    uint32_t r2_15;
    unsigned char* r1_16;
    unsigned char* r0_17;
    struct s11* r1_18;
    uint32_t r12_19;
    struct s12* r1_20;
    uint32_t r3_21;
    uint32_t r3_22;
    int1_t z23;
    int1_t less24;
    void* r2_25;
    int1_t z26;
    int1_t less27;
    void* r2_28;
    int1_t z29;
    int1_t less30;
    int1_t z31;
    int1_t less32;

    z6 = r1 == r0;
    if (z6) {
        r0 = reinterpret_cast<struct s0*>(0);
    }
    if (z6) {
        return r0;
    }
    v7 = r0;
    if (reinterpret_cast<signed char>(r2) >= reinterpret_cast<signed char>(4)) {
        r3_8 = reinterpret_cast<unsigned char>(r0) & 3;
        if (r3_8) {
            r3_9 = 4 - r3_8;
            r2 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r2) - r3_9);
            less_or_equal10 = reinterpret_cast<int32_t>(r3_9) <= reinterpret_cast<int32_t>(2);
            r3_11 = reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(&r1->f0));
            r1 = reinterpret_cast<struct s0*>(&r1->f1);
            *reinterpret_cast<struct s0**>(&r0->f0) = reinterpret_cast<struct s0*>(static_cast<unsigned char>(r3_11));
            r0 = reinterpret_cast<struct s0*>(&r0->f1);
            if (!__intrinsic()) 
                goto label_10; else 
                goto addr_5154_11;
        } else {
            lr12 = reinterpret_cast<unsigned char>(r1) & 3;
            z13 = lr12 == 0;
            if (!z13) {
                goto addr_5170_14;
            }
        }
    }
    addr_5270_15:
    less_or_equal14 = reinterpret_cast<signed char>(r2) <= reinterpret_cast<signed char>(2);
    r2_15 = reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(&r1->f0));
    r1_16 = &r1->f1;
    *reinterpret_cast<struct s0**>(&r0->f0) = reinterpret_cast<struct s0*>(static_cast<unsigned char>(r2_15));
    r0_17 = &r0->f1;
    if (!__intrinsic()) {
        r2_15 = *r1_16;
        ++r1_16;
    }
    if (!__intrinsic()) {
        *r0_17 = static_cast<unsigned char>(r2_15);
        ++r0_17;
    }
    if (!less_or_equal14) {
        r2_15 = *r1_16;
    }
    if (!less_or_equal14) {
        *r0_17 = static_cast<unsigned char>(r2_15);
    }
    return v7;
    label_10:
    r3_11 = reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(&r1->f0));
    r1 = reinterpret_cast<struct s0*>(&r1->f1);
    addr_5154_11:
    if (!__intrinsic()) {
        *reinterpret_cast<struct s0**>(&r0->f0) = reinterpret_cast<struct s0*>(static_cast<unsigned char>(r3_11));
        r0 = reinterpret_cast<struct s0*>(&r0->f1);
    }
    if (!less_or_equal10) {
        r3_11 = reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(&r1->f0));
        r1 = reinterpret_cast<struct s0*>(&r1->f1);
    }
    if (!less_or_equal10) {
        *reinterpret_cast<struct s0**>(&r0->f0) = reinterpret_cast<struct s0*>(static_cast<unsigned char>(r3_11));
        r0 = reinterpret_cast<struct s0*>(&r0->f1);
    }
    if (reinterpret_cast<signed char>(r2) < reinterpret_cast<signed char>(4)) {
        goto addr_5270_15;
    } else {
        lr12 = reinterpret_cast<unsigned char>(r1) & 3;
        z13 = lr12 == 0;
        if (!z13) {
            addr_5170_14:
            r1_18 = reinterpret_cast<struct s11*>(reinterpret_cast<unsigned char>(r1) - lr12);
            r12_19 = 4 - lr12 << 3;
            r1_20 = reinterpret_cast<struct s12*>(&r1_18->f4);
            r3_21 = r1_18->f0;
            goto addr_518c_33;
        }
    }
    r3_22 = reinterpret_cast<unsigned char>(r2) >> 5;
    if (!z13) {
        while (1) {
            r1 = reinterpret_cast<struct s0*>(&r1->pad40);
            __asm__("stm r0!, {r4, r5, r6, r7, r8, sb, sl, fp}");
            r2 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r2) - 32);
            z13 = r2 == 0;
            if (!z13) {
                --r3_22;
                z13 = r3_22 == 0;
            }
            if (z13) 
                break;
        }
    }
    if (!z13) {
        r1 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r1) + 16);
        __asm__("stm r0!, {r4, r5, r6, r7}");
        r2 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r2) - 16);
        z13 = r2 == 0;
    }
    if (!z13) {
        r1 = reinterpret_cast<struct s0*>(&r1->f8);
        __asm__("stm r0!, {r4, r5}");
        r2 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r2) - 8);
        z13 = r2 == 0;
    }
    if (z13) {
        if (reinterpret_cast<signed char>(r2) <= reinterpret_cast<signed char>(0)) 
            goto addr_5138_49;
    } else {
        r1 = reinterpret_cast<struct s0*>(&r1->f4);
        *reinterpret_cast<struct s0**>(&r0->f0) = *reinterpret_cast<struct s0**>(&r1->f0);
        r0 = reinterpret_cast<struct s0*>(&r0->f4);
        r2 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r2) - 4);
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r2) < reinterpret_cast<signed char>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(r2 == 0))) {
            goto addr_5270_15;
        } else {
            return v7;
        }
    }
    goto addr_5270_15;
    addr_5138_49:
    return v7;
    while (1) {
        addr_518c_33:
        r2 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r2) - 32);
        z23 = r2 == 0;
        less24 = reinterpret_cast<signed char>(r2) < reinterpret_cast<signed char>(0) != __intrinsic();
        if (less24) {
            r2 = reinterpret_cast<struct s0*>(&r2->pad40);
        }
        if (less24) 
            break;
        ++r1_20;
        __asm__("stm r0!, {r3, r4, r5, r6, r7, r8, sb, sl}");
        r3_21 = r1_20->f28;
        if (z23) 
            goto label_57;
    }
    r2_25 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r2) - 16);
    z26 = r2_25 == 0;
    less27 = reinterpret_cast<int32_t>(r2_25) < reinterpret_cast<int32_t>(0) != __intrinsic();
    if (less27) {
        r2_25 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r2_25) + 16);
    }
    if (less27) {
        goto addr_5220_64;
    }
    r1_20 = reinterpret_cast<struct s12*>(&r1_20->pad28);
    __asm__("stm r0!, {r3, r4, r5, r6}");
    r3_21 = r1_20->f12;
    if (!z26) {
        addr_5220_64:
        r2_28 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r2_25) - 8);
        z29 = r2_28 == 0;
        less30 = reinterpret_cast<int32_t>(r2_28) < reinterpret_cast<int32_t>(0) != __intrinsic();
        if (less30) {
            r2_28 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r2_28) + 8);
            goto addr_5228_68;
        }
    }
    addr_5290_69:
    return v7;
    addr_5228_68:
    if (less30) {
        goto addr_5248_71;
    }
    r1_20 = reinterpret_cast<struct s12*>(&r1_20->pad12);
    __asm__("stm r0!, {r3, r4}");
    r3_21 = r1_20->f4;
    if (z29) {
        goto addr_5290_69;
    } else {
        addr_5248_71:
        r2 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(r2_28) - 4);
        z31 = r2 == 0;
        less32 = reinterpret_cast<signed char>(r2) < reinterpret_cast<signed char>(0) != __intrinsic();
        if (less32) {
            r2 = reinterpret_cast<struct s0*>(&r2->f4);
        }
    }
    if (less32) {
        goto addr_5264_77;
    }
    r1_20 = reinterpret_cast<struct s12*>(&r1_20->f4);
    *reinterpret_cast<struct s0**>(&r0->f0) = reinterpret_cast<struct s0*>(r3_21 | r1_20->f0 << r12_19);
    r0 = reinterpret_cast<struct s0*>(&r0->f4);
    if (z31) {
        goto addr_5290_69;
    } else {
        addr_5264_77:
        r1 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(r1_20) - (r12_19 >> 3));
        goto addr_5270_15;
    }
    label_57:
    goto addr_5290_69;
}

void fun_4c08();

struct s0* g31d4 = reinterpret_cast<struct s0*>(64);

void fun_4b6c();

struct s0* g31d8 = reinterpret_cast<struct s0*>(32);

void fun_4d48(int32_t* r0);

struct s0* g31dc = reinterpret_cast<struct s0*>(0);

uint32_t g31e0 = 0x1c200;

struct s14 {
    signed char f0;
    signed char[3] pad4;
    signed char f4;
    signed char[3] pad8;
    signed char f8;
    signed char[3] pad12;
    signed char f12;
    signed char[27] pad40;
    signed char f40;
};

struct s13 {
    struct s14* f0;
    uint32_t f4;
    uint32_t f8;
    signed char[4] pad16;
    uint32_t f16;
    uint32_t f20;
    uint32_t f24;
    uint32_t f28;
};

struct s13* g31e4 = reinterpret_cast<struct s13*>(0x620c);

int32_t fun_4e6c(struct s13* r0, uint32_t r1);

struct s3* g31e8 = reinterpret_cast<struct s3*>(0x1000);

void fun_1020(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3, struct s3* a5, struct s0* a6);

void fun_3154() {
    struct s3** sp1;
    struct s0* r6_2;
    struct s0* r5_3;
    struct s0* r7_4;
    struct s0* r4_5;
    uint32_t r1_6;
    struct s13* r0_7;
    struct s3* v8;
    struct s0* v9;
    struct s3* r12_10;
    struct s0* r0_11;

    sp1 = reinterpret_cast<struct s3**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 20 - 16);
    fun_4c08();
    r6_2 = g31d4;
    fun_4b6c();
    r5_3 = g31d8;
    fun_4ce0();
    fun_4d48(sp1 + 3);
    r7_4 = g31dc;
    r4_5 = reinterpret_cast<struct s0*>(sp1 + 2);
    r1_6 = g31e0;
    r0_7 = g31e4;
    fun_4e6c(r0_7, r1_6);
    __asm__("stm sp, {r7, ip}");
    fun_4368(r4_5, r6_2, r5_3, 0, v8, v9);
    r12_10 = g31e8;
    r0_11 = fun_4368(r4_5, r6_2, r5_3, 0, r12_10, r7_4);
    fun_1020(r0_11, r6_2, r5_3, 0, r12_10, r7_4);
    return;
}

void* g3214 = reinterpret_cast<void*>(0x5ef8);

void fun_3204() {
    void* r0_1;
    void* r1_2;
    void* r2_3;

    r0_1 = g3214;
    fun_3774(r0_1, r1_2, r2_3);
    while (1) {
    }
}

struct s0* fun_4ac8();

struct s0** g4768 = reinterpret_cast<struct s0**>(0x60f4);

struct s15 {
    signed char[1] pad1;
    struct s0* f1;
};

struct s15* fun_53e0(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3);

struct s0* fun_4584(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3);

struct s0* fun_1040(struct s0* r0, struct s0* r1, struct s0* r2);

struct s0* fun_1044(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3);

struct s0* fun_5444(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3);

void fun_103c(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3);

struct s0* fun_4644(struct s0* r0, struct s0* r1, struct s0* r2) {
    struct s0* r9_4;
    int1_t z5;
    struct s0* sp6;
    struct s0* r3_7;
    struct s0* r0_8;
    struct s0* r0_9;
    struct s0** r10_10;
    struct s0* r5_11;
    struct s15* r0_12;
    struct s0* r8_13;
    struct s0* r0_14;
    struct s0* r7_15;
    struct s15* r0_16;
    struct s15* r0_17;
    int1_t below_or_equal18;

    r9_4 = r0;
    z5 = r9_4 == 0;
    sp6 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 32 - 48);
    if (z5) {
        r0 = reinterpret_cast<struct s0*>(0xffffffea);
    }
    if (!z5) {
        r3_7 = reinterpret_cast<struct s0*>(0);
        r0_8 = fun_4ac8();
        r0_9 = fun_4ad4(r0_8, r1, r2);
        r10_10 = g4768;
        while (r5_11 = *r10_10, !!r5_11) {
            r0_12 = fun_53e0(r5_11, r1, r2, r3_7);
            r3_7 = reinterpret_cast<struct s0*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r5_11) + reinterpret_cast<uint32_t>(r0_12) + 0xffffffff)));
            if (!reinterpret_cast<int1_t>(r3_7 == 47)) {
                r1 = r9_4;
                r2 = reinterpret_cast<struct s0*>(&sp6->f44);
                r3_7 = reinterpret_cast<struct s0*>(&sp6->f40);
                r0_9 = fun_4584(r5_11, r1, r2, r3_7);
            } else {
                r0_9 = fun_1040(r5_11, r1, r2);
                r8_13 = r0_9;
                if (r8_13) {
                    while (r0_14 = fun_1044(r8_13, r1, r2, r3_7), r7_15 = r0_14, r1 = r5_11, r2 = reinterpret_cast<struct s0*>(40), !!r7_15) {
                        fun_5444(sp6, r1, 40, r3_7);
                        r0_16 = fun_53e0(r5_11, r1, 40, r3_7);
                        r0_17 = fun_53e0(r5_11, r1, 40, r3_7);
                        fun_5444(reinterpret_cast<unsigned char>(sp6) + reinterpret_cast<uint32_t>(r0_16), r7_15, 40 - reinterpret_cast<uint32_t>(r0_17), r3_7);
                        r1 = r9_4;
                        r2 = reinterpret_cast<struct s0*>(&sp6->f44);
                        r3_7 = reinterpret_cast<struct s0*>(&sp6->f40);
                        fun_4584(sp6, r1, r2, r3_7);
                    }
                    r0_9 = r8_13;
                    fun_103c(r0_9, r1, 40, r3_7);
                }
            }
            r10_10 = r10_10 + 4;
        }
        if (1) 
            goto label_20; else 
            goto addr_4738_21;
    }
    addr_4760_22:
    return r0;
    label_20:
    addr_475c_23:
    r0 = reinterpret_cast<struct s0*>(0);
    goto addr_4760_22;
    addr_4738_21:
    if (1) {
        goto addr_475c_23;
    } else {
        r0 = fun_4ad4(r0_9, r1, r2);
        below_or_equal18 = 0 <= r0->f24;
        if (!below_or_equal18) {
            r0 = reinterpret_cast<struct s0*>(1);
        }
        if (below_or_equal18) {
            r0 = reinterpret_cast<struct s0*>(2);
        }
        goto addr_4760_22;
    }
}

void* g3330 = reinterpret_cast<void*>(0x5f10);

struct s0* g3334 = reinterpret_cast<struct s0*>(0);

struct s0* fun_3d8c(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3);

int32_t fun_1034(struct s0* r0, void* r1, int32_t r2);

struct s0* g3338 = reinterpret_cast<struct s0*>(40);

struct s0* fun_1030(struct s0* r0, int32_t r1, struct s0* r2, struct s0* r3);

struct s0* fun_3ac4(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3);

struct s0* g333c = reinterpret_cast<struct s0*>(64);

struct s0* g3340 = reinterpret_cast<struct s0*>(0);

void* g3344 = reinterpret_cast<void*>(0x2000);

struct s0* fun_3264(struct s0* r0) {
    uint32_t v2;
    uint32_t r4_3;
    struct s3* v4;
    struct s3* r5_5;
    struct s0* v6;
    void* r1_7;
    int32_t* sp8;
    struct s0* r2_9;
    struct s0* r0_10;
    struct s0* r5_11;
    struct s0* r0_12;
    struct s0* r1_13;
    struct s0* r3_14;
    struct s0* r4_15;
    struct s0* r2_16;
    struct s0* r0_17;
    int32_t r0_18;
    struct s0* r0_19;
    struct s0* r0_20;
    struct s0* r2_21;
    struct s0* r0_22;
    struct s0* v23;
    struct s0* r0_24;
    struct s0* r0_25;
    void* r1_26;
    struct s0* r0_27;

    v2 = r4_3;
    v4 = r5_5;
    v6 = reinterpret_cast<struct s0*>(__return_address());
    r1_7 = g3330;
    sp8 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 12 - 4);
    r0_10 = fun_102c(r0, r1_7, r2_9);
    r5_11 = r0_10;
    if (r5_11) {
        r0_12 = fun_31ec(r0_10, r1_7);
        r1_13 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r0_12) + reinterpret_cast<uint32_t>(r5_11->f76));
        r3_14 = g3334;
        r4_15 = r0_12;
        if (reinterpret_cast<unsigned char>(r1_13) <= reinterpret_cast<unsigned char>(r3_14)) {
            r0_17 = fun_3d8c(r0_12, reinterpret_cast<unsigned char>(r1_13) - reinterpret_cast<unsigned char>(r0_12), r2_16, r3_14);
            if (reinterpret_cast<signed char>(r0_17) >= reinterpret_cast<signed char>(0)) {
                r0_18 = fun_1034(r5_11, 0, 0);
                if (r0_18 >= 0) {
                    while (r0_19 = g3338, r0_20 = fun_1030(r0_19, 0x100, 1, r5_11), r2_21 = g3338, r0_22 = r4_15, r4_15 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r4_15) + reinterpret_cast<unsigned char>(0x100)), reinterpret_cast<signed char>(r0_20) > reinterpret_cast<signed char>(0)) {
                        fun_3ac4(r0_22, 0x100, r2_21, r5_11);
                    }
                    fun_1028(r5_11, 0x100, r2_21, r5_11, v23, v2, v4, v6);
                    r0_24 = g333c;
                    fun_3804(r0_24, 0x100, r2_21, r5_11);
                    fun_4d28(sp8);
                    r0_25 = g3340;
                    r1_26 = g3344;
                    fun_3d8c(r0_25, reinterpret_cast<int32_t>(r1_26) - reinterpret_cast<unsigned char>(r0_25), r2_21, r5_11);
                    r0_27 = reinterpret_cast<struct s0*>(0);
                    goto addr_3328_13;
                }
            }
        }
    }
    r0_27 = reinterpret_cast<struct s0*>(0xffffffff);
    addr_3328_13:
    return r0_27;
}

struct s0* fun_3994(struct s0* r0, struct s0* r1, struct s0* r2, struct s0** r3);

struct s0** g3e10 = reinterpret_cast<struct s0**>(0x40000000);

struct s0* fun_3d8c(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3) {
    struct s0** sp5;
    struct s0* r2_6;
    struct s0* r0_7;
    struct s0* r4_8;
    void* v9;
    struct s0* v10;
    int32_t r0_11;
    struct s0** r3_12;
    void* v13;
    struct s0* v14;
    int32_t r0_15;

    sp5 = reinterpret_cast<struct s0**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 - 8);
    r2_6 = reinterpret_cast<struct s0*>(sp5 + 4);
    if (r1) {
        r0_7 = fun_3994(r0, r1, r2_6, sp5);
        r4_8 = r0_7;
        if (r4_8) {
            goto addr_3e04_5;
        } else {
            r0_11 = fun_3fa0(v9, v10, r2_6, sp5);
            if (r0_11 != 7) {
                if (r0_11 == 11) {
                    goto addr_3e00_10;
                } else {
                    r3_12 = g3e10;
                    r0_15 = fun_3f3c(v13, v14, *r3_12);
                    if (!r0_15) {
                        goto addr_3e04_5;
                    } else {
                        r4_8 = reinterpret_cast<struct s0*>(0xfffffffb);
                        if (r0_15 == 11) {
                            goto addr_3e00_10;
                        } else {
                            goto addr_3e04_5;
                        }
                    }
                }
            }
        }
    }
    r4_8 = reinterpret_cast<struct s0*>(0xffffffea);
    addr_3e04_5:
    return r4_8;
    addr_3e00_10:
    r4_8 = reinterpret_cast<struct s0*>(0xfffffff0);
    goto addr_3e04_5;
}

struct s0* fun_3a64(struct s0* r0, struct s0* r1);

int32_t* g3b74 = reinterpret_cast<int32_t*>(0x40000000);

uint32_t fun_3f6c(struct s0* r0, struct s0* r1, struct s0* r2, int32_t r3);

void fun_3b28(int32_t r0);

struct s0* fun_3ac4(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3) {
    struct s0* r4_5;
    int1_t z6;
    struct s0* r4_7;
    struct s0* r0_8;
    int32_t* r3_9;
    uint32_t r0_10;
    int1_t z11;

    r4_5 = r1;
    if (r4_5) {
        z6 = reinterpret_cast<int1_t>(r4_5 == 0x100);
        if (!z6) {
            z6 = reinterpret_cast<int1_t>(r4_5 == 0x200);
        }
        if (z6) 
            goto label_6; else 
            goto addr_3ae4_7;
    }
    addr_3b68_8:
    r4_7 = reinterpret_cast<struct s0*>(0xffffffea);
    addr_3b6c_9:
    return r4_7;
    label_6:
    addr_3af0_10:
    if (reinterpret_cast<unsigned char>(r2) & 3) {
        goto addr_3b68_8;
    } else {
        r0_8 = fun_3a64(r0, r1);
        r4_7 = r0_8;
        if (r4_7) {
            goto addr_3b6c_9;
        } else {
            r3_9 = g3b74;
            r0_10 = fun_3f6c(r0, r2, r4_5, *r3_9);
            if (r0_10 <= 11) {
                goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(fun_3b28) + r0_10 << 2);
            } else {
                r4_7 = reinterpret_cast<struct s0*>(0xfffffffb);
                goto addr_3b6c_9;
            }
        }
    }
    addr_3ae4_7:
    z11 = reinterpret_cast<int1_t>(r4_5 == 0x400);
    if (!z11) {
        z11 = reinterpret_cast<int1_t>(r4_5 == 0x1000);
    }
    if (z11) 
        goto addr_3af0_10;
    goto addr_3b68_8;
}

int32_t fun_3394(void* r0, void* r1) {
    int1_t less3;
    int32_t r3_4;
    int1_t less_or_equal5;

    less3 = reinterpret_cast<int32_t>(r0) < reinterpret_cast<int32_t>(0);
    if (!less3) {
        less3 = reinterpret_cast<int32_t>(r1) < reinterpret_cast<int32_t>(0);
    }
    if (less3) {
        r3_4 = 0;
    }
    if (!less3) {
        r3_4 = 1;
    }
    if (!less3) {
        less_or_equal5 = reinterpret_cast<int32_t>(r0) <= reinterpret_cast<int32_t>(11);
        if (less_or_equal5) {
            less_or_equal5 = reinterpret_cast<int32_t>(r1) <= reinterpret_cast<int32_t>(11);
        }
        if (!less_or_equal5) {
            r3_4 = 0;
        }
        if (less_or_equal5) {
            r3_4 = 1;
        }
    }
    return r3_4;
}

void* fun_33c0(void* r0, void* r1, void* r2, void* r3) {
    int32_t r0_5;
    int1_t z6;
    void* r0_7;

    r0_5 = fun_3394(r1, r2);
    z6 = r0_5 == 0;
    if (!z6) {
        r3 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>((reinterpret_cast<uint32_t>(r2) << 1) - (reinterpret_cast<int32_t>(r1) >> 3) + reinterpret_cast<uint32_t>(r0) + 1)));
    }
    if (!z6) {
        r3 = r3;
    }
    r0_7 = reinterpret_cast<void*>(0xffffffff);
    if (!z6) {
        r0_7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r3) & 1);
    }
    return r0_7;
}

void* fun_3404(void* r0, void* r1, void* r2, void* r3) {
    int32_t r0_5;
    void* r6_6;
    void* r5_7;
    uint32_t r3_8;
    int1_t z9;
    void* r12_10;

    r0_5 = fun_3394(r1, r2);
    r6_6 = reinterpret_cast<void*>(0xffffffff);
    if (r0_5) {
        r5_7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(r0) + (reinterpret_cast<uint32_t>(r2) << 1));
        r3_8 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(r1) >> 3);
        z9 = r3 == 0;
        r12_10 = reinterpret_cast<void*>(1 - r3_8);
        if (!z9) {
            r3_8 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r5_7) + reinterpret_cast<uint32_t>(r12_10));
        }
        if (z9) {
            r3_8 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r5_7) + reinterpret_cast<uint32_t>(r12_10));
        }
        if (!z9) {
            r2 = reinterpret_cast<void*>(1);
        }
        if (z9) {
            r2 = reinterpret_cast<void*>(1);
        }
        if (!z9) {
            r3_8 = r3_8 | reinterpret_cast<uint32_t>(r2) << (reinterpret_cast<uint32_t>(r1) & 7);
        }
        if (z9) {
            __asm__("biceq r3, r3, r2, lsl lr");
        }
        if (!z9) {
            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r5_7) + reinterpret_cast<uint32_t>(r12_10)) = static_cast<signed char>(r3_8);
        }
        if (z9) {
            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r5_7) + reinterpret_cast<uint32_t>(r12_10)) = static_cast<signed char>(r3_8);
        }
        r6_6 = reinterpret_cast<void*>(0);
        if (z9) {
            r6_6 = r3;
        }
    }
    return r6_6;
}

int32_t fun_3478(void* r0, void* r1) {
    void* r12_3;

    r12_3 = reinterpret_cast<void*>(0);
    while (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(r12_3) + reinterpret_cast<int32_t>(r0)) = static_cast<signed char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(r12_3) + reinterpret_cast<int32_t>(r0))) | static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(r12_3) + reinterpret_cast<uint32_t>(r1))) & 0x70), r12_3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(r12_3) + 2), !reinterpret_cast<int1_t>(r12_3 == 24)) {
    }
    return 0;
}

void* g3594 = reinterpret_cast<void*>(0x10e);

void* fun_34a8(void* r0, void* r1, void* r2) {
    void* r10_4;
    void* r8_5;
    void* r7_6;
    void* r9_7;
    void* r6_8;
    void* r5_9;
    void* r4_10;
    void* r3_11;
    void* r0_12;
    void* r1_13;
    void* r2_14;
    void* r0_15;
    void* r0_16;
    void* r0_17;
    void* r3_18;
    void* r0_19;

    r10_4 = r0;
    r8_5 = r1;
    r7_6 = r2;
    r9_7 = reinterpret_cast<void*>(11);
    do {
        r6_8 = reinterpret_cast<void*>(11 - reinterpret_cast<uint32_t>(r9_7));
        r5_9 = reinterpret_cast<void*>(11);
        while (1) {
            r4_10 = reinterpret_cast<void*>(11 - reinterpret_cast<uint32_t>(r5_9));
            if (r7_6 == 90) {
                r0_12 = fun_33c0(r8_5, r6_8, r4_10, r3_11);
                r1_13 = r4_10;
                r3_11 = r0_12;
                r2_14 = r9_7;
                r0_15 = r10_4;
            } else {
                if (reinterpret_cast<int32_t>(r7_6) > reinterpret_cast<int32_t>(90)) {
                    if (r7_6 == 0xb4) 
                        goto label_9; else 
                        goto addr_34fc_10;
                } else {
                    if (r7_6) 
                        goto addr_34e4_12;
                    r0_16 = fun_33c0(r8_5, r6_8, r4_10, r3_11);
                    r1_13 = r6_8;
                    r3_11 = r0_16;
                    r2_14 = r4_10;
                    r0_15 = r10_4;
                }
            }
            addr_356c_15:
            fun_3404(r0_15, r1_13, r2_14, r3_11);
            r5_9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r5_9) - 1);
            if (!__intrinsic()) 
                break;
            continue;
            label_9:
            r0_17 = fun_33c0(r8_5, r6_8, r4_10, r3_11);
            r1_13 = r9_7;
            r3_11 = r0_17;
            r2_14 = r5_9;
            r0_15 = r10_4;
            goto addr_356c_15;
            addr_34fc_10:
            r3_18 = g3594;
            if (r7_6 != r3_18) 
                goto addr_3508_18;
            r0_19 = fun_33c0(r8_5, r6_8, r4_10, r3_18);
            r1_13 = r5_9;
            r3_11 = r0_19;
            r2_14 = r6_8;
            r0_15 = r10_4;
            goto addr_356c_15;
        }
        r9_7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r9_7) - 1);
    } while (__intrinsic());
    goto label_22;
    addr_3508_18:
    r7_6 = reinterpret_cast<void*>(0xffffffff);
    addr_358c_23:
    return r7_6;
    addr_34e4_12:
    goto addr_3508_18;
    label_22:
    goto addr_358c_23;
}

int32_t g3800 = 0x5f12;

uint32_t fun_37f4(void* r0, void* r1, void* r2, void* r3) {
    int32_t r3_5;

    r3_5 = g3800;
    return r3_5 + (reinterpret_cast<uint32_t>(r0) << 3);
}

void fun_3778(void* r0) {
}

struct s0* fun_3878(struct s0* r0, struct s0* r1, struct s0** r2, struct s0** r3, int32_t a5, int32_t a6) {
    struct s0* r0_7;
    struct s0* r3_8;
    int1_t z9;
    struct s0* r1_10;
    struct s0* r0_11;
    int1_t z12;

    *r2 = reinterpret_cast<struct s0*>(0);
    *r3 = reinterpret_cast<struct s0*>(0);
    r0_7 = fun_3814(r0);
    r3_8 = r0_7;
    if (r3_8) {
        z9 = r1 == 0;
        *r2 = r3_8;
        r1_10 = r1;
        if (z9) {
            *r3 = r3_8;
        }
        if (z9) 
            goto label_6; else 
            goto addr_38c0_7;
    }
    addr_38d4_8:
    r1_10 = reinterpret_cast<struct s0*>(0xffffffea);
    addr_38d8_9:
    return r1_10;
    label_6:
    goto addr_38d8_9;
    addr_38c0_7:
    r0_11 = fun_3814(reinterpret_cast<unsigned char>(r0) + reinterpret_cast<unsigned char>(r1) - 1);
    z12 = r0_11 == 0;
    r1_10 = reinterpret_cast<struct s0*>(0);
    if (!z12) {
        *r3 = r0_11;
    }
    if (z12) 
        goto addr_38d4_8;
    goto addr_38d8_9;
}

uint16_t g0;

struct s0* fun_3994(struct s0* r0, struct s0* r1, struct s0* r2, struct s0** r3) {
    struct s0** sp5;
    struct s0* r0_6;
    struct s0* r3_7;
    struct s0* r2_8;

    sp5 = reinterpret_cast<struct s0**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 16 - 8);
    *reinterpret_cast<struct s0**>(&r2->f0) = reinterpret_cast<struct s0*>(0);
    *r3 = reinterpret_cast<struct s0*>(0);
    r0_6 = fun_3878(r0, r1, sp5 + 4, sp5, 0, 0);
    if (reinterpret_cast<signed char>(r0_6) >= reinterpret_cast<signed char>(0)) {
        r0_6 = reinterpret_cast<struct s0*>(0xffffffea);
        if (!1) {
            r3_7 = reinterpret_cast<struct s0*>(static_cast<uint32_t>(g0));
            r2_8 = reinterpret_cast<struct s0*>(static_cast<uint32_t>(g0));
            *reinterpret_cast<struct s0**>(&r2->f0) = r2_8;
            *r3 = r3_7;
            r0_6 = reinterpret_cast<struct s0*>(0);
        }
    }
    return r0_6;
}

int32_t fun_3fa0(void* r0, struct s0* r1, struct s0* r2, struct s0** r3) {
    void* sp5;
    int32_t v6;

    sp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 32);
    __asm__("stmib sp, {r0, r1}");
    fun_3e14(sp5, reinterpret_cast<int32_t>(sp5) + 20);
    return v6;
}

struct s0* fun_3a64(struct s0* r0, struct s0* r1) {
    struct s0** sp3;
    struct s0* r2_4;
    struct s0* r0_5;
    struct s0* r4_6;
    void* v7;
    struct s0* v8;
    int32_t r0_9;
    int1_t z10;

    sp3 = reinterpret_cast<struct s0**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 - 8);
    r2_4 = reinterpret_cast<struct s0*>(sp3 + 4);
    if (r1) {
        r0_5 = fun_3994(r0, r1, r2_4, sp3);
        r4_6 = r0_5;
        if (r4_6) {
            goto addr_3ab8_5;
        } else {
            r0_9 = fun_3fa0(v7, v8, r2_4, sp3);
            if (r0_9 != 7) {
                z10 = r0_9 == 11;
                if (z10) {
                    r4_6 = reinterpret_cast<struct s0*>(0xfffffff0);
                }
                if (z10) {
                    goto addr_3ab8_5;
                } else {
                    if (r0_9) {
                        r4_6 = reinterpret_cast<struct s0*>(0xfffffffb);
                    }
                    goto addr_3ab8_5;
                }
            }
        }
    }
    r4_6 = reinterpret_cast<struct s0*>(0xffffffea);
    addr_3ab8_5:
    return r4_6;
}

uint32_t fun_3f6c(struct s0* r0, struct s0* r1, struct s0* r2, int32_t r3) {
    void* sp5;
    uint32_t v6;

    sp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 32);
    __asm__("stmib sp, {r0, r1}");
    fun_3e14(sp5, reinterpret_cast<int32_t>(sp5) + 20);
    return v6;
}

void fun_538c(struct s0* r0, struct s0* r1, struct s0* r2) {
    void* r3_4;
    int1_t z5;

    r3_4 = reinterpret_cast<void*>(0);
    while (z5 = r2 == 0, r2 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r2) - 1), !z5) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(r3_4) + reinterpret_cast<unsigned char>(r0)) = static_cast<signed char>(reinterpret_cast<uint32_t>(r1));
        r3_4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(r3_4) + 1);
    }
    return;
}

int32_t fun_3f3c(void* r0, struct s0* r1, struct s0* r2) {
    void* sp4;
    int32_t v5;

    sp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 32);
    __asm__("stmib sp, {r0, r1}");
    fun_3e14(sp4, reinterpret_cast<int32_t>(sp4) + 20);
    return v5;
}

void fun_4d28(int32_t* r0) {
    int32_t r12_2;

    __asm__("mrs ip, apsr");
    __asm__("bic r1, r1, r3");
    __asm__("msr cpsr_fc, r1");
    *r0 = r12_2;
    return;
}

struct s16 {
    signed char[4] pad4;
    struct s0* f4;
    signed char[3] pad8;
    void* f8;
    struct s0* f12;
    signed char[3] pad16;
    int32_t f16;
    signed char[4] pad24;
    int32_t f24;
    signed char[4] pad32;
    struct s0* f32;
    signed char[3] pad36;
    struct s0* f36;
};

int32_t fun_401c(struct s16* r0, uint32_t r1, struct s0* r2, struct s0* r3, struct s0** a5) {
    int32_t r0_6;

    r0_6 = reinterpret_cast<int32_t>(r0->f16(r0->f24));
    return r0_6;
}

struct s0* fun_548c(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3) {
    if (reinterpret_cast<unsigned char>(0) >= reinterpret_cast<unsigned char>(r0->f8)) {
        goto r1;
    } else {
        return 0;
    }
}

struct s0* g42d0 = reinterpret_cast<struct s0*>(40);

struct s0* g42d4 = reinterpret_cast<struct s0*>(28);

struct s0* g42d8 = reinterpret_cast<struct s0*>(68);

struct s0* g42dc = reinterpret_cast<struct s0*>(0x98);

struct s0* g42e0 = reinterpret_cast<struct s0*>(0x68);

struct s0* g42e4 = reinterpret_cast<struct s0*>(48);

struct s0* fun_4144(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3, struct s0* a5, uint32_t a6, struct s3* a7, struct s0* a8) {
    struct s0* sp9;
    struct s0* r12_10;
    struct s0* r4_11;
    struct s0* r3_12;
    struct s0* r1_13;
    struct s0* r2_14;
    struct s0* v15;
    struct s0* r6_16;
    struct s0* r0_17;
    struct s0* r1_18;
    struct s0* r2_19;
    struct s0* r0_20;
    struct s0* r3_21;
    int1_t c22;
    struct s0* v23;
    struct s0* r4_24;
    int32_t r4_25;
    struct s0* r1_26;
    struct s0* r2_27;
    int1_t less28;
    int32_t r0_29;
    struct s0* r1_30;
    struct s0* r2_31;

    sp9 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 28 - 60);
    r12_10 = g42d0;
    r4_11 = reinterpret_cast<struct s0*>(&sp9->f40);
    r3_12 = r0;
    r1_13 = g42d4;
    r2_14 = sp9;
    v15 = r12_10;
    r6_16 = a5;
    r0_17 = fun_556c(r4_11, r1_13, r2_14, r3_12);
    if (!r0_17) {
        if (!r6_16) {
            goto addr_41c8_5;
        }
        r1_13 = g42d4;
        r2_14 = g42d8;
        r3_12 = sp9;
        r0_17 = fun_548c(r4_11, r1_13, r2_14, r3_12);
        if (reinterpret_cast<signed char>(r0_17) >= reinterpret_cast<signed char>(0)) {
            addr_41c8_5:
            fun_3804(r1, r1_13, r2_14, r3_12);
            r1_18 = g42d4;
            r2_19 = g42dc;
            r0_20 = fun_548c(r4_11, r1_18, r2_19, sp9);
            if (reinterpret_cast<signed char>(r0_20) < reinterpret_cast<signed char>(0)) {
                goto addr_4200_9;
            } else {
                if (0) {
                    fun_3cd4(0, r1_18, r2_19, sp9);
                    goto addr_4200_9;
                }
            }
        }
    }
    addr_42c8_12:
    return r0_17;
    addr_4200_9:
    r3_21 = reinterpret_cast<struct s0*>(&a7->f255);
    c22 = reinterpret_cast<unsigned char>(a8) < reinterpret_cast<unsigned char>(0x7e000);
    if (!c22) {
        r6_16 = a8;
    }
    if (c22) {
        r6_16 = reinterpret_cast<struct s0*>(0x7e000);
    }
    __asm__("bic r3, r3, #0xff");
    while (v23 = r3_21, r4_24 = reinterpret_cast<struct s0*>(&sp9->f40), reinterpret_cast<unsigned char>(v23) >= reinterpret_cast<unsigned char>(r6_16)) {
        fun_538c(v15, 0, 0x100);
        r4_25 = 0;
        r1_26 = g42d4;
        r2_27 = g42e0;
        fun_548c(r4_24, r1_26, r2_27, sp9);
        if (!1) {
            while (1) {
                r0_17 = fun_3ac4(v23, 0x100, v15, 0);
                less28 = reinterpret_cast<signed char>(r0_17) < reinterpret_cast<signed char>(0);
                ++r4_25;
                if (less28) {
                    r0_17 = reinterpret_cast<struct s0*>(0xfffffff0);
                }
                if (less28) 
                    goto label_24;
                __asm__("ldmib sp, {r0, r1}");
                r0_29 = fun_5344(r0_17, 0x100, 0x100);
                if (!r0_29) 
                    break;
                if (r4_25 == 2) 
                    goto addr_428c_27;
            }
        }
        r3_21 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(v23) + 0x100);
    }
    r1_30 = g42d4;
    r2_31 = g42e4;
    r0_17 = fun_548c(r4_24, r1_30, r2_31, sp9);
    goto addr_42c8_12;
    label_24:
    goto addr_42c8_12;
    addr_428c_27:
    r0_17 = reinterpret_cast<struct s0*>(0xfffffffb);
    goto addr_42c8_12;
}

struct s0* fun_39fc(struct s0* r0, struct s0* r1, void** r2) {
    struct s0** sp4;
    void** r4_5;
    struct s0* r0_6;
    int1_t less7;

    sp4 = reinterpret_cast<struct s0**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 - 8);
    *reinterpret_cast<void***>(r2) = reinterpret_cast<void**>(0);
    r4_5 = r2;
    r0_6 = fun_3994(r0, r1, sp4 + 4, sp4);
    less7 = reinterpret_cast<signed char>(r0_6) < reinterpret_cast<signed char>(0);
    if (!less7) {
        r1 = reinterpret_cast<struct s0*>(28);
    }
    if (!less7) {
        r0_6 = reinterpret_cast<struct s0*>(28);
    }
    if (!less7) {
        while (reinterpret_cast<unsigned char>(r1) <= reinterpret_cast<unsigned char>(r0_6)) {
            *reinterpret_cast<void***>(r4_5) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(r4_5)) | 1 << reinterpret_cast<unsigned char>(r1));
            r1 = reinterpret_cast<struct s0*>(&r1->f1);
        }
        r0_6 = reinterpret_cast<struct s0*>(0);
    }
    return r0_6;
}

struct s0* fun_5400(void* r0, struct s0** r1, int32_t r2);

struct s0* fun_4584(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3) {
    struct s0* sp5;
    struct s0* r0_6;
    int32_t v7;
    int32_t v8;
    struct s0* r0_9;
    struct s0* v10;
    struct s0* v11;
    struct s0* r0_12;
    struct s0* v13;

    sp5 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 24 - 76);
    r0_6 = fun_47d4(r0, sp5);
    if (!r0_6) {
        if (!v7) {
            if (!v8) 
                goto label_6; else 
                goto addr_4610_7;
        } else {
            r0_9 = fun_4ac8();
            r0_6 = fun_5400(reinterpret_cast<unsigned char>(sp5) + 12, &r0_9->f4, 20);
            if (!r0_6) {
                r0_6 = r1;
                if (reinterpret_cast<unsigned char>(v10) > reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(&r2->f0))) {
                    r0_6 = fun_5444(r0_6, r0, 40, v10);
                    *reinterpret_cast<struct s0**>(&r2->f0) = v11;
                }
            }
        }
    }
    addr_463c_13:
    return r0_6;
    label_6:
    goto addr_463c_13;
    addr_4610_7:
    r0_12 = fun_4ad4(r0_6, sp5, r2);
    r0_6 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r1) + reinterpret_cast<unsigned char>(40));
    if (v13 != r0_12->f20) {
        goto addr_463c_13;
    } else {
        r0_6 = fun_5444(r0_6, r0, 40, r0_12->f20);
        *reinterpret_cast<struct s0**>(&r3->f0) = reinterpret_cast<struct s0*>(1);
        goto addr_463c_13;
    }
}

struct s0* g4ad0 = reinterpret_cast<struct s0*>(0);

struct s0* fun_4ac8() {
    struct s0* r0_1;

    r0_1 = g4ad0;
    return r0_1;
}

struct s0* fun_5400(void* r0, struct s0** r1, int32_t r2) {
    void* r4_4;
    void* lr5;
    void* r3_6;
    uint32_t r12_7;
    struct s0* r0_8;

    r4_4 = r0;
    lr5 = reinterpret_cast<void*>(0);
    while (__intrinsic()) {
        r3_6 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(lr5) + reinterpret_cast<uint32_t>(r4_4))));
        r12_7 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(lr5) + reinterpret_cast<uint32_t>(r1));
        r0_8 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(r3_6) - r12_7);
        lr5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(lr5) + 1);
        if (r0_8) 
            goto label_5;
        if (!r3_6) 
            goto label_7;
        if (!r12_7) 
            goto addr_5440_9;
    }
    return 0;
    label_5:
    return r0_8;
    label_7:
    return r0_8;
    addr_5440_9:
    return r0_8;
}

struct s0* fun_5444(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3) {
    struct s0* r4_5;
    struct s15* r0_6;
    struct s0* r3_7;
    struct s15* r0_8;
    struct s0** r4_9;

    r4_5 = r2;
    r0_6 = fun_53e0(r1, r1, r2, r3);
    r3_7 = reinterpret_cast<struct s0*>(&r0_6->f1);
    if (reinterpret_cast<unsigned char>(r3_7) >= reinterpret_cast<unsigned char>(r4_5)) {
        r0_8 = fun_53e0(r1, r1, r2, r3_7);
        r4_5 = reinterpret_cast<struct s0*>(&r0_8->f1);
    }
    fun_50a0(r0, r1, r4_5, r3_7, r4_9);
    return r0;
}

struct s0* g4;

void* g8;

struct s0* fun_38e0(struct s0* r0, struct s0* r1, struct s0** r2, struct s0** r3) {
    struct s0** sp5;
    struct s0* r0_6;
    struct s0* r3_7;
    void* r3_8;
    struct s0* r2_9;

    sp5 = reinterpret_cast<struct s0**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 20 - 8);
    *r3 = reinterpret_cast<struct s0*>(0);
    *r2 = reinterpret_cast<struct s0*>(0);
    r0_6 = fun_3878(r0, r1, sp5 + 4, sp5, 0, 0);
    if (reinterpret_cast<signed char>(r0_6) >= reinterpret_cast<signed char>(0)) {
        r3_7 = g4;
        r0_6 = r1;
        *r2 = r3_7;
        if (r1) {
            r0_6 = reinterpret_cast<struct s0*>(0xffffffea);
            if (!1) {
                r3_8 = g8;
                r2_9 = g4;
                *r3 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(r3_8) - reinterpret_cast<unsigned char>(r2_9) + 1);
                r0_6 = reinterpret_cast<struct s0*>(0);
            }
        }
    }
    return r0_6;
}

uint32_t fun_4b38(int32_t r0, int32_t r1) {
    __asm__("bic r0, r0, #0xff000000");
    __asm__("bic r0, r0, #0x8000");
    return reinterpret_cast<uint32_t>(r0 - 1) | reinterpret_cast<uint32_t>(r1 - 1) << 16;
}

struct s17 {
    signed char f0;
    signed char[19] pad20;
    unsigned char f20;
};

uint32_t fun_4e20(struct s17** r0, uint32_t r1) {
    int1_t z3;
    uint32_t r4_4;
    struct s17* r0_5;
    unsigned char* r2_6;

    z3 = r1 == 10;
    r4_4 = r1;
    if (z3) {
        r1 = 13;
    }
    if (z3) {
        fun_4e20(r0, r1);
    }
    r0_5 = *r0;
    r2_6 = &r0_5->f20;
    while (!(static_cast<uint32_t>(*r2_6) & 96)) {
    }
    r0_5->f0 = static_cast<signed char>(r4_4 & 0xff);
    return r4_4;
}

uint32_t fun_53ac(int32_t r0, int32_t r1) {
    int32_t r12_3;
    int32_t lr4;
    uint32_t r3_5;
    uint32_t r2_6;
    uint32_t r0_7;

    r12_3 = 0;
    lr4 = r0;
    while (r3_5 = *reinterpret_cast<unsigned char*>(r12_3 + lr4), r2_6 = *reinterpret_cast<unsigned char*>(r12_3 + r1), r0_7 = r3_5 - r2_6, ++r12_3, !r0_7) {
        if (!r3_5) 
            goto label_4;
        if (!r2_6) 
            goto addr_53dc_6;
    }
    return r0_7;
    label_4:
    return r0_7;
    addr_53dc_6:
    return r0_7;
}

struct s15* fun_53e0(struct s0* r0, struct s0* r1, struct s0* r2, struct s0* r3) {
    struct s0* r2_5;

    r2_5 = r0;
    while (*reinterpret_cast<struct s0**>(&r0->f0)) {
        r0 = reinterpret_cast<struct s0*>(&r0->f1);
    }
    return reinterpret_cast<unsigned char>(r0) - reinterpret_cast<unsigned char>(r2_5);
}

int32_t g5740 = 0x4000032c;

void* g5744 = reinterpret_cast<void*>(0x6158);

struct s18 {
    signed char[8] pad8;
    uint32_t** f8;
    signed char[4] pad16;
    uint32_t* f16;
};

int32_t g5748 = 0x40000344;

struct s19 {
    uint32_t* f0;
    uint32_t* f4;
};

uint32_t fun_4da8(int32_t r0);

uint32_t fun_5698(uint32_t r0, uint32_t r1, uint32_t r2) {
    int1_t below_or_equal4;
    int32_t r3_5;
    int1_t z6;
    void* r3_7;
    struct s18* r2_8;
    int32_t r3_9;
    struct s19* v10;
    uint32_t* r3_11;
    int1_t z12;
    int1_t z13;
    int32_t v14;

    below_or_equal4 = r0 <= 4;
    if (below_or_equal4) {
        below_or_equal4 = r1 <= 31;
    }
    if (!below_or_equal4) {
        r0 = 0xffffffea;
    }
    if (below_or_equal4) {
        r3_5 = g5740;
        z6 = (1 & *reinterpret_cast<uint32_t*>(r3_5 + r0 << 2)) == 0;
        if (z6) {
            r0 = 0xfffffff3;
        }
        if (z6) 
            goto label_10; else 
            goto addr_56d0_11;
    }
    addr_5738_12:
    return r0;
    label_10:
    goto addr_5738_12;
    addr_56d0_11:
    r3_7 = g5744;
    r2_8 = reinterpret_cast<struct s18*>(r0 * 36 + reinterpret_cast<int32_t>(r3_7));
    r3_9 = g5748;
    r0 = 1 & *reinterpret_cast<uint32_t*>(r3_9 + r0 << 2);
    v10 = reinterpret_cast<struct s19*>(&r2_8->f16);
    r3_11 = v10->f4;
    if (r0) {
        fun_4d48(reinterpret_cast<int32_t>(__zero_stack_offset()) - 16 - 4);
        z12 = r2 == 0;
        if (z12) 
            goto addr_571c_15;
    } else {
        z13 = r2 == 0;
        if (z13) {
            r0 = r2;
        }
        if (!z13) {
            *v10->f0 = 1;
        }
        if (z13) {
            *r3_11 = 1;
        }
        goto addr_5738_12;
    }
    r3_11 = *r2_8->f8;
    addr_571c_15:
    if (z12) {
        r3_11 = *r2_8->f8;
    }
    if (!z12) {
        __asm__("bicne r3, r3, r5");
    }
    if (z12) {
        r3_11 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(r3_11) | 1);
    }
    *r2_8->f8 = r3_11;
    fun_4da8(v14);
    r0 = 0;
    goto addr_5738_12;
}

uint32_t fun_4da8(int32_t r0) {
    __asm__("mrs r2, apsr");
    __asm__("bic r1, r1, r0");
    __asm__("msr cpsr_fc, r1");
    return reinterpret_cast<uint32_t>(~r0) & 0xc0;
}

uint32_t fun_4d68(int32_t r0) {
    __asm__("mrs r2, apsr");
    __asm__("bic r1, r1, r0");
    __asm__("msr cpsr_fc, r1");
    return reinterpret_cast<uint32_t>(~r0) & 0x80;
}

struct s20 {
    signed char[128] pad128;
    int32_t f128;
    uint32_t f132;
    uint32_t f136;
    int32_t f140;
    signed char[116] pad260;
    int32_t f260;
    int32_t f264;
    int32_t f268;
    signed char[144] pad416;
    uint32_t f416;
    signed char[4] pad424;
    int32_t f424;
    int32_t f428;
};

struct s20* g4cd8 = reinterpret_cast<struct s20*>(0xe01fc000);

int32_t g4cdc = 0x808;

void fun_4c08() {
    struct s20* r2_1;
    struct s20* r5_2;
    uint32_t r0_3;
    struct s20* r3_4;
    struct s20* r1_5;
    int32_t r3_6;

    r2_1 = g4cd8;
    r2_1->f128 = 0;
    r2_1->f140 = 0xaa;
    r2_1->f140 = 85;
    r2_1->f416 = r2_1->f416 | 32;
    while (r5_2 = g4cd8, (r5_2->f416 & 64) == 0) {
    }
    r5_2->f268 = 1;
    r0_3 = fun_4b38(12, 1);
    r5_2->f132 = r0_3;
    r5_2->f140 = 0xaa;
    r5_2->f140 = 85;
    r5_2->f128 = 1;
    r5_2->f140 = 0xaa;
    r5_2->f140 = 85;
    while (r3_4 = g4cd8, (r3_4->f136 & 0x4000000) == 0) {
    }
    while (r1_5 = g4cd8, r1_5->f136 != r0_3) {
    }
    r1_5->f260 = 3;
    r1_5->f264 = 5;
    r1_5->f424 = 0x10000;
    r3_6 = g4cdc;
    r1_5->f428 = r3_6;
    r1_5->f128 = 3;
    r1_5->f140 = 0xaa;
    r1_5->f140 = 85;
    return;
}

struct s21 {
    int32_t f0;
    int32_t f4;
};

struct s21* g4b84 = reinterpret_cast<struct s21*>(0xe01fc000);

void fun_4b6c() {
    struct s21* r3_1;

    r3_1 = g4b84;
    r3_1->f0 = 1;
    r3_1->f4 = 4;
    return;
}

void fun_4d48(int32_t* r0) {
    int32_t r12_2;

    __asm__("mrs ip, apsr");
    __asm__("bic r1, r1, r3");
    __asm__("msr cpsr_fc, r1");
    *r0 = r12_2;
    return;
}

struct s22 {
    signed char[196] pad196;
    uint32_t f196;
};

struct s22* g505c = reinterpret_cast<struct s22*>(0xe01fc000);

struct s23 {
    uint32_t f0;
    uint32_t f4;
};

uint32_t g5060 = 0x112a880;

int32_t fun_4e6c(struct s13* r0, uint32_t r1) {
    struct s22* lr3;
    struct s13* r6_4;
    uint32_t r2_5;
    uint32_t v6;
    struct s23* v7;
    uint32_t r0_8;
    uint32_t r1_9;
    uint32_t r1_10;
    uint32_t r2_11;
    uint32_t r0_12;
    uint32_t r3_13;
    uint32_t v14;
    uint32_t v15;
    uint32_t v16;
    uint32_t r4_17;
    uint32_t v18;
    uint32_t v19;
    uint32_t v20;
    uint32_t v21;
    uint32_t r9_22;
    uint32_t r11_23;
    uint32_t r7_24;
    uint32_t r0_25;
    uint32_t r2_26;
    uint32_t r10_27;
    uint32_t r8_28;
    uint32_t r5_29;
    uint32_t v30;
    uint32_t r1_31;
    uint32_t r0_32;
    int1_t c33;
    uint32_t r3_34;
    int1_t c35;
    int32_t r0_36;

    lr3 = g505c;
    r6_4 = r0;
    r2_5 = r0->f4;
    lr3->f196 = lr3->f196 | r0->f28;
    v6 = r1;
    v7 = reinterpret_cast<struct s23*>(&r0->f8);
    r0_8 = v7->f0;
    r1_9 = v7->f4;
    fun_5954(r0_8, r1_9, r2_5, 0, 0);
    r1_10 = r6_4->f24;
    r2_11 = r6_4->f16;
    r0_12 = r6_4->f20;
    fun_5954(r0_12, r1_10, r2_11, 0, 0);
    r6_4->f0->f12 = 0x80;
    if (v6) {
        r3_13 = v6 << 4;
        v14 = 0;
        v15 = r3_13;
        v16 = r3_13;
        r4_17 = g5060;
        v18 = 0xffffffff;
        v19 = 0xffffffde;
        v20 = 0;
        v21 = 0;
        r9_22 = 1;
        while (1) {
            r11_23 = v15;
            r7_24 = 0;
            while (1) {
                r0_25 = fun_5bc0(r4_17, r11_23);
                r2_26 = r9_22 + r7_24;
                r10_27 = r0_25;
                r8_28 = r2_26 * r0_25 << 4;
                r5_29 = r0_25;
                v30 = r2_26 << 4;
                while (r1_31 = r8_28, r5_29 >= r10_27 + 2) {
                    if (r5_29) {
                        r0_32 = fun_5bc0(r4_17, r1_31);
                        c33 = r0_32 < v6;
                        if (c33) {
                            r1_31 = v6;
                        }
                        r3_34 = v6 - r0_32;
                        if (c33) {
                            r3_34 = r0_32 - r1_31;
                        }
                        c35 = r3_34 < v18;
                        if (!c35) {
                            v19 = r0_32;
                        }
                        if (!c35) {
                            v18 = r3_34;
                        }
                        if (!c35) {
                            v20 = r9_22;
                        }
                        if (!c35) {
                            v14 = r7_24;
                        }
                        if (!c35) {
                            v21 = r5_29;
                        }
                    }
                    ++r5_29;
                    r8_28 = r8_28 + v30;
                }
                ++r7_24;
                r11_23 = r11_23 + v16;
                if (r7_24 == 16) 
                    break;
            }
            ++r9_22;
            v15 = v15 + v16;
            r4_17 = r4_17 + 0x1100000 + 0x2a800 + 0x80;
            if (r9_22 == 16) 
                break;
        }
        if (reinterpret_cast<int32_t>(v19) < reinterpret_cast<int32_t>(0)) 
            goto label_31; else 
            goto addr_4fac_32;
    }
    addr_5004_33:
    r0_36 = -1;
    addr_5054_34:
    return r0_36;
    label_31:
    goto addr_5004_33;
    addr_4fac_32:
    r6_4->f0->f4 = static_cast<signed char>(v21 >> 8 & 0xff);
    r6_4->f0->f0 = static_cast<signed char>(v21 & 0xff);
    r6_4->f0->f40 = static_cast<signed char>((v14 | v20 << 4) & 0xff);
    r6_4->f0->f12 = 3;
    r0_36 = 0;
    r6_4->f0->f8 = 1;
    goto addr_5054_34;
}

void* fun_5e10(void* r0, void* r1, void* r2) {
    uint32_t r2_4;
    uint1_t z5;
    uint1_t below_or_equal6;
    int32_t r2_7;
    int1_t c8;
    int1_t c9;
    uint32_t r2_10;
    int1_t less11;
    int1_t z12;

    if (!r1) {
        fun_5ef4();
        return 0;
    }
    if (__intrinsic()) {
        r1 = reinterpret_cast<void*>(-static_cast<uint32_t>(r1));
    }
    if (__intrinsic()) {
        r0 = reinterpret_cast<void*>(-static_cast<uint32_t>(r0));
    }
    r2_4 = reinterpret_cast<uint32_t>(r1) - 1;
    z5 = reinterpret_cast<uint1_t>(r2_4 == 0);
    below_or_equal6 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(!__intrinsic()) | z5);
    if (!z5) {
        z5 = reinterpret_cast<uint1_t>(r0 == r1);
        below_or_equal6 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(r0) <= reinterpret_cast<uint32_t>(r1));
    }
    if (z5) {
        r0 = reinterpret_cast<void*>(0);
    }
    if (!below_or_equal6) {
        z5 = reinterpret_cast<uint1_t>((reinterpret_cast<uint32_t>(r1) & r2_4) == 0);
        below_or_equal6 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(!__intrinsic()) | z5);
    }
    if (z5) {
        r0 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r0) & r2_4);
    }
    if (!below_or_equal6) 
        goto addr_5e3c_17;
    addr_5ed8_19:
    if (__intrinsic()) {
        r0 = reinterpret_cast<void*>(-static_cast<uint32_t>(r0));
    }
    return r0;
    addr_5e3c_17:
    r2_7 = 0;
    while (1) {
        c8 = reinterpret_cast<uint32_t>(r1) < 0x10000000;
        if (!c8) {
            c8 = reinterpret_cast<uint32_t>(r1) < reinterpret_cast<uint32_t>(r0);
        }
        if (!c8) {
            r1 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r1) << 4);
        }
        if (!c8) {
            r2_7 = r2_7 + 4;
        }
        if (c8) 
            break;
    }
    while (1) {
        c9 = reinterpret_cast<uint32_t>(r1) < 0x80000000;
        if (!c9) {
            c9 = reinterpret_cast<uint32_t>(r1) < reinterpret_cast<uint32_t>(r0);
        }
        if (!c9) {
            r1 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r1) << 1);
        }
        if (!c9) {
            ++r2_7;
        }
        if (c9) 
            break;
    }
    r2_10 = r2_7 - 3;
    if (reinterpret_cast<int32_t>(r2_10) < reinterpret_cast<int32_t>(0) == __intrinsic()) 
        goto addr_5e70_39;
    goto addr_5eac_41;
    while (1) {
        addr_5e70_39:
        if (reinterpret_cast<uint32_t>(r0) < reinterpret_cast<uint32_t>(r1)) {
            r0 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r0) - reinterpret_cast<uint32_t>(r1));
        }
        if (reinterpret_cast<uint32_t>(r0) < reinterpret_cast<uint32_t>(r1) >> 1) {
            r0 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r0) - (reinterpret_cast<uint32_t>(r1) >> 1));
        }
        if (reinterpret_cast<uint32_t>(r0) < reinterpret_cast<uint32_t>(r1) >> 2) {
            r0 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r0) - (reinterpret_cast<uint32_t>(r1) >> 2));
        }
        if (reinterpret_cast<uint32_t>(r0) < reinterpret_cast<uint32_t>(r1) >> 3) {
            r0 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r0) - (reinterpret_cast<uint32_t>(r1) >> 3));
        }
        less11 = reinterpret_cast<int32_t>(r0) < reinterpret_cast<int32_t>(1);
        r1 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r1) >> 4);
        if (!less11) {
            r2_10 = r2_10 - 4;
            less11 = reinterpret_cast<int32_t>(r2_10) < reinterpret_cast<int32_t>(0) != __intrinsic();
        }
        if (less11) 
            break;
    }
    z12 = (r2_10 & 3) == 0;
    if (z12) 
        goto addr_5ea8_54;
    __asm__("teqne r0, #0");
    addr_5ea8_54:
    if (z12) {
        goto addr_5ed8_19;
    } else {
        addr_5eac_41:
        if (reinterpret_cast<int32_t>(r2_10) >= -2) {
            if (r2_10 != -2) {
                if (reinterpret_cast<uint32_t>(r0) < reinterpret_cast<uint32_t>(r1)) {
                    r0 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r0) - reinterpret_cast<uint32_t>(r1));
                }
                r1 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r1) >> 1);
            }
            if (reinterpret_cast<uint32_t>(r0) < reinterpret_cast<uint32_t>(r1)) {
                r0 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r0) - reinterpret_cast<uint32_t>(r1));
            }
            r1 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r1) >> 1);
        }
    }
    if (reinterpret_cast<uint32_t>(r0) < reinterpret_cast<uint32_t>(r1)) {
        r0 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r0) - reinterpret_cast<uint32_t>(r1));
        goto addr_5ed8_19;
    }
}

void* fun_5cd0(void* r0, void* r1, void* r2) {
    uint32_t r12_4;
    uint32_t r2_5;
    int1_t n6;
    void* r3_7;
    int1_t z8;
    int1_t z9;
    int1_t c10;
    int1_t c11;
    void* r0_12;
    int1_t c13;
    int1_t c14;
    int1_t c15;
    int1_t c16;
    int1_t z17;
    int1_t c18;
    int1_t c19;
    int1_t c20;
    int1_t below_or_equal21;
    void* r0_22;

    r12_4 = reinterpret_cast<uint32_t>(r0) ^ reinterpret_cast<uint32_t>(r1);
    if (!r1) {
        fun_5ef4();
        return 0;
    }
    if (__intrinsic()) {
        r1 = reinterpret_cast<void*>(-static_cast<uint32_t>(r1));
    }
    r2_5 = reinterpret_cast<uint32_t>(r1) - 1;
    n6 = reinterpret_cast<int32_t>(r2_5) < reinterpret_cast<int32_t>(0);
    if (r2_5) 
        goto addr_5ce8_7;
    __asm__("teq ip, r0");
    if (!n6) 
        goto addr_5d90_10;
    r0 = reinterpret_cast<void*>(-static_cast<uint32_t>(r0));
    addr_5d90_10:
    return r0;
    addr_5ce8_7:
    r3_7 = r0;
    if (n6) {
        r3_7 = reinterpret_cast<void*>(-static_cast<uint32_t>(r0));
    }
    z8 = r3_7 == r1;
    if (reinterpret_cast<uint32_t>(r3_7) > reinterpret_cast<uint32_t>(r1)) 
        goto addr_5cf8_14;
    if (reinterpret_cast<uint32_t>(r3_7) < reinterpret_cast<uint32_t>(r1)) 
        goto addr_5d98_17;
    r0 = reinterpret_cast<void*>(0);
    addr_5d98_17:
    if (z8) {
        r0 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(r12_4) >> 31);
    }
    if (z8) {
        r0 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r0) | 1);
    }
    return r0;
    addr_5cf8_14:
    if (reinterpret_cast<uint32_t>(r1) & r2_5) {
        z9 = (reinterpret_cast<uint32_t>(r1) & 0xe0000000) == 0;
        if (z9) {
            r1 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r1) << 3);
        }
        if (z9) {
            r2_5 = 8;
        }
        if (!z9) {
            r2_5 = 1;
        }
        while (1) {
            c10 = reinterpret_cast<uint32_t>(r1) < 0x10000000;
            if (!c10) {
                c10 = reinterpret_cast<uint32_t>(r1) < reinterpret_cast<uint32_t>(r3_7);
            }
            if (!c10) {
                r1 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r1) << 4);
            }
            if (!c10) {
                r2_5 = r2_5 << 4;
            }
            if (c10) 
                break;
        }
        while (1) {
            c11 = reinterpret_cast<uint32_t>(r1) < 0x80000000;
            if (!c11) {
                c11 = reinterpret_cast<uint32_t>(r1) < reinterpret_cast<uint32_t>(r3_7);
            }
            if (!c11) {
                r1 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r1) << 1);
            }
            if (!c11) {
                r2_5 = r2_5 << 1;
            }
            if (c11) 
                break;
        }
        r0_12 = reinterpret_cast<void*>(0);
        while (1) {
            c13 = reinterpret_cast<uint32_t>(r3_7) < reinterpret_cast<uint32_t>(r1);
            if (c13) {
                r3_7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r3_7) - reinterpret_cast<uint32_t>(r1));
            }
            if (c13) {
                r0_12 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r0_12) | r2_5);
            }
            c14 = reinterpret_cast<uint32_t>(r3_7) < reinterpret_cast<uint32_t>(r1) >> 1;
            if (c14) {
                r3_7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r3_7) - (reinterpret_cast<uint32_t>(r1) >> 1));
            }
            if (c14) {
                r0_12 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r0_12) | r2_5 >> 1);
            }
            c15 = reinterpret_cast<uint32_t>(r3_7) < reinterpret_cast<uint32_t>(r1) >> 2;
            if (c15) {
                r3_7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r3_7) - (reinterpret_cast<uint32_t>(r1) >> 2));
            }
            if (c15) {
                r0_12 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r0_12) | r2_5 >> 2);
            }
            c16 = reinterpret_cast<uint32_t>(r3_7) < reinterpret_cast<uint32_t>(r1) >> 3;
            if (c16) {
                r3_7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r3_7) - (reinterpret_cast<uint32_t>(r1) >> 3));
            }
            if (c16) {
                r0_12 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r0_12) | r2_5 >> 3);
            }
            z17 = r3_7 == 0;
            if (!z17) {
                r2_5 = r2_5 >> 4;
            }
            if (!z17) {
                r1 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r1) >> 4);
            }
            if (z17) 
                break;
        }
        if (__intrinsic()) {
            r0_12 = reinterpret_cast<void*>(-static_cast<uint32_t>(r0_12));
        }
        return r0_12;
    }
    c18 = reinterpret_cast<uint32_t>(r1) < 0x10000;
    if (!c18) 
        goto addr_5dac_73;
    r1 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r1) >> 16);
    addr_5dac_73:
    if (c18) {
    }
    if (!c18) {
    }
    c19 = reinterpret_cast<uint32_t>(r1) < 0x100;
    if (c19) {
        r1 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r1) >> 8);
    }
    if (c19) {
    }
    c20 = reinterpret_cast<uint32_t>(r1) < 16;
    if (c20) {
        r1 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r1) >> 4);
    }
    if (c20) {
    }
    below_or_equal21 = reinterpret_cast<uint32_t>(r1) <= 4;
    if (!below_or_equal21) {
    }
    if (below_or_equal21) {
    }
    r0_22 = r3_7;
    if (__intrinsic()) {
        r0_22 = reinterpret_cast<void*>(-static_cast<uint32_t>(r0_22));
    }
    return r0_22;
}

void fun_5ef4() {
    return;
}

int32_t* g3044 = reinterpret_cast<int32_t*>(0x40000028);

int32_t* g3048 = reinterpret_cast<int32_t*>(0x40000358);

int32_t* g304c = reinterpret_cast<int32_t*>(0x631c);

int32_t* g3050 = reinterpret_cast<int32_t*>(0x40000000);

int32_t* g3054 = reinterpret_cast<int32_t*>(0x40000028);

int32_t g3058 = 0x3218;

void fun_3000() {
    int32_t r0_1;
    int32_t* r1_2;
    int32_t* r2_3;
    int1_t c4;
    int32_t* r1_5;
    int32_t* r2_6;
    int32_t* r3_7;
    int1_t c8;
    int32_t r2_9;

    r0_1 = 0;
    r1_2 = g3044;
    r2_3 = g3048;
    while (1) {
        c4 = reinterpret_cast<uint32_t>(r1_2) < reinterpret_cast<uint32_t>(r2_3);
        if (!c4) {
            *r1_2 = 0;
            ++r1_2;
        }
        if (c4) 
            break;
    }
    r1_5 = g304c;
    r2_6 = g3050;
    r3_7 = g3054;
    while (1) {
        c8 = reinterpret_cast<uint32_t>(r2_6) < reinterpret_cast<uint32_t>(r3_7);
        if (!c8) {
            r0_1 = *r1_5;
            ++r1_5;
        }
        if (!c8) {
            *r2_6 = r0_1;
            ++r2_6;
        }
        if (c8) 
            break;
    }
    r2_9 = g3058;
    goto r2_9;
}

int32_t fun_310c(struct s0* r0, void* r1, struct s0* r2, struct s0* r3, struct s0** a5) {
    struct s0* v1;
    int1_t z5;
    int1_t z6;
    int1_t z7;
    int1_t z8;
    int1_t z9;
    uint32_t r5_10;
    struct s0* r0_11;
    struct s0** r4_12;

    v1 = r0;
    *reinterpret_cast<void**>(&v1 + 4) = r1;
    if (z5) {
        v1 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(v1) & reinterpret_cast<unsigned char>(v1));
    }
    if (z6) {
        v1 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(v1) & reinterpret_cast<unsigned char>(v1));
    }
    if (z7) {
        v1 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(v1) & reinterpret_cast<unsigned char>(v1));
    }
    if (z8) {
        v1 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(v1) & reinterpret_cast<unsigned char>(v1));
    }
    if (z9) {
        *reinterpret_cast<struct s0**>(&v1->f0) = v1;
        v1 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(v1) - r5_10);
    }
    r0_11 = fun_31ec(v1, *reinterpret_cast<void**>(&v1 + 4));
    fun_50a0(r2, reinterpret_cast<unsigned char>(r0_11) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&v1 + 4)), r3, r3, r4_12);
    *a5 = r3;
    return 0;
}

void fun_5568(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void fun_563c(int32_t r0, int32_t r1) {
    int1_t z3;

    if (z3) {
    }
}

void fun_5f08(uint32_t r0, int32_t* r1, uint32_t* r2, int32_t r3) {
    int1_t z5;
    int1_t z6;
    int1_t z7;
    void* r6_8;
    void* r6_9;
    int32_t r4_10;
    void* r6_11;
    int32_t r5_12;
    int32_t* r6_13;
    int32_t r6_14;
    int1_t z15;
    void* r9_16;
    void* r9_17;
    void* r9_18;
    int32_t r8_19;
    int32_t* r9_20;
    int32_t r11_21;
    int1_t z22;
    int32_t r6_23;
    int1_t z24;
    int1_t z25;
    void* r6_26;
    void* r6_27;
    void* r6_28;
    int32_t* r6_29;
    int1_t z30;
    int1_t z31;
    void* r6_32;
    void* r6_33;
    void* r6_34;
    int32_t* r6_35;
    int1_t z36;
    int32_t r9_37;
    int32_t r10_38;
    int1_t z39;
    void* r8_40;
    uint32_t** r8_41;

    if (z5) {
        __asm__("cdpeq p12, #0, c9, c7, c3, #0");
    }
    if (z6) {
        r0 = r0 & reinterpret_cast<uint32_t>(r2) << 8;
    }
    if (z7) {
        *reinterpret_cast<int32_t**>(reinterpret_cast<int32_t>(r6_8) - 12) = r1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r6_9) - 8) = r4_10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r6_11) - 4) = r5_12;
        *r6_13 = r6_14;
    }
    if (z15) {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(r9_16) - 12) = r0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r9_17) - 8) = r3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r9_18) - 4) = r8_19;
        *r9_20 = r11_21;
    }
    if (z22) {
        *r2 = r0;
        r2 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(r2) - r6_23);
    }
    if (z24) {
        r0 = reinterpret_cast<uint32_t>(r2) & 0xa0000000;
    }
    if (z25) {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(r6_26) - 12) = r0;
        *reinterpret_cast<int32_t**>(reinterpret_cast<int32_t>(r6_27) - 8) = r1;
        *reinterpret_cast<uint32_t**>(reinterpret_cast<int32_t>(r6_28) - 4) = r2;
        *r6_29 = r3;
    }
    if (z30) {
        __asm__("stmdaeq r4, {r0, sb}");
    }
    if (z31) {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(r6_32) - 12) = r0;
        *reinterpret_cast<int32_t**>(reinterpret_cast<int32_t>(r6_33) - 8) = r1;
        *reinterpret_cast<uint32_t**>(reinterpret_cast<int32_t>(r6_34) - 4) = r2;
        *r6_35 = r3;
    }
    if (z36) {
        *reinterpret_cast<uint32_t*>(r1 - 2) = r0;
        *(r1 - 1) = r9_37;
        *r1 = r10_38;
    }
    if (z39) {
        *reinterpret_cast<int32_t**>(reinterpret_cast<int32_t>(r8_40) - 4) = r1;
        *r8_41 = r2;
    }
}

void fun_5f38(int32_t r0, int32_t* r1, int32_t r2, int32_t* r3) {
    int1_t z5;
    int1_t z6;
    int32_t r9_7;
    int32_t r10_8;
    int1_t z9;
    int1_t z10;
    void* r9_11;
    void* r9_12;
    int32_t r9_13;
    void* r9_14;
    int32_t r10_15;
    int32_t* r9_16;
    int32_t r11_17;
    int1_t z18;
    int1_t z19;
    int1_t z20;
    int32_t** r6_21;
    int1_t z22;
    void* r9_23;
    void* r9_24;
    void* r9_25;
    int32_t r9_26;
    int32_t* r9_27;
    int32_t r10_28;
    int1_t z29;
    void* r6_30;
    int32_t* r6_31;
    int1_t z32;
    int1_t z33;
    int1_t less_or_equal34;
    int1_t c35;
    int1_t v36;

    if (z5) {
        __asm__("stmdaeq pc, {r0}");
    }
    if (z6) {
        *reinterpret_cast<int32_t**>(r1 - 2) = r3;
        *(r1 - 1) = r9_7;
        *r1 = r10_8;
    }
    if (z9) {
        *r3 = r0;
        r3 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r3) - 6);
    }
    if (z10) {
        *reinterpret_cast<int32_t**>(reinterpret_cast<int32_t>(r9_11) - 12) = r3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r9_12) - 8) = r9_13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r9_14) - 4) = r10_15;
        *r9_16 = r11_17;
    }
    if (z18) {
        __asm__("mrseq r0, apsr");
    }
    if (z19) {
        __asm__("stmdaeq r4, {r1, sl}");
    }
    if (z20) {
        *r6_21 = r3;
    }
    if (z22) {
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r9_23) - 12) = r0;
        *reinterpret_cast<int32_t**>(reinterpret_cast<int32_t>(r9_24) - 8) = r3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r9_25) - 4) = r9_26;
        *r9_27 = r10_28;
    }
    if (z29) {
        *reinterpret_cast<int32_t**>(reinterpret_cast<int32_t>(r6_30) - 4) = r1;
        *r6_31 = r2;
    }
    if (z32) {
    }
    if (z33) {
    }
    if (!less_or_equal34) {
        __asm__("cdpgt p0, #0, c0, c1, c0, #0");
    }
    if (!c35) {
        __asm__("stmdalo r7, {r0, r1, sl, fp, ip, pc}");
    }
    if (!v36) {
    }
}

void fun_5f74(int64_t* r0, uint32_t r1, uint32_t r2, uint32_t r3) {
    uint160_t v1;
    int1_t z2;
    int1_t z3;
    int1_t z4;
    uint32_t r4_5;
    int1_t z6;
    int1_t z7;
    int1_t z8;
    uint32_t r4_9;
    int1_t z10;
    int1_t z11;
    int1_t z12;
    uint32_t r4_13;
    int1_t z14;
    int1_t z15;
    int1_t z16;
    uint32_t r4_17;
    int1_t z18;
    int1_t z19;
    int1_t z20;
    uint32_t r4_21;
    uint32_t r4_22;
    int1_t z23;
    int64_t v24;
    int1_t z25;
    int1_t z26;
    uint32_t r5_27;
    int1_t z28;
    int64_t v29;
    int1_t z30;
    int1_t z31;
    uint32_t r6_32;
    int1_t z33;
    int64_t v34;
    int1_t z35;
    int1_t z36;
    uint32_t r7_37;
    int1_t z38;
    int64_t v39;
    int1_t z40;
    int1_t z41;
    int1_t z42;

    *reinterpret_cast<int64_t**>(&v1) = r0;
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = r1;
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 8) = r2;
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 12) = r3;
    if (z2) {
    }
    if (z3) {
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) & reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)));
    }
    if (z4) {
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(r4_5 & reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)));
    }
    if (z6) {
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) & reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)));
    }
    if (z7) {
        **reinterpret_cast<int64_t**>(&v1) = *reinterpret_cast<int64_t*>(&v1);
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) - 0x5f8c);
    }
    if (z8) {
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(r4_9 & *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 4));
    }
    if (z10) {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) & reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1));
    }
    if (z11) {
        **reinterpret_cast<int64_t**>(&v1) = *reinterpret_cast<int64_t*>(reinterpret_cast<int32_t>(&v1) + 4);
        *reinterpret_cast<int64_t**>(&v1) = *reinterpret_cast<int64_t**>(&v1) - 0xbf3;
    }
    if (z12) {
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(r4_13 & *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 8));
    }
    if (z14) {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 8) = reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) & reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1));
    }
    if (z15) {
        **reinterpret_cast<int64_t**>(&v1) = *reinterpret_cast<int64_t*>(reinterpret_cast<int32_t>(&v1) + 8);
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) - 0x5fa4);
    }
    if (z16) {
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(r4_17 & *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 12));
    }
    if (z18) {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 12) = reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) & reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1));
    }
    if (z19) {
        **reinterpret_cast<int64_t**>(&v1) = *reinterpret_cast<int64_t*>(reinterpret_cast<int32_t>(&v1) + 12);
        *reinterpret_cast<int64_t**>(&v1) = *reinterpret_cast<int64_t**>(&v1) - 0xbf6;
    }
    if (z20) {
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(r4_21 & r4_22);
    }
    if (z23) {
        *reinterpret_cast<uint32_t*>(&v24) = reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) & reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1));
    }
    if (z25) {
        **reinterpret_cast<int64_t**>(&v1) = v24;
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) - 0x5fbc);
    }
    if (z26) {
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(*reinterpret_cast<uint32_t*>(&v24) & r5_27);
    }
    if (z28) {
        *reinterpret_cast<uint32_t*>(&v29) = reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) & reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1));
    }
    if (z30) {
        **reinterpret_cast<int64_t**>(&v1) = v29;
        *reinterpret_cast<int64_t**>(&v1) = *reinterpret_cast<int64_t**>(&v1) - 0xbf9;
    }
    if (z31) {
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(*reinterpret_cast<uint32_t*>(&v24) & r6_32);
    }
    if (z33) {
        *reinterpret_cast<uint32_t*>(&v34) = reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) & reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1));
    }
    if (z35) {
        **reinterpret_cast<int64_t**>(&v1) = v34;
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) - 0x5fd4);
    }
    if (z36) {
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(*reinterpret_cast<uint32_t*>(&v24) & r7_37);
    }
    if (z38) {
        *reinterpret_cast<uint32_t*>(&v39) = reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) & reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1));
    }
    if (z40) {
        **reinterpret_cast<int64_t**>(&v1) = v39;
    }
    if (z41) {
    }
    if (z42) {
    }
}

void fun_5fe8(int32_t r0, int64_t* r1) {
    int1_t z3;
    int1_t z4;
    int1_t z5;
    int64_t v6;
    int1_t z7;
    int1_t z8;

    if (z3) {
    }
    if (z4) {
    }
    if (z5) {
        *r1 = v6;
    }
    if (z7) {
    }
    if (z8) {
    }
}

void fun_6000(int32_t r0) {
    int1_t z2;
    int1_t z3;
    int1_t z4;
    int64_t* r2_5;
    int64_t v6;
    int1_t z7;
    int1_t z8;

    if (z2) {
    }
    if (z3) {
    }
    if (z4) {
        *r2_5 = v6;
    }
    if (z7) {
    }
    if (z8) {
    }
}

void fun_6018(int32_t r0) {
    int1_t z2;
    int1_t z3;
    int1_t z4;
    int64_t* r3_5;
    int64_t v6;
    int1_t z7;
    int1_t z8;

    if (z2) {
    }
    if (z3) {
    }
    if (z4) {
        *r3_5 = v6;
    }
    if (z7) {
    }
    if (z8) {
    }
}

void fun_6030(int32_t r0) {
    int1_t z2;
    int1_t z3;
    int1_t z4;
    int64_t* r4_5;
    int64_t v6;
    int1_t z7;
    int1_t z8;

    if (z2) {
    }
    if (z3) {
    }
    if (z4) {
        *r4_5 = v6;
    }
    if (z7) {
    }
    if (z8) {
    }
}

void fun_6048(int32_t r0, int32_t r1, int32_t r2) {
    int1_t z4;
    int1_t z5;
    int1_t z6;
    int64_t* r5_7;
    int64_t v8;
    int1_t z9;
    int1_t z10;

    if (z4) {
    }
    if (z5) {
    }
    if (z6) {
        *r5_7 = v8;
    }
    if (z9) {
    }
    if (z10) {
    }
}

void fun_6060(int32_t r0) {
    int1_t z2;
    int1_t z3;
    int1_t z4;
    int64_t* r6_5;
    int64_t v6;
    int1_t z7;
    int1_t z8;

    if (z2) {
    }
    if (z3) {
    }
    if (z4) {
        *r6_5 = v6;
    }
    if (z7) {
    }
    if (z8) {
    }
}

void fun_6078(uint32_t r0) {
    uint96_t v2;
    int1_t z3;
    uint32_t r5_4;
    int1_t z5;
    uint32_t r7_6;
    int1_t z7;
    int64_t* r7_8;
    int64_t v9;
    int64_t* r7_10;
    void* r7_11;
    int1_t z12;
    uint32_t r4_13;
    uint32_t r6_14;
    int1_t z15;
    int64_t v16;
    int1_t z17;
    int1_t z18;
    uint32_t r4_19;
    int1_t z20;
    int64_t v21;
    int1_t z22;
    int1_t z23;
    uint32_t r4_24;
    int1_t z25;
    int64_t v26;
    int1_t z27;
    int1_t z28;
    uint32_t r4_29;
    int1_t z30;
    int64_t v31;
    int1_t z32;
    int1_t z33;
    uint32_t r4_34;
    int1_t z35;
    int1_t z36;
    int1_t z37;
    uint32_t r4_38;
    int1_t z39;
    int1_t z40;
    int1_t z41;
    int1_t z42;

    *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&v2) + 4) = __zero_stack_offset();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v2) + 8) = reinterpret_cast<int32_t>(__return_address());
    if (z3) {
        r0 = r0 ^ r5_4 << r0;
    }
    if (z5) {
        r0 = r7_6 & r0;
    }
    if (z7) {
        *r7_8 = v9;
        r7_10 = reinterpret_cast<int64_t*>(reinterpret_cast<int32_t>(r7_11) - 0x6088);
    }
    if (z12) {
        r0 = r4_13 & r6_14 << r0;
    }
    if (z15) {
        *reinterpret_cast<uint32_t*>(&v16) = reinterpret_cast<uint32_t>(r7_10) & r0;
    }
    if (z17) {
        *r7_10 = v16;
        r7_10 = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(r7_10) - 0x6094);
    }
    if (z18) {
        r0 = r4_19 & reinterpret_cast<uint32_t>(r7_10) << r0;
    }
    if (z20) {
        *reinterpret_cast<uint32_t*>(&v21) = reinterpret_cast<uint32_t>(r7_10) & r0;
    }
    if (z22) {
        *r7_10 = v21;
        r7_10 = r7_10 - 0xc14;
    }
    if (z23) {
        r0 = r4_24 & *reinterpret_cast<uint32_t*>(&v16) << r0;
    }
    if (z25) {
        *reinterpret_cast<uint32_t*>(&v26) = reinterpret_cast<uint32_t>(r7_10) & r0;
    }
    if (z27) {
        *r7_10 = v26;
        r7_10 = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(r7_10) - 0x60ac);
    }
    if (z28) {
        r0 = r4_29 & *reinterpret_cast<uint32_t*>(&v21) << r0;
    }
    if (z30) {
        *reinterpret_cast<uint32_t*>(&v31) = reinterpret_cast<uint32_t>(r7_10) & r0;
    }
    if (z32) {
        *r7_10 = v31;
        r7_10 = r7_10 - 0xc17;
    }
    if (z33) {
        r0 = r4_34 & *reinterpret_cast<uint32_t*>(&v26) << r0;
    }
    if (z35) {
        *reinterpret_cast<uint32_t*>(&v2) = reinterpret_cast<uint32_t>(r7_10) & r0;
    }
    if (z36) {
        *r7_10 = *reinterpret_cast<int64_t*>(&v2);
        r7_10 = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(r7_10) - 0x60c4);
    }
    if (z37) {
        r0 = r4_38 & *reinterpret_cast<uint32_t*>(&v31) << r0;
    }
    if (z39) {
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&v2) + 4) = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r7_10) & r0);
    }
    if (z40) {
        *r7_10 = *reinterpret_cast<int64_t*>(reinterpret_cast<int32_t>(&v2) + 4);
    }
    if (z41) {
    }
    if (z42) {
    }
}

void fun_60d8(uint32_t r0) {
    int1_t v2;
    int1_t z3;
    int1_t v4;
    uint32_t r7_5;
    uint32_t r5_6;
    int1_t n7;
    int1_t z8;
    int1_t c9;
    int1_t v10;
    uint32_t r7_11;
    uint32_t r5_12;
    uint32_t r6_13;
    uint32_t r12_14;
    uint32_t r12_15;
    uint32_t r3_16;
    uint32_t r5_17;
    uint32_t r5_18;
    int32_t r5_19;
    uint32_t r7_20;
    uint32_t r5_21;
    int32_t r5_22;

    if (v2) {
        __asm__("strbtvs r6, [ip], -lr, lsr #10");
    }
    if (z3) {
        r0 = r0 & r0;
    }
    if (!v4) {
        r7_5 = 0xa0000183 - r5_6;
        n7 = reinterpret_cast<int32_t>(r7_5) < reinterpret_cast<int32_t>(0);
        z8 = r7_5 == 0;
        c9 = __intrinsic();
        v10 = __intrinsic();
    }
    if (v10) {
        __asm__("strbtvs r6, [ip], -lr, lsr #10");
    }
    if (z8) {
        r0 = r0 & r0;
    }
    if (!v10) {
        r7_11 = 0xd0000183 - r5_12;
        n7 = reinterpret_cast<int32_t>(r7_11) < reinterpret_cast<int32_t>(0);
        z8 = r7_11 == 0;
        c9 = __intrinsic();
    }
    if (z8) {
        r0 = 0;
    }
    if (z8) {
        __asm__("ldrdeq r6, r7, [r0], -r4");
    }
    if (z8) {
        r6_13 = r0 & (r0 >> 1 | r0 << 31);
    }
    if (z8) {
        r6_13 = r0 & (r12_14 >> 1 | r12_15 << 31);
    }
    if (z8) {
        r0 = r0 & r0;
    }
    if (n7) {
        r0 = r0 & r0;
    }
    if (n7) {
    }
    if (z8) {
        r3_16 = r0 & r0;
    }
    if (z8) {
        r6_13 = r5_17 & r0;
    }
    if (z8) {
    }
    if (z8) {
    }
    if (!n7) {
        n7 = __intrinsic();
        c9 = r5_18 < reinterpret_cast<uint32_t>(-0x7000);
        z8 = r5_19 == -0x7000;
    }
    if (z8) {
        r7_20 = r3_16 ^ reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>("_v35") >> r6_13);
        n7 = reinterpret_cast<int32_t>(r7_20) < reinterpret_cast<int32_t>(0);
        z8 = r7_20 == 0;
        c9 = __intrinsic();
    }
    if (!n7) {
        c9 = r5_21 < reinterpret_cast<uint32_t>(-0x7000);
        z8 = r5_22 == -0x7000;
    }
    if (!c9) {
    }
    if (z8) {
    }
}

void fun_6134(int32_t r0, int32_t r1, int32_t r2, int32_t r3) {
    int1_t z5;
    int1_t z6;
    int1_t z7;
    int1_t z8;
    int1_t z9;
    int1_t z10;
    int1_t z11;
    int1_t z12;
    int1_t z13;
    int1_t c14;
    int1_t c15;
    int1_t c16;
    int1_t c17;
    int1_t c18;
    int1_t c19;
    int1_t c20;
    int1_t c21;
    int1_t c22;
    int1_t c23;
    int1_t c24;
    int1_t c25;
    int1_t c26;
    int1_t c27;
    int1_t c28;
    int1_t c29;
    int1_t c30;
    int1_t c31;
    int1_t c32;
    int1_t c33;
    int1_t c34;
    int1_t c35;
    int1_t c36;
    int1_t c37;
    int1_t c38;
    int1_t z39;
    int1_t z40;
    int1_t z41;
    int1_t z42;
    int1_t z43;
    int1_t z44;
    int1_t z45;
    int1_t z46;
    int1_t z47;
    int1_t z48;
    int1_t z49;
    int1_t z50;
    int1_t z51;
    int1_t z52;
    int1_t z53;
    int1_t z54;
    int1_t z55;
    int1_t z56;
    int1_t z57;
    int1_t z58;
    int1_t z59;
    int1_t z60;
    int1_t z61;
    int1_t z62;
    int1_t z63;
    int1_t z64;
    int1_t z65;

    if (z5) {
    }
    if (z6) {
    }
    if (z7) {
    }
    if (z8) {
    }
    if (z9) {
    }
    if (z10) {
    }
    if (z11) {
    }
    if (z12) {
    }
    if (z13) {
    }
    if (!c14) {
        __asm__("svclo #0xffc000");
    }
    if (!c15) {
        __asm__("svclo #0xffc010");
    }
    if (!c16) {
        __asm__("svclo #0xffc018");
    }
    if (!c17) {
        __asm__("svclo #0xffc01c");
    }
    if (!c18) {
        __asm__("svclo #0xffc014");
    }
    if (!c19) {
        __asm__("svclo #0xffc020");
    }
    if (!c20) {
        __asm__("svclo #0xffc030");
    }
    if (!c21) {
        __asm__("svclo #0xffc038");
    }
    if (!c22) {
        __asm__("svclo #0xffc03c");
    }
    if (!c23) {
        __asm__("svclo #0xffc034");
    }
    if (!c24) {
        __asm__("svclo #0xffc040");
    }
    if (!c25) {
        __asm__("svclo #0xffc050");
    }
    if (!c26) {
        __asm__("svclo #0xffc058");
    }
    if (!c27) {
        __asm__("svclo #0xffc05c");
    }
    if (!c28) {
        __asm__("svclo #0xffc054");
    }
    if (!c29) {
        __asm__("svclo #0xffc060");
    }
    if (!c30) {
        __asm__("svclo #0xffc070");
    }
    if (!c31) {
        __asm__("svclo #0xffc078");
    }
    if (!c32) {
        __asm__("svclo #0xffc07c");
    }
    if (!c33) {
        __asm__("svclo #0xffc074");
    }
    if (!c34) {
        __asm__("svclo #0xffc080");
    }
    if (!c35) {
        __asm__("svclo #0xffc090");
    }
    if (!c36) {
        __asm__("svclo #0xffc098");
    }
    if (!c37) {
        __asm__("svclo #0xffc09c");
    }
    if (!c38) {
        __asm__("svclo #0xffc094");
    }
    if (z39) {
    }
    if (z40) {
    }
    if (z41) {
    }
    if (z42) {
    }
    if (z43) {
    }
    if (z44) {
    }
    if (z45) {
    }
    if (z46) {
    }
    if (z47) {
    }
    if (z48) {
    }
    if (z49) {
    }
    if (z50) {
    }
    if (z51) {
    }
    if (z52) {
    }
    if (z53) {
    }
    if (z54) {
    }
    if (z55) {
    }
    if (z56) {
    }
    if (z57) {
    }
    if (z58) {
    }
    if (z59) {
    }
    if (z60) {
    }
    if (z61) {
    }
    if (z62) {
    }
    if (z63) {
    }
    if (z64) {
    }
    if (z65) {
    }
}

void fun_628c(uint32_t r0, uint32_t r1, uint32_t r2) {
    int1_t z4;
    int1_t z5;
    int1_t z6;
    int1_t z7;
    int1_t z8;
    int1_t z9;
    int1_t z10;
    int1_t v11;
    int1_t n12;
    int32_t r6_13;
    int1_t v14;

    if (z4) {
        r0 = r0 & r2;
    }
    if (z5) {
        r0 = r0 & r0;
    }
    if (z6) {
        r0 = r0 & r0;
    }
    if (z7) {
        r0 = r0 & r2;
    }
    if (z8) {
        r0 = r0 & r0;
    }
    if (z9) {
        r0 = r0 & r1;
    }
    if (z10) {
        r0 = 0;
    }
    if (v11) {
        __asm__("stclvs p1, c6, [sb], #-0x118");
    }
    if (n12) {
        *reinterpret_cast<int32_t*>(r0 - 0x465) = r6_13;
    }
    if (v14) {
        __asm__("stcvs p6, c4, [r0, #-0x130]!");
    }
}

void fun_62bc(uint32_t r0) {
    int1_t v2;
    int32_t r8_3;
    int32_t r6_4;
    int1_t z5;
    uint32_t r6_6;
    uint32_t r3_7;
    uint32_t r3_8;
    int1_t v9;
    int1_t n10;
    int1_t v11;
    int1_t v12;

    if (v2) {
        *reinterpret_cast<signed char*>(r8_3 - 0x320) = static_cast<signed char>(r6_4);
    }
    if (z5) {
        r6_6 = r0 & (r3_7 >> 22 | r3_8 << 10);
    }
    if (v9) {
        __asm__("stclvs p1, c6, [sb], #-0x118");
    }
    if (n10) {
        *reinterpret_cast<uint32_t*>(r0 - 0x465) = r6_6;
    }
    if (!v11) {
        __asm__("strtvc r4, [r0], -ip, asr #12");
    }
    if (v12) {
        __asm__("ldmdbvs r3!, {r0, r2, r5, r6, sb, ip, sp, lr} ^");
    }
}

int32_t fun_18df880();

void fun_62d8() {
    int1_t v1;
    int1_t z2;
    int1_t v3;
    int1_t c4;

    if (v1) {
        fun_18df880();
    }
    if (z2) {
    }
    if (!v3) {
        c4 = __intrinsic();
    }
    if (c4) {
    }
}

void fun_62ec(int32_t r0) {
    int1_t z2;
    int1_t c3;
    int1_t v4;
    int1_t z5;

    if (z2) {
    }
    if (c3) {
    }
    if (v4) {
        __asm__("svcvs #0x79614c");
    }
    if (z5) {
    }
}

void fun_6300(int32_t r0) {
    int1_t z2;

    if (z2) {
    }
}

void fun_6308(int32_t r0) {
    int1_t z2;

    if (z2) {
    }
}

void fun_6310(int32_t r0) {
    int1_t z2;

    if (z2) {
    }
}

void fun_6318(int64_t* r0) {
    int1_t z2;
    int64_t v3;

    if (z2) {
        *r0 = v3;
    }
}

void fun_3044(int32_t r0) {
    int1_t n2;
    int1_t n3;
    int1_t z4;
    int1_t n5;
    int1_t n6;
    int1_t z7;
    int1_t z8;
    int1_t z9;
    int1_t z10;
    int1_t z11;
    int1_t z12;
    int1_t z13;
    int1_t z14;
    int1_t z15;
    int1_t z16;
    int1_t z17;
    int1_t z18;
    int1_t z19;
    int1_t z20;
    int1_t z21;
    int1_t z22;
    int1_t z23;
    int1_t z24;
    int1_t z25;
    int1_t z26;
    int1_t z27;
    int1_t z28;
    int1_t z29;
    int1_t z30;
    int1_t z31;
    int1_t z32;
    int1_t z33;
    int1_t z34;
    int1_t z35;
    int1_t z36;
    int1_t z37;
    int1_t z38;
    int1_t z39;
    int1_t z40;
    int1_t z41;
    int1_t z42;
    int1_t z43;
    int1_t z44;
    int1_t z45;
    int1_t z46;
    int1_t z47;
    int1_t z48;
    int1_t z49;
    int1_t z50;

    if (n2) {
    }
    if (n3) {
    }
    if (z4) {
    }
    if (n5) {
    }
    if (n6) {
    }
    if (z7) {
    }
    if (z8) {
    }
    if (z9) {
    }
    if (z10) {
    }
    if (z11) {
    }
    if (z12) {
    }
    if (z13) {
    }
    if (z14) {
    }
    if (z15) {
    }
    if (z16) {
    }
    if (z17) {
    }
    if (z18) {
    }
    if (z19) {
    }
    if (z20) {
    }
    if (z21) {
    }
    if (z22) {
    }
    if (z23) {
    }
    if (z24) {
    }
    if (z25) {
    }
    if (z26) {
    }
    if (z27) {
    }
    if (z28) {
    }
    if (z29) {
    }
    if (z30) {
    }
    if (z31) {
    }
    if (z32) {
    }
    if (z33) {
    }
    if (z34) {
    }
    if (z35) {
    }
    if (z36) {
    }
    if (z37) {
    }
    if (z38) {
    }
    if (z39) {
    }
    if (z40) {
    }
    if (z41) {
    }
    if (z42) {
    }
    if (z43) {
    }
    if (z44) {
    }
    if (z45) {
    }
    if (z46) {
    }
    if (z47) {
    }
    if (z48) {
    }
    if (z49) {
    }
    if (z50) {
    }
}

void fun_31fc(int32_t r0) {
    int1_t z2;

    if (z2) {
    }
    while (1) {
    }
}

void fun_3374(int32_t r0) {
    int32_t r2_2;

    r2_2 = 0;
    while (*reinterpret_cast<signed char*>(r2_2 + r0) = static_cast<signed char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(r2_2 + r0))), r2_2 = r2_2 + 2, r2_2 != 24) {
    }
    return;
}

uint32_t fun_35c8(int32_t r0, uint32_t r1, uint32_t r2) {
    int32_t r0_4;
    int1_t z5;
    uint32_t r3_6;
    uint32_t r0_7;

    r0_4 = fun_3598(r1, r2);
    z5 = r0_4 == 0;
    if (!z5) {
        r3_6 = *reinterpret_cast<unsigned char*>(r0 + r1 << 1);
    }
    if (!z5) {
        r3_6 = r3_6;
    }
    r0_7 = 0xffffffff;
    if (!z5) {
        r0_7 = r3_6 & 1;
    }
    return r0_7;
}

uint32_t fun_3600(unsigned char* r0, uint32_t r1, uint32_t r2, uint32_t r3) {
    uint32_t r7_5;
    int32_t r0_6;
    uint32_t r12_7;
    int1_t z8;
    uint32_t r0_9;
    uint32_t r1_10;

    r7_5 = r3;
    r0_6 = fun_3598(r1, r2);
    r12_7 = 0xffffffff;
    if (r0_6) {
        z8 = r7_5 == 0;
        r0_9 = r1 << 1;
        if (!z8) {
            r3 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(r0) + r0_9);
        }
        if (z8) {
            r3 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(r0) + r0_9);
        }
        r1_10 = r2 + 4;
        if (!z8) {
            r2 = 1;
        }
        if (z8) {
            r2 = 1;
        }
        if (!z8) {
            r3 = r3 | r2 << r1_10;
        }
        if (z8) {
            __asm__("biceq r3, r3, r2, lsl r1");
        }
        if (!z8) {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(r0) + r0_9) = static_cast<unsigned char>(r3);
        }
        if (z8) {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(r0) + r0_9) = static_cast<unsigned char>(r3);
        }
        r12_7 = 0;
        if (z8) {
            r12_7 = r7_5;
        }
    }
    return r12_7;
}

void* g3770 = reinterpret_cast<void*>(0x5f62);

void* fun_3668(void* r0, void* r1) {
    void* r8_3;
    int1_t less4;
    void* r10_5;
    void* r2_6;
    void* r0_7;
    void* r11_8;
    void* r0_9;
    void* r1_10;
    void* r0_11;
    void* r7_12;
    void* r9_13;
    int32_t r5_14;
    void* r6_15;
    void* r0_16;
    void* r3_17;
    uint32_t r0_18;
    void* r3_19;
    void* r1_20;
    uint32_t r0_21;
    void* r0_22;
    uint32_t r0_23;

    r8_3 = r1;
    less4 = reinterpret_cast<int32_t>(r8_3) < reinterpret_cast<int32_t>(0) != __intrinsic();
    r10_5 = r0;
    if (less4) {
        r1 = g3770;
    }
    if (less4) {
        r2_6 = reinterpret_cast<void*>(0);
    }
    if (!less4) {
        if (reinterpret_cast<int32_t>(r8_3) <= reinterpret_cast<int32_t>(99)) {
            fun_3348();
            r0_7 = fun_5e10(r8_3, 10, 0);
            r11_8 = r0_7;
            r0_9 = fun_5cd0(r8_3, 10, 0);
            r1_10 = reinterpret_cast<void*>(10);
            r0_11 = fun_5e10(r0_9, 10, 0);
            r7_12 = reinterpret_cast<void*>(0);
            r9_13 = r0_11;
            do {
                r5_14 = 0;
                r6_15 = reinterpret_cast<void*>(3);
                while (1) {
                    r0_16 = r9_13;
                    if (r0_16) {
                        r0_18 = fun_37f4(r0_16, r1_10, r2_6, r3_17);
                        r3_19 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(r0_18 + r5_14)) & 1);
                        r1_20 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r7_12) + 6);
                        fun_3404(r10_5, r1_20, r6_15, r3_19);
                        r0_21 = fun_37f4(r11_8, r1_20, r6_15, r3_19);
                        r2_6 = r6_15;
                        r3_17 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(r0_21 + r5_14)) & 1);
                        r0_22 = r10_5;
                        r1_10 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r7_12) + 1);
                    } else {
                        r0_23 = fun_37f4(r11_8, r1_10, r2_6, r3_17);
                        r3_17 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(r0_23 + r5_14)) & 1 << reinterpret_cast<uint32_t>(r7_12));
                        r0_22 = r10_5;
                        r1_10 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r7_12) + 4);
                        r2_6 = r6_15;
                    }
                    ++r5_14;
                    fun_3404(r0_22, r1_10, r2_6, r3_17);
                    r6_15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r6_15) + 1);
                    if (r5_14 == 8) 
                        break;
                }
                r7_12 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r7_12) + 1);
            } while (r7_12 != 4);
            goto addr_3768_19;
        } else {
            r1 = g3770;
            r2_6 = reinterpret_cast<void*>(0xb4);
        }
    }
    fun_34a8(r0, r1, r2_6);
    r8_3 = reinterpret_cast<void*>(0xffffffff);
    addr_3768_19:
    return r8_3;
}

void fun_3810(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_3850(struct s0* r0) {
    int1_t z2;
    int1_t z3;
    struct s0* r0_4;

    if (z2) {
    }
    if (z3) {
    }
    r0_4 = fun_3814(r0);
    if (!r0_4) {
        return;
    } else {
        goto fun_3814;
    }
}

void fun_3b28(int32_t r0) {
    int1_t z2;
    int1_t z3;
    int1_t z4;
    int1_t z5;
    int1_t z6;
    int1_t z7;
    int1_t z8;
    int1_t z9;
    int1_t z10;
    int1_t z11;
    int1_t z12;
    int1_t z13;

    if (z2) {
    }
    if (z3) {
    }
    if (z4) {
    }
    if (z5) {
    }
    if (z6) {
    }
    if (z7) {
    }
    if (z8) {
    }
    if (z9) {
    }
    if (z10) {
    }
    if (z11) {
    }
    if (z12) {
    }
    if (z13) {
    }
    goto 0x3b6c;
}

struct s24 {
    signed char[176] pad176;
    int32_t f176;
};

struct s25 {
    signed char[180] pad180;
    int32_t f180;
};

void fun_3e64(int32_t r0) {
    struct s24* r4_2;
    int32_t r10_3;
    struct s25* r4_4;
    int32_t r7_5;
    int32_t v6;
    int32_t v7;

    r4_2->f176 = r10_3;
    r4_4->f180 = r7_5;
    fun_4d68(v6);
    goto v7;
}

struct s26 {
    uint32_t f0;
    uint32_t f4;
};

int32_t fun_4104(struct s26* r0, uint32_t r1, uint32_t r2) {
    if (r0) {
        while (r0->f0) {
            if (r1 < r0->f0) {
                if (r2 <= r0->f4) 
                    goto label_9;
            }
            ++r0;
        }
        goto addr_4134_11;
    }
    addr_413c_12:
    return 0;
    addr_4134_11:
    return -12;
    label_9:
    goto addr_413c_12;
}

void fun_435c(int32_t r0) {
    int1_t z2;
    int1_t z3;
    int1_t z4;

    if (z2) {
    }
    if (z3) {
    }
    if (!z4) 
        goto "???";
}

struct s27 {
    struct s0* f0;
    signed char[31] pad32;
    struct s0* f32;
    signed char[3] pad36;
    void* f36;
};

struct s0* fun_4398(struct s27* r0) {
    uint32_t r3_2;
    struct s0* r1_3;
    void* r3_4;
    void* v5;
    void* r3_6;
    struct s0* r3_7;
    struct s0* r3_8;
    void* r1_9;
    struct s0* r0_10;
    int1_t below_or_equal11;
    void** r2_12;
    struct s0* r0_13;
    struct s0* r0_14;
    int1_t less15;

    if (r3_2 <= 0x7e000) {
        r1_3 = r0->f32;
        if (reinterpret_cast<unsigned char>(reinterpret_cast<int32_t>(r3_4) + reinterpret_cast<uint32_t>(v5)) > reinterpret_cast<unsigned char>(r1_3)) {
            if (reinterpret_cast<uint32_t>(r3_6) <= reinterpret_cast<uint32_t>(r0->f36)) {
                if (reinterpret_cast<unsigned char>(r3_7) >= reinterpret_cast<unsigned char>(r1_3)) {
                    r3_8 = r1_3;
                }
                r1_9 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r3_8) + reinterpret_cast<uint32_t>(v5));
                r0_10 = r3_8;
                below_or_equal11 = reinterpret_cast<uint32_t>(r1_9) <= reinterpret_cast<uint32_t>(r0->f36);
                if (below_or_equal11) {
                    r3_8 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(r1_9) - reinterpret_cast<unsigned char>(r3_8));
                }
                if (!below_or_equal11) {
                    r3_8 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(r0->f36) - reinterpret_cast<unsigned char>(r3_8));
                }
                r2_12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 12 - 4);
                if (!r3_8) 
                    goto label_14; else 
                    goto addr_4400_15;
            }
        }
    }
    addr_4424_16:
    r0_13 = reinterpret_cast<struct s0*>(0);
    addr_4428_17:
    return r0_13;
    label_14:
    goto addr_4424_16;
    addr_4400_15:
    r0_14 = fun_39fc(r0_10, r3_8, r2_12);
    less15 = reinterpret_cast<signed char>(r0_14) < reinterpret_cast<signed char>(0);
    if (!less15) {
        r3_8 = r0->f0;
    }
    if (!less15) {
        r2_12 = reinterpret_cast<void**>(0);
    }
    r0_13 = reinterpret_cast<struct s0*>(0);
    if (!less15) {
        r3_8 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r3_8) | reinterpret_cast<uint32_t>(r2_12));
    }
    if (less15) {
        r0_13 = reinterpret_cast<struct s0*>(0xfffffff8);
    }
    if (!less15) {
        r0->f0 = r3_8;
    }
    goto addr_4428_17;
}

uint32_t g47cc = 0x47b4;

uint32_t g47d0 = 0x56000;

uint32_t fun_47b4() {
    uint32_t r3_1;
    uint32_t r0_2;
    int1_t c3;

    r3_1 = g47cc;
    r0_2 = g47d0;
    c3 = r3_1 < r0_2;
    if (c3) {
        r0_2 = 0;
    }
    if (!c3) {
        r0_2 = 1;
    }
    return r0_2;
}

void fun_47cc(int16_t* r0) {
    int1_t z2;
    int32_t r4_3;
    int1_t z4;

    if (z2) {
        *r0 = static_cast<int16_t>(r4_3);
    }
    if (!z4) 
        goto "???";
}

struct s28 {
    int32_t f0;
    int32_t f4;
};

struct s28* g4b28 = reinterpret_cast<struct s28*>(0x6138);

int32_t g4b2c = 0xf04;

int32_t fun_4adc(int32_t r0) {
    int1_t z2;
    struct s28* r4_3;
    int32_t* r5_4;
    int32_t r1_5;
    uint32_t r0_6;

    if (z2) {
    }
    r4_3 = g4b28;
    r5_4 = &r4_3->f4;
    while (r1_5 = g4b2c, ++r4_3, !!r4_3->f0) {
        r0_6 = fun_53ac(r4_3->f0, r1_5);
        if (!r0_6) 
            goto addr_4afc_7;
        r5_4 = r5_4 + 2;
    }
    return -2;
    addr_4afc_7:
    return *r5_4;
}

int32_t fun_4b28(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;

    if (z3) {
    }
    if (z4) {
    }
    return 0;
}

struct s29 {
    signed char[192] pad192;
    uint32_t f192;
};

struct s29* g4c04 = reinterpret_cast<struct s29*>(0xe01fc000);

void fun_4bec(int32_t r0) {
    struct s29* r2_2;

    r2_2 = g4c04;
    r2_2->f192 = r2_2->f192 | 2;
    return;
}

void fun_4cd8(uint32_t r0) {
    if (reinterpret_cast<uint32_t>(fun_4ce0) & r0) 
        goto "???";
}

uint32_t fun_4d0c(uint32_t r0) {
    __asm__("mrs r0, apsr");
    return (r0 >> 7 ^ 1) & 1;
}

struct s30 {
    signed char[20] pad20;
    unsigned char f20;
};

uint32_t fun_4e5c(struct s30** r0) {
    return static_cast<uint32_t>((*r0)->f20) & 1;
}

struct s31 {
    unsigned char f0;
    signed char[19] pad20;
    unsigned char f20;
};

uint32_t fun_5080(struct s31** r0) {
    int1_t z2;
    uint32_t r3_3;

    z2 = (static_cast<uint32_t>((*r0)->f20) & 1) == 0;
    r3_3 = 0xffffffff;
    if (!z2) {
        r3_3 = (*r0)->f0;
    }
    if (!z2) {
        r3_3 = r3_3 & 0xff;
    }
    return r3_3;
}

void fun_52e4(int32_t r0) {
    int1_t z2;
    int1_t z3;
    int1_t z4;

    if (z2) {
    }
    if (z3) {
    }
    if (!z4) 
        goto "???";
}

void fun_5334(int32_t r0) {
    int1_t z2;
    int1_t z3;
    int1_t z4;
    int1_t n5;

    if (z2) {
    }
    if (z3) {
    }
    if (z4) {
    }
    if (!n5) 
        goto "???";
}

void fun_552c(int32_t r0) {
    if (!r0) 
        goto "???";
    goto 0x5558;
}

int32_t g5638 = 0x464c457f;

uint32_t g563c = 0x101;

struct s32 {
    signed char[12] pad12;
    uint32_t f12;
};

struct s33 {
    signed char[16] pad16;
    int32_t f16;
};

struct s34 {
    signed char[4] pad4;
    int32_t f4;
};

struct s35 {
    signed char[8] pad8;
    uint32_t f8;
};

void fun_55b0(int32_t r0) {
    uint32_t v2;
    int32_t r3_3;
    int32_t v4;
    uint32_t r3_5;
    uint16_t v6;
    uint16_t v7;
    int32_t* r7_8;
    int32_t v9;
    struct s32* r6_10;
    uint16_t v11;
    struct s33* r6_12;
    int32_t* r6_13;
    struct s34* r6_14;
    int32_t v15;
    struct s35* r6_16;
    uint16_t v17;
    int32_t v18;

    if (!r0) {
        if (v2 <= 51) {
            goto addr_5620_5;
        } else {
            r3_3 = g5638;
            if (v4 != r3_3) {
                goto addr_5620_5;
            } else {
                r3_5 = g563c;
                if (static_cast<uint32_t>(v6) != r3_5) {
                    goto addr_5628_10;
                } else {
                    if (static_cast<uint32_t>(v7) != 40) {
                        goto addr_5628_10;
                    } else {
                        *r7_8 = v9;
                        r6_10->f12 = v11;
                        r6_12->f16 = v9;
                        *r6_13 = 1;
                        r6_14->f4 = v15;
                        r6_16->f8 = v17;
                    }
                }
            }
        }
    }
    addr_562c_14:
    goto v18;
    addr_5620_5:
    goto addr_562c_14;
    addr_5628_10:
    goto addr_562c_14;
}

void* g5af0 = reinterpret_cast<void*>(0x6158);

struct s36 {
    signed char[16] pad16;
    int32_t* f16;
    int32_t* f20;
};

struct s37 {
    signed char[16] pad16;
    int32_t* f16;
    int32_t* f20;
};

struct s38 {
    signed char[16] pad16;
    int32_t* f16;
    int32_t* f20;
};

void fun_5a54(int32_t r0) {
    uint32_t r9_2;
    uint32_t v3;
    uint32_t v4;
    void* r1_5;
    struct s36* r0_6;
    struct s37* r2_7;
    int32_t v8;
    struct s38* r3_9;
    int32_t r2_10;
    int32_t* r5_11;
    int32_t* r4_12;
    int32_t* r6_13;
    int32_t* r0_14;
    int32_t* r7_15;
    int32_t* r2_16;
    uint32_t r1_17;
    int1_t z18;

    r9_2 = v3;
    if (!v4) {
        return;
    } else {
        r1_5 = g5af0;
        r0_6 = reinterpret_cast<struct s36*>(36 * r0 + reinterpret_cast<int32_t>(r1_5));
        r2_7 = reinterpret_cast<struct s37*>(36 * v8 + reinterpret_cast<int32_t>(r1_5));
        r3_9 = reinterpret_cast<struct s38*>(r2_10 * 36 + reinterpret_cast<int32_t>(r1_5));
        r5_11 = r2_7->f20;
        r4_12 = r0_6->f20;
        r6_13 = r0_6->f16;
        *r4_12 = 1;
        r0_14 = r2_7->f16;
        r7_15 = r3_9->f20;
        *r5_11 = 1;
        r2_16 = r3_9->f16;
        r1_17 = v4;
        while (1) {
            --r1_17;
            z18 = (r9_2 & 1 << r1_17) == 0;
            if (!z18) {
                *r2_16 = 1;
            }
            if (z18) {
                *r7_15 = 1;
            }
            *r6_13 = 1;
            *r4_12 = 1;
            if (!r1_17) 
                break;
        }
        *r0_14 = 1;
        *r5_11 = 1;
        return;
    }
}

int32_t g5b64 = 0x4000032c;

uint32_t fun_5af0(uint32_t r0, uint32_t r1, uint32_t r2, uint32_t r3, uint32_t a5) {
    int1_t z6;
    int1_t below_or_equal7;
    uint32_t r6_8;
    uint32_t r0_9;
    int32_t r0_10;
    int1_t z11;
    int32_t v12;

    if (z6) {
    }
    below_or_equal7 = r0 <= 4;
    if (below_or_equal7) {
        below_or_equal7 = r1 <= 31;
    }
    r6_8 = 0xffffffea;
    if (below_or_equal7) {
        r0_9 = fun_574c(r0, r1, r2, r3, a5);
        r6_8 = r0_9;
        if (reinterpret_cast<int32_t>(r6_8) < reinterpret_cast<int32_t>(0) == __intrinsic()) {
            fun_4d28(reinterpret_cast<int32_t>(__zero_stack_offset()) - 16 - 8 + 4);
            r0_10 = g5b64;
            z11 = (*reinterpret_cast<uint32_t*>(r0_10 + r0 << 2) & 1) == 0;
            __asm__("bic r1, r2, r3");
            if (!z11) {
                *reinterpret_cast<uint32_t*>(r0_10 + r0 << 2) = r1;
            }
            if (z11) {
                r6_8 = 0xffffffbe;
            }
            fun_4d68(v12);
        }
    }
    return r6_8;
}

void fun_31d4(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;
    int1_t z5;
    int1_t z6;
    int1_t z7;
    int1_t z8;

    if (z3) {
    }
    if (z4) {
    }
    if (z5) {
    }
    if (z6) {
    }
    if (z7) {
    }
    if (!z8) 
        goto "???";
}

void fun_3214(struct s0* r0, struct s0* r1, struct s0* r2) {
    int1_t z4;
    struct s0* v5;
    uint32_t r8_6;
    struct s0* sp7;
    struct s0* r0_8;
    struct s0* r0_9;
    struct s0* r0_10;

    if (z4) {
        *reinterpret_cast<struct s0**>(&r0->f0) = v5;
        r0 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r0) - r8_6);
    }
    sp7 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 - 80);
    r0_8 = fun_4ad4(r0, r1, r2);
    r0_9 = sp7;
    if (r0_8->f28 == 4) {
        r0_10 = fun_4644(r0_9, r1, r2);
        if (reinterpret_cast<signed char>(r0_10) <= reinterpret_cast<signed char>(0)) {
            fun_3204();
        }
        r0_9 = fun_3264(sp7);
        if (reinterpret_cast<signed char>(r0_9) < reinterpret_cast<signed char>(0)) {
            fun_3204();
        }
    }
    fun_52f0(r0_9);
    fun_3154();
    return;
}

void fun_3594(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_3800(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_3770(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_377c(void* r0) {
    void* sp2;
    void* r2_3;

    sp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 12 - 24);
    fun_3778(sp2);
    fun_3478(sp2, r0);
    fun_3774(sp2, r0, r2_3);
    return;
}

uint32_t fun_3964(struct s0* r0, struct s0* r1) {
    struct s0** sp3;
    struct s0* r0_4;

    sp3 = reinterpret_cast<struct s0**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 8);
    r0_4 = fun_3878(r0, r1, sp3 + 4, sp3, 0, 0);
    return ~reinterpret_cast<unsigned char>(r0_4) >> 31;
}

int32_t fun_3fcc() {
    void* sp1;
    int32_t v2;

    sp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 32);
    fun_3e14(sp1, reinterpret_cast<int32_t>(sp1) + 20);
    return v2;
}

struct s0* g3cd0 = reinterpret_cast<struct s0*>(40);

struct s0* fun_3b74(struct s0** r0, struct s0** r1, struct s0* r2, struct s0* r3) {
    int1_t n5;
    struct s0* r11_6;
    struct s0** v7;
    struct s0** r8_8;
    struct s0* r10_9;
    struct s0* r5_10;
    void* r9_11;
    struct s0* r4_12;
    struct s0* r3_13;
    int1_t c14;
    struct s0* r7_15;
    struct s0* r0_16;
    struct s0* r0_17;
    int1_t less18;
    struct s0* r4_19;
    struct s0* r0_20;
    struct s0* r0_21;
    struct s0* r2_22;
    int1_t less23;

    if (n5) {
        r0 = reinterpret_cast<struct s0**>(reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(r0));
    }
    r11_6 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r3) & 2);
    v7 = r1;
    r8_8 = r0;
    r10_9 = r2;
    r5_10 = *r1;
    if (!r11_6) {
        r9_11 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*r0) & 0xff);
        if (r9_11) {
            r4_12 = g3cd0;
            r3_13 = reinterpret_cast<struct s0*>(0x100 - reinterpret_cast<uint32_t>(r9_11));
            c14 = reinterpret_cast<unsigned char>(r5_10) < reinterpret_cast<unsigned char>(r3_13);
            if (!c14) {
                r7_15 = r5_10;
            }
            if (c14) {
                r7_15 = r3_13;
            }
            fun_538c(r4_12, 0xff, 0x100);
            r0_16 = fun_50a0(reinterpret_cast<uint32_t>(r9_11) + reinterpret_cast<unsigned char>(r4_12), r10_9, r7_15, r3_13, v7);
            __asm__("bic r0, r6, #0xff");
            r0_17 = fun_3ac4(r0_16, 0x100, r4_12, r3_13);
            less18 = reinterpret_cast<signed char>(r0_17) < reinterpret_cast<signed char>(0);
            r3 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(*r8_8) + reinterpret_cast<unsigned char>(r7_15));
            *r8_8 = r3;
            if (!less18) {
                r10_9 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r10_9) + reinterpret_cast<unsigned char>(r7_15));
            }
            if (!less18) {
                r5_10 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r5_10) - reinterpret_cast<unsigned char>(r7_15));
            }
            if (!less18) 
                goto label_16; else 
                goto addr_3c04_17;
        }
    }
    r0_17 = reinterpret_cast<struct s0*>(0);
    while (1) {
        addr_3c0c_19:
        r4_19 = reinterpret_cast<struct s0*>(0x1000);
        if (reinterpret_cast<unsigned char>(r5_10) >= reinterpret_cast<unsigned char>(0x1000)) {
            r4_19 = reinterpret_cast<struct s0*>(0x400);
            if (reinterpret_cast<unsigned char>(r5_10) >= reinterpret_cast<unsigned char>(0x400)) {
                r4_19 = reinterpret_cast<struct s0*>(0x200);
                if (reinterpret_cast<unsigned char>(r5_10) >= reinterpret_cast<unsigned char>(0x200)) {
                    r4_19 = reinterpret_cast<struct s0*>(0x100);
                    if (reinterpret_cast<unsigned char>(r5_10) <= reinterpret_cast<unsigned char>(0xff)) 
                        goto label_26;
                }
            }
        }
        r0_17 = fun_3ac4(*r8_8, r4_19, r10_9, r3);
        r10_9 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r10_9) + reinterpret_cast<unsigned char>(r4_19));
        if (reinterpret_cast<signed char>(r0_17) < reinterpret_cast<signed char>(0)) 
            break;
        r5_10 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r5_10) - reinterpret_cast<unsigned char>(r4_19));
        r3 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(*r8_8) + reinterpret_cast<unsigned char>(r4_19));
        *r8_8 = r3;
    }
    addr_3cc0_30:
    *v7 = r5_10;
    addr_3cc8_31:
    return r0_17;
    label_26:
    if (r11_6) {
        goto addr_3cc0_30;
    } else {
        if (!r5_10) {
            goto addr_3cc0_30;
        } else {
            r0_20 = g3cd0;
            fun_538c(r0_20, 0xff, 0x100);
            r0_21 = g3cd0;
            fun_50a0(r0_21, r10_9, r5_10, r3, v7);
            r2_22 = g3cd0;
            r0_17 = fun_3ac4(*r8_8, 0x100, r2_22, r3);
            less23 = reinterpret_cast<signed char>(r0_17) < reinterpret_cast<signed char>(0);
            if (!less23) {
                r3 = *r8_8;
            }
            if (!less23) {
                r3 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r3) + reinterpret_cast<unsigned char>(r5_10));
            }
            if (!less23) {
                *r8_8 = r3;
            }
            if (!less23) {
                r5_10 = r11_6;
                goto addr_3cc0_30;
            }
        }
    }
    label_16:
    goto addr_3c0c_19;
    addr_3c04_17:
    goto addr_3cc8_31;
}

void fun_3cd0(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

uint32_t fun_3d84(uint32_t r0) {
    int1_t n2;

    if (n2) {
        r0 = r0 & r0;
    }
    return r0;
}

void fun_3e10(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_3e84(int32_t r0) {
    void* sp2;

    sp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 32);
    fun_3e14(sp2, reinterpret_cast<int32_t>(sp2) + 20);
    return;
}

struct s39 {
    signed char[20] pad20;
    int32_t f20;
    signed char[4] pad28;
    int32_t f28;
};

void fun_4044(struct s39* r0) {
    int32_t r3_2;
    int32_t r3_3;
    int32_t v4;

    r0->f20(r0->f28, r3_2, r3_3 + v4);
    return;
}

void* g435c = reinterpret_cast<void*>(0x5f10);

struct s0* g4360 = reinterpret_cast<struct s0*>(44);

struct s0* g4364 = reinterpret_cast<struct s0*>(4);

struct s0* fun_42d0(struct s0* r0, struct s0* r1, struct s0* r2, uint32_t r3) {
    int1_t n5;
    uint32_t r8_6;
    int1_t z7;
    int1_t z8;
    int1_t z9;
    int32_t r8_10;
    int1_t z11;
    int1_t z12;
    void* r1_13;
    struct s0* r0_14;
    struct s0* r12_15;
    struct s0* r2_16;
    struct s0* r4_17;
    struct s0* r3_18;
    struct s0* r12_19;
    struct s0* r0_20;

    if (n5) {
        r0 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r0) & r8_6 >> 4);
    }
    if (z7) {
    }
    if (z8) {
    }
    if (z9) {
        r0 = reinterpret_cast<struct s0*>(r8_10 * r3);
    }
    if (z11) {
    }
    if (z12) {
    }
    r1_13 = g435c;
    r0_14 = fun_102c(r0, r1_13, r2);
    r12_15 = r0_14;
    r2_16 = g4360;
    r4_17 = reinterpret_cast<struct s0*>(0xfffffffe);
    if (r12_15) {
        r3_18 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 16 - 20 + 20 + 0xfffffffc);
        r12_19 = g4364;
        r0_20 = fun_4144(r1, r2, r2_16, r3_18, r12_19, r3, 0, 0xffffffff);
        r4_17 = r0_20;
        fun_1028(r12_15, r2, r2_16, r3_18, r12_19, r3, 0, 0xffffffff);
    }
    return r4_17;
}

int32_t fun_4430(struct s16* r0, int32_t r1, struct s0* r2, struct s0* r3, void* a5) {
    struct s0*** sp6;
    struct s16* r10_7;
    struct s0* r12_8;
    struct s0* r7_9;
    int1_t c10;
    struct s0* r5_11;
    int32_t r8_12;
    int1_t below_or_equal13;
    struct s0* r4_14;
    uint32_t r6_15;
    int1_t c16;
    struct s0* r9_17;
    uint32_t r1_18;
    struct s0** v19;
    int32_t r0_20;
    int1_t c21;
    struct s0* v22;
    struct s0* r0_23;

    sp6 = reinterpret_cast<struct s0***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 32 - 0x108);
    r10_7 = r0;
    r12_8 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r3) + reinterpret_cast<uint32_t>(a5));
    r7_9 = r2;
    if (reinterpret_cast<unsigned char>(r12_8) > reinterpret_cast<unsigned char>(r0->f32)) {
        if (reinterpret_cast<unsigned char>(r3) <= reinterpret_cast<unsigned char>(r10_7->f36)) {
            c10 = reinterpret_cast<unsigned char>(r3) < reinterpret_cast<unsigned char>(r0->f32);
            if (c10) {
                r5_11 = r3;
            }
            if (!c10) {
                r5_11 = r0->f32;
            }
            if (reinterpret_cast<unsigned char>(r5_11) <= reinterpret_cast<unsigned char>(0x7e000)) 
                goto label_10; else 
                goto addr_447c_11;
        }
    }
    addr_451c_12:
    r8_12 = 0;
    addr_4520_13:
    return r8_12;
    label_10:
    goto addr_451c_12;
    addr_447c_11:
    if (reinterpret_cast<unsigned char>(r5_11) < reinterpret_cast<unsigned char>(r10_7->f36)) {
        goto addr_451c_12;
    } else {
        below_or_equal13 = reinterpret_cast<unsigned char>(r12_8) <= reinterpret_cast<unsigned char>(r10_7->f36);
        if (below_or_equal13) {
            r4_14 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r12_8) - reinterpret_cast<unsigned char>(r5_11));
        }
        if (!below_or_equal13) {
            r4_14 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r10_7->f36) - reinterpret_cast<unsigned char>(r5_11));
        }
        fun_538c(r5_11, 0, r4_14);
        r6_15 = r1 + (reinterpret_cast<unsigned char>(r5_11) - reinterpret_cast<unsigned char>(r3));
        if (reinterpret_cast<unsigned char>(r7_9) < reinterpret_cast<unsigned char>(r4_14)) {
            r7_9 = r4_14;
        }
        r8_12 = 0;
        while (1) {
            c16 = reinterpret_cast<unsigned char>(r7_9) < reinterpret_cast<unsigned char>(0x100);
            if (!c16) {
                r4_14 = r7_9;
            }
            if (c16) {
                r4_14 = reinterpret_cast<struct s0*>(0x100);
            }
            r9_17 = reinterpret_cast<struct s0*>(sp6 + 1);
            r1_18 = r6_15;
            r6_15 = r6_15 + reinterpret_cast<unsigned char>(r4_14);
            r7_9 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r7_9) - reinterpret_cast<unsigned char>(r4_14));
            if (!r4_14) 
                break;
            v19 = reinterpret_cast<struct s0**>(sp6 + 65);
            r0_20 = fun_401c(r10_7, r1_18, r9_17, r4_14, v19);
            c21 = reinterpret_cast<unsigned char>(v22) < reinterpret_cast<unsigned char>(r4_14);
            r8_12 = r0_20;
            r0_23 = r5_11;
            r5_11 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r5_11) + reinterpret_cast<unsigned char>(r4_14));
            if (!c21) {
                r8_12 = -8;
            }
            if (!c21) 
                goto label_30;
            fun_50a0(r0_23, r9_17, r4_14, v22, v19);
        }
    }
    goto addr_4520_13;
    label_30:
    goto addr_4520_13;
}

struct s0** fun_452c(struct s0** r0, void* r1, struct s0* r2, struct s0* r3, struct s0** a5) {
    int32_t r0_6;
    struct s0** r3_7;
    struct s0* r0_8;
    int1_t z9;

    r0_6 = fun_1034(*r0, r1, 0);
    r3_7 = reinterpret_cast<struct s0**>(-1);
    if (r0_6 >= 0) {
        r0_8 = fun_1030(r2, 1, r3, *r0);
        z9 = r0_8 == r3;
        r3_7 = reinterpret_cast<struct s0**>(-11);
        if (z9) {
            r3_7 = a5;
        }
        if (z9) {
            *r3_7 = r0_8;
        }
        if (z9) {
            r3_7 = reinterpret_cast<struct s0**>(0);
        }
    }
    return r3_7;
}

void fun_4ad0(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_4768(int64_t* r0) {
    int1_t z2;
    int64_t v3;

    if (!z2) 
        goto "???";
    *r0 = v3;
}

struct s4* g4a64 = reinterpret_cast<struct s4*>(0x40000004);

struct s4* g4a68 = reinterpret_cast<struct s4*>(0x6104);

struct s0* g4a6c = reinterpret_cast<struct s0*>(0);

void fun_490c(struct s0* r0, struct s0* r1) {
    uint32_t lr3;
    int1_t z4;
    int1_t z5;
    int32_t r4_6;
    uint32_t r4_7;
    int1_t z8;
    int1_t z9;
    struct s0* r3_10;
    int1_t z11;
    int1_t n12;
    uint32_t r4_13;
    int1_t z14;
    uint32_t r7_15;
    int1_t z16;
    int1_t z17;
    struct s0* r2_18;
    struct s0* r5_19;
    struct s0* r8_20;
    struct s4* r0_21;
    struct s0* v22;
    struct s4* r0_23;
    int1_t z24;
    struct s0* r0_25;
    struct s0* r0_26;
    struct s0* r0_27;
    int32_t r0_28;
    struct s0* r0_29;
    struct s0* r2_30;
    int32_t r0_31;
    struct s0* r0_32;

    lr3 = reinterpret_cast<uint32_t>(__return_address());
    if (z4) {
    }
    if (z5) {
        *reinterpret_cast<struct s0**>(&r0->f0) = reinterpret_cast<struct s0*>(static_cast<uint16_t>(r4_6));
        r0 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r0) - r4_7);
    }
    if (z8) {
    }
    if (z9) {
        r3_10 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r0) & reinterpret_cast<unsigned char>(r0));
    }
    if (z11) {
    }
    if (n12) {
        r0 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r0) & r4_13);
    }
    if (z14) {
        lr3 = r7_15 & reinterpret_cast<unsigned char>(r0);
    }
    if (z16) {
    }
    if (z17) {
    }
    r2_18 = r0->f4;
    r5_19 = r0;
    r8_20 = r1;
    if (r2_18) {
        r0_21 = g4a64;
        r1 = r3_10;
        r2_18 = v22;
        r0 = fun_476c(r0_21, r1, r2_18);
        if (!r0) {
            r5_19->f4 = r0;
        }
    }
    if (r5_19->f8) {
        r0_23 = g4a68;
        r1 = r3_10;
        r2_18 = v22;
        r0 = fun_476c(r0_23, r1, r2_18);
        if (!r0) {
            r5_19->f8 = r0;
        }
    }
    if (!r5_19->f4) {
        z24 = r5_19->f8 == 0;
        if (z24) {
            r0 = reinterpret_cast<struct s0*>(1);
        }
        if (z24) {
            goto lr3;
        }
    }
    r0_25 = fun_4ad4(r0, r1, r2_18);
    if (reinterpret_cast<unsigned char>(r3_10) <= reinterpret_cast<unsigned char>(r0_25)) {
        r0_26 = fun_4ad4(r0_25, r1, r2_18);
        if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(r3_10) + reinterpret_cast<unsigned char>(v22)) < reinterpret_cast<unsigned char>(r0_26)) {
            r0_27 = fun_4ad4(r0_26, r1, r2_18);
            r0_28 = fun_1034(*reinterpret_cast<struct s0**>(&r5_19->f0), reinterpret_cast<unsigned char>(r8_20) + reinterpret_cast<unsigned char>(r0_27) - reinterpret_cast<unsigned char>(r3_10), 0);
            if (r0_28 < 0) {
                goto addr_4a54_39;
            } else {
                r0_29 = fun_1030(reinterpret_cast<unsigned char>(r5_19) + 12, 1, 32, *reinterpret_cast<struct s0**>(&r5_19->f0));
                if (reinterpret_cast<unsigned char>(r0_29) <= reinterpret_cast<unsigned char>(31)) {
                    goto addr_4a54_39;
                }
            }
        }
    }
    r2_30 = g4a6c;
    if (reinterpret_cast<unsigned char>(r3_10) <= reinterpret_cast<unsigned char>(r2_30)) {
        if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(r3_10) + reinterpret_cast<unsigned char>(v22)) < reinterpret_cast<unsigned char>(r2_30)) {
            r0_31 = fun_1034(*reinterpret_cast<struct s0**>(&r5_19->f0), reinterpret_cast<unsigned char>(r8_20) - reinterpret_cast<unsigned char>(r3_10) + reinterpret_cast<unsigned char>(r2_30), 0);
            if (r0_31 < 0) {
                goto addr_4a54_39;
            } else {
                r0_32 = fun_1030(&r5_19->f44, 1, 32, *reinterpret_cast<struct s0**>(&r5_19->f0));
                if (reinterpret_cast<unsigned char>(r0_32) <= reinterpret_cast<unsigned char>(31)) {
                    addr_4a54_39:
                    goto lr3;
                }
            }
        }
    }
    goto lr3;
}

int32_t fun_4a64(struct s0** r0, void* r1, struct s0* r2) {
    int1_t n4;
    uint32_t r4_5;
    int1_t z6;
    int1_t z7;
    struct s0* r3_8;
    int32_t r0_9;
    struct s0* r3_10;
    struct s0* r0_11;
    int1_t z12;
    struct s0* v13;
    int32_t r2_14;

    if (n4) {
        r0 = reinterpret_cast<struct s0**>(reinterpret_cast<uint32_t>(r0) & r4_5);
    }
    if (z6) {
    }
    if (z7) {
        r3_8 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(r0) << 2);
    }
    r0_9 = fun_1034(*r0, r1, 0);
    if (r0_9 >= 0) {
        r3_10 = *r0;
        r0_11 = fun_1030(r2, 1, r3_8, r3_10);
        z12 = r0_11 == r3_8;
        if (z12) {
            r3_10 = v13;
        }
        r2_14 = 0;
        if (z12) {
            *reinterpret_cast<struct s0**>(&r3_10->f0) = r0_11;
        }
        if (z12) 
            goto label_14;
    }
    r2_14 = -5;
    addr_4ac0_16:
    return r2_14;
    label_14:
    goto addr_4ac0_16;
}

struct s40 {
    signed char[140] pad140;
    int32_t f140;
};

struct s40* g4b68 = reinterpret_cast<struct s40*>(0xe01fc000);

void fun_4b50() {
    struct s40* r3_1;

    r3_1 = g4b68;
    r3_1->f140 = 0xaa;
    r3_1->f140 = 85;
    return;
}

void fun_4c04(int32_t r0) {
}

struct s41 {
    unsigned char f0;
    signed char[19] pad20;
    unsigned char f20;
};

uint32_t fun_505c(struct s41** r0) {
    struct s41* r0_2;
    unsigned char* r2_3;

    if (!(0x5064 & reinterpret_cast<uint32_t>(r0))) {
    }
    r0_2 = *r0;
    r2_3 = &r0_2->f20;
    while (!(static_cast<uint32_t>(*r2_3) & 1)) {
    }
    return static_cast<uint32_t>(r0_2->f0);
}

void fun_54c0(int32_t r0) {
    int1_t below_or_equal2;
    uint32_t v3;
    int32_t v4;
    uint32_t v5;
    int32_t r10_6;

    if (r0) {
        goto 0x5558;
    } else {
        below_or_equal2 = v3 <= 31;
        if (below_or_equal2) {
        }
        if (below_or_equal2) {
            goto 0x5558;
        } else {
            if (v4 != 1) {
                goto 0x5534;
            } else {
                if (!(v5 & 4)) {
                }
                if (v5 & 2) {
                }
                if (v5 & 1) {
                }
                __asm__("stm sp, {r6, ip}");
                goto r10_6;
            }
        }
    }
}

void fun_5740(int32_t r0, int32_t r1) {
    int1_t n3;
    int1_t z4;
    int1_t n5;

    if (n3) {
    }
    if (z4) {
    }
    if (!n5) 
        goto "???";
}

uint32_t fun_4dc8(int32_t r0) {
    __asm__("mrs r2, apsr");
    __asm__("bic r1, r1, r0");
    __asm__("msr cpsr_fc, r1");
    return reinterpret_cast<uint32_t>(~r0) & 64;
}

void fun_5948(int32_t r0, int32_t r1) {
    int1_t n3;
    int1_t z4;
    int1_t n5;

    if (n3) {
    }
    if (z4) {
    }
    if (!n5) 
        goto "???";
}

void fun_4d88(int32_t* r0) {
    int32_t r12_2;

    __asm__("mrs ip, apsr");
    __asm__("bic r1, r1, r3");
    __asm__("msr cpsr_fc, r1");
    *r0 = r12_2;
    return;
}

void fun_59e8(uint32_t r0, uint32_t r1, uint32_t r2, uint32_t r3, int32_t a5, int32_t a6, uint32_t a7) {
    int1_t n8;
    uint32_t r12_9;

    if (n8) {
        r0 = r0 & r12_9 >> 6;
    }
    fun_5954(r0, r1, 0, a7, 0);
    fun_5954(r2, r3, 0, a7, 0);
    goto fun_5954;
}

int32_t g5bb8 = 0x4000032c;

void* g5bbc = reinterpret_cast<void*>(0x6158);

uint32_t fun_5b64(uint32_t r0, uint32_t r1) {
    int1_t n3;
    uint32_t r12_4;
    int1_t below_or_equal5;
    uint32_t r3_6;
    int32_t r3_7;
    void* r3_8;

    if (n3) {
        r0 = r0 & r12_4 >> 6;
    }
    below_or_equal5 = r0 <= 4;
    if (below_or_equal5) {
        below_or_equal5 = r1 <= 31;
    }
    r3_6 = 0xffffffea;
    if (below_or_equal5) {
        r3_7 = g5bb8;
        r3_6 = 0xfffffff3;
        if (1 & *reinterpret_cast<uint32_t*>(r3_7 + r0 << 2)) {
            r3_8 = g5bbc;
            r3_6 = **reinterpret_cast<uint32_t**>(r0 * 36 + reinterpret_cast<int32_t>(r3_8) + 24) & 1;
        }
    }
    return r3_6;
}

void fun_5bb8(int32_t r0, int32_t r1) {
    int1_t n3;
    int1_t z4;

    if (n3) {
    }
    if (!z4) 
        goto "???";
}

uint32_t fun_5cb8(uint32_t r0, uint32_t r1) {
    uint32_t r0_3;

    r0_3 = fun_5bc0(r0, r1);
    return r0_3;
}

void* fun_5df8(void* r0, void* r1, void* r2) {
    void* r0_4;

    r0_4 = fun_5cd0(r0, r1, r2);
    return r0_4;
}

struct s42 {
    signed char[196] pad196;
    uint32_t f196;
};

struct s42* g4b9c = reinterpret_cast<struct s42*>(0xe01fc000);

void fun_4b84(int32_t r0) {
    struct s42* r2_2;

    r2_2 = g4b9c;
    r2_2->f196 = r2_2->f196 | 0x40000000;
    return;
}

void fun_3330(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;
    int1_t n5;
    int1_t z6;
    int1_t z7;
    int1_t z8;

    if (z3) {
    }
    if (z4) {
    }
    if (n5) {
    }
    if (z6) {
    }
    if (z7) {
    }
    if (!z8) 
        goto "???";
}

void fun_37b0(void* r0) {
    void* sp2;

    sp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 12 - 24);
    fun_3778(sp2);
    fun_34a8(sp2, r0, 0);
    fun_3774(sp2, r0, 0);
    return;
}

int32_t fun_3ff4() {
    void* sp1;
    int32_t v2;

    sp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 32);
    fun_3e14(sp1, reinterpret_cast<int32_t>(sp1) + 20);
    return v2;
}

int32_t fun_3eac() {
    void* sp1;
    int32_t* r3_2;
    int32_t v3;
    int32_t v4;

    sp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 - 32);
    __asm__("stmib sp, {r0, r1}");
    fun_3e14(sp1, reinterpret_cast<int32_t>(sp1) + 20);
    *r3_2 = v3;
    return v4;
}

int32_t fun_4068(struct s16* r0, int32_t r1, void* r2, struct s0* r3, void* a5) {
    struct s0* lr6;
    struct s0* r8_7;
    int1_t below_or_equal8;
    int32_t r12_9;
    struct s0* r7_10;
    int1_t c11;
    void* r2_12;
    void* r1_13;
    int1_t below_or_equal14;
    struct s0* r2_15;
    int32_t r0_16;
    int1_t less17;

    lr6 = r3;
    r8_7 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r0->f4) + 0x100);
    below_or_equal8 = reinterpret_cast<unsigned char>(r8_7) <= reinterpret_cast<unsigned char>(r3);
    if (!below_or_equal8) {
        r3 = reinterpret_cast<struct s0*>(0);
    }
    if (below_or_equal8) {
        r3 = reinterpret_cast<struct s0*>(1);
    }
    if (reinterpret_cast<unsigned char>(r0->f4) > reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(lr6) + reinterpret_cast<uint32_t>(a5))) {
        r3 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r3) | 1);
    }
    r12_9 = 0;
    r7_10 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(lr6) + reinterpret_cast<uint32_t>(r2));
    if (!r3) {
        c11 = reinterpret_cast<unsigned char>(lr6) < reinterpret_cast<unsigned char>(r0->f4);
        if (c11) {
            r3 = lr6;
        }
        if (!c11) {
            r3 = r0->f4;
        }
        r2_12 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r3) - reinterpret_cast<unsigned char>(r0->f4));
        r1_13 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r3) - reinterpret_cast<unsigned char>(lr6));
        __asm__("bic r2, r2, #3");
        below_or_equal14 = reinterpret_cast<unsigned char>(r7_10) <= reinterpret_cast<unsigned char>(r8_7);
        if (below_or_equal14) {
            r3 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r7_10) - reinterpret_cast<unsigned char>(r3));
        }
        if (!below_or_equal14) {
            r3 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r8_7) - reinterpret_cast<unsigned char>(r3));
        }
        r2_15 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(r2_12) + reinterpret_cast<uint32_t>(r0->f8));
        r0_16 = fun_401c(r0, r1 + reinterpret_cast<uint32_t>(r1_13), r2_15, r3, reinterpret_cast<int32_t>(__zero_stack_offset()) - 24 - 8 + 4);
        r12_9 = r0_16;
        less17 = r12_9 < 0 != __intrinsic();
        if (!less17) {
            r3 = reinterpret_cast<struct s0*>(1);
        }
        if (!less17) {
            r0->f12 = r3;
        }
    }
    return r12_9;
}

void fun_4b68(int32_t r0) {
}

int32_t* g52a8 = reinterpret_cast<int32_t*>(0x40000024);

void fun_529c(int32_t r0) {
    int32_t* r3_2;

    r3_2 = g52a8;
    *r3_2 = r0;
    return;
}

void fun_4de8(int32_t r0) {
    __asm__("mrs r0, apsr");
    __asm__("bic r1, r1, r2");
    __asm__("msr cpsr_fc, r1");
    return;
}

void fun_5ef8(int32_t r0) {
    int1_t z2;
    int32_t* r2_3;

    if (z2) {
        *r2_3 = r0;
    }
}

int32_t g4bd4 = 0x3fffff;

int32_t ge0000004;

int32_t ge0000000;

int32_t ge0000008;

void fun_4b9c(int32_t r0) {
    int32_t r3_2;

    r3_2 = g4bd4;
    ge0000004 = r3_2;
    ge0000000 = 3;
    ge0000008 = 0xaa;
    ge0000008 = 85;
    ge0000008 = 0xaa;
    ge0000008 = 1;
    return;
}

void fun_37e8() {
    goto fun_538c;
}

void fun_3ee8() {
    void* sp1;
    int32_t* r2_2;
    int32_t* r3_3;
    int32_t r3_4;
    int1_t z5;
    int32_t v6;
    int32_t r2_7;
    int32_t v8;
    int32_t v9;
    int32_t* r2_10;

    sp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 12 - 32);
    __asm__("stmib sp, {r0, r1}");
    *r2_2 = 0;
    *r3_3 = 0;
    r3_4 = 53;
    fun_3e14(sp1, reinterpret_cast<int32_t>(sp1) + 20);
    z5 = v6 == 8;
    if (z5) {
        r2_7 = v8;
    }
    if (z5) {
        r3_4 = v9;
    }
    if (z5) {
        *r2_10 = r3_4;
    }
    if (z5) {
        *r3_3 = r2_7;
    }
    return;
}

int32_t g52e4 = 0x631c;

int32_t g52e8 = 0x631c;

struct s43 {
    signed char[4] pad4;
    int32_t f4;
};

struct s43* g52ec = reinterpret_cast<struct s43*>(0x6318);

uint32_t fun_52a8(uint32_t r0) {
    int1_t n2;
    int32_t r3_3;
    int32_t r2_4;
    struct s43* r5_5;
    uint32_t r4_6;

    if (n2) {
        r0 = 0;
    }
    r3_3 = g52e4;
    r2_4 = g52e8;
    r5_5 = g52ec;
    r4_6 = reinterpret_cast<uint32_t>(r3_3 - r2_4) >> 2;
    while (--r4_6, r5_5 = reinterpret_cast<struct s43*>(reinterpret_cast<int32_t>(r5_5) - 4), r4_6 != -1) {
        r0 = reinterpret_cast<uint32_t>(r5_5->f4());
    }
    return r0;
}

void fun_4e04(int32_t r0) {
    __asm__("mrs r0, apsr");
    __asm__("bic r1, r1, r2");
    __asm__("msr cpsr_fc, r1");
    return;
}

struct s44 {
    signed char[192] pad192;
    uint32_t f192;
};

struct s44* g4bec = reinterpret_cast<struct s44*>(0xe01fc000);

void fun_4bd4() {
    int1_t z1;
    struct s44* r2_2;

    if (z1) {
        __asm__("ldrshteq pc, [pc], -pc");
    }
    r2_2 = g4bec;
    r2_2->f192 = r2_2->f192 | 1;
    return;
}

void fun_5298() {
    while (1) {
    }
}
