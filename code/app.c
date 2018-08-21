
void fun_3130(int16_t* r0);

void fun_3120(void** r0, void** r1, void** r2, void** r3) {
    if (reinterpret_cast<unsigned char>(r0) <= reinterpret_cast<unsigned char>(40)) {
        goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(fun_3130) + reinterpret_cast<unsigned char>(r0) << 2);
    } else {
        return;
    }
}

void** g41c8 = reinterpret_cast<void**>(12);

void** fun_6290(void** r0, void** r1, void** r2);

void** fun_4150(void** r0, void** r1) {
    int1_t z3;
    void** r3_4;
    void** r5_5;
    void** r4_6;
    void** r3_7;
    int1_t z8;
    void** r0_9;
    void** r2_10;
    void** r0_11;
    void** r2_12;
    uint32_t r3_13;
    int1_t z14;

    z3 = reinterpret_cast<int1_t>(r1 == 1);
    if (z3) {
        r3_4 = g41c8;
    }
    if (z3) {
    }
    if (z3) {
        *reinterpret_cast<void***>(r3_4) = reinterpret_cast<void**>(0);
    }
    r5_5 = r0;
    r4_6 = reinterpret_cast<void**>(0);
    while (1) {
        r3_7 = g41c8;
        z8 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3_7))) == (reinterpret_cast<unsigned char>(r4_6) & 0xff);
        r0_9 = r4_6;
        if (z8) {
            r0_9 = r4_6;
        }
        r2_10 = r5_5;
        if (z8) {
        }
        if (z8) {
            r2_10 = reinterpret_cast<void**>(0);
        }
        ++r4_6;
        r0_11 = fun_6290(r0_9, 2, r2_10);
        if (reinterpret_cast<int1_t>(r4_6 == 12)) 
            break;
    }
    r2_12 = g41c8;
    r3_13 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(r2_12) + 1) & 0xff;
    z14 = r3_13 == 11;
    *reinterpret_cast<void***>(r2_12) = reinterpret_cast<void**>(static_cast<unsigned char>(r3_13));
    if (z14) {
        r3_13 = 0;
    }
    if (z14) {
        *reinterpret_cast<void***>(r2_12) = reinterpret_cast<void**>(static_cast<unsigned char>(r3_13));
    }
    return r0_11;
}

void** g4244 = reinterpret_cast<void**>(0);

void** fun_41cc(void** r0, void** r1) {
    int1_t z3;
    void** r3_4;
    void** r5_5;
    void** r4_6;
    void** r3_7;
    int1_t z8;
    void** r0_9;
    void** r2_10;
    void** r0_11;
    void** r2_12;
    uint32_t r3_13;
    int1_t z14;

    z3 = reinterpret_cast<int1_t>(r1 == 1);
    if (z3) {
        r3_4 = g4244;
    }
    if (z3) {
    }
    if (z3) {
        *reinterpret_cast<void***>(r3_4) = reinterpret_cast<void**>(11);
    }
    r5_5 = r0;
    r4_6 = reinterpret_cast<void**>(0);
    while (1) {
        r3_7 = g4244;
        z8 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3_7))) == (reinterpret_cast<unsigned char>(r4_6) & 0xff);
        r0_9 = r4_6;
        if (z8) {
            r0_9 = r4_6;
        }
        r2_10 = r5_5;
        if (z8) {
        }
        if (z8) {
            r2_10 = reinterpret_cast<void**>(0);
        }
        ++r4_6;
        r0_11 = fun_6290(r0_9, 1, r2_10);
        if (reinterpret_cast<int1_t>(r4_6 == 12)) 
            break;
    }
    r2_12 = g4244;
    r3_13 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(r2_12) - 1) & 0xff;
    z14 = r3_13 == 0;
    *reinterpret_cast<void***>(r2_12) = reinterpret_cast<void**>(static_cast<unsigned char>(r3_13));
    if (z14) {
        r3_13 = r3_13 + 11;
    }
    if (z14) {
        *reinterpret_cast<void***>(r2_12) = reinterpret_cast<void**>(static_cast<unsigned char>(r3_13));
    }
    return r0_11;
}

void** g414c = reinterpret_cast<void**>(13);

void** fun_4248(void** r0, void** r1, void** r2, void** r3) {
    void** r4_5;
    int1_t z6;
    void** r1_7;
    void** r0_8;
    int1_t z9;
    int1_t z10;
    void** r5_11;
    void** r4_12;
    void** r3_13;
    int1_t z14;
    void** r0_15;
    void** r2_16;
    void** r0_17;
    void** r2_18;
    uint32_t r3_19;
    int1_t z20;
    int1_t z21;
    void** r5_22;
    void** r4_23;
    void** r3_24;
    int1_t z25;
    void** r0_26;
    void** r2_27;
    void** r0_28;
    void** r2_29;
    uint32_t r3_30;
    int1_t z31;
    int1_t z32;
    void** r5_33;
    void** r4_34;
    void** r3_35;
    int1_t z36;
    void** r0_37;
    void** r2_38;
    void** r0_39;
    void** r2_40;
    uint32_t r3_41;
    int1_t z42;
    int1_t z43;

    r4_5 = r1;
    if (!reinterpret_cast<int1_t>(r0 == 1)) {
        if (!r1) 
            goto addr_42b8_4;
    } else {
        z6 = r1 == 0;
        if (z6) {
            r1 = r0;
        }
        if (z6) 
            goto label_8; else 
            goto addr_4268_9;
    }
    r1_7 = reinterpret_cast<void**>(0);
    r0_8 = fun_4150(1, 0);
    if (reinterpret_cast<unsigned char>(r4_5) > reinterpret_cast<unsigned char>(14)) 
        goto addr_42dc_12;
    addr_4300_14:
    if (reinterpret_cast<unsigned char>(r4_5) <= reinterpret_cast<unsigned char>(24)) {
        return r0_8;
    } else {
        z9 = reinterpret_cast<int1_t>(r4_5 == 25);
    }
    addr_430c_17:
    if (z9) {
        r0_8 = reinterpret_cast<void**>(1);
    }
    if (z9) {
        r1_7 = r0_8;
    }
    if (!z9) {
        r0_8 = reinterpret_cast<void**>(1);
        r1_7 = reinterpret_cast<void**>(0);
    }
    z10 = reinterpret_cast<int1_t>(r1_7 == 1);
    if (z10) {
        r3 = g414c;
    }
    if (z10) {
        r2 = reinterpret_cast<void**>(0);
    }
    if (z10) {
        *reinterpret_cast<void***>(r3) = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint32_t>(r2)));
    }
    r5_11 = r0_8;
    r4_12 = reinterpret_cast<void**>(0);
    while (1) {
        r3_13 = g414c;
        z14 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3_13))) == (reinterpret_cast<unsigned char>(r4_12) & 0xff);
        r0_15 = r4_12;
        if (z14) {
            r0_15 = r4_12;
        }
        r2_16 = r5_11;
        if (z14) {
        }
        if (z14) {
            r2_16 = reinterpret_cast<void**>(0);
        }
        ++r4_12;
        r0_17 = fun_6290(r0_15, 4, r2_16);
        if (reinterpret_cast<int1_t>(r4_12 == 12)) 
            break;
    }
    r2_18 = g414c;
    r3_19 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(r2_18) + 1) & 0xff;
    z20 = r3_19 == 11;
    *reinterpret_cast<void***>(r2_18) = reinterpret_cast<void**>(static_cast<unsigned char>(r3_19));
    if (z20) {
        r3_19 = 0;
    }
    if (z20) {
        *reinterpret_cast<void***>(r2_18) = reinterpret_cast<void**>(static_cast<unsigned char>(r3_19));
    }
    return r0_17;
    addr_42dc_12:
    if (!reinterpret_cast<int1_t>(r4_5 == 15)) {
        r1_7 = reinterpret_cast<void**>(0);
        r0_8 = fun_41cc(1, 0);
        goto addr_4300_14;
    } else {
        r0_8 = reinterpret_cast<void**>(1);
    }
    addr_42e8_49:
    z21 = reinterpret_cast<int1_t>(r0_8 == 1);
    if (z21) {
        r3 = g4244;
    }
    if (z21) {
        r2 = reinterpret_cast<void**>(11);
    }
    if (z21) {
        *reinterpret_cast<void***>(r3) = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint32_t>(r2)));
    }
    r5_22 = r0_8;
    r4_23 = reinterpret_cast<void**>(0);
    while (1) {
        r3_24 = g4244;
        z25 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3_24))) == (reinterpret_cast<unsigned char>(r4_23) & 0xff);
        r0_26 = r4_23;
        if (z25) {
            r0_26 = r4_23;
        }
        r2_27 = r5_22;
        if (z25) {
        }
        if (z25) {
            r2_27 = reinterpret_cast<void**>(0);
        }
        ++r4_23;
        r0_28 = fun_6290(r0_26, 1, r2_27);
        if (reinterpret_cast<int1_t>(r4_23 == 12)) 
            break;
    }
    r2_29 = g4244;
    r3_30 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(r2_29) - 1) & 0xff;
    z31 = r3_30 == 0;
    *reinterpret_cast<void***>(r2_29) = reinterpret_cast<void**>(static_cast<unsigned char>(r3_30));
    if (z31) {
        r3_30 = r3_30 + 11;
    }
    if (z31) {
        *reinterpret_cast<void***>(r2_29) = reinterpret_cast<void**>(static_cast<unsigned char>(r3_30));
    }
    return r0_28;
    addr_42b8_4:
    r0 = reinterpret_cast<void**>(1);
    r1 = reinterpret_cast<void**>(1);
    addr_42c0_70:
    z32 = reinterpret_cast<int1_t>(r1 == 1);
    if (z32) {
        r3 = g41c8;
    }
    if (z32) {
        r2 = reinterpret_cast<void**>(0);
    }
    if (z32) {
        *reinterpret_cast<void***>(r3) = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint32_t>(r2)));
    }
    r5_33 = r0;
    r4_34 = reinterpret_cast<void**>(0);
    while (1) {
        r3_35 = g41c8;
        z36 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3_35))) == (reinterpret_cast<unsigned char>(r4_34) & 0xff);
        r0_37 = r4_34;
        if (z36) {
            r0_37 = r4_34;
        }
        r2_38 = r5_33;
        if (z36) {
        }
        if (z36) {
            r2_38 = reinterpret_cast<void**>(0);
        }
        ++r4_34;
        r0_39 = fun_6290(r0_37, 2, r2_38);
        if (reinterpret_cast<int1_t>(r4_34 == 12)) 
            break;
    }
    r2_40 = g41c8;
    r3_41 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(r2_40) + 1) & 0xff;
    z42 = r3_41 == 11;
    *reinterpret_cast<void***>(r2_40) = reinterpret_cast<void**>(static_cast<unsigned char>(r3_41));
    if (z42) {
        r3_41 = 0;
    }
    if (z42) {
        *reinterpret_cast<void***>(r2_40) = reinterpret_cast<void**>(static_cast<unsigned char>(r3_41));
    }
    return r0_39;
    label_8:
    goto addr_42c0_70;
    addr_4268_9:
    r1_7 = reinterpret_cast<void**>(0);
    r0_8 = fun_4150(r0, 0);
    if (reinterpret_cast<unsigned char>(r4_5) > reinterpret_cast<unsigned char>(3)) {
        z43 = reinterpret_cast<int1_t>(r4_5 == 4);
        if (z43) {
            r0_8 = r0;
        }
        if (z43) 
            goto label_95; else 
            goto addr_4284_96;
    }
    addr_4290_97:
    if (reinterpret_cast<unsigned char>(r4_5) <= reinterpret_cast<unsigned char>(6)) {
        return r0_8;
    } else {
        z9 = reinterpret_cast<int1_t>(r4_5 == 7);
        goto addr_430c_17;
    }
    label_95:
    goto addr_42e8_49;
    addr_4284_96:
    r1_7 = reinterpret_cast<void**>(0);
    r0_8 = fun_41cc(r0, 0);
    goto addr_4290_97;
}

void** fun_58dc(void* r0, int32_t r1, int32_t r2) {
    void* r2_4;
    void** r0_5;

    r2_4 = r0;
    r0_5 = reinterpret_cast<void**>(0);
    do {
        if (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r0_5) + reinterpret_cast<uint32_t>(r2_4))) == 0xff) 
            break;
        ++r0_5;
    } while (r0_5 != 5);
    goto label_5;
    return r0_5;
    label_5:
    return r0_5;
}

struct s0 {
    signed char[4] pad4;
    int32_t f4;
    unsigned char f5;
    int32_t f8;
};

void fun_5998(struct s0* r0, void** r1, void** r2) {
}

int32_t* g5adc = reinterpret_cast<int32_t*>(0x40000510);

int32_t fun_1088(uint32_t r0);

void** fun_7904(void** r0, void** r1, void** r2);

void**** g5ae0 = reinterpret_cast<void****>(0x4000180c);

void** fun_e7e0(void** r0, void** r1, void** r2, void** r3, void** a5);

void** fun_7928(void** r0, void** r1, void** r2, uint32_t r3);

void** fun_59ac(uint32_t r0, void** r1) {
    int32_t* r3_3;
    int1_t z4;
    void** v5;
    void** r4_6;
    void** r6_7;
    uint32_t r5_8;
    void** r8_9;
    uint32_t r4_10;
    void** r0_11;
    void**** r3_12;
    void* r4_13;
    void*** r0_14;
    void* r2_15;
    void* r4_16;
    void**** r3_17;
    void** r4_18;
    void** r0_19;
    void**** r3_20;
    void* r2_21;
    void*** r12_22;
    void* r1_23;
    void* r2_24;
    void**** r3_25;
    void*** r0_26;
    void** r3_27;

    r3_3 = g5adc;
    z4 = *r3_3 == 0;
    v5 = r4_6;
    r6_7 = r1;
    r5_8 = r0 & 0xff;
    if (z4) {
        fun_1088(r5_8);
        r8_9 = r6_7;
        r4_10 = 0;
        while (r0_11 = fun_7904(r8_9, 1, 2), r4_10 = r4_10 + 1 & 0xff, reinterpret_cast<signed char>(r0_11) <= reinterpret_cast<signed char>(0)) {
            if (r4_10 > 1) 
                goto addr_7968_7;
        }
    } else {
        r3_12 = g5ae0;
        r4_13 = reinterpret_cast<void*>(0);
        r0_14 = *r3_12;
        r2_15 = reinterpret_cast<void*>(0);
        while (static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r2_15) - reinterpret_cast<uint32_t>(r0_14))) != r5_8) {
            r4_13 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r4_13) + 1);
            r2_15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r2_15) + 0x144);
            if (r4_13 == 21) 
                goto label_12;
        }
        goto label_14;
    }
    return r0_11;
    addr_7968_7:
    return r0_11;
    label_14:
    if (!reinterpret_cast<int1_t>(r4_13 == -1)) {
        r4_16 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(0x144) * reinterpret_cast<uint32_t>(r4_13));
        fun_e7e0(r6_7, reinterpret_cast<uint32_t>(r0_14) + (reinterpret_cast<uint32_t>(r4_16) + 4), 0x140, 0x144, v5);
        r3_17 = g5ae0;
        r4_18 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r4_16) + reinterpret_cast<uint32_t>(*r3_17) + 1)));
    } else {
        addr_5a00_19:
        fun_1088(r5_8);
        r0_19 = fun_7928(r6_7, 1, 2, 1);
        r4_18 = r0_19;
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r4_18) < reinterpret_cast<signed char>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(r4_18 == 0))) {
            r3_20 = g5ae0;
            r2_21 = reinterpret_cast<void*>(0);
            r12_22 = *r3_20;
            r1_23 = reinterpret_cast<void*>(0);
            while (static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(r1_23) - reinterpret_cast<uint32_t>(r12_22))) != -1) {
                r2_21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(r2_21) + 1);
                r1_23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(r1_23) + 0x144);
                if (r2_21 == 21) 
                    goto label_24;
            }
            goto label_26;
        }
    }
    addr_5ad4_27:
    return r4_18;
    label_26:
    r2_24 = reinterpret_cast<void*>(0x144 * reinterpret_cast<int32_t>(r2_21));
    r3_25 = g5ae0;
    r0_26 = *r3_25;
    r3_27 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(r2_24) + reinterpret_cast<uint32_t>(r0_26));
    *reinterpret_cast<void***>(reinterpret_cast<int32_t>(r2_24) + reinterpret_cast<uint32_t>(r12_22)) = reinterpret_cast<void**>(static_cast<unsigned char>(r5_8));
    *reinterpret_cast<void***>(r3_27 + 1) = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint32_t>(r4_18)));
    fun_e7e0(reinterpret_cast<int32_t>(r2_24) + 4 + reinterpret_cast<uint32_t>(r0_26), r6_7, 0x140, r3_27, v5);
    goto addr_5ad4_27;
    label_24:
    goto addr_5ad4_27;
    label_12:
    goto addr_5a00_19;
}

void* g5d20 = reinterpret_cast<void*>(0x113f0);

void** fun_77ec(void** r0, void* r1, void** r2);

void** fun_5ae4(struct s0* r0, void** r1, void** r2) {
    void*** sp4;
    void** v5;
    void* r4_6;
    void** r0_7;
    void** r11_8;
    void** r0_9;
    void** v10;
    void** r4_11;
    void** r5_12;
    void** r2_13;
    void* r3_14;
    void** r0_15;
    int1_t less_or_equal16;
    int1_t less17;
    int1_t z18;
    void** r10_19;
    void** r9_20;
    void** v21;
    void** r8_22;
    void** r7_23;
    int1_t less24;
    void* r6_25;
    void** r3_26;
    int1_t less27;
    void* r1_28;
    void** r0_29;
    void* r3_30;
    unsigned char v31;
    void** r0_32;
    void** r3_33;
    void** r8_34;
    void** r0_35;
    int1_t z36;
    int1_t z37;
    int1_t less38;
    void** r1_39;
    void** r0_40;

    sp4 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 36 - 0x8e0 - 8);
    v5 = r1;
    r4_6 = reinterpret_cast<void*>(sp4 + 0x8d0 + 12);
    __asm__("stm r4, {r0, r1, r2}");
    r0_7 = fun_58dc(r4_6, r0->f4, *reinterpret_cast<int32_t*>(&r0->f5));
    r11_8 = r0_7;
    r0_9 = fun_58dc(reinterpret_cast<uint32_t>(r4_6) + 5, r0->f4, *reinterpret_cast<int32_t*>(&r0->f5));
    v10 = r0_9;
    r4_11 = reinterpret_cast<void**>(0);
    r5_12 = reinterpret_cast<void**>(sp4 + 8);
    while (1) {
        r2_13 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r4_11 + 0x8d0) + 12 + reinterpret_cast<uint32_t>(sp4))));
        r3_14 = g5d20;
        r0_15 = fun_59ac(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(r3_14) + reinterpret_cast<unsigned char>(r2_13))), r5_12);
        less_or_equal16 = reinterpret_cast<signed char>(r0_15) <= reinterpret_cast<signed char>(0);
        if (less_or_equal16) {
            r2_13 = reinterpret_cast<void**>(0);
        }
        if (!less_or_equal16) {
            r2_13 = reinterpret_cast<void**>(1);
        }
        *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(sp4 + 0x8c0 + 8) + reinterpret_cast<unsigned char>(r4_11) << 2) = r0_15;
        ++r4_11;
        less17 = reinterpret_cast<signed char>(r4_11) < reinterpret_cast<signed char>(r11_8);
        if (!less17) {
            r0_15 = reinterpret_cast<void**>(0);
        }
        if (less17) {
            r0_15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r2_13) & 1);
        }
        r5_12 = r5_12 + 0x140;
        if (!r0_15) 
            break;
    }
    z18 = r2_13 == 0;
    if (z18) {
        r10_19 = r2_13;
    }
    if (!z18) {
        r9_20 = v21;
        r10_19 = r0_15;
        r8_22 = r0_15;
        r7_23 = reinterpret_cast<void**>(sp4 + 8);
        while (1) {
            less24 = reinterpret_cast<signed char>(r8_22) < reinterpret_cast<signed char>(r9_20);
            if (!less24) {
            }
            if (!less24) {
            }
            if (!less24) {
                r7_23 = reinterpret_cast<void**>(0);
            }
            if (!less24) 
                break;
            r4_11 = reinterpret_cast<void**>(1);
            r6_25 = reinterpret_cast<void*>(sp4 + 0x148);
            r5_12 = reinterpret_cast<void**>(1);
            while (1) {
                r3_26 = r4_11;
                if (r3_26) {
                    r3_26 = reinterpret_cast<void**>(1);
                }
                less27 = reinterpret_cast<signed char>(r4_11) < reinterpret_cast<signed char>(0);
                if (r4_11) {
                    less27 = reinterpret_cast<signed char>(r5_12) < reinterpret_cast<signed char>(r11_8);
                }
                r1_28 = r6_25;
                r6_25 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r6_25) + 0x140);
                if (!less27) 
                    break;
                r0_29 = fun_77ec(r7_23, r1_28, *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(sp4 + 0x8c0 + 8) + reinterpret_cast<unsigned char>(r5_12) << 2));
                if (!r0_29) {
                    r4_11 = reinterpret_cast<void**>(0);
                }
                ++r5_12;
            }
            if (r3_26) {
                fun_e7e0(reinterpret_cast<uint32_t>(sp4 + 0x8e0 + 8) + (reinterpret_cast<unsigned char>(r10_19) << 4) - 0x2a0, r7_23, 16, r3_26, v5);
                ++r10_19;
            }
            ++r8_22;
            r7_23 = r7_23 + 16;
        }
        while (reinterpret_cast<signed char>(r7_23) < reinterpret_cast<signed char>(v10)) {
            r3_30 = g5d20;
            r0_32 = fun_59ac(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(r3_30) + v31)), sp4 + 0x780 + 8);
            r3_33 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(sp4 + 0x640 + 8) + (reinterpret_cast<unsigned char>(r10_19) << 4));
            r8_34 = r0_32;
            r5_12 = r3_33 - 16;
            r4_11 = r10_19 - 1;
            while (reinterpret_cast<signed char>(r4_11) > reinterpret_cast<signed char>(-1)) {
                r0_35 = fun_77ec(r5_12, sp4 + 0x780 + 8, r8_34);
                z36 = r0_35 == 0;
                if (!z36) {
                    --r10_19;
                }
                if (!z36) {
                    r3_33 = r4_11;
                }
                if (!z36) {
                    while (reinterpret_cast<signed char>(r3_33) < reinterpret_cast<signed char>(r10_19)) {
                        ++r3_33;
                    }
                    r3_33 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(sp4 + 0x8e0 + 8) + (reinterpret_cast<unsigned char>(r3_33) << 4) - 0x290 + 12);
                    __asm__("stm ip, {r0, r1, r2, r3}");
                }
                --r4_11;
                r5_12 = r5_12 - 16;
            }
            ++r7_23;
        }
    }
    z37 = v5 == 0;
    if (!z37) {
        r5_12 = reinterpret_cast<void**>(0);
    }
    if (!z37) {
        r4_11 = r5_12;
    }
    if (!z37) {
        while (less38 = reinterpret_cast<signed char>(r5_12) < reinterpret_cast<signed char>(r10_19), r1_39 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r4_11) + reinterpret_cast<uint32_t>(sp4 + 0x640 + 8)), r0_40 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r4_11) + reinterpret_cast<unsigned char>(v5)), ++r5_12, r4_11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r4_11) + reinterpret_cast<unsigned char>(16)), less38) {
            fun_e7e0(r0_40, r1_39, 16, v5, v5);
        }
    }
    return r10_19;
}

void** fun_1107c(void** r0, void** r1, void** r2);

void* fun_5d24(void** r0, void** r1, void** r2) {
    void** r5_4;
    void** r7_5;
    void* r6_6;
    void** r4_7;
    void** r3_8;
    void** r0_9;
    void** r0_10;

    r5_4 = r0;
    r7_5 = r1;
    if (reinterpret_cast<signed char>(r5_4) < reinterpret_cast<signed char>(0) != __intrinsic()) {
        r5_4 = reinterpret_cast<void**>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(r5_4)));
        r6_6 = reinterpret_cast<void*>(1);
        *reinterpret_cast<void***>(r1) = reinterpret_cast<void**>(45);
    } else {
        r6_6 = reinterpret_cast<void*>(0);
    }
    r4_7 = reinterpret_cast<void**>(1);
    while (r3_8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r4_7) * 10), reinterpret_cast<signed char>(r3_8) <= reinterpret_cast<signed char>(r5_4)) {
        r4_7 = r3_8;
    }
    while (reinterpret_cast<signed char>(r4_7) > reinterpret_cast<signed char>(0)) {
        r0_9 = fun_1107c(r5_4, r4_7, r2);
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r7_5) + reinterpret_cast<uint32_t>(r6_6)) = static_cast<signed char>(reinterpret_cast<uint32_t>(r0_9 + 48));
        r5_4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r5_4) - reinterpret_cast<unsigned char>(r4_7) * reinterpret_cast<unsigned char>(r0_9));
        r0_10 = fun_1107c(r4_7, 10, r2);
        r4_7 = r0_10;
        r6_6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r6_6) + 1 & 0xff);
    }
    return r6_6;
}

int32_t fun_1064();

void** fun_11288(void** r0, void** r1, void** r2);

void** fun_5eb8(void** r0, void** r1, void** r2, void** r3, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35) {
    int32_t r0_36;
    void** r0_37;

    r0_36 = fun_1064();
    r0_37 = fun_11288(r0_36 >> 10, reinterpret_cast<unsigned char>(r1) - reinterpret_cast<unsigned char>(r0) + 1, r2);
    return reinterpret_cast<unsigned char>(r0) + reinterpret_cast<unsigned char>(r0_37);
}

void fun_6190(void** r0, void** r1, void** r2, void** r3, void** a5) {
}

void** fun_6208(void** r0, void** r1, void** r2, void** r3, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35) {
    return r0;
}

struct s1 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    signed char[4] pad16;
    int32_t f16;
};

struct s1* g623c = reinterpret_cast<struct s1*>(0x40001828);

void fun_6234() {
    struct s1* r0_1;
    int32_t r3_2;
    int1_t less_or_equal3;

    r0_1 = g623c;
    if (r0_1->f8 >= r0_1->f16) {
        goto addr_10bbc_4;
    }
    if (r0_1->f8 < -6) {
        addr_10bbc_4:
        r3_2 = r0_1->f4;
        less_or_equal3 = r3_2 <= -2;
        if (less_or_equal3) {
            r3_2 = r0_1->f0;
            goto addr_10bc8_8;
        }
    }
    addr_10bf4_9:
    r0_1->f8 = r0_1->f8 + r0_1->f0;
    return;
    addr_10bc8_8:
    if (less_or_equal3) {
        r3_2 = -r3_2;
    }
    if (less_or_equal3) {
        r0_1->f0 = r3_2;
    }
    if (less_or_equal3) {
        goto addr_10bf4_9;
    } else {
        if (r3_2 != -1) {
            if (r3_2 <= 0) {
                return;
            } else {
                r0_1->f4 = r3_2 - 1;
            }
        }
        r0_1->f8 = -6;
        goto addr_10bf4_9;
    }
}

signed char* g6278 = reinterpret_cast<signed char*>(0x40000518);

struct s2 {
    signed char[8] pad8;
    int32_t f8;
    int32_t f12;
    uint32_t f16;
    signed char* f20;
    int32_t f24;
};

struct s2* g627c = reinterpret_cast<struct s2*>(0x40001828);

void fun_10c08(struct s2* r0, void** r1, void** r2, void** r3, signed char* a5, int32_t a6);

void fun_6240(void** r0, void** r1, void** r2) {
    signed char* r12_4;
    struct s2* r0_5;

    r12_4 = g6278;
    r0_5 = g627c;
    fun_10c08(r0_5, r0, r1, r2, r12_4, 0x80);
    return;
}

unsigned char* g62e0 = reinterpret_cast<unsigned char*>(0x40001810);

void** fun_f064(unsigned char* r0, void** r1, void** r2, void** r3);

void** fun_6290(void** r0, void** r1, void** r2) {
    void** r5_4;
    void** r8_5;
    void** r7_6;
    void** r6_7;
    void** r4_8;
    void** r2_9;
    unsigned char* r0_10;
    void** r0_11;

    r5_4 = reinterpret_cast<void**>(0);
    r8_5 = r0;
    r7_6 = r1;
    r6_7 = r2;
    r4_8 = reinterpret_cast<void**>(0);
    while (1) {
        r2_9 = r4_8;
        r0_10 = g62e0;
        ++r4_8;
        if (reinterpret_cast<unsigned char>(r7_6) & 1) {
            r0_11 = fun_f064(r0_10, r8_5, r2_9, r6_7);
            r5_4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r5_4) | reinterpret_cast<unsigned char>(r0_11));
        }
        if (reinterpret_cast<int1_t>(r4_8 == 3)) 
            break;
    }
    return r5_4;
}

int32_t g62fc = 0x40001810;

int32_t fun_edf8(void** r0, void** r1);

void** fun_62e4(void** r0, void** r1, void** r2, void** r3) {
    int32_t r0_5;
    void** r2_6;
    int32_t r0_7;
    void** r6_8;
    uint32_t r5_9;
    uint32_t r3_10;
    int1_t z11;
    uint32_t r12_12;

    r0_5 = g62fc;
    r2_6 = r1;
    r0_7 = fun_edf8(r0, r2_6);
    r6_8 = reinterpret_cast<void**>(0xffffffff);
    if (r0_7) {
        r5_9 = r0_5 + (reinterpret_cast<unsigned char>(r2_6) << 1);
        r3_10 = reinterpret_cast<uint32_t>(reinterpret_cast<signed char>(r0) >> 3);
        z11 = r2 == 0;
        r12_12 = 1 - r3_10;
        if (!z11) {
            r3_10 = *reinterpret_cast<unsigned char*>(r5_9 + r12_12);
        }
        if (z11) {
            r3_10 = *reinterpret_cast<unsigned char*>(r5_9 + r12_12);
        }
        if (!z11) {
            r2_6 = reinterpret_cast<void**>(1);
        }
        if (z11) {
            r2_6 = reinterpret_cast<void**>(1);
        }
        if (!z11) {
            r3_10 = r3_10 | reinterpret_cast<unsigned char>(r2_6) << (reinterpret_cast<unsigned char>(r0) & 7);
        }
        if (z11) {
            __asm__("biceq r3, r3, r2, lsl lr");
        }
        if (!z11) {
            *reinterpret_cast<signed char*>(r5_9 + r12_12) = static_cast<signed char>(r3_10);
        }
        if (z11) {
            *reinterpret_cast<signed char*>(r5_9 + r12_12) = static_cast<signed char>(r3_10);
        }
        r6_8 = reinterpret_cast<void**>(0);
        if (z11) {
            r6_8 = r2;
        }
    }
    return r6_8;
}

void** g6330 = reinterpret_cast<void**>(16);

void fun_f1dc(void** r0, void** r1, void** r2);

int32_t fun_eedc(void** r0, void** r1, void** r2);

void** fun_f1d8(void** r0, void** r1, void** r2);

void** fun_6328(void** r0, void** r1, void** r2) {
    void** r0_4;
    void** sp5;
    void** r0_6;

    r0_4 = g6330;
    sp5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 12 - 24);
    fun_f1dc(sp5, r1, r2);
    fun_eedc(sp5, r0_4, r2);
    r0_6 = fun_f1d8(sp5, r0_4, r2);
    return r0_6;
}

void*** g635c = reinterpret_cast<void***>(0x40000514);

void** g6360 = reinterpret_cast<void**>(16);

void** fun_ef0c(void** r0, void** r1, void** r2, void** r3);

void** fun_ee24(void** r0, void** r1, void** r2, void** r3);

void** fun_ee68(void** r0, void** r1, void** r2, void** r3);

void** geff8 = reinterpret_cast<void**>(14);

void** fun_6334(void** r0, void** r1, void** r2, void** r3) {
    void*** r3_5;
    void** r3_6;
    void** r1_7;
    void** sp8;
    void** r0_9;
    void** r10_10;
    void** r8_11;
    void** r7_12;
    void** r9_13;
    void** r6_14;
    void** r5_15;
    void** r4_16;
    void** r0_17;
    void** r1_18;
    void** r2_19;
    void** r0_20;
    void** r0_21;
    void** r0_22;
    void** r3_23;
    void** r0_24;

    r3_5 = g635c;
    r3_6 = *r3_5;
    r1_7 = g6360;
    if (!r3_6) {
        sp8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 12 - 24);
        fun_f1dc(sp8, r1_7, 0);
        fun_ef0c(sp8, r1_7, 0, r3_6);
        r0_9 = fun_f1d8(sp8, r1_7, 0);
        return r0_9;
    }
    r10_10 = r3_6;
    r8_11 = r1_7;
    r7_12 = reinterpret_cast<void**>(0);
    r9_13 = reinterpret_cast<void**>(11);
    do {
        r6_14 = reinterpret_cast<void**>(11 - reinterpret_cast<unsigned char>(r9_13));
        r5_15 = reinterpret_cast<void**>(11);
        while (1) {
            r4_16 = reinterpret_cast<void**>(11 - reinterpret_cast<unsigned char>(r5_15));
            if (0) {
                r0_17 = fun_ee24(r8_11, r6_14, r4_16, r3_6);
                r1_18 = r4_16;
                r3_6 = r0_17;
                r2_19 = r9_13;
                r0_20 = r10_10;
            } else {
                if (0) {
                    if (0) 
                        goto label_14; else 
                        goto addr_ef60_15;
                } else {
                    if (!1) 
                        goto addr_ef48_17;
                    r0_21 = fun_ee24(r8_11, r6_14, r4_16, r3_6);
                    r1_18 = r6_14;
                    r3_6 = r0_21;
                    r2_19 = r4_16;
                    r0_20 = r10_10;
                }
            }
            addr_efd0_20:
            fun_ee68(r0_20, r1_18, r2_19, r3_6);
            --r5_15;
            if (!__intrinsic()) 
                break;
            continue;
            label_14:
            r0_22 = fun_ee24(r8_11, r6_14, r4_16, r3_6);
            r1_18 = r9_13;
            r3_6 = r0_22;
            r2_19 = r5_15;
            r0_20 = r10_10;
            goto addr_efd0_20;
            addr_ef60_15:
            r3_23 = geff8;
            if (r3_23) 
                goto addr_ef6c_23;
            r0_24 = fun_ee24(r8_11, r6_14, r4_16, r3_23);
            r1_18 = r5_15;
            r3_6 = r0_24;
            r2_19 = r6_14;
            r0_20 = r10_10;
            goto addr_efd0_20;
        }
        --r9_13;
    } while (__intrinsic());
    goto label_27;
    addr_ef6c_23:
    r7_12 = reinterpret_cast<void**>(0xffffffff);
    addr_eff0_28:
    return r7_12;
    addr_ef48_17:
    goto addr_ef6c_23;
    label_27:
    goto addr_eff0_28;
}

void fun_6364(void** r0, void** r1, void** r2, void** r3) {
}

int32_t g6384 = 0x40001810;

void fun_637c(void** r0, void** r1, void** r2, void** r3) {
    int32_t r0_5;
    int32_t r2_6;

    r0_5 = g6384;
    r2_6 = 0;
    while (*reinterpret_cast<signed char*>(r2_6 + r0_5) = static_cast<signed char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(r2_6 + r0_5))), r2_6 = r2_6 + 2, r2_6 != 24) {
    }
    return;
}

struct s3 {
    unsigned char f0;
    signed char f1;
};

struct s3* g6390 = reinterpret_cast<struct s3*>(0x40001810);

void fun_6388(void** r0, void** r1, void** r2, void** r3) {
    struct s3* r0_5;
    int32_t r2_6;

    r0_5 = g6390;
    r2_6 = 0;
    while (++r2_6, r0_5->f0 = static_cast<unsigned char>(static_cast<uint32_t>(r0_5->f0) & 0x70), r0_5->f1 = 0, ++r0_5, r2_6 != 12) {
    }
    return;
}

uint32_t fun_63a8(void** r0, struct s0* r1, void** r2) {
    void* r2_4;
    uint32_t r12_5;
    uint32_t r3_6;
    int1_t z7;
    uint32_t r3_8;
    uint32_t r12_9;
    uint32_t r2_10;
    int1_t z11;

    r2_4 = reinterpret_cast<void*>(0);
    while (1) {
        r12_5 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(r2_4) + reinterpret_cast<unsigned char>(r0));
        r3_6 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(r2_4) + reinterpret_cast<uint32_t>(r1));
        z7 = r12_5 == 0xff;
        if (z7) {
            z7 = r3_6 == 0xff;
        }
        r2_4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(r2_4) + 1);
        if (z7) 
            break;
        if (r12_5 != r3_6) 
            goto label_6;
        if (reinterpret_cast<int1_t>(r2_4 == 5)) 
            goto addr_63d4_8;
    }
    addr_63d4_8:
    r3_8 = 0;
    while (1) {
        r12_9 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r0 + 5));
        r2_10 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r1) + 5);
        z11 = r12_9 == 0xff;
        if (z11) {
            z11 = r2_10 == 0xff;
        }
        r3_8 = r3_8 + 1 & 0xff;
        if (z11) 
            break;
        ++r0;
        r1 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(r1) + 1);
        if (r12_9 != r2_10) 
            goto label_15;
        if (r3_8 == 5) 
            goto label_17;
    }
    addr_6418_20:
    return 1;
    label_15:
    addr_6410_21:
    return 0;
    label_17:
    goto addr_6418_20;
    label_6:
    goto addr_6410_21;
}

void* g6968 = reinterpret_cast<void*>(0x400005a0);

void* g696c = reinterpret_cast<void*>(0x400005dc);

void** fun_6928(void** r0, void** r1, void** r2) {
    void* r3_4;
    void* r3_5;
    void** r0_6;
    int1_t below_or_equal7;

    r3_4 = g6968;
    if (!*reinterpret_cast<void***>(reinterpret_cast<int32_t>(r3_4) + reinterpret_cast<unsigned char>(r0) << 2)) {
        return *reinterpret_cast<void***>(reinterpret_cast<int32_t>(r3_4) + reinterpret_cast<unsigned char>(r0) << 2);
    } else {
        r3_5 = g696c;
        r0_6 = reinterpret_cast<void**>(1);
        if (static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(r3_5) - reinterpret_cast<unsigned char>(r0))) > 0) {
            return 1;
        } else {
            below_or_equal7 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(r3_4) + reinterpret_cast<unsigned char>(r0) << 2) + 0x1f4) <= reinterpret_cast<unsigned char>(r1);
            if (below_or_equal7) {
                r0_6 = reinterpret_cast<void**>(0);
            }
            if (!below_or_equal7) {
                r0_6 = reinterpret_cast<void**>(1);
            }
            return r0_6;
        }
    }
}

void*** g697c = reinterpret_cast<void***>(0x40000010);

void fun_6970(void** r0, void** r1) {
    void*** r3_3;

    r3_3 = g697c;
    *r3_3 = r0;
    return;
}

int32_t* g698c = reinterpret_cast<int32_t*>(0x40000010);

int32_t fun_6980() {
    int32_t* r3_1;

    r3_1 = g698c;
    return *r3_1;
}

void** fun_1054(void** r0, void** r1, void** r2, void** r3, void** a5, void** a6, void** a7, ...);

void** fun_6990(void** r0, void** r1, void** r2, void** r3) {
    void** r4_5;
    void** r5_6;
    void** r6_7;
    void** r0_8;
    void** r5_9;
    void** r6_10;
    void** r4_11;
    void** r0_12;
    int1_t z13;

    r0_8 = fun_1054(r0, r1, r2, r3, r4_5, r5_6, r6_7);
    r5_9 = reinterpret_cast<void**>(0);
    r6_10 = r0_8;
    r4_11 = reinterpret_cast<void**>(0);
    while (1) {
        r0_12 = fun_6928(r4_11, r6_10, r2);
        z13 = r0_12 == 0;
        if (!z13) {
            r3 = reinterpret_cast<void**>(1);
        }
        if (!z13) {
            r5_9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r5_9) | reinterpret_cast<unsigned char>(r3) << reinterpret_cast<unsigned char>(r4_11));
        }
        ++r4_11;
        if (reinterpret_cast<int1_t>(r4_11 == 15)) 
            break;
    }
    return r5_9;
}

unsigned char* g6a8c = reinterpret_cast<unsigned char*>(0x40000630);

int32_t g6a90 = 0x6bac;

int32_t fun_f268(int32_t r0);

int32_t fun_6a64(void** r0, void** r1) {
    unsigned char* r4_3;
    int32_t r0_4;
    int32_t r0_5;

    r4_3 = g6a8c;
    r0_4 = g6a90;
    if (*r4_3) {
        return r0_4;
    } else {
        r0_5 = fun_f268(r0_4);
        *r4_3 = 1;
        return r0_5;
    }
}

void** g6b98 = reinterpret_cast<void**>(68);

void fun_1118(void** r0, void** r1, void** r2, void** r3);

signed char* g6b9c = reinterpret_cast<signed char*>(0x40000638);

signed char* g6ba0 = reinterpret_cast<signed char*>(0x40000014);

void*** g6ba4 = reinterpret_cast<void***>(0x400005ec);

void** g6ba8 = reinterpret_cast<void**>(52);

void** fun_6a94(void** r0, void** r1, void** r2, void** r3) {
    void** r0_5;
    void** r4_6;
    void** r5_7;
    void** r6_8;
    void** r0_9;
    void** r7_10;
    signed char* r5_11;
    signed char* r6_12;
    void** r8_13;
    void** r4_14;
    void** r1_15;
    void** r0_16;
    void** r12_17;
    void*** r3_18;
    int1_t z19;
    int1_t z20;
    void** r2_21;
    signed char* r6_22;
    signed char* r5_23;
    void** r4_24;
    int1_t z25;

    r0_5 = g6b98;
    fun_1118(r0_5, 0xffffffff, r2, r3);
    r0_9 = fun_1054(r0_5, 0xffffffff, r2, r3, r4_6, r5_7, r6_8);
    r7_10 = reinterpret_cast<void**>(0);
    r5_11 = g6b9c;
    r6_12 = g6ba0;
    r8_13 = r0_9;
    r4_14 = reinterpret_cast<void**>(0);
    while (1) {
        r1_15 = r8_13;
        r0_16 = fun_6928(r4_14, r1_15, r2);
        r12_17 = r0_16;
        if (r0_16) {
            r3_18 = g6ba4;
            r2 = *r3_18;
            z19 = (reinterpret_cast<unsigned char>(r2) & 1 << reinterpret_cast<unsigned char>(r4_14)) == 0;
            if (!z19) {
                r12_17 = reinterpret_cast<void**>(0);
            }
            if (z19) {
                r12_17 = reinterpret_cast<void**>(1);
            }
        }
        if (r12_17 != static_cast<int32_t>(*r5_11)) {
            z20 = static_cast<int32_t>(*r6_12) == 0;
            r2 = r12_17;
            r0_16 = r4_14;
            r1_15 = reinterpret_cast<void**>(1);
            *r5_11 = static_cast<signed char>(reinterpret_cast<uint32_t>(r12_17));
            if (!z20) {
                r7_10 = reinterpret_cast<void**>(1);
            }
            if (!z20) {
                r0_16 = fun_6290(r0_16, 1, r2);
            }
        }
        ++r4_14;
        ++r5_11;
        ++r6_12;
        if (reinterpret_cast<int1_t>(r4_14 == 12)) 
            break;
    }
    r2_21 = g6ba8;
    if (!*reinterpret_cast<void***>(r2_21)) {
        if (r7_10) 
            goto addr_6b88_19;
    } else {
        *reinterpret_cast<void***>(r2_21) = reinterpret_cast<void**>(0);
        r6_22 = g6ba0;
        r5_23 = g6b9c;
        r4_24 = reinterpret_cast<void**>(0);
        while (1) {
            z25 = static_cast<int32_t>(*r6_22) == 0;
            r0_16 = r4_24;
            r1_15 = reinterpret_cast<void**>(1);
            ++r4_24;
            if (!z25) {
                r2_21 = reinterpret_cast<void**>(static_cast<int32_t>(*r5_23));
            }
            if (!z25) {
                r0_16 = fun_6290(r0_16, 1, r2_21);
            }
            ++r6_22;
            ++r5_23;
            if (r4_24 == 12) 
                break;
        }
        goto addr_6b88_19;
    }
    addr_6b8c_29:
    addr_6b88_19:
    fun_6328(r0_16, r1_15, r2_21);
    goto addr_6b8c_29;
}

unsigned char* g6d50 = reinterpret_cast<unsigned char*>(0x400006e0);

void** g6d54 = reinterpret_cast<void**>(0xa0);

void** fun_6d18(void** r0, void** r1, void** r2, void** r3, void** a5) {
    void** r4_6;
    void** r0_7;
    unsigned char* r3_8;
    int1_t z9;
    void** r3_10;
    void** r0_11;
    void** r5_12;
    void** r6_13;
    void** r0_14;
    void** r7_15;
    signed char* r5_16;
    signed char* r6_17;
    void** r8_18;
    void** r4_19;
    void** r1_20;
    void** r0_21;
    void** r12_22;
    void*** r3_23;
    int1_t z24;
    int1_t z25;
    void** r2_26;
    signed char* r6_27;
    signed char* r5_28;
    void** r4_29;
    int1_t z30;

    if (reinterpret_cast<signed char>(r0) > reinterpret_cast<signed char>(14)) {
        return r0;
    }
    r0_7 = fun_1054(r0, r1, r2, r3, r4_6, __return_address(), a5);
    r3_8 = g6d50;
    z9 = reinterpret_cast<int1_t>(r0 == 11);
    if (reinterpret_cast<signed char>(r0) <= reinterpret_cast<signed char>(11)) {
        z9 = static_cast<uint32_t>(*r3_8) == 0;
    }
    r3_10 = g6d54;
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r3_10) + reinterpret_cast<unsigned char>(r0) << 2) = r0_7;
    if (!z9) {
        return r0_7;
    }
    r0_11 = g6b98;
    fun_1118(r0_11, 0xffffffff, r2, r3_10);
    r0_14 = fun_1054(r0_11, 0xffffffff, r2, r3_10, r4_6, r5_12, r6_13);
    r7_15 = reinterpret_cast<void**>(0);
    r5_16 = g6b9c;
    r6_17 = g6ba0;
    r8_18 = r0_14;
    r4_19 = reinterpret_cast<void**>(0);
    while (1) {
        r1_20 = r8_18;
        r0_21 = fun_6928(r4_19, r1_20, r2);
        r12_22 = r0_21;
        if (r0_21) {
            r3_23 = g6ba4;
            r2 = *r3_23;
            z24 = (reinterpret_cast<unsigned char>(r2) & 1 << reinterpret_cast<unsigned char>(r4_19)) == 0;
            if (!z24) {
                r12_22 = reinterpret_cast<void**>(0);
            }
            if (z24) {
                r12_22 = reinterpret_cast<void**>(1);
            }
        }
        if (r12_22 != static_cast<int32_t>(*r5_16)) {
            z25 = static_cast<int32_t>(*r6_17) == 0;
            r2 = r12_22;
            r0_21 = r4_19;
            r1_20 = reinterpret_cast<void**>(1);
            *r5_16 = static_cast<signed char>(reinterpret_cast<uint32_t>(r12_22));
            if (!z25) {
                r7_15 = reinterpret_cast<void**>(1);
            }
            if (!z25) {
                r0_21 = fun_6290(r0_21, 1, r2);
            }
        }
        ++r4_19;
        ++r5_16;
        ++r6_17;
        if (reinterpret_cast<int1_t>(r4_19 == 12)) 
            break;
    }
    r2_26 = g6ba8;
    if (*reinterpret_cast<void***>(r2_26)) 
        goto addr_6b3c_24;
    if (r7_15) 
        goto addr_6b88_27;
    addr_6b8c_29:
    addr_6b88_27:
    fun_6328(r0_21, r1_20, r2_26);
    goto addr_6b8c_29;
    addr_6b3c_24:
    *reinterpret_cast<void***>(r2_26) = reinterpret_cast<void**>(0);
    r6_27 = g6ba0;
    r5_28 = g6b9c;
    r4_29 = reinterpret_cast<void**>(0);
    while (1) {
        z30 = static_cast<int32_t>(*r6_27) == 0;
        r0_21 = r4_29;
        r1_20 = reinterpret_cast<void**>(1);
        ++r4_29;
        if (!z30) {
            r2_26 = reinterpret_cast<void**>(static_cast<int32_t>(*r5_28));
        }
        if (!z30) {
            r0_21 = fun_6290(r0_21, 1, r2_26);
        }
        ++r6_27;
        ++r5_28;
        if (r4_29 == 12) 
            break;
    }
    goto addr_6b88_27;
}

void** g6da0 = reinterpret_cast<void**>(0xe0);

void fun_f290(void** r0, void** r1, void** r2);

uint32_t* g6da4 = reinterpret_cast<uint32_t*>(0x400005ec);

void** fun_6d58(void** r0, void** r1, void** r2) {
    void** r3_4;
    void** r4_5;
    void** r5_6;
    void** r4_7;
    void** r0_8;
    uint32_t* r3_9;
    int1_t z10;

    r3_4 = g6da0;
    r4_5 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3_4))));
    r5_6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) & 0xff);
    if (!r4_5) {
        fun_6a64(r0, r1);
        fun_f290(r4_5, r1, r2);
    }
    r0_8 = fun_6d18(r5_6, r1, r2, r3_4, r4_7);
    r3_9 = g6da4;
    z10 = (*r3_9 & 1 << reinterpret_cast<unsigned char>(r5_6)) == 0;
    if (z10) {
        r0_8 = reinterpret_cast<void**>(0);
    }
    if (!z10) {
        r0_8 = reinterpret_cast<void**>(1);
    }
    return r0_8;
}

unsigned char* g6e78 = reinterpret_cast<unsigned char*>(0x400006e0);

void*** g6e7c = reinterpret_cast<void***>(0x400005f4);

unsigned char* g6e80 = reinterpret_cast<unsigned char*>(0x4000059c);

void** fun_69d0(void** r0, void** r1, void** r2);

uint32_t* g6e84 = reinterpret_cast<uint32_t*>(0x400005f0);

void* g6e88 = reinterpret_cast<void*>(0x400005a0);

void** fun_6da8(void** r0, void** r1, void** r2) {
    void** v4;
    void** r4_5;
    void** v6;
    void** r5_7;
    void** v8;
    void** r6_9;
    unsigned char* r3_10;
    void** r4_11;
    void** r10_12;
    void** r8_13;
    void*** r7_14;
    void** r4_15;
    void** r5_16;
    unsigned char* r3_17;
    void** r3_18;
    void** r0_19;
    void** r0_20;
    uint32_t* r3_21;
    int1_t below_or_equal22;
    void* r3_23;

    v4 = r4_5;
    v6 = r5_7;
    v8 = r6_9;
    r3_10 = g6e78;
    r4_11 = reinterpret_cast<void**>(static_cast<uint32_t>(*r3_10));
    r10_12 = r0;
    if (!r4_11) {
        fun_6a64(r0, r1);
        r0 = r4_11;
        fun_f290(r0, r1, r2);
    }
    r8_13 = reinterpret_cast<void**>(0xffffffff);
    r7_14 = g6e7c;
    r4_15 = reinterpret_cast<void**>(0);
    r5_16 = reinterpret_cast<void**>(0xffffffff);
    while (1) {
        if (reinterpret_cast<unsigned char>(r10_12) & 1) {
            r3_17 = g6e80;
            r3_18 = reinterpret_cast<void**>(static_cast<uint32_t>(*r3_17));
            if (!r3_18) {
                r0_19 = fun_1054(r0, r1, r2, r3_18, v4, v6, v8);
                r0_20 = fun_6928(r4_15, r0_19, r2);
                r1 = r0_20;
                if (!r1) {
                    fun_69d0(r4_15, r1, r2);
                }
            }
            r0 = fun_6d18(r4_15, r1, r2, r3_18, v4);
            r3_21 = g6e84;
            if (1 & *r3_21) {
                below_or_equal22 = reinterpret_cast<unsigned char>(r8_13) <= reinterpret_cast<unsigned char>(*r7_14);
                if (!below_or_equal22) {
                    r8_13 = *r7_14;
                }
                if (!below_or_equal22) {
                    r5_16 = r4_15;
                }
            }
        }
        ++r4_15;
        r7_14 = r7_14 + 4;
        if (reinterpret_cast<int1_t>(r4_15 == 15)) 
            break;
    }
    if (reinterpret_cast<signed char>(r5_16) > reinterpret_cast<signed char>(-1)) {
        r3_23 = g6e88;
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(r3_23) + reinterpret_cast<unsigned char>(r5_16) << 2) = reinterpret_cast<void**>(1);
        fun_69d0(reinterpret_cast<unsigned char>(r5_16) & 0xff, 0, 1);
    }
    return r5_16;
}

void** fun_6e8c(void** r0, void** r1, void** r2) {
    void** r0_4;

    r0_4 = fun_6da8(1, r1, r2);
    return ~reinterpret_cast<unsigned char>(r0_4) >> 31;
}

void** g6f68 = reinterpret_cast<void**>(0xdc);

void** g6f6c = reinterpret_cast<void**>(0xa0);

void** fun_6f70(void** r0, void** r1, void** r2, void** r3, void** a5) {
    void** v6;
    void** r4_7;
    void** r4_8;
    void** r6_9;
    void** r5_10;
    void** r0_11;
    void** r2_12;
    void** r3_13;
    uint32_t r1_14;
    void** r0_15;
    void** r5_16;
    void** r6_17;
    void** r0_18;
    void** r7_19;
    signed char* r5_20;
    signed char* r6_21;
    void** r8_22;
    void** r4_23;
    void** r1_24;
    void** r0_25;
    void** r12_26;
    void*** r3_27;
    int1_t z28;
    int1_t z29;
    void** r2_30;
    signed char* r6_31;
    signed char* r5_32;
    void** r4_33;
    int1_t z34;
    int1_t z35;
    void** r0_36;
    void** r1_37;
    int1_t z38;

    v6 = r4_7;
    r4_8 = r0;
    r6_9 = r1;
    if (reinterpret_cast<signed char>(r4_8) < reinterpret_cast<signed char>(0) != __intrinsic()) {
        r5_10 = reinterpret_cast<void**>(0);
        while (1) {
            r0_11 = r5_10;
            ++r5_10;
            if (reinterpret_cast<unsigned char>(r4_8) & 1) {
                r0_11 = fun_6f70(r0_11, r6_9, r2, r4_8, v6);
            }
            if (r5_10 == 31) 
                break;
        }
        return r0_11;
    }
    if (r1) 
        goto addr_6eec_11;
    r2_12 = g6f68;
    r3_13 = reinterpret_cast<void**>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r2_12) + reinterpret_cast<unsigned char>(r4_8)) - 1);
    r1_14 = reinterpret_cast<unsigned char>(r3_13) & 0xff;
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r2_12) + reinterpret_cast<unsigned char>(r4_8)) = static_cast<signed char>(r1_14);
    if (reinterpret_cast<signed char>(r4_8) <= reinterpret_cast<signed char>(14)) 
        goto addr_6f4c_14;
    addr_6f58_16:
    if (reinterpret_cast<signed char>(r4_8) > reinterpret_cast<signed char>(11)) {
        return r0;
    }
    r0_15 = g6b98;
    fun_1118(r0_15, 0xffffffff, r2_12, r3_13);
    r0_18 = fun_1054(r0_15, 0xffffffff, r2_12, r3_13, v6, r5_16, r6_17);
    r7_19 = reinterpret_cast<void**>(0);
    r5_20 = g6b9c;
    r6_21 = g6ba0;
    r8_22 = r0_18;
    r4_23 = reinterpret_cast<void**>(0);
    while (1) {
        r1_24 = r8_22;
        r0_25 = fun_6928(r4_23, r1_24, r2_12);
        r12_26 = r0_25;
        if (r0_25) {
            r3_27 = g6ba4;
            r2_12 = *r3_27;
            z28 = (reinterpret_cast<unsigned char>(r2_12) & 1 << reinterpret_cast<unsigned char>(r4_23)) == 0;
            if (!z28) {
                r12_26 = reinterpret_cast<void**>(0);
            }
            if (z28) {
                r12_26 = reinterpret_cast<void**>(1);
            }
        }
        if (r12_26 != static_cast<int32_t>(*r5_20)) {
            z29 = static_cast<int32_t>(*r6_21) == 0;
            r2_12 = r12_26;
            r0_25 = r4_23;
            r1_24 = reinterpret_cast<void**>(1);
            *r5_20 = static_cast<signed char>(reinterpret_cast<uint32_t>(r12_26));
            if (!z29) {
                r7_19 = reinterpret_cast<void**>(1);
            }
            if (!z29) {
                r0_25 = fun_6290(r0_25, 1, r2_12);
            }
        }
        ++r4_23;
        ++r5_20;
        ++r6_21;
        if (reinterpret_cast<int1_t>(r4_23 == 12)) 
            break;
    }
    r2_30 = g6ba8;
    if (*reinterpret_cast<void***>(r2_30)) 
        goto addr_6b3c_35;
    if (r7_19) 
        goto addr_6b88_38;
    addr_6b8c_40:
    addr_6b88_38:
    fun_6328(r0_25, r1_24, r2_30);
    goto addr_6b8c_40;
    addr_6b3c_35:
    *reinterpret_cast<void***>(r2_30) = reinterpret_cast<void**>(0);
    r6_31 = g6ba0;
    r5_32 = g6b9c;
    r4_33 = reinterpret_cast<void**>(0);
    while (1) {
        z34 = static_cast<int32_t>(*r6_31) == 0;
        r0_25 = r4_33;
        r1_24 = reinterpret_cast<void**>(1);
        ++r4_33;
        if (!z34) {
            r2_30 = reinterpret_cast<void**>(static_cast<int32_t>(*r5_32));
        }
        if (!z34) {
            r0_25 = fun_6290(r0_25, 1, r2_30);
        }
        ++r6_31;
        ++r5_32;
        if (r4_33 == 12) 
            break;
    }
    goto addr_6b88_38;
    addr_6f4c_14:
    z35 = r1_14 == 0;
    if (z35) {
        r3_13 = g6f6c;
    }
    if (z35) {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(r3_13) + reinterpret_cast<unsigned char>(r4_8) << 2) = r1_14;
        goto addr_6f58_16;
    }
    addr_6eec_11:
    r0_36 = fun_1054(r0, r1, r2, r3, v6, r5_16, r6_17);
    r0 = fun_6928(r4_8, r0_36, r2);
    r1_37 = r0;
    z38 = r1_37 == 0;
    if (z38) {
        r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r4_8) & 0xff);
    }
    if (z38) {
        r0 = fun_69d0(r0, r1_37, r2);
    }
    r2_12 = g6f68;
    r3_13 = reinterpret_cast<void**>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r2_12) + reinterpret_cast<unsigned char>(r4_8)) + 1 & 0xff);
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r2_12) + reinterpret_cast<unsigned char>(r4_8)) = static_cast<signed char>(reinterpret_cast<uint32_t>(r3_13));
    if (!reinterpret_cast<int1_t>(r3_13 == 1)) {
        goto addr_6f58_16;
    } else {
        r0 = fun_6d18(r4_8, r1_37, r2_12, r3_13, v6);
        goto addr_6f58_16;
    }
}

void fun_6fe8(void** r0, void** r1, void** r2, void** r3) {
    fun_637c(r0, r1, r2, r3);
    fun_6328(r0, r1, r2);
}

struct s4 {
    signed char[4] pad4;
    void** f4;
};

struct s5 {
    signed char[4] pad4;
    void** f4;
};

struct s6 {
    signed char[4] pad4;
    void** f4;
};

struct s7 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    void** f16;
    signed char[3] pad20;
    void** f20;
    signed char[3] pad24;
    void** f24;
    signed char[3] pad28;
    void** f28;
    signed char[3] pad32;
    void** f32;
    signed char[3] pad36;
    void** f36;
    signed char[3] pad40;
    void** f40;
    signed char[3] pad44;
    void** f44;
    signed char[3] pad48;
    void** f48;
    signed char[3] pad52;
    void** f52;
    signed char[3] pad56;
    void** f56;
    signed char[3] pad60;
    void** f60;
    signed char[3] pad64;
    void** f64;
    signed char[3] pad68;
    void** f68;
    signed char[3] pad72;
    void** f72;
    signed char[3] pad76;
    void** f76;
    signed char[3] pad80;
    void** f80;
    signed char[3] pad84;
    void** f84;
    signed char[3] pad88;
    void** f88;
    signed char[3] pad92;
    void** f92;
    signed char[3] pad96;
    void** f96;
    signed char[3] pad100;
    void** f100;
    signed char[3] pad104;
    void** f104;
    signed char[3] pad108;
    void** f108;
    signed char[3] pad112;
    void** f112;
    signed char[3] pad116;
    void** f116;
    signed char[3] pad120;
    void** f120;
};

void fun_eadc(void** r0, void** r1, void** r2);

void** fun_5db0(void* r0, void** r1);

struct s8 {
    void** f0;
    signed char[203] pad204;
    uint32_t f204;
    uint32_t f208;
};

void** fun_6198(void** r0, struct s8* r1, void** r2);

void** fun_5fe8(void** r0, void** r1, void** r2, void** r3, void** a5);

void** fun_eafc(void** r0, void** r1, void** r2, void** r3, void** a5);

void** fun_eb30(void** r0, void** r1, void** r2, void** r3, void** a5, void** a6);

void* g7440 = reinterpret_cast<void*>(0x11490);

void fun_6210(void* r0, void*** r1);

void** fun_700c(void** r0, void** r1, void** r2, void** r3, void** a5, void** a6) {
    void* r11_7;
    struct s4* sp8;
    struct s5* sp9;
    struct s6* sp10;
    struct s7* sp11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    unsigned char* lr22;
    unsigned char* v23;
    void*** r7_24;
    void** r8_25;
    void** r0_26;
    void** r5_27;
    void** r6_28;
    int32_t r9_29;
    int1_t z30;
    int1_t z31;
    void* r2_32;
    void** r3_33;
    void** r0_34;
    int1_t less35;
    void** r0_36;
    void* r0_37;
    int1_t z38;
    void** r3_39;
    void* r1_40;
    void** r0_41;
    void** r4_42;
    void** r0_43;
    int1_t z44;
    int1_t less45;
    void** r0_46;
    void** r3_47;
    void** r0_48;
    void** r9_49;
    void** r10_50;
    void** r7_51;
    uint32_t r3_52;
    void** r0_53;
    void* r2_54;
    void** r1_55;
    uint32_t r3_56;
    void** v57;
    void*** r5_58;
    void** r0_59;
    void** v60;
    void** r6_61;
    void*** lr62;
    void*** r12_63;
    void** r3_64;
    void** r4_65;
    int1_t less66;
    int1_t z67;
    int1_t less_or_equal68;
    int1_t less_or_equal69;
    void* r0_70;
    int1_t z71;

    r11_7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    __asm__("bic lr, lr, #3");
    __asm__("bic ip, ip, #3");
    sp8 = reinterpret_cast<struct s4*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 44 - 0x120 - (reinterpret_cast<unsigned char>(a6) * 51 + 6));
    sp9 = reinterpret_cast<struct s5*>(reinterpret_cast<uint32_t>(sp8) - (reinterpret_cast<unsigned char>(a6) * 0xc9 + 6));
    sp10 = reinterpret_cast<struct s6*>(reinterpret_cast<uint32_t>(sp9) - 56);
    sp11 = reinterpret_cast<struct s7*>(reinterpret_cast<uint32_t>(sp10) - 0xcc);
    v12 = reinterpret_cast<void**>(&sp8->f4);
    v13 = reinterpret_cast<void**>(&sp9->f4);
    v14 = reinterpret_cast<void**>(&sp10->f4);
    v15 = reinterpret_cast<void**>(0);
    v16 = r0;
    v17 = r1;
    v18 = r2;
    v19 = r3;
    v20 = reinterpret_cast<void**>(&sp11->f4);
    v21 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<signed char>(v21) < reinterpret_cast<signed char>(v17)) {
        lr22 = *reinterpret_cast<unsigned char**>(reinterpret_cast<unsigned char>(v18) + reinterpret_cast<unsigned char>(v21) << 2);
        v23 = lr22;
        if (static_cast<uint32_t>(*lr22) == 35) {
            r7_24 = reinterpret_cast<void***>(v12 + reinterpret_cast<unsigned char>(v15) * 51);
            fun_eadc(reinterpret_cast<int32_t>(r11_7) - 46, 0, 6);
            fun_eadc(reinterpret_cast<int32_t>(r11_7) - 53, 0, 6);
            r8_25 = reinterpret_cast<void**>(0);
            r0_26 = reinterpret_cast<void**>(0);
            r5_27 = reinterpret_cast<void**>(0);
            r6_28 = reinterpret_cast<void**>(0);
            r9_29 = 1;
            while (r2 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(r9_29 + reinterpret_cast<int32_t>(v23)))), !!r2) {
                if (!r0_26) {
                    z30 = reinterpret_cast<int1_t>(r2 == 40);
                    if (!z30) 
                        goto addr_71f4_12;
                } else {
                    if (r6_28) {
                        goto addr_7130_15;
                    } else {
                        z31 = reinterpret_cast<int1_t>(r2 == 40);
                        if (z31) {
                            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r7_24) + reinterpret_cast<unsigned char>(r5_27)) = static_cast<signed char>(reinterpret_cast<uint32_t>(r2));
                        }
                        if (z31) {
                            r0_26 = r6_28;
                        }
                        if (z31) {
                            ++r5_27;
                        }
                        if (z31) 
                            goto label_23; else 
                            goto addr_7130_15;
                    }
                }
                r6_28 = reinterpret_cast<void**>(0);
                addr_71f4_12:
                if (!z30) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r7_24) + reinterpret_cast<unsigned char>(r5_27)) = static_cast<signed char>(reinterpret_cast<uint32_t>(r2));
                }
                if (z30) {
                    r0_26 = reinterpret_cast<void**>(1);
                }
                if (z30) {
                    r8_25 = r6_28;
                }
                if (!z30) {
                    ++r5_27;
                }
                addr_7204_32:
                ++r9_29;
                continue;
                addr_7130_15:
                if (!reinterpret_cast<int1_t>(r2 == 45)) {
                    if (r2 != 41) 
                        goto addr_715c_35;
                } else {
                    r2_32 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(r11_7) - 40 + reinterpret_cast<unsigned char>(r6_28));
                    r8_25 = reinterpret_cast<void**>(1);
                    r6_28 = reinterpret_cast<void**>(0);
                    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r2_32) - 7) = 0;
                    goto addr_7204_32;
                }
                r3_33 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(r11_7) - 40 + reinterpret_cast<unsigned char>(r6_28));
                *reinterpret_cast<signed char*>(r3_33 + 0xfffffff2) = 0;
                r0_34 = fun_5db0(reinterpret_cast<int32_t>(r11_7) - 47, 0xffffffff);
                r0_26 = fun_5db0(reinterpret_cast<int32_t>(r11_7) - 54, 0xffffffff);
                less35 = reinterpret_cast<signed char>(r0_34) < reinterpret_cast<signed char>(0);
                if (less35) 
                    goto addr_71bc_39;
                less35 = reinterpret_cast<signed char>(r0_26) < reinterpret_cast<signed char>(r0_34);
                addr_71bc_39:
                if (less35) {
                    r3_33 = reinterpret_cast<void**>(0);
                }
                if (!less35) {
                    r3_33 = reinterpret_cast<void**>(1);
                }
                if (less35) {
                    r0_26 = r3_33;
                }
                if (less35) {
                    goto addr_7204_32;
                } else {
                    r0_36 = fun_5eb8(r0_34, r0_26, r2, r3_33, sp11->f0, *reinterpret_cast<void***>(&sp11->f4), sp11->f8, sp11->f12, sp11->f16, sp11->f20, sp11->f24, sp11->f28, sp11->f32, sp11->f36, sp11->f40, sp11->f44, sp11->f48, sp11->f52, sp11->f56, sp11->f60, sp11->f64, sp11->f68, sp11->f72, sp11->f76, sp11->f80, sp11->f84, sp11->f88, sp11->f92, sp11->f96, sp11->f100, sp11->f104, sp11->f108, sp11->f112, sp11->f116, sp11->f120);
                    r0_37 = fun_5d24(r0_36, reinterpret_cast<uint32_t>(r7_24) + reinterpret_cast<unsigned char>(r5_27), r2);
                    r5_27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r5_27) + reinterpret_cast<uint32_t>(r0_37));
                    r0_26 = reinterpret_cast<void**>(0);
                    goto addr_7204_32;
                }
                addr_715c_35:
                if (reinterpret_cast<signed char>(r6_28) > reinterpret_cast<signed char>(5)) {
                    goto addr_7204_32;
                } else {
                    z38 = r8_25 == 0;
                    r3_39 = r6_28 + 1;
                    r1_40 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(r11_7) - 40 + reinterpret_cast<unsigned char>(r6_28));
                    if (!z38) {
                        r6_28 = r3_39;
                    }
                    if (z38) {
                        r6_28 = r3_39;
                    }
                    if (!z38) {
                        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r1_40) - 14) = static_cast<signed char>(reinterpret_cast<uint32_t>(r2));
                    }
                    if (z38) {
                        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r1_40) - 7) = static_cast<signed char>(reinterpret_cast<uint32_t>(r2));
                    }
                    goto addr_7204_32;
                }
                label_23:
                goto addr_7204_32;
            }
            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r7_24) + reinterpret_cast<unsigned char>(r5_27)) = static_cast<signed char>(reinterpret_cast<uint32_t>(r2));
            *reinterpret_cast<void***>(v13 + reinterpret_cast<unsigned char>(v15) * 0xc9) = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint32_t>(r2)));
            ++v15;
        }
        ++v21;
    }
    r0_41 = fun_6198(v16, reinterpret_cast<int32_t>(r11_7) - 0x10c, r2);
    if (r0_41) {
        while (1) {
            sp11->f0 = reinterpret_cast<void**>(0xc9);
            r4_42 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(r11_7) - 0x10c);
            r2 = v20;
            r0_43 = fun_5fe8(r4_42, v14, r2, 51, sp11->f0);
            z44 = r0_43 == 0;
            if (!z44) {
                r4_42 = reinterpret_cast<void**>(0);
            }
            if (!z44) {
                r6_28 = v12;
            }
            if (!z44) {
                r5_27 = r4_42;
            }
            if (z44) 
                break;
            while (less45 = reinterpret_cast<signed char>(r5_27) < reinterpret_cast<signed char>(v15), r0_46 = r6_28, r6_28 = r6_28 + 51, ++r5_27, less45) {
                r3_47 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r4_42) + reinterpret_cast<unsigned char>(v13))));
                if (!r3_47) {
                    r0_48 = fun_eafc(r0_46, v14, v13, r3_47, sp11->f0);
                    if (!r0_48) {
                        fun_eb30(reinterpret_cast<unsigned char>(v13) + reinterpret_cast<unsigned char>(r4_42), v20, v13, v13, sp11->f0, *reinterpret_cast<void***>(&sp11->f4));
                    }
                }
                r4_42 = r4_42 + 0xc9;
            }
        }
        fun_6190(r4_42, v14, r2, 51, sp11->f0);
    }
    r9_49 = reinterpret_cast<void**>(0);
    r10_50 = reinterpret_cast<void**>(0);
    r7_51 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<signed char>(r9_49) < reinterpret_cast<signed char>(v17)) {
        r3_52 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(v18) + reinterpret_cast<unsigned char>(r9_49) << 2)));
        if (r3_52 != 35) {
            r0_53 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r7_51) * reinterpret_cast<unsigned char>(0x65) + reinterpret_cast<unsigned char>(a5));
            ++r7_51;
            fun_eb30(r0_53, *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(v18) + reinterpret_cast<unsigned char>(r9_49) << 2), r2, 0x65, sp11->f0, *reinterpret_cast<void***>(&sp11->f4));
        } else {
            r2_54 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r10_50) * (r3_52 + 0xa6));
            r1_55 = v13;
            r3_56 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<uint32_t>(r2_54) + reinterpret_cast<unsigned char>(r1_55)));
            r2 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r2_54) + reinterpret_cast<unsigned char>(r1_55));
            v57 = r2;
            if (r3_56) {
                r5_58 = reinterpret_cast<void***>(a5 + reinterpret_cast<unsigned char>(r7_51) * 0x65);
                r0_59 = reinterpret_cast<void**>(0);
                v60 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v19) - reinterpret_cast<unsigned char>(r7_51));
                r6_61 = reinterpret_cast<void**>(0);
                r2 = reinterpret_cast<void**>(0);
                lr62 = r5_58;
                r12_63 = r5_58;
                while (1) {
                    r3_64 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r2) + reinterpret_cast<unsigned char>(v57))));
                    r4_65 = v60;
                    less66 = reinterpret_cast<signed char>(r0_59) < reinterpret_cast<signed char>(r4_65);
                    if (!less66) {
                        r1_55 = reinterpret_cast<void**>(0);
                    }
                    if (less66) {
                        r1_55 = reinterpret_cast<void**>(1);
                    }
                    z67 = r3_64 == 0;
                    if (z67) {
                        r4_65 = reinterpret_cast<void**>(0);
                    }
                    if (!z67) {
                        r4_65 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1_55) & 1);
                    }
                    if (!r4_65) 
                        break;
                    if (!reinterpret_cast<int1_t>(r3_64 == 0x7c)) {
                        less_or_equal68 = reinterpret_cast<signed char>(r6_61) <= reinterpret_cast<signed char>(99);
                        if (!less_or_equal68) 
                            goto addr_73a4_102;
                    } else {
                        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r12_63) + reinterpret_cast<unsigned char>(r6_61)) = 0;
                        ++r0_59;
                        lr62 = lr62 + 0x65;
                        r12_63 = r12_63 + 0x65;
                        r6_61 = reinterpret_cast<void**>(0);
                        goto addr_73a8_104;
                    }
                    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(lr62) + reinterpret_cast<unsigned char>(r6_61)) = static_cast<signed char>(reinterpret_cast<uint32_t>(r3_64));
                    addr_73a4_102:
                    if (less_or_equal68) {
                        ++r6_61;
                    }
                    addr_73a8_104:
                    ++r2;
                }
                less_or_equal69 = reinterpret_cast<signed char>(r6_61) <= reinterpret_cast<signed char>(0);
                if (less_or_equal69) 
                    goto label_108; else 
                    goto addr_73e4_109;
            } else {
                r0_70 = g7440;
                fun_6210(r0_70, reinterpret_cast<unsigned char>(r10_50) * (r3_56 + 51) + reinterpret_cast<unsigned char>(v12));
                goto addr_7400_111;
            }
        }
        addr_741c_112:
        ++r9_49;
        continue;
        label_108:
        r3_64 = reinterpret_cast<void**>(0);
        addr_73e4_109:
        if (!less_or_equal69) {
            r3_64 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1_55) & 1);
        }
        z71 = r3_64 == 0;
        if (!z71) {
            r3_64 = reinterpret_cast<void**>(0x65);
        }
        if (!z71) {
            r3_64 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0_59) * reinterpret_cast<unsigned char>(r3_64) + reinterpret_cast<uint32_t>(r5_58));
        }
        if (!z71) {
            ++r0_59;
        }
        if (!z71) {
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r3_64) + reinterpret_cast<unsigned char>(r6_61)) = static_cast<signed char>(reinterpret_cast<uint32_t>(r4_65));
        }
        r7_51 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r7_51) + reinterpret_cast<unsigned char>(r0_59));
        addr_7400_111:
        ++r10_50;
        goto addr_741c_112;
    }
    return r7_51;
}

struct s9 {
    signed char[8] pad8;
    void** f8;
};

struct s10 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
};

void** fun_7444(void** r0, void** r1, void** r2, void** r3, void** a5) {
    void** r7_6;
    struct s9* sp7;
    void** r6_8;
    struct s10* sp9;
    void** r9_10;
    void** r8_11;
    void** r10_12;
    void** r4_13;
    void** v14;
    void** v15;
    void** r5_16;
    void** r1_17;
    void** r0_18;

    r7_6 = r1;
    __asm__("bic r1, r1, #3");
    sp7 = reinterpret_cast<struct s9*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 44 - 20 - (reinterpret_cast<unsigned char>(r7_6) * 0x65 + 6));
    r6_8 = reinterpret_cast<void**>(0);
    sp9 = reinterpret_cast<struct s10*>(reinterpret_cast<uint32_t>(sp7) - ((reinterpret_cast<unsigned char>(r7_6) << 2) + 4));
    r9_10 = r0;
    r8_11 = r3;
    r10_12 = reinterpret_cast<void**>(&sp9->f8);
    r4_13 = reinterpret_cast<void**>(0);
    v14 = reinterpret_cast<void**>(&sp7->f8);
    v15 = r2;
    while (r5_16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v14) + reinterpret_cast<unsigned char>(r4_13)), r1_17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r8_11) + reinterpret_cast<unsigned char>(r4_13)), r4_13 = r4_13 + 0x65, reinterpret_cast<signed char>(r6_8) < reinterpret_cast<signed char>(r7_6)) {
        fun_eb30(r5_16, r1_17, r2, v14, sp9->f0, sp9->f4);
        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r10_12) + reinterpret_cast<unsigned char>(r6_8) << 2) = r5_16;
        ++r6_8;
    }
    sp9->f0 = r8_11;
    sp9->f4 = a5;
    r0_18 = fun_700c(r9_10, r7_6, r10_12, v15, sp9->f0, sp9->f4);
    return r0_18;
}

uint16_t* g77e4 = reinterpret_cast<uint16_t*>(0x114d0);

void** g77e8 = reinterpret_cast<void**>(0xc0);

void** fun_7608(void** r0, void** r1, void** r2, void** r3);

void** fun_7678(void** r0, void** r1, void** r2, void** r3) {
    void*** sp5;
    void** r6_6;
    uint16_t* r4_7;
    void** r10_8;
    void** v9;
    void** r11_10;
    void** r9_11;
    void** r3_12;
    void** v13;
    void** r2_14;
    void* r4_15;
    void** r0_16;
    int1_t z17;
    void** r7_18;
    void** r8_19;
    void* r5_20;
    void** r4_21;
    void** r1_22;
    void** r1_23;
    int1_t less_or_equal24;
    void* r5_25;
    void* r0_26;
    int1_t z27;
    void* r2_28;
    int1_t less_or_equal29;
    void** r4_30;
    void* r0_31;
    void** r0_32;

    sp5 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 36 - 92);
    r6_6 = reinterpret_cast<void**>(sp5 + 4);
    r4_7 = g77e4;
    r10_8 = r0;
    v9 = r2;
    r11_10 = r1;
    r9_11 = r3;
    fun_eadc(r6_6, 0, 80);
    r3_12 = reinterpret_cast<void**>(static_cast<uint32_t>(*r4_7));
    v13 = reinterpret_cast<void**>(static_cast<uint16_t>(reinterpret_cast<uint32_t>(r3_12)));
    fun_eadc(sp5 + 6, 0, 38);
    r2_14 = reinterpret_cast<void**>(38);
    fun_eadc(sp5 + 46, 0, 38);
    r4_15 = reinterpret_cast<void*>(r6_6 + 40);
    r0_16 = fun_11288(r10_8, 100, 38);
    z17 = r9_11 == 0;
    r7_18 = r0_16;
    r8_19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r10_8) - reinterpret_cast<unsigned char>(r0_16));
    if (z17) {
        r5_20 = reinterpret_cast<void*>(1);
    }
    if (!z17) {
        r5_20 = reinterpret_cast<void*>(1);
    }
    if (!z17) {
        r2_14 = reinterpret_cast<void**>(0);
    }
    if (!z17) {
        while (r3_12 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r2_14) + reinterpret_cast<unsigned char>(r9_11)))), ++r2_14, !!r3_12) {
            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r5_20) + reinterpret_cast<uint32_t>(r4_15)) = static_cast<signed char>(reinterpret_cast<uint32_t>(r3_12));
            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r5_20) + reinterpret_cast<unsigned char>(r6_6)) = static_cast<signed char>(reinterpret_cast<uint32_t>(r3_12));
            r5_20 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r5_20) + 1);
        }
    }
    r4_21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r6_6) + reinterpret_cast<uint32_t>(r5_20));
    r1_22 = g77e8;
    fun_eb30(r4_21, r1_22, r2_14, r3_12, v9, v13);
    r1_23 = g77e8;
    fun_eb30(r4_21 + 40, r1_23, r2_14, r3_12, v9, v13);
    less_or_equal24 = reinterpret_cast<signed char>(r8_19) <= reinterpret_cast<signed char>(0);
    r5_25 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r5_20) + 4);
    if (less_or_equal24) {
        r6_6 = reinterpret_cast<void**>(0);
    }
    if (!less_or_equal24) {
        r0_26 = fun_5d24(r8_19, reinterpret_cast<unsigned char>(r6_6) + reinterpret_cast<uint32_t>(r5_25), r2_14);
        z27 = r7_18 == 0;
        r2_28 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r5_25) + reinterpret_cast<uint32_t>(r0_26));
        if (z27) {
            r3_12 = reinterpret_cast<void**>(0x73);
        }
        if (z27) {
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r6_6) + reinterpret_cast<uint32_t>(r2_28)) = static_cast<signed char>(reinterpret_cast<uint32_t>(r3_12));
        }
        if (z27) {
            r2_28 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r2_28) + 1);
        }
        r3_12 = reinterpret_cast<void**>(0);
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r6_6) + reinterpret_cast<uint32_t>(r2_28)) = 0;
        r6_6 = reinterpret_cast<void**>(1);
    }
    less_or_equal29 = reinterpret_cast<signed char>(r7_18) <= reinterpret_cast<signed char>(0);
    if (less_or_equal29) {
        r3_12 = reinterpret_cast<void**>(0);
    }
    if (!less_or_equal29) {
        r3_12 = reinterpret_cast<void**>(1);
    }
    if (!r10_8) {
        r3_12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r3_12) | 1);
    }
    if (r3_12) {
        r4_30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r6_6) * reinterpret_cast<unsigned char>(40) + reinterpret_cast<uint32_t>(sp5 + 4) + reinterpret_cast<uint32_t>(r5_25));
        r0_31 = fun_5d24(r7_18, r4_30, 40);
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r4_30) + reinterpret_cast<uint32_t>(r0_31)) = 0;
        ++r6_6;
    }
    r0_32 = fun_7608(r6_6, sp5 + 84, r11_10, v9);
    return r0_32;
}

uint32_t fun_e238(void** r0, void* r1);

void** fun_77ec(void** r0, void* r1, void** r2) {
    void** r12_4;
    void** r7_5;
    void** r6_6;
    void* r4_7;
    void** r5_8;
    uint32_t r3_9;
    int1_t less10;
    void* r1_11;
    uint32_t r0_12;

    r12_4 = reinterpret_cast<void**>(0);
    r7_5 = r0;
    r6_6 = r2;
    r4_7 = r1;
    r5_8 = reinterpret_cast<void**>(0);
    while (1) {
        r3_9 = reinterpret_cast<unsigned char>(r12_4) ^ 1;
        less10 = reinterpret_cast<signed char>(r5_8) < reinterpret_cast<signed char>(r6_6);
        if (!less10) {
            r3_9 = 0;
        }
        if (less10) {
            r3_9 = r3_9 & 1;
        }
        r1_11 = r4_7;
        ++r5_8;
        r4_7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r4_7) + 16);
        if (!r3_9) 
            break;
        r0_12 = fun_e238(r7_5, r1_11);
        r12_4 = reinterpret_cast<void**>(1 - r0_12);
        if (__intrinsic()) 
            continue;
        r12_4 = reinterpret_cast<void**>(0);
    }
    return r12_4;
}

struct s11 {
    unsigned char f0;
    unsigned char f1;
    unsigned char f2;
    signed char[1] pad4;
    void* f4;
    void*** f8;
};

struct s11* g7b28 = reinterpret_cast<struct s11*>(0x40000658);

void** fun_7a54(void** r0, void** r1, void** r2, void** r3) {
    struct s11* r12_5;
    void** v6;
    void** r4_7;
    void** v8;
    void** r5_9;
    void** v10;
    void** r6_11;
    void** r9_12;
    void** r6_13;
    void** r8_14;
    void** r10_15;
    void** r2_16;
    int1_t below_or_equal17;
    void** r5_18;
    void*** r4_19;
    void** r7_20;
    struct s11* r3_21;
    uint32_t r3_22;
    int1_t less23;
    uint32_t r0_24;
    void** r1_25;
    void** r0_26;
    void** r0_27;
    struct s11* r3_28;

    r12_5 = g7b28;
    v6 = r4_7;
    v8 = r5_9;
    v10 = r6_11;
    r9_12 = r0;
    r6_13 = r1;
    r8_14 = r2;
    r10_15 = r3;
    if (r12_5->f8) {
        r2_16 = reinterpret_cast<void**>(static_cast<uint32_t>(r12_5->f0));
        if (reinterpret_cast<unsigned char>(r1) < reinterpret_cast<unsigned char>(r2_16)) {
            below_or_equal17 = reinterpret_cast<unsigned char>(r1) + reinterpret_cast<unsigned char>(r8_14) <= reinterpret_cast<unsigned char>(r2_16) + r12_5->f1;
            if (below_or_equal17) {
                r5_18 = reinterpret_cast<void**>(0);
            }
            if (below_or_equal17) {
                r4_19 = r12_5->f8;
            }
            if (below_or_equal17) {
                r7_20 = reinterpret_cast<void**>(0);
            }
            if (below_or_equal17) 
                goto label_12; else 
                goto addr_7aa4_13;
        }
    }
    addr_7b1c_14:
    r5_18 = reinterpret_cast<void**>(0);
    addr_7b20_15:
    return r5_18;
    label_12:
    while (1) {
        r3_21 = g7b28;
        r3_22 = reinterpret_cast<unsigned char>(r5_18) ^ 1;
        less23 = reinterpret_cast<signed char>(r7_20) < reinterpret_cast<signed char>(static_cast<uint32_t>(r3_21->f2));
        if (!less23) {
            r3_22 = 0;
        }
        if (less23) {
            r3_22 = r3_22 & 1;
        }
        ++r7_20;
        if (!r3_22) 
            break;
        if (*r4_19) {
            r0_24 = fun_e238(r9_12, r4_19 + 4);
            r1_25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(r4_19 + 20) + reinterpret_cast<unsigned char>(r6_13));
            if (!r0_24) {
                r0_26 = fun_e7e0(r10_15, r1_25, r8_14, *r4_19, v6);
                r0_27 = fun_1054(r0_26, r1_25, r8_14, *r4_19, v6, v8, v10);
                *r4_19 = r0_27;
                r5_18 = reinterpret_cast<void**>(1);
            }
        }
        r3_28 = g7b28;
        r4_19 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(r4_19) + reinterpret_cast<int32_t>(r3_28->f4));
    }
    goto addr_7b20_15;
    addr_7aa4_13:
    goto addr_7b1c_14;
}

struct s12 {
    unsigned char f0;
    unsigned char f1;
    unsigned char f2;
    signed char[1] pad4;
    void* f4;
    void*** f8;
};

struct s12* g7be8 = reinterpret_cast<struct s12*>(0x40000658);

struct s13 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

struct s14 {
    uint32_t f0;
    uint32_t f4;
};

struct s15 {
    uint32_t f0;
    uint32_t f4;
    signed char[4] pad12;
    uint32_t f12;
    signed char[12] pad28;
    uint32_t f28;
};

void** fun_7b2c(void** r0, void** r1, void** r2, void** r3, uint32_t a5) {
    struct s12* r12_6;
    void** v7;
    void** r4_8;
    void** v9;
    void** r5_10;
    void** v11;
    void** r6_12;
    void** r10_13;
    void** r7_14;
    void** r8_15;
    void** r9_16;
    void** r2_17;
    void** r3_18;
    void* r5_19;
    void** r2_20;
    void** r12_21;
    void*** r6_22;
    void** r1_23;
    void** r0_24;
    int1_t less25;
    int1_t c26;
    void* r5_27;
    void** r0_28;
    struct s13* r4_29;
    void** r0_30;
    void** r1_31;
    void** r2_32;
    int1_t z33;
    void** v34;
    uint32_t r3_35;
    uint32_t r3_36;
    int1_t less_or_equal37;
    uint32_t r3_38;
    uint32_t lr39;
    int1_t z40;
    int1_t less_or_equal41;
    uint32_t r2_42;
    void** r1_43;
    void** r0_44;
    struct s14* r1_45;
    uint32_t r12_46;
    struct s15* r1_47;
    uint32_t r3_48;
    uint32_t r3_49;
    int1_t z50;
    int1_t less51;
    int32_t* r2_52;
    int1_t z53;
    int1_t less54;
    void* r2_55;
    int1_t z56;
    int1_t less57;
    int1_t z58;
    int1_t less59;

    r12_6 = g7be8;
    v7 = r4_8;
    v9 = r5_10;
    v11 = r6_12;
    r10_13 = r0;
    r7_14 = r1;
    r8_15 = r2;
    r9_16 = r3;
    if (!r12_6->f8) {
        return r0;
    }
    r2_17 = reinterpret_cast<void**>(static_cast<uint32_t>(r12_6->f0));
    if (reinterpret_cast<unsigned char>(r1) >= reinterpret_cast<unsigned char>(r2_17)) {
        return r0;
    }
    r3_18 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r2_17) + r12_6->f1);
    if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(r1) + reinterpret_cast<unsigned char>(r8_15)) > reinterpret_cast<unsigned char>(r3_18)) {
        return r0;
    }
    r5_19 = r12_6->f4;
    r2_20 = *r12_6->f8;
    r12_21 = reinterpret_cast<void**>(static_cast<uint32_t>(r12_6->f2));
    r6_22 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(r12_6->f8) + reinterpret_cast<uint32_t>(r5_19));
    r1_23 = reinterpret_cast<void**>(1);
    r0_24 = reinterpret_cast<void**>(0);
    while (1) {
        less25 = reinterpret_cast<signed char>(r2_20) < reinterpret_cast<signed char>(0);
        if (r2_20) {
            less25 = reinterpret_cast<signed char>(r1_23) < reinterpret_cast<signed char>(r12_21);
        }
        ++r1_23;
        if (!less25) 
            break;
        r3_18 = *r6_22;
        c26 = reinterpret_cast<unsigned char>(r3_18) < reinterpret_cast<unsigned char>(r2_20);
        r6_22 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(r6_22) + reinterpret_cast<uint32_t>(r5_19));
        if (!c26) {
            r2_20 = r3_18;
        }
        if (c26) 
            continue;
        r0_24 = reinterpret_cast<void**>(1);
    }
    r5_27 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r0_24) * reinterpret_cast<uint32_t>(r5_19));
    r0_28 = fun_1054(r0_24, r1_23, r2_20, r3_18, v7, v9, v11);
    r4_29 = reinterpret_cast<struct s13*>(reinterpret_cast<uint32_t>(r6_22) + reinterpret_cast<uint32_t>(r5_27));
    *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(r6_22) + reinterpret_cast<uint32_t>(r5_27)) = r0_28;
    fun_e7e0(&r4_29->f4, r10_13, 16, r3_18, v7);
    r0_30 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r4_29 + 4) + reinterpret_cast<unsigned char>(r7_14));
    r1_31 = r9_16;
    r2_32 = r8_15;
    z33 = r1_31 == r0_30;
    if (!z33) 
        goto addr_e7e8_18;
    r0_30 = reinterpret_cast<void**>(0);
    addr_e7e8_18:
    if (z33) {
        return r0_30;
    }
    v34 = r0_30;
    if (reinterpret_cast<signed char>(r2_32) >= reinterpret_cast<signed char>(4)) {
        r3_35 = reinterpret_cast<unsigned char>(r0_30) & 3;
        if (r3_35) {
            r3_36 = 4 - r3_35;
            r2_32 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r2_32) - r3_36);
            less_or_equal37 = reinterpret_cast<int32_t>(r3_36) <= reinterpret_cast<int32_t>(2);
            r3_38 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r1_31));
            ++r1_31;
            *reinterpret_cast<void***>(r0_30) = reinterpret_cast<void**>(static_cast<unsigned char>(r3_38));
            ++r0_30;
            if (!__intrinsic()) 
                goto label_26; else 
                goto addr_e894_27;
        } else {
            lr39 = reinterpret_cast<unsigned char>(r1_31) & 3;
            z40 = lr39 == 0;
            if (!z40) {
                goto addr_e8b0_30;
            }
        }
    }
    addr_e9b0_31:
    less_or_equal41 = reinterpret_cast<signed char>(r2_32) <= reinterpret_cast<signed char>(2);
    r2_42 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r1_31));
    r1_43 = r1_31 + 1;
    *reinterpret_cast<void***>(r0_30) = reinterpret_cast<void**>(static_cast<unsigned char>(r2_42));
    r0_44 = r0_30 + 1;
    if (!__intrinsic()) {
        r2_42 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r1_43));
        ++r1_43;
    }
    if (!__intrinsic()) {
        *reinterpret_cast<void***>(r0_44) = reinterpret_cast<void**>(static_cast<unsigned char>(r2_42));
        ++r0_44;
    }
    if (!less_or_equal41) {
        r2_42 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r1_43));
    }
    if (!less_or_equal41) {
        *reinterpret_cast<void***>(r0_44) = reinterpret_cast<void**>(static_cast<unsigned char>(r2_42));
    }
    return v34;
    label_26:
    r3_38 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r1_31));
    ++r1_31;
    addr_e894_27:
    if (!__intrinsic()) {
        *reinterpret_cast<void***>(r0_30) = reinterpret_cast<void**>(static_cast<unsigned char>(r3_38));
        ++r0_30;
    }
    if (!less_or_equal37) {
        r3_38 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r1_31));
        ++r1_31;
    }
    if (!less_or_equal37) {
        *reinterpret_cast<void***>(r0_30) = reinterpret_cast<void**>(static_cast<unsigned char>(r3_38));
        ++r0_30;
    }
    if (reinterpret_cast<signed char>(r2_32) < reinterpret_cast<signed char>(4)) {
        goto addr_e9b0_31;
    } else {
        lr39 = reinterpret_cast<unsigned char>(r1_31) & 3;
        z40 = lr39 == 0;
        if (!z40) {
            addr_e8b0_30:
            r1_45 = reinterpret_cast<struct s14*>(reinterpret_cast<unsigned char>(r1_31) - lr39);
            r12_46 = 4 - lr39 << 3;
            r1_47 = reinterpret_cast<struct s15*>(&r1_45->f4);
            r3_48 = r1_45->f0;
            goto addr_e8cc_49;
        }
    }
    r3_49 = reinterpret_cast<unsigned char>(r2_32) >> 5;
    if (!z40) {
        while (1) {
            r1_31 = r1_31 + 32;
            __asm__("stm r0!, {r4, r5, r6, r7, r8, sb, sl, fp}");
            r2_32 = r2_32 - 32;
            z40 = r2_32 == 0;
            if (!z40) {
                --r3_49;
                z40 = r3_49 == 0;
            }
            if (z40) 
                break;
        }
    }
    if (!z40) {
        r1_31 = r1_31 + 16;
        __asm__("stm r0!, {r4, r5, r6, r7}");
        r2_32 = r2_32 - 16;
        z40 = r2_32 == 0;
    }
    if (!z40) {
        r1_31 = r1_31 + 8;
        __asm__("stm r0!, {r4, r5}");
        r2_32 = r2_32 - 8;
        z40 = r2_32 == 0;
    }
    if (z40) {
        if (reinterpret_cast<signed char>(r2_32) <= reinterpret_cast<signed char>(0)) 
            goto addr_e878_65;
    } else {
        r1_31 = r1_31 + 4;
        *reinterpret_cast<void***>(r0_30) = *reinterpret_cast<void***>(r1_31);
        r0_30 = r0_30 + 4;
        r2_32 = r2_32 - 4;
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r2_32) < reinterpret_cast<signed char>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(r2_32 == 0))) {
            goto addr_e9b0_31;
        } else {
            return v34;
        }
    }
    goto addr_e9b0_31;
    addr_e878_65:
    return v34;
    while (1) {
        addr_e8cc_49:
        r2_32 = r2_32 - 32;
        z50 = r2_32 == 0;
        less51 = reinterpret_cast<signed char>(r2_32) < reinterpret_cast<signed char>(0) != __intrinsic();
        if (less51) {
            r2_32 = r2_32 + 32;
        }
        if (less51) 
            break;
        ++r1_47;
        __asm__("stm r0!, {r3, r4, r5, r6, r7, r8, sb, sl}");
        r3_48 = r1_47->f28;
        if (z50) 
            goto label_73;
    }
    r2_52 = reinterpret_cast<int32_t*>(r2_32 - 16);
    z53 = r2_52 == 0;
    less54 = reinterpret_cast<int32_t>(r2_52) < reinterpret_cast<int32_t>(0) != __intrinsic();
    if (less54) {
        r2_52 = r2_52 + 4;
    }
    if (less54) {
        goto addr_e960_80;
    }
    r1_47 = reinterpret_cast<struct s15*>(&r1_47->pad28);
    __asm__("stm r0!, {r3, r4, r5, r6}");
    r3_48 = r1_47->f12;
    if (!z53) {
        addr_e960_80:
        r2_55 = reinterpret_cast<void*>(r2_52 - 2);
        z56 = r2_55 == 0;
        less57 = reinterpret_cast<int32_t>(r2_55) < reinterpret_cast<int32_t>(0) != __intrinsic();
        if (less57) {
            r2_55 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r2_55) + 8);
            goto addr_e968_84;
        }
    }
    addr_e9d0_85:
    return v34;
    addr_e968_84:
    if (less57) {
        goto addr_e988_87;
    }
    r1_47 = reinterpret_cast<struct s15*>(&r1_47->pad12);
    __asm__("stm r0!, {r3, r4}");
    r3_48 = r1_47->f4;
    if (z56) {
        goto addr_e9d0_85;
    } else {
        addr_e988_87:
        r2_32 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r2_55) - 4);
        z58 = r2_32 == 0;
        less59 = reinterpret_cast<signed char>(r2_32) < reinterpret_cast<signed char>(0) != __intrinsic();
        if (less59) {
            r2_32 = r2_32 + 4;
        }
    }
    if (less59) {
        goto addr_e9a4_93;
    }
    r1_47 = reinterpret_cast<struct s15*>(&r1_47->f4);
    *reinterpret_cast<void***>(r0_30) = reinterpret_cast<void**>(r3_48 | r1_47->f0 << r12_46);
    r0_30 = r0_30 + 4;
    if (z58) {
        goto addr_e9d0_85;
    } else {
        addr_e9a4_93:
        r1_31 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r1_47) - (r12_46 >> 3));
        goto addr_e9b0_31;
    }
    label_73:
    goto addr_e9d0_85;
}

signed char* g856c = reinterpret_cast<signed char*>(0x400006f4);

void*** g8570 = reinterpret_cast<void***>(0x400006dc);

unsigned char* g8574 = reinterpret_cast<unsigned char*>(0x400006f5);

void fun_eb7c(void** r0, void** r1, void** r2, void** r3, void** a5, void** a6, void** a7);

signed char* g8578 = reinterpret_cast<signed char*>(0x400006e0);

void** fun_8524(void* r0, void** r1, void** r2, void** r3, void** a5, void** a6) {
    void** v7;
    signed char* r3_8;
    void*** r3_9;
    unsigned char* r3_10;
    void** r3_11;
    signed char* r3_12;

    v7 = reinterpret_cast<void**>(__return_address());
    r3_8 = g856c;
    *r3_8 = 1;
    r3_9 = g8570;
    *r3_9 = reinterpret_cast<void**>(0);
    while (r3_10 = g8574, r3_11 = reinterpret_cast<void**>(static_cast<uint32_t>(*r3_10)), r3_11 == 0) {
        fun_eb7c(5, r1, 0, r3_11, v7, a5, a6);
    }
    r3_12 = g8578;
    *r3_12 = 0;
    return 5;
}

void** g85cc = reinterpret_cast<void**>(0xe0);

void** g85d0 = reinterpret_cast<void**>(56);

void** fun_f3bc(void** r0);

int32_t fun_5ee0(void** r0, void** r1, void** r2, void** r3);

signed char* g85d4 = reinterpret_cast<signed char*>(0x400006f5);

int32_t g85d8 = 0x8674;

signed char* g85dc = reinterpret_cast<signed char*>(0x400006f4);

void** fun_ddf4(void** r0, int32_t r1, int32_t r2, uint32_t r3, int32_t a5);

void** fun_857c(void** r0, void** r1) {
    void** r3_3;
    void** r0_4;
    void** r4_5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** r0_35;
    void** r0_36;
    signed char* r12_37;
    int32_t r1_38;
    signed char* r12_39;
    void** r0_40;

    r3_3 = g85cc;
    *reinterpret_cast<void***>(r3_3) = reinterpret_cast<void**>(1);
    r0_4 = g85d0;
    r0_35 = fun_6208(r0_4, r1, 1, r3_3, r4_5, __return_address(), v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34);
    r0_36 = fun_f3bc(r0_35);
    fun_5ee0(r0_36, r1, 1, r3_3);
    r12_37 = g85d4;
    *r12_37 = 0;
    r1_38 = g85d8;
    r12_39 = g85dc;
    *r12_39 = 0;
    r0_40 = fun_ddf4(r0, r1_38, 14, r0 + 0x7c, 0x400);
    return r0_40;
}

void** fun_fdac(void** r0, void** r1, void** r2);

void** fun_fdb4(void** r0, void** r1, void** r2);

void*** g8668 = reinterpret_cast<void***>(0x400006ec);

void*** g866c = reinterpret_cast<void***>(0x400006f0);

void** g8670 = reinterpret_cast<void**>(0x70);

void** fun_1003c(void** r0);

void** fun_10330(void** r0, void** r1, void** r2);

void** fun_85e0(void** r0, void** r1, void** r2, void** r3) {
    void** r0_5;
    void** r0_6;
    void** r0_7;
    void** r0_8;
    void*** r6_9;
    void** r4_10;
    void** r5_11;
    void** r6_12;
    void** r0_13;
    void*** r5_14;
    void** r2_15;
    void** r0_16;
    void** r0_17;
    void** r0_18;
    void** r0_19;

    r0_5 = fun_6990(r0, r1, r2, r3);
    if (reinterpret_cast<unsigned char>(r0_5) & 0x6000) {
        return r0_5;
    } else {
        r0_6 = fun_fdac(r0_5, r1, r2);
        r0_7 = fun_fdb4(r0, r1, r2);
        r0_8 = fun_fdac(r0_7, r1, r2);
        r6_9 = g8668;
        if (r0_6 == r0_8) {
            return r0_8;
        } else {
            r0_13 = fun_1054(r0_8, r1, r2, r3, r4_10, r5_11, r6_12);
            r5_14 = g866c;
            r2_15 = *r6_9 + 50;
            if (*r6_9) {
                if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(r2_15) + reinterpret_cast<unsigned char>(*r5_14)) < reinterpret_cast<unsigned char>(r0_13)) {
                    return r0_13;
                }
            }
            r0_16 = g8670;
            if (!*r5_14) {
                r0_17 = fun_1003c(r0_16);
                *r5_14 = r0_17;
            }
            r0_18 = g8670;
            r0_19 = fun_10330(r0_18, r1, r2_15);
            *r6_9 = r0_13;
            return r0_19;
        }
    }
}

void** g8a28 = reinterpret_cast<void**>(100);

void** fun_6214(void** r0, void** r1, void** r2);

void** g8a2c = reinterpret_cast<void**>(0x84);

void** fun_89e0(void** r0, void** r1, void** r2) {
    void** r0_4;
    void** r0_5;
    void** r0_6;
    void** r0_7;
    void** r0_8;

    r0_4 = fun_fdac(r0, r1, r2);
    r0_5 = g8a28;
    fun_6214(r0_5, r0_4, r2);
    r0_6 = r0;
    if (reinterpret_cast<signed char>(r0_6) < reinterpret_cast<signed char>(0) != __intrinsic()) {
        goto addr_8a10_3;
    } else {
        r0_7 = fun_fdac(r0_6, r0_4, r2);
        r0_6 = r0;
        if (reinterpret_cast<signed char>(r0_7) <= reinterpret_cast<signed char>(50)) {
            addr_8a10_3:
            r0_6 = fun_fdb4(r0_6, r0_4, r2);
        }
        fun_fdac(r0_6, r0_4, r2);
        r0_8 = g8a2c;
        return r0_8;
    }
}

void** fun_6220();

void** fun_8a30(void** r0, void** r1, void** r2, void** r3) {
    void*** r3_5;
    void** r3_6;
    void** r1_7;
    void** sp8;
    void** r0_9;
    void** r10_10;
    void** r8_11;
    void** r7_12;
    void** r9_13;
    void** r6_14;
    void** r5_15;
    void** r4_16;
    void** r0_17;
    void** r1_18;
    void** r2_19;
    void** r0_20;
    void** r0_21;
    void** r0_22;
    void** r3_23;
    void** r0_24;

    fun_6388(r0, r1, r2, r3);
    fun_6234();
    fun_6220();
    r3_5 = g635c;
    r3_6 = *r3_5;
    r1_7 = g6360;
    if (!r3_6) {
        sp8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 12 - 24);
        fun_f1dc(sp8, r1_7, 0);
        fun_ef0c(sp8, r1_7, 0, r3_6);
        r0_9 = fun_f1d8(sp8, r1_7, 0);
        return r0_9;
    }
    r10_10 = r3_6;
    r8_11 = r1_7;
    r7_12 = reinterpret_cast<void**>(0);
    r9_13 = reinterpret_cast<void**>(11);
    do {
        r6_14 = reinterpret_cast<void**>(11 - reinterpret_cast<unsigned char>(r9_13));
        r5_15 = reinterpret_cast<void**>(11);
        while (1) {
            r4_16 = reinterpret_cast<void**>(11 - reinterpret_cast<unsigned char>(r5_15));
            if (0) {
                r0_17 = fun_ee24(r8_11, r6_14, r4_16, r3_6);
                r1_18 = r4_16;
                r3_6 = r0_17;
                r2_19 = r9_13;
                r0_20 = r10_10;
            } else {
                if (0) {
                    if (0) 
                        goto label_15; else 
                        goto addr_ef60_16;
                } else {
                    if (!1) 
                        goto addr_ef48_18;
                    r0_21 = fun_ee24(r8_11, r6_14, r4_16, r3_6);
                    r1_18 = r6_14;
                    r3_6 = r0_21;
                    r2_19 = r4_16;
                    r0_20 = r10_10;
                }
            }
            addr_efd0_21:
            fun_ee68(r0_20, r1_18, r2_19, r3_6);
            --r5_15;
            if (!__intrinsic()) 
                break;
            continue;
            label_15:
            r0_22 = fun_ee24(r8_11, r6_14, r4_16, r3_6);
            r1_18 = r9_13;
            r3_6 = r0_22;
            r2_19 = r5_15;
            r0_20 = r10_10;
            goto addr_efd0_21;
            addr_ef60_16:
            r3_23 = geff8;
            if (r3_23) 
                goto addr_ef6c_24;
            r0_24 = fun_ee24(r8_11, r6_14, r4_16, r3_23);
            r1_18 = r5_15;
            r3_6 = r0_24;
            r2_19 = r6_14;
            r0_20 = r10_10;
            goto addr_efd0_21;
        }
        --r9_13;
    } while (__intrinsic());
    goto label_28;
    addr_ef6c_24:
    r7_12 = reinterpret_cast<void**>(0xffffffff);
    addr_eff0_29:
    return r7_12;
    addr_ef48_18:
    goto addr_ef6c_24;
    label_28:
    goto addr_eff0_29;
}

void fun_9a64(void** r0, void** r1, void** r2, void** r3, void** a5) {
    void* r2_6;
    uint32_t r3_7;

    r2_6 = reinterpret_cast<void*>(0);
    do {
        r3_7 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r2_6) + reinterpret_cast<unsigned char>(r1));
        if (!r3_7) 
            break;
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r2_6) + reinterpret_cast<unsigned char>(r0)) = static_cast<signed char>(r3_7);
        r2_6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r2_6) + 1);
    } while (r2_6 != 39);
    goto label_5;
    addr_9a88_6:
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r0) + reinterpret_cast<uint32_t>(r2_6)) = 0;
    return;
    label_5:
    goto addr_9a88_6;
}

int32_t* g9b9c = reinterpret_cast<int32_t*>(0x4000070c);

int32_t* g9b94 = reinterpret_cast<int32_t*>(0x40000708);

uint32_t fun_f4c4(void** r0, void** r1, void** r2);

void** g9b98 = reinterpret_cast<void**>(0xd4);

void** fun_9ab4(void** r0, void** r1, void** r2, void** r3, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26) {
    void** v27;
    void** r4_28;
    void** v29;
    void** r5_30;
    void** v31;
    void** r6_32;
    void** v33;
    void** r7_34;
    void** v35;
    void** r8_36;
    void** v37;
    void** r9_38;
    void** v39;
    void** r10_40;
    void** v41;
    void** r11_42;
    void** v43;
    void** r6_44;
    void** r9_45;
    void** r10_46;
    void** r8_47;
    void** r7_48;
    int1_t less49;
    int32_t r4_50;
    int32_t r5_51;
    int32_t* r3_52;
    int32_t* r3_53;
    uint32_t r0_54;
    void** r0_55;
    int32_t* r3_56;
    void** r3_57;
    int1_t z58;
    void* r12_59;

    v27 = r4_28;
    v29 = r5_30;
    v31 = r6_32;
    v33 = r7_34;
    v35 = r8_36;
    v37 = r9_38;
    v39 = r10_40;
    v41 = r11_42;
    v43 = reinterpret_cast<void**>(__return_address());
    r6_44 = reinterpret_cast<void**>(0);
    r9_45 = r1;
    r10_46 = r2;
    r8_47 = r3;
    r7_48 = reinterpret_cast<void**>(0);
    while (1) {
        less49 = reinterpret_cast<signed char>(r6_44) < reinterpret_cast<signed char>(14);
        if (reinterpret_cast<signed char>(r6_44) <= reinterpret_cast<signed char>(14)) {
            less49 = reinterpret_cast<signed char>(r7_48) < reinterpret_cast<signed char>(r10_46);
        }
        if (less49) {
            r4_50 = 0;
        }
        if (less49) {
            r5_51 = r4_50;
        }
        if (!less49) 
            break;
        while (r3_52 = g9b9c, r5_51 < *r3_52) {
            r3_53 = g9b94;
            if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r9_45) + reinterpret_cast<unsigned char>(r7_48) << 2) == *reinterpret_cast<void***>(*r3_53 + r4_50)) {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r9_45) + reinterpret_cast<unsigned char>(r7_48) << 2) == 4)) 
                    goto label_15;
                r0_54 = fun_f4c4(0, r1, *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r9_45) + reinterpret_cast<unsigned char>(r7_48) << 2));
                r0_55 = g9b98;
                if (reinterpret_cast<int32_t>(r0_54) > reinterpret_cast<int32_t>(1)) 
                    goto label_17;
                fun_6208(r0_55, r1, *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r9_45) + reinterpret_cast<unsigned char>(r7_48) << 2), *reinterpret_cast<void***>(*r3_53 + r4_50), v27, v29, v31, v33, v35, v37, v39, v41, v43, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26);
            }
            ++r5_51;
            r4_50 = r4_50 + 76;
        }
        addr_9b74_20:
        ++r7_48;
        continue;
        label_15:
        addr_9b0c_21:
        r3_56 = g9b94;
        r3_57 = *reinterpret_cast<void***>(r4_50 + *r3_56);
        z58 = r8_47 == r3_57;
        if (z58) {
            r3_57 = a5;
        }
        r12_59 = reinterpret_cast<void*>(r4_50 + *r3_56);
        if (z58) {
            *reinterpret_cast<void***>(r3_57) = r6_44;
        }
        __asm__("stm lr!, {r0, r1, r2, r3}");
        __asm__("stm lr!, {r0, r1, r2, r3}");
        __asm__("stm lr!, {r0, r1, r2, r3}");
        r1 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(r12_59) + 12 + 16 + 16 + 16 + 4);
        ++r6_44;
        __asm__("stm lr, {r0, r1, r2, r3}");
        goto addr_9b74_20;
        label_17:
        goto addr_9b0c_21;
    }
    return r6_44;
}

void** fun_9ba0(void** r0, void** r1, void** r2, void** r3, void** a5) {
    void*** r3_6;
    void** r3_7;
    void** r1_8;
    void** sp9;
    void** r0_10;
    void** r10_11;
    void** r8_12;
    void** r7_13;
    void** r9_14;
    void** r6_15;
    void** r5_16;
    void** r4_17;
    void** r0_18;
    void** r1_19;
    void** r2_20;
    void** r0_21;
    void** r0_22;
    void** r0_23;
    void** r3_24;
    void** r0_25;

    fun_6388(r0, r1, r2, r3);
    fun_6234();
    fun_6220();
    r3_6 = g635c;
    r3_7 = *r3_6;
    r1_8 = g6360;
    if (!r3_7) {
        sp9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 12 - 24);
        fun_f1dc(sp9, r1_8, 0);
        fun_ef0c(sp9, r1_8, 0, r3_7);
        r0_10 = fun_f1d8(sp9, r1_8, 0);
        return r0_10;
    }
    r10_11 = r3_7;
    r8_12 = r1_8;
    r7_13 = reinterpret_cast<void**>(0);
    r9_14 = reinterpret_cast<void**>(11);
    do {
        r6_15 = reinterpret_cast<void**>(11 - reinterpret_cast<unsigned char>(r9_14));
        r5_16 = reinterpret_cast<void**>(11);
        while (1) {
            r4_17 = reinterpret_cast<void**>(11 - reinterpret_cast<unsigned char>(r5_16));
            if (0) {
                r0_18 = fun_ee24(r8_12, r6_15, r4_17, r3_7);
                r1_19 = r4_17;
                r3_7 = r0_18;
                r2_20 = r9_14;
                r0_21 = r10_11;
            } else {
                if (0) {
                    if (0) 
                        goto label_15; else 
                        goto addr_ef60_16;
                } else {
                    if (!1) 
                        goto addr_ef48_18;
                    r0_22 = fun_ee24(r8_12, r6_15, r4_17, r3_7);
                    r1_19 = r6_15;
                    r3_7 = r0_22;
                    r2_20 = r4_17;
                    r0_21 = r10_11;
                }
            }
            addr_efd0_21:
            fun_ee68(r0_21, r1_19, r2_20, r3_7);
            --r5_16;
            if (!__intrinsic()) 
                break;
            continue;
            label_15:
            r0_23 = fun_ee24(r8_12, r6_15, r4_17, r3_7);
            r1_19 = r9_14;
            r3_7 = r0_23;
            r2_20 = r5_16;
            r0_21 = r10_11;
            goto addr_efd0_21;
            addr_ef60_16:
            r3_24 = geff8;
            if (r3_24) 
                goto addr_ef6c_24;
            r0_25 = fun_ee24(r8_12, r6_15, r4_17, r3_24);
            r1_19 = r5_16;
            r3_7 = r0_25;
            r2_20 = r6_15;
            r0_21 = r10_11;
            goto addr_efd0_21;
        }
        --r9_14;
    } while (__intrinsic());
    goto label_28;
    addr_ef6c_24:
    r7_13 = reinterpret_cast<void**>(0xffffffff);
    addr_eff0_29:
    return r7_13;
    addr_ef48_18:
    goto addr_ef6c_24;
    label_28:
    goto addr_eff0_29;
}

void** ga544 = reinterpret_cast<void**>(0x68);

void** ga548 = reinterpret_cast<void**>(0x90);

void** ga54c = reinterpret_cast<void**>(0xb8);

void** ga5d4 = reinterpret_cast<void**>(0x40000708);

int32_t* ga5d8 = reinterpret_cast<int32_t*>(0x4000070c);

void** ga5dc = reinterpret_cast<void**>(0x40001844);

void** fun_9bd4(void** r0, void** r1);

void*** ga5e4 = reinterpret_cast<void***>(0x40000710);

void** ga5e8 = reinterpret_cast<void**>(20);

void** fun_9bb8(void** r0, void** r1, void** r2, void** r3, void** a5);

uint32_t* ga5ec = reinterpret_cast<uint32_t*>(0x40000170);

void*** ga5f0 = reinterpret_cast<void***>(0x40000174);

void*** ga5f4 = reinterpret_cast<void***>(0x40000178);

void** fun_6eac(void** r0, void** r1, void** r2, void** r3, void** a5);

void** fun_9d74(void** r0, void** r1, void** r2, void** r3) {
    void*** sp5;
    void** r9_6;
    void** v7;
    void** v8;
    void** r11_9;
    void** r3_10;
    void** r1_11;
    void** v12;
    void** r1_13;
    void** v14;
    void** r1_15;
    void** v16;
    void** r4_17;
    void** r0_18;
    void** r3_19;
    int32_t* r3_20;
    void** r3_21;
    void** r5_22;
    void** r2_23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** r0_45;
    void*** r3_46;
    void** r3_47;
    void** r7_48;
    uint32_t* r3_49;
    void*** r3_50;
    void*** r3_51;
    void** r1_52;
    void*** r3_53;
    uint32_t* r5_54;
    void*** r6_55;
    void*** r8_56;
    void** r3_57;
    void** r0_58;
    void** r3_59;
    int1_t z60;
    void** r0_61;
    void** r3_62;
    void* r3_63;
    void** r5_64;
    void** r0_65;
    int1_t z66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** r0_86;
    uint32_t* r3_87;
    void*** r3_88;
    void*** r3_89;
    void** r3_90;

    sp5 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 36 - 0x790 - 4);
    r9_6 = r0;
    v7 = r1;
    v8 = r2;
    r11_9 = r3;
    fun_eadc(sp5 + 0x710, 0, 0x7c);
    r3_10 = reinterpret_cast<void**>(sp5 + 0x700);
    r1_11 = ga544;
    fun_e7e0(sp5 + 0x710 + 3, r1_11, 3, r3_10, v12);
    fun_eadc(sp5 + 0x710 + 6, 0, 37);
    r1_13 = ga548;
    fun_e7e0(sp5 + 0x730 + 11, r1_13, 4, r3_10, v14);
    fun_eadc(sp5 + 0x730 + 15, 0, 36);
    r1_15 = ga54c;
    fun_e7e0(sp5 + 0x760 + 3, r1_15, 8, r3_10, v16);
    fun_eadc(sp5 + 0x760 + 11, 0, 32);
    fun_eadc(sp5 + 0x3cc, 0, 0x344);
    __asm__("stm ip!, {r0, r1}");
    r4_17 = reinterpret_cast<void**>(0);
    fun_eadc(sp5 + 0x3e4 - 1, 0, 29);
    fun_eadc(sp5 + 0x400 + 4 - 3, 0, 19);
    __asm__("stm lr!, {r0, r1, r2, r3}");
    fun_eadc(sp5 + 0x430 + 8 - 3, 0, 23);
    fun_eadc(sp5 + 0x450 - 3, 0, 19);
    __asm__("stm r3, {r0, r1, r2}");
    fun_eadc(sp5 + 0x470 + 12, 0, 28);
    fun_eadc(sp5 + 0x490 + 12 - 3, 0, 19);
    __asm__("stm r3, {r0, r1}");
    fun_eadc(sp5 + 0x4c0 + 4, 0, 32);
    fun_eadc(sp5 + 0x4e0 + 8 - 3, 0, 19);
    __asm__("stm r3, {r0, r1, r2}");
    fun_eadc(sp5 + 0x510 + 4, 0, 28);
    fun_eadc(sp5 + 0x530 + 4 - 3, 0, 19);
    __asm__("stm r3, {r0, r1, r2}");
    fun_eadc(sp5 + 0x560, 0, 28);
    fun_eadc(sp5 + 0x580 - 3, 0, 19);
    __asm__("stm r3, {r0, r1, r2}");
    fun_eadc(sp5 + 0x5a0 + 12, 0, 28);
    fun_eadc(sp5 + 0x5c0 + 12 - 3, 0, 19);
    __asm__("stm ip!, {r0, r1, r2, r3}");
    fun_eadc(sp5 + 0x600 + 4 - 2, 0, 18);
    fun_eadc(sp5 + 0x610 + 8 - 3, 0, 19);
    __asm__("stm ip!, {r0, r1, r2}");
    fun_eadc(sp5 + 0x640 + 8 - 2, 0, 26);
    fun_eadc(sp5 + 0x660 + 4 - 3, 0, 19);
    __asm__("stm r3, {r0, r1, r2}");
    fun_eadc(sp5 + 0x690, 0, 28);
    fun_eadc(sp5 + 0x6a0 + 13, 0, 19);
    __asm__("stm ip!, {r0, r1, r2, r3}");
    fun_eadc(sp5 + 0x6e0 + 1, 0, 23);
    r0_18 = reinterpret_cast<void**>(sp5 + 0x6f0 + 9);
    fun_eadc(r0_18, 0, 19);
    r3_19 = ga5d4;
    *r3_19 = reinterpret_cast<void*>(sp5 + 0x3cc);
    r3_20 = ga5d8;
    *r3_20 = 11;
    r3_21 = ga5dc;
    *r3_21 = reinterpret_cast<void*>(sp5 + 0x710);
    r5_22 = reinterpret_cast<void**>(sp5 + 20 - 8);
    fun_9bd4(r0_18, 0);
    r2_23 = v7;
    v24 = reinterpret_cast<void**>(sp5 + 0x790);
    v25 = reinterpret_cast<void**>(0);
    r0_45 = fun_9ab4(r5_22, r9_6, r2_23, v8, v24, v8, v7, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44);
    r3_46 = ga5e4;
    *r3_46 = reinterpret_cast<void**>(0);
    r3_47 = ga5e8;
    r7_48 = r0_45;
    *reinterpret_cast<void***>(r3_47) = reinterpret_cast<void**>(0);
    fun_9bb8(r5_22, r9_6, r2_23, r3_47, v24);
    r3_49 = ga5ec;
    r3_50 = ga5f0;
    r3_51 = ga5f4;
    r1_52 = reinterpret_cast<void**>(1);
    fun_6eac(*r3_49 | reinterpret_cast<unsigned char>(*r3_50) | 0x80000000 | reinterpret_cast<unsigned char>(*r3_51), 1, r2_23, *r3_51, v24);
    while (r3_53 = ga5e4, *r3_53 == 0) {
        fun_eb7c(1, r1_52, r2_23, *r3_53, v24, v8, v7);
        if (r11_9) {
            goto addr_a3f8_6;
        }
        r5_54 = ga5ec;
        r6_55 = ga5f0;
        r8_56 = ga5f4;
        r3_57 = *r6_55;
        r2_23 = *r8_56;
        r0_58 = fun_6da8(*r5_54 | reinterpret_cast<unsigned char>(r3_57) | reinterpret_cast<unsigned char>(r2_23), r1_52, r2_23);
        if (reinterpret_cast<signed char>(r0_58) < reinterpret_cast<signed char>(0)) {
            goto addr_a3e0_9;
        }
        if (*r5_54 & 1) {
            goto addr_a3f8_6;
        }
        if (!(reinterpret_cast<unsigned char>(*r6_55) & 1)) 
            goto addr_a3d0_13;
        addr_a490_15:
        r3_59 = v25;
        z60 = r3_59 == 0;
        if (z60) {
            r3_59 = r7_48 - 1;
        }
        if (!z60) {
            --r3_59;
        }
        addr_a4b8_20:
        v25 = r3_59;
        addr_a4bc_21:
        r3_57 = reinterpret_cast<void**>(sp5 + 20 - 8);
        r0_58 = fun_9bb8(reinterpret_cast<unsigned char>(r3_57) + (reinterpret_cast<unsigned char>(v25) << 6), r1_52, r2_23, r3_57, v24);
        addr_a4d0_22:
        r0_61 = fun_1054(r0_58, r1_52, r2_23, r3_57, v24, v8, v7);
        r3_62 = r4_17 + 70;
        if (reinterpret_cast<unsigned char>(r3_62) >= reinterpret_cast<unsigned char>(r0_61)) {
            fun_9ba0(r0_61, r1_52, r2_23, r3_62, v24);
            r4_17 = r0_61;
        }
        r11_9 = reinterpret_cast<void**>(0);
        continue;
        addr_a3d0_13:
        r3_57 = *r8_56;
        if (!(reinterpret_cast<unsigned char>(r3_57) & 1)) {
            addr_a3e0_9:
            if (r0_58 != 13) {
                if (r0_58 == 14) {
                    goto addr_a490_15;
                } else {
                    if (!reinterpret_cast<int1_t>(r0_58 == 12)) {
                        goto addr_a4d0_22;
                    } else {
                        addr_a3f8_6:
                        r3_63 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v25) << 6);
                        r5_64 = reinterpret_cast<void**>(sp5 + 20 - 8);
                        r1_52 = r5_64;
                        r2_23 = reinterpret_cast<void**>(sp5 + 0x780 + 12);
                        r0_65 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(r3_63) + reinterpret_cast<uint32_t>(sp5 + 0x790 + 4) - 0x74c)(reinterpret_cast<unsigned char>(r5_64) + reinterpret_cast<uint32_t>(r3_63), r1_52, r2_23));
                        if (reinterpret_cast<signed char>(r0_65) <= reinterpret_cast<signed char>(0)) {
                            if (!reinterpret_cast<int1_t>(r0_65 == -1)) 
                                goto label_34; else 
                                goto addr_a464_35;
                        } else {
                            r3_59 = reinterpret_cast<void**>(0);
                            if (reinterpret_cast<signed char>(0) <= reinterpret_cast<signed char>(-1)) {
                                goto addr_a450_38;
                            } else {
                                if (reinterpret_cast<signed char>(0) >= reinterpret_cast<signed char>(r0_65)) {
                                    addr_a450_38:
                                    r3_59 = reinterpret_cast<void**>(0);
                                }
                                r7_48 = r0_65;
                                goto addr_a4b8_20;
                            }
                        }
                    }
                }
            }
        }
        r2_23 = v25;
        r3_59 = r7_48 - 1;
        z66 = r2_23 == r3_59;
        if (z66) {
            r3_59 = reinterpret_cast<void**>(0);
        }
        if (!z66) {
            r3_59 = r2_23 + 1;
            goto addr_a4b8_20;
        }
        label_34:
        goto addr_a4bc_21;
        addr_a464_35:
        v25 = reinterpret_cast<void**>(0);
        r1_52 = r9_6;
        r2_23 = v7;
        v24 = reinterpret_cast<void**>(sp5 + 0x790 + 4 + 0xfffffffc);
        r0_86 = fun_9ab4(r5_64, r1_52, r2_23, 0, v24, v8, v7, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85);
        r7_48 = r0_86;
        goto addr_a4bc_21;
    }
    r3_87 = ga5ec;
    r3_88 = ga5f0;
    r3_89 = ga5f4;
    fun_6eac(*r3_87 | reinterpret_cast<unsigned char>(*r3_88) | 0x80000000 | reinterpret_cast<unsigned char>(*r3_89), 0, r2_23, *r3_89, v24);
    r3_90 = ga5e8;
    return *reinterpret_cast<void***>(r3_90);
}

void** fun_a5f8(void** r0, void** r1, void** r2) {
    void*** sp4;
    void** r9_5;
    void** v6;
    void** v7;
    void** r3_8;
    void** r1_9;
    void** v10;
    void** r1_11;
    void** v12;
    void** r1_13;
    void** v14;
    void** r4_15;
    void** r0_16;
    void** r3_17;
    int32_t* r3_18;
    void** r3_19;
    void** r5_20;
    void** r2_21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** r0_43;
    void*** r3_44;
    void** r3_45;
    void** r7_46;
    uint32_t* r3_47;
    void*** r3_48;
    void*** r3_49;
    void** r1_50;
    void*** r3_51;
    uint32_t* r5_52;
    void*** r6_53;
    void*** r8_54;
    void** r3_55;
    void** r0_56;
    void** r3_57;
    int1_t z58;
    void** r0_59;
    void** r3_60;
    void* r3_61;
    void** r5_62;
    void** r0_63;
    int1_t z64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** r0_84;
    uint32_t* r3_85;
    void*** r3_86;
    void*** r3_87;
    void** r3_88;

    sp4 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 36 - 0x790 - 4);
    r9_5 = r0;
    v6 = r1;
    v7 = r2;
    fun_eadc(sp4 + 0x710, 0, 0x7c);
    r3_8 = reinterpret_cast<void**>(sp4 + 0x700);
    r1_9 = ga544;
    fun_e7e0(sp4 + 0x710 + 3, r1_9, 3, r3_8, v10);
    fun_eadc(sp4 + 0x710 + 6, 0, 37);
    r1_11 = ga548;
    fun_e7e0(sp4 + 0x730 + 11, r1_11, 4, r3_8, v12);
    fun_eadc(sp4 + 0x730 + 15, 0, 36);
    r1_13 = ga54c;
    fun_e7e0(sp4 + 0x760 + 3, r1_13, 8, r3_8, v14);
    fun_eadc(sp4 + 0x760 + 11, 0, 32);
    fun_eadc(sp4 + 0x3cc, 0, 0x344);
    __asm__("stm ip!, {r0, r1}");
    r4_15 = reinterpret_cast<void**>(0);
    fun_eadc(sp4 + 0x3e4 - 1, 0, 29);
    fun_eadc(sp4 + 0x400 + 4 - 3, 0, 19);
    __asm__("stm lr!, {r0, r1, r2, r3}");
    fun_eadc(sp4 + 0x430 + 8 - 3, 0, 23);
    fun_eadc(sp4 + 0x450 - 3, 0, 19);
    __asm__("stm r3, {r0, r1, r2}");
    fun_eadc(sp4 + 0x470 + 12, 0, 28);
    fun_eadc(sp4 + 0x490 + 12 - 3, 0, 19);
    __asm__("stm r3, {r0, r1}");
    fun_eadc(sp4 + 0x4c0 + 4, 0, 32);
    fun_eadc(sp4 + 0x4e0 + 8 - 3, 0, 19);
    __asm__("stm r3, {r0, r1, r2}");
    fun_eadc(sp4 + 0x510 + 4, 0, 28);
    fun_eadc(sp4 + 0x530 + 4 - 3, 0, 19);
    __asm__("stm r3, {r0, r1, r2}");
    fun_eadc(sp4 + 0x560, 0, 28);
    fun_eadc(sp4 + 0x580 - 3, 0, 19);
    __asm__("stm r3, {r0, r1, r2}");
    fun_eadc(sp4 + 0x5a0 + 12, 0, 28);
    fun_eadc(sp4 + 0x5c0 + 12 - 3, 0, 19);
    __asm__("stm ip!, {r0, r1, r2, r3}");
    fun_eadc(sp4 + 0x600 + 4 - 2, 0, 18);
    fun_eadc(sp4 + 0x610 + 8 - 3, 0, 19);
    __asm__("stm ip!, {r0, r1, r2}");
    fun_eadc(sp4 + 0x640 + 8 - 2, 0, 26);
    fun_eadc(sp4 + 0x660 + 4 - 3, 0, 19);
    __asm__("stm r3, {r0, r1, r2}");
    fun_eadc(sp4 + 0x690, 0, 28);
    fun_eadc(sp4 + 0x6a0 + 13, 0, 19);
    __asm__("stm ip!, {r0, r1, r2, r3}");
    fun_eadc(sp4 + 0x6e0 + 1, 0, 23);
    r0_16 = reinterpret_cast<void**>(sp4 + 0x6f0 + 9);
    fun_eadc(r0_16, 0, 19);
    r3_17 = ga5d4;
    *r3_17 = reinterpret_cast<void*>(sp4 + 0x3cc);
    r3_18 = ga5d8;
    *r3_18 = 11;
    r3_19 = ga5dc;
    *r3_19 = reinterpret_cast<void*>(sp4 + 0x710);
    r5_20 = reinterpret_cast<void**>(sp4 + 20 - 8);
    fun_9bd4(r0_16, 0);
    r2_21 = v6;
    v22 = reinterpret_cast<void**>(sp4 + 0x790);
    v23 = reinterpret_cast<void**>(0);
    r0_43 = fun_9ab4(r5_20, r9_5, r2_21, v7, v22, v7, v6, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42);
    r3_44 = ga5e4;
    *r3_44 = reinterpret_cast<void**>(0);
    r3_45 = ga5e8;
    r7_46 = r0_43;
    *reinterpret_cast<void***>(r3_45) = reinterpret_cast<void**>(0);
    fun_9bb8(r5_20, r9_5, r2_21, r3_45, v22);
    r3_47 = ga5ec;
    r3_48 = ga5f0;
    r3_49 = ga5f4;
    r1_50 = reinterpret_cast<void**>(1);
    fun_6eac(*r3_47 | reinterpret_cast<unsigned char>(*r3_48) | 0x80000000 | reinterpret_cast<unsigned char>(*r3_49), 1, r2_21, *r3_49, v22);
    while (r3_51 = ga5e4, *r3_51 == 0) {
        fun_eb7c(1, r1_50, r2_21, *r3_51, v22, v7, v6);
        if (0) {
            goto addr_a3f8_7;
        }
        r5_52 = ga5ec;
        r6_53 = ga5f0;
        r8_54 = ga5f4;
        r3_55 = *r6_53;
        r2_21 = *r8_54;
        r0_56 = fun_6da8(*r5_52 | reinterpret_cast<unsigned char>(r3_55) | reinterpret_cast<unsigned char>(r2_21), r1_50, r2_21);
        if (reinterpret_cast<signed char>(r0_56) < reinterpret_cast<signed char>(0)) {
            goto addr_a3e0_10;
        }
        if (*r5_52 & 1) {
            goto addr_a3f8_7;
        }
        if (!(reinterpret_cast<unsigned char>(*r6_53) & 1)) 
            goto addr_a3d0_14;
        addr_a490_16:
        r3_57 = v23;
        z58 = r3_57 == 0;
        if (z58) {
            r3_57 = r7_46 - 1;
        }
        if (!z58) {
            --r3_57;
        }
        addr_a4b8_21:
        v23 = r3_57;
        addr_a4bc_22:
        r3_55 = reinterpret_cast<void**>(sp4 + 20 - 8);
        r0_56 = fun_9bb8(reinterpret_cast<unsigned char>(r3_55) + (reinterpret_cast<unsigned char>(v23) << 6), r1_50, r2_21, r3_55, v22);
        addr_a4d0_23:
        r0_59 = fun_1054(r0_56, r1_50, r2_21, r3_55, v22, v7, v6);
        r3_60 = r4_15 + 70;
        if (reinterpret_cast<unsigned char>(r3_60) >= reinterpret_cast<unsigned char>(r0_59)) {
            fun_9ba0(r0_59, r1_50, r2_21, r3_60, v22);
            r4_15 = r0_59;
        }
        continue;
        addr_a3d0_14:
        r3_55 = *r8_54;
        if (!(reinterpret_cast<unsigned char>(r3_55) & 1)) {
            addr_a3e0_10:
            if (r0_56 != 13) {
                if (r0_56 == 14) {
                    goto addr_a490_16;
                } else {
                    if (!reinterpret_cast<int1_t>(r0_56 == 12)) {
                        goto addr_a4d0_23;
                    } else {
                        addr_a3f8_7:
                        r3_61 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v23) << 6);
                        r5_62 = reinterpret_cast<void**>(sp4 + 20 - 8);
                        r1_50 = r5_62;
                        r2_21 = reinterpret_cast<void**>(sp4 + 0x780 + 12);
                        r0_63 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(r3_61) + reinterpret_cast<uint32_t>(sp4 + 0x790 + 4) - 0x74c)(reinterpret_cast<unsigned char>(r5_62) + reinterpret_cast<uint32_t>(r3_61), r1_50, r2_21));
                        if (reinterpret_cast<signed char>(r0_63) <= reinterpret_cast<signed char>(0)) {
                            if (!reinterpret_cast<int1_t>(r0_63 == -1)) 
                                goto label_35; else 
                                goto addr_a464_36;
                        } else {
                            r3_57 = reinterpret_cast<void**>(0);
                            if (reinterpret_cast<signed char>(0) <= reinterpret_cast<signed char>(-1)) {
                                goto addr_a450_39;
                            } else {
                                if (reinterpret_cast<signed char>(0) >= reinterpret_cast<signed char>(r0_63)) {
                                    addr_a450_39:
                                    r3_57 = reinterpret_cast<void**>(0);
                                }
                                r7_46 = r0_63;
                                goto addr_a4b8_21;
                            }
                        }
                    }
                }
            }
        }
        r2_21 = v23;
        r3_57 = r7_46 - 1;
        z64 = r2_21 == r3_57;
        if (z64) {
            r3_57 = reinterpret_cast<void**>(0);
        }
        if (!z64) {
            r3_57 = r2_21 + 1;
            goto addr_a4b8_21;
        }
        label_35:
        goto addr_a4bc_22;
        addr_a464_36:
        v23 = reinterpret_cast<void**>(0);
        r1_50 = r9_5;
        r2_21 = v6;
        v22 = reinterpret_cast<void**>(sp4 + 0x790 + 4 + 0xfffffffc);
        r0_84 = fun_9ab4(r5_62, r1_50, r2_21, 0, v22, v7, v6, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83);
        r7_46 = r0_84;
        goto addr_a4bc_22;
    }
    r3_85 = ga5ec;
    r3_86 = ga5f0;
    r3_87 = ga5f4;
    fun_6eac(*r3_85 | reinterpret_cast<unsigned char>(*r3_86) | 0x80000000 | reinterpret_cast<unsigned char>(*r3_87), 0, r2_21, *r3_87, v22);
    r3_88 = ga5e8;
    return *reinterpret_cast<void***>(r3_88);
}

struct s17 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    struct s17* f8;
    struct s17* f12;
};

struct s16 {
    struct s17* f0;
    int32_t f4;
};

struct s16** ga724 = reinterpret_cast<struct s16**>(0x40000728);

void** fun_a6d8() {
    struct s16** r3_1;
    struct s17* r2_2;
    int1_t z3;
    uint32_t r3_4;
    void** r1_5;
    int32_t r0_6;
    void** r2_7;
    int32_t r0_8;
    void** r6_9;
    uint32_t r5_10;
    uint32_t r3_11;
    uint32_t r12_12;

    r3_1 = ga724;
    r2_2 = (*r3_1)->f0;
    z3 = (*r3_1)->f4 == 1;
    if (z3) {
        r2_2 = r2_2->f12;
    }
    if (!z3) {
        if ((*r3_1)->f4 == 2) {
            r3_4 = 1;
            while (r3_4 = r3_4 + 1 & 0xff, r2_2 = r2_2->f8, r3_4 != 11) {
            }
        }
    }
    r1_5 = r2_2->f4;
    r0_6 = g62fc;
    r2_7 = r2_2->f0;
    r0_8 = fun_edf8(r1_5, r2_7);
    r6_9 = reinterpret_cast<void**>(0xffffffff);
    if (r0_8) {
        r5_10 = r0_6 + (reinterpret_cast<unsigned char>(r2_7) << 1);
        r3_11 = reinterpret_cast<uint32_t>(reinterpret_cast<signed char>(r1_5) >> 3);
        r12_12 = 1 - r3_11;
        if (0) {
            r3_11 = *reinterpret_cast<unsigned char*>(r5_10 + r12_12);
        }
        if (1) {
            r3_11 = *reinterpret_cast<unsigned char*>(r5_10 + r12_12);
        }
        if (0) {
            r2_7 = reinterpret_cast<void**>(1);
        }
        if (1) {
            r2_7 = reinterpret_cast<void**>(1);
        }
        if (0) {
            r3_11 = r3_11 | reinterpret_cast<unsigned char>(r2_7) << (reinterpret_cast<unsigned char>(r1_5) & 7);
        }
        if (1) {
            __asm__("biceq r3, r3, r2, lsl lr");
        }
        if (0) {
            *reinterpret_cast<signed char*>(r5_10 + r12_12) = static_cast<signed char>(r3_11);
        }
        if (1) {
            *reinterpret_cast<signed char*>(r5_10 + r12_12) = static_cast<signed char>(r3_11);
        }
        r6_9 = reinterpret_cast<void**>(0);
        if (1) {
            r6_9 = reinterpret_cast<void**>(0);
        }
    }
    return r6_9;
}

void*** ga778 = reinterpret_cast<void***>(0x40000728);

struct s18 {
    signed char[1] pad1;
    void** f1;
};

void fun_a728(void** r0, void** r1, void** r2) {
    void*** r3_4;
    void** r3_5;
    void** r4_6;
    struct s18* r5_7;

    r3_4 = ga778;
    r3_5 = *r3_4;
    r4_6 = *reinterpret_cast<void***>(r3_5);
    fun_62e4(*reinterpret_cast<void***>(r4_6 + 4), *reinterpret_cast<void***>(r4_6), 1, r3_5);
    r5_7 = reinterpret_cast<struct s18*>(1);
    while (r4_6 = *reinterpret_cast<void***>(r4_6 + 8), fun_62e4(*reinterpret_cast<void***>(r4_6 + 4), *reinterpret_cast<void***>(r4_6), 1, r3_5), r3_5 = reinterpret_cast<void**>(&r5_7->f1), r5_7 = reinterpret_cast<struct s18*>(reinterpret_cast<unsigned char>(r3_5) & 0xff), !reinterpret_cast<int1_t>(r5_7 == 10)) {
    }
}

void** fun_ac9c(void** r0, void** r1, void** r2) {
    void** r3_4;
    int32_t r0_5;
    void** r2_6;
    int32_t r0_7;
    void** r6_8;
    uint32_t r5_9;
    uint32_t r3_10;
    int1_t z11;
    uint32_t r12_12;

    r3_4 = r0 - 4;
    if (reinterpret_cast<unsigned char>(r3_4) > reinterpret_cast<unsigned char>(11)) {
        return r3_4;
    }
    r0_5 = g62fc;
    r2_6 = r1;
    r0_7 = fun_edf8(r3_4, r2_6);
    r6_8 = reinterpret_cast<void**>(0xffffffff);
    if (r0_7) 
        goto addr_ee94_6;
    addr_eed4_8:
    return r6_8;
    addr_ee94_6:
    r5_9 = r0_5 + (reinterpret_cast<unsigned char>(r2_6) << 1);
    r3_10 = reinterpret_cast<uint32_t>(reinterpret_cast<signed char>(r3_4) >> 3);
    z11 = r2 == 0;
    r12_12 = 1 - r3_10;
    if (!z11) {
        r3_10 = *reinterpret_cast<unsigned char*>(r5_9 + r12_12);
    }
    if (z11) {
        r3_10 = *reinterpret_cast<unsigned char*>(r5_9 + r12_12);
    }
    if (!z11) {
        r2_6 = reinterpret_cast<void**>(1);
    }
    if (z11) {
        r2_6 = reinterpret_cast<void**>(1);
    }
    if (!z11) {
        r3_10 = r3_10 | reinterpret_cast<unsigned char>(r2_6) << (reinterpret_cast<unsigned char>(r3_4) & 7);
    }
    if (z11) {
        __asm__("biceq r3, r3, r2, lsl lr");
    }
    if (!z11) {
        *reinterpret_cast<signed char*>(r5_9 + r12_12) = static_cast<signed char>(r3_10);
    }
    if (z11) {
        *reinterpret_cast<signed char*>(r5_9 + r12_12) = static_cast<signed char>(r3_10);
    }
    r6_8 = reinterpret_cast<void**>(0);
    if (z11) {
        r6_8 = r2;
        goto addr_eed4_8;
    }
}

struct s19 {
    signed char[40] pad40;
    uint32_t f40;
};

struct s19** gb174 = reinterpret_cast<struct s19**>(0x40000768);

void** gc560 = reinterpret_cast<void**>(0xa4);

unsigned char* gc564 = reinterpret_cast<unsigned char*>(0x40000004);

void** fun_b160() {
    struct s19** r3_1;
    uint32_t r0_2;
    void* sp3;
    void** r2_4;
    void** r0_5;
    void** r2_6;
    void** r5_7;
    unsigned char* r6_8;
    void** r4_9;
    int1_t less10;
    void** r0_11;
    void** sp12;
    void** r0_13;

    r3_1 = gb174;
    r0_2 = (*r3_1)->f40;
    sp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 16);
    r0_5 = fun_1107c(12 * r0_2, 0xc8, r2_4);
    r2_6 = gc560;
    r5_7 = r0_5;
    if (r0_5 == *reinterpret_cast<void***>(r2_6)) {
        return r0_5;
    } else {
        *reinterpret_cast<void***>(r2_6) = r0_5;
        r6_8 = gc564;
        r4_9 = reinterpret_cast<void**>(0);
        while (1) {
            less10 = reinterpret_cast<signed char>(r4_9) < reinterpret_cast<signed char>(r5_7);
            if (!less10) {
                r2_6 = reinterpret_cast<void**>(0);
            }
            if (less10) {
                r2_6 = reinterpret_cast<void**>(1);
            }
            ++r6_8;
            ++r4_9;
            fun_6290(static_cast<uint32_t>(*r6_8), 2, r2_6);
            if (reinterpret_cast<int1_t>(r4_9 == 12)) 
                break;
        }
        r0_11 = g6330;
        sp12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp3) + 16 - 12 - 24);
        fun_f1dc(sp12, 2, r2_6);
        fun_eedc(sp12, r0_11, r2_6);
        r0_13 = fun_f1d8(sp12, r0_11, r2_6);
        return r0_13;
    }
}

struct s20 {
    signed char[52] pad52;
    void* f52;
    signed char[4] pad60;
    void** f60;
};

struct s20** gb194 = reinterpret_cast<struct s20**>(0x40000768);

void** gc4fc = reinterpret_cast<void**>(0xa0);

unsigned char* gc500 = reinterpret_cast<unsigned char*>(0x40000004);

void** fun_b178(void** r0) {
    struct s20** r3_2;
    void** r2_3;
    void* r0_4;
    void* sp5;
    void** r0_6;
    void** r2_7;
    void** r5_8;
    unsigned char* r6_9;
    void** r4_10;
    int1_t less11;
    void** r0_12;
    void** sp13;
    void** r0_14;

    r3_2 = gb194;
    r2_3 = (*r3_2)->f60;
    r0_4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>((*r3_2)->f52) + reinterpret_cast<unsigned char>(r2_3));
    sp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 16);
    r0_6 = fun_1107c(12 * reinterpret_cast<uint32_t>(r0_4), 6, r2_3);
    r2_7 = gc4fc;
    r5_8 = r0_6;
    if (r0_6 == *reinterpret_cast<void***>(r2_7)) {
        return r0_6;
    } else {
        *reinterpret_cast<void***>(r2_7) = r0_6;
        r6_9 = gc500;
        r4_10 = reinterpret_cast<void**>(0);
        while (1) {
            less11 = reinterpret_cast<signed char>(r4_10) < reinterpret_cast<signed char>(r5_8);
            if (!less11) {
                r2_7 = reinterpret_cast<void**>(0);
            }
            if (less11) {
                r2_7 = reinterpret_cast<void**>(1);
            }
            ++r6_9;
            ++r4_10;
            fun_6290(static_cast<uint32_t>(*r6_9), 4, r2_7);
            if (reinterpret_cast<int1_t>(r4_10 == 12)) 
                break;
        }
        r0_12 = g6330;
        sp13 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp5) + 16 - 12 - 24);
        fun_f1dc(sp13, 4, r2_7);
        fun_eedc(sp13, r0_12, r2_7);
        r0_14 = fun_f1d8(sp13, r0_12, r2_7);
        return r0_14;
    }
}

void** gb1d4 = reinterpret_cast<void**>(16);

void** fun_b198(void** r0, void** r1, void** r2) {
    int1_t below_or_equal4;
    int32_t r3_5;
    void** r2_6;
    void** r0_7;
    int32_t r0_8;
    void** r6_9;
    void*** r5_10;
    uint32_t r3_11;
    int1_t z12;
    void* r12_13;

    below_or_equal4 = reinterpret_cast<unsigned char>(r0) <= reinterpret_cast<unsigned char>(11);
    if (!below_or_equal4) {
        r3_5 = 0;
    }
    if (below_or_equal4) {
        r3_5 = 1;
    }
    if (reinterpret_cast<signed char>(r1) < reinterpret_cast<signed char>(0)) {
        r3_5 = 0;
    }
    if (!r3_5) {
        return r0;
    }
    r2_6 = r1;
    r0_7 = gb1d4;
    if (reinterpret_cast<signed char>(r1) > reinterpret_cast<signed char>(11)) {
        return r0_7;
    }
    r0_8 = fun_edf8(r0, r2_6);
    r6_9 = reinterpret_cast<void**>(0xffffffff);
    if (r0_8) 
        goto addr_ee94_13;
    addr_eed4_15:
    return r6_9;
    addr_ee94_13:
    r5_10 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r0_7) + (reinterpret_cast<unsigned char>(r2_6) << 1));
    r3_11 = reinterpret_cast<uint32_t>(reinterpret_cast<signed char>(r0) >> 3);
    z12 = r2 == 0;
    r12_13 = reinterpret_cast<void*>(1 - r3_11);
    if (!z12) {
        r3_11 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r5_10) + reinterpret_cast<uint32_t>(r12_13));
    }
    if (z12) {
        r3_11 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r5_10) + reinterpret_cast<uint32_t>(r12_13));
    }
    if (!z12) {
        r2_6 = reinterpret_cast<void**>(1);
    }
    if (z12) {
        r2_6 = reinterpret_cast<void**>(1);
    }
    if (!z12) {
        r3_11 = r3_11 | reinterpret_cast<unsigned char>(r2_6) << (reinterpret_cast<unsigned char>(r0) & 7);
    }
    if (z12) {
        __asm__("biceq r3, r3, r2, lsl lr");
    }
    if (!z12) {
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r5_10) + reinterpret_cast<uint32_t>(r12_13)) = static_cast<signed char>(r3_11);
    }
    if (z12) {
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r5_10) + reinterpret_cast<uint32_t>(r12_13)) = static_cast<signed char>(r3_11);
    }
    r6_9 = reinterpret_cast<void**>(0);
    if (z12) {
        r6_9 = r2;
        goto addr_eed4_15;
    }
}

void** gb384 = reinterpret_cast<void**>(16);

void fun_edac(void** r0, void** r1, void** r2);

void*** gb388 = reinterpret_cast<void***>(0x40000768);

void fun_b1d8(void** r0, void** r1, void** r2) {
    void** r0_4;
    void*** r3_5;
    void** r4_6;
    void** r5_7;
    void** r1_8;
    void** r4_9;
    void** r1_10;
    void** r4_11;
    void** r1_12;
    void*** r3_13;
    void** r4_14;
    void** r5_15;
    void*** r3_16;
    int1_t less17;
    void** r0_18;
    void** r5_19;
    void** r4_20;
    void*** r6_21;
    void** r1_22;
    int1_t less23;
    void** r0_24;
    int1_t below_or_equal25;
    void** r0_26;
    int1_t below_or_equal27;
    uint32_t r4_28;
    void*** r3_29;
    void** r1_30;
    int1_t z31;
    void** v32;
    uint32_t r4_33;
    void*** r3_34;
    void** r1_35;
    int1_t z36;
    void** v37;

    r0_4 = gb384;
    fun_edac(r0_4, r1, r2);
    r3_5 = gb388;
    r4_6 = reinterpret_cast<void**>(10);
    r5_7 = reinterpret_cast<void**>(11 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*r3_5 + 4)));
    while (r1_8 = r4_6, ++r4_6, fun_b198(r5_7 + 1, r1_8, 1), !reinterpret_cast<int1_t>(r4_6 == 12)) {
    }
    r4_9 = reinterpret_cast<void**>(9);
    while (r1_10 = r4_9, ++r4_9, fun_b198(r5_7, r1_10, 1), !reinterpret_cast<int1_t>(r4_9 == 12)) {
    }
    r4_11 = reinterpret_cast<void**>(10);
    while (r1_12 = r4_11, ++r4_11, fun_b198(r5_7 - 1, r1_12, 1), !reinterpret_cast<int1_t>(r4_11 == 12)) {
    }
    r3_13 = gb388;
    r4_14 = *reinterpret_cast<void***>(*r3_13);
    r5_15 = reinterpret_cast<void**>(11 - reinterpret_cast<unsigned char>(r4_14));
    while (r3_16 = gb388, less17 = reinterpret_cast<signed char>(r4_14) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(*r3_16) + 4), r0_18 = r5_15, --r5_15, r4_14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r4_14) + reinterpret_cast<unsigned char>(1)), less17) {
        fun_b198(r0_18, 0, 1);
    }
    r5_19 = reinterpret_cast<void**>(12 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*r3_16)));
    r4_20 = *reinterpret_cast<void***>(*r3_16) - 1;
    while (r6_21 = gb388, r1_22 = reinterpret_cast<void**>(1), less23 = reinterpret_cast<signed char>(r4_20) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(*r6_21) + 5), r0_24 = r5_19, --r5_19, r4_20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r4_20) + reinterpret_cast<unsigned char>(1)), less23) {
        fun_b198(r0_24, 1, 1);
    }
    below_or_equal25 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*r6_21 + 48)) <= reinterpret_cast<unsigned char>(1);
    if (!below_or_equal25) {
        r0_24 = reinterpret_cast<void**>(11 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*r6_21)));
    }
    if (!below_or_equal25) {
        r1_22 = reinterpret_cast<void**>(2);
    }
    if (!below_or_equal25) {
        fun_b198(r0_24, r1_22, 1);
    }
    r0_26 = *r6_21;
    below_or_equal27 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r0_26 + 56)) <= reinterpret_cast<unsigned char>(1);
    if (!below_or_equal27) {
        r0_26 = *reinterpret_cast<void***>(r0_26);
    }
    if (!below_or_equal27) {
        r1_22 = reinterpret_cast<void**>(2);
    }
    if (!below_or_equal27) {
        r0_26 = reinterpret_cast<void**>(8 - reinterpret_cast<unsigned char>(r0_26));
    }
    if (!below_or_equal27) {
    }
    if (!below_or_equal27) {
        r0_26 = fun_b198(r0_26, r1_22, 1);
    }
    r4_28 = 0;
    while (1) {
        r3_29 = gb388;
        r1_30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*r3_29) + (r4_28 << 4));
        z31 = *reinterpret_cast<void***>(r1_30 + 8) == 0;
        ++r4_28;
        if (!z31) {
            r0_26 = r1_30 + 12;
        }
        if (!z31) {
            v32 = r0_26;
            r0_26 = *reinterpret_cast<void***>(v32);
            r1_30 = *reinterpret_cast<void***>(v32 + 4);
        }
        if (!z31) {
            r0_26 = reinterpret_cast<void**>(11 - reinterpret_cast<unsigned char>(r0_26));
        }
        if (!z31) {
            r0_26 = fun_b198(r0_26, r1_30, 1);
        }
        if (r4_28 == 2) 
            break;
    }
    r4_33 = 0;
    while (1) {
        r3_34 = gb388;
        r1_35 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*r3_34) + (r4_33 << 4));
        z36 = *reinterpret_cast<void***>(r1_35 + 64) == 0;
        ++r4_33;
        if (!z36) {
            r0_26 = r1_35 + 68;
        }
        if (!z36) {
            v37 = r0_26;
            r0_26 = *reinterpret_cast<void***>(v37);
            r1_35 = *reinterpret_cast<void***>(v37 + 4);
        }
        if (!z36) {
            r0_26 = reinterpret_cast<void**>(11 - reinterpret_cast<unsigned char>(r0_26));
        }
        if (!z36) {
            r0_26 = fun_b198(r0_26, r1_35, 1);
        }
        if (r4_33 == 8) 
            break;
    }
}

void** fun_bb04(void** r0, void** r1) {
    void*** r0_3;
    void** r1_4;
    int32_t r12_5;
    void* r3_6;
    uint32_t r2_7;
    int1_t z8;
    int1_t less_or_equal9;

    r0_3 = reinterpret_cast<void***>(r0 + 0x70);
    r1_4 = reinterpret_cast<void**>(0);
    r12_5 = 7;
    do {
        r3_6 = reinterpret_cast<void*>(7);
        while (1) {
            r2_7 = 1 - reinterpret_cast<unsigned char>(r1_4);
            if (!__intrinsic()) {
                r2_7 = 0;
            }
            z8 = reinterpret_cast<int1_t>(r3_6 == 8);
            if (reinterpret_cast<int32_t>(r3_6) <= reinterpret_cast<int32_t>(8)) {
                z8 = r1_4 == 0;
            }
            if (!z8) 
                break;
            r1_4 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r3_6) + reinterpret_cast<uint32_t>(r0_3))));
            r3_6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r3_6) + 1);
        }
        ++r12_5;
        less_or_equal9 = r12_5 <= 8;
        if (!less_or_equal9) {
            r3_6 = reinterpret_cast<void*>(0);
        }
        if (less_or_equal9) {
            r3_6 = reinterpret_cast<void*>(r2_7 & 1);
        }
        r0_3 = r0_3 + 16;
    } while (r3_6);
    return r1_4;
}

void fun_bc80(int32_t r0);

void*** gbc5c = reinterpret_cast<void***>(0x4000076c);

struct s21 {
    signed char[34] pad34;
    unsigned char f34;
};

void** gbc64 = reinterpret_cast<void**>(0x40000774);

void** gbc68 = reinterpret_cast<void**>(0x40000778);

void** gbc60 = reinterpret_cast<void**>(0x70);

void fun_bc6c(void** r0, void** r1, void** r2, void** r3) {
    void** r7_5;
    void** r4_6;
    void** r5_7;
    void** r6_8;
    void** r0_9;
    void*** r1_10;
    void** r5_11;
    struct s21* r6_12;
    void** r4_13;
    void** r3_14;
    void** r3_15;
    void* r2_16;
    void** r3_17;
    void** r2_18;
    int1_t less_or_equal19;
    void** r0_20;
    void** r1_21;
    void** r5_22;
    void** r4_23;
    void** r1_24;
    void** r2_25;
    void** r3_26;

    if (reinterpret_cast<unsigned char>(r1) <= reinterpret_cast<unsigned char>(3)) {
        goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(fun_bc80) + reinterpret_cast<unsigned char>(r1) << 2);
    }
    r7_5 = r0;
    r0_9 = fun_1054(r0, r1, r2, r3, r4_6, r5_7, r6_8);
    r1_10 = gbc5c;
    if (reinterpret_cast<unsigned char>(*r1_10 + 0xc8) >= reinterpret_cast<unsigned char>(r0_9)) 
        goto addr_bb7c_6;
    addr_bb94_8:
    r5_11 = reinterpret_cast<void**>(0);
    while (1) {
        r6_12 = reinterpret_cast<struct s21*>(reinterpret_cast<unsigned char>(r7_5) + reinterpret_cast<unsigned char>(r5_11));
        r4_13 = reinterpret_cast<void**>(11);
        while (1) {
            r3_14 = gbc64;
            r3_15 = gbc68;
            r2_16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(*r3_14) - reinterpret_cast<unsigned char>(r4_13) + 5);
            r3_17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*r3_15) - 6 + reinterpret_cast<unsigned char>(r5_11));
            if (reinterpret_cast<signed char>(r3_17) < reinterpret_cast<signed char>(0)) {
                r3_17 = reinterpret_cast<void**>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(r3_17)));
            }
            if (reinterpret_cast<int32_t>(r2_16) < reinterpret_cast<int32_t>(0)) {
                r2_16 = reinterpret_cast<void*>(-static_cast<uint32_t>(r2_16));
            }
            r2_18 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r2_16) + reinterpret_cast<unsigned char>(r3_17));
            less_or_equal19 = reinterpret_cast<signed char>(r2_18) <= reinterpret_cast<signed char>(100);
            if (!less_or_equal19) {
                r3_17 = gbc60;
            }
            r0_20 = r4_13;
            if (less_or_equal19) {
                r2_18 = reinterpret_cast<void**>(static_cast<uint32_t>(r6_12->f34));
            }
            if (less_or_equal19) {
                r0_20 = r4_13;
            }
            r1_21 = r5_11;
            if (!less_or_equal19) {
                r2_18 = *reinterpret_cast<void***>(r3_17);
            }
            if (less_or_equal19) {
                r1_21 = r5_11;
            }
            --r4_13;
            fun_62e4(r0_20, r1_21, r2_18, r3_17);
            r6_12 = reinterpret_cast<struct s21*>(reinterpret_cast<uint32_t>(r6_12) + 16);
            if (reinterpret_cast<int1_t>(r4_13 == -1)) 
                break;
        }
        ++r5_11;
        if (r5_11 == 12) 
            break;
    }
    r5_22 = reinterpret_cast<void**>(5);
    while (1) {
        r4_23 = reinterpret_cast<void**>(5);
        while (r1_24 = r4_23, ++r4_23, fun_62e4(r5_22, r1_24, 1, r3_17), !reinterpret_cast<int1_t>(r4_23 == 7)) {
        }
        ++r5_22;
        if (reinterpret_cast<int1_t>(r5_22 == 7)) 
            break;
    }
    addr_bb7c_6:
    r2_25 = gbc60;
    r3_26 = reinterpret_cast<void**>(1 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r2_25)));
    if (!__intrinsic()) {
        r3_26 = reinterpret_cast<void**>(0);
    }
    *reinterpret_cast<void***>(r2_25) = r3_26;
    *r1_10 = r0_9;
    goto addr_bb94_8;
}

void** fun_c108(void** r0, void** r1, void** r2) {
    int32_t r0_4;
    void** r2_5;
    int32_t r0_6;
    void** r6_7;
    uint32_t r5_8;
    uint32_t r3_9;
    int1_t z10;
    uint32_t r12_11;

    r0_4 = g62fc;
    r2_5 = r1;
    r0_6 = fun_edf8(11 - reinterpret_cast<unsigned char>(r0), r2_5);
    r6_7 = reinterpret_cast<void**>(0xffffffff);
    if (r0_6) {
        r5_8 = r0_4 + (reinterpret_cast<unsigned char>(r2_5) << 1);
        r3_9 = reinterpret_cast<uint32_t>(reinterpret_cast<signed char>(11 - reinterpret_cast<unsigned char>(r0)) >> 3);
        z10 = r2 == 0;
        r12_11 = 1 - r3_9;
        if (!z10) {
            r3_9 = *reinterpret_cast<unsigned char*>(r5_8 + r12_11);
        }
        if (z10) {
            r3_9 = *reinterpret_cast<unsigned char*>(r5_8 + r12_11);
        }
        if (!z10) {
            r2_5 = reinterpret_cast<void**>(1);
        }
        if (z10) {
            r2_5 = reinterpret_cast<void**>(1);
        }
        if (!z10) {
            r3_9 = r3_9 | reinterpret_cast<unsigned char>(r2_5) << (reinterpret_cast<unsigned char>(11 - reinterpret_cast<unsigned char>(r0)) & 7);
        }
        if (z10) {
            __asm__("biceq r3, r3, r2, lsl lr");
        }
        if (!z10) {
            *reinterpret_cast<signed char*>(r5_8 + r12_11) = static_cast<signed char>(r3_9);
        }
        if (z10) {
            *reinterpret_cast<signed char*>(r5_8 + r12_11) = static_cast<signed char>(r3_9);
        }
        r6_7 = reinterpret_cast<void**>(0);
        if (z10) {
            r6_7 = r2;
        }
    }
    return r6_7;
}

void** fun_c4a0(void** r0, void** r1, void** r2) {
    void* sp4;
    void** r0_5;
    void** r2_6;
    void** r5_7;
    unsigned char* r6_8;
    void** r4_9;
    int1_t less10;
    void** r0_11;
    void** sp12;
    void** r0_13;

    sp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 16);
    r0_5 = fun_1107c(12 * reinterpret_cast<unsigned char>(r0), r1, r2);
    r2_6 = gc4fc;
    r5_7 = r0_5;
    if (r0_5 == *reinterpret_cast<void***>(r2_6)) {
        return r0_5;
    } else {
        *reinterpret_cast<void***>(r2_6) = r0_5;
        r6_8 = gc500;
        r4_9 = reinterpret_cast<void**>(0);
        while (1) {
            less10 = reinterpret_cast<signed char>(r4_9) < reinterpret_cast<signed char>(r5_7);
            if (!less10) {
                r2_6 = reinterpret_cast<void**>(0);
            }
            if (less10) {
                r2_6 = reinterpret_cast<void**>(1);
            }
            ++r6_8;
            ++r4_9;
            fun_6290(static_cast<uint32_t>(*r6_8), 4, r2_6);
            if (reinterpret_cast<int1_t>(r4_9 == 12)) 
                break;
        }
        r0_11 = g6330;
        sp12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp4) + 16 - 12 - 24);
        fun_f1dc(sp12, 4, r2_6);
        fun_eedc(sp12, r0_11, r2_6);
        r0_13 = fun_f1d8(sp12, r0_11, r2_6);
        return r0_13;
    }
}

void** fun_c504(void** r0, void** r1, void** r2) {
    void* sp4;
    void** r0_5;
    void** r2_6;
    void** r5_7;
    unsigned char* r6_8;
    void** r4_9;
    int1_t less10;
    void** r0_11;
    void** sp12;
    void** r0_13;

    sp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 16);
    r0_5 = fun_1107c(12 * reinterpret_cast<unsigned char>(r0), r1, r2);
    r2_6 = gc560;
    r5_7 = r0_5;
    if (r0_5 == *reinterpret_cast<void***>(r2_6)) {
        return r0_5;
    } else {
        *reinterpret_cast<void***>(r2_6) = r0_5;
        r6_8 = gc564;
        r4_9 = reinterpret_cast<void**>(0);
        while (1) {
            less10 = reinterpret_cast<signed char>(r4_9) < reinterpret_cast<signed char>(r5_7);
            if (!less10) {
                r2_6 = reinterpret_cast<void**>(0);
            }
            if (less10) {
                r2_6 = reinterpret_cast<void**>(1);
            }
            ++r6_8;
            ++r4_9;
            fun_6290(static_cast<uint32_t>(*r6_8), 2, r2_6);
            if (reinterpret_cast<int1_t>(r4_9 == 12)) 
                break;
        }
        r0_11 = g6330;
        sp12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp4) + 16 - 12 - 24);
        fun_f1dc(sp12, 2, r2_6);
        fun_eedc(sp12, r0_11, r2_6);
        r0_13 = fun_f1d8(sp12, r0_11, r2_6);
        return r0_13;
    }
}

void fun_c568(void** r0, void** r1, void** r2, void** r3, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35) {
    void*** r12_36;
    uint32_t r5_37;
    uint32_t r4_38;
    uint32_t lr39;
    uint32_t r3_40;
    uint32_t r2_41;
    uint32_t r1_42;
    int1_t less43;
    uint32_t r1_44;
    void* r0_45;
    uint32_t r3_46;
    int1_t less47;

    r12_36 = reinterpret_cast<void***>(r0 + reinterpret_cast<unsigned char>(r1) * 6);
    r5_37 = reinterpret_cast<unsigned char>(r3) & 0xff;
    r4_38 = reinterpret_cast<unsigned char>(r2) << 1;
    lr39 = 0;
    while (1) {
        r3_40 = r4_38 + lr39;
        r2_41 = r3_40 & 0x80000007;
        r1_42 = r3_40 + 7;
        if (!(r5_37 & 1)) {
            if (reinterpret_cast<int32_t>(r3_40) >= reinterpret_cast<int32_t>(0)) 
                goto addr_c5d4_5;
        } else {
            if (reinterpret_cast<int32_t>(r3_40) < reinterpret_cast<int32_t>(0)) {
                r3_40 = r1_42;
            }
            less43 = reinterpret_cast<int32_t>(r2_41) < reinterpret_cast<int32_t>(0);
            r1_44 = r2_41;
            if (less43) {
                r1_44 = r2_41 - 1;
            }
            if (less43) {
                r1_44 = ~(r1_44 << 29);
            }
            r0_45 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(r3_40) >> 3);
            if (less43) {
                r1_44 = ~(r1_44 >> 29);
            }
            if (less43) {
                ++r1_44;
            }
            r3_46 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r12_36) + reinterpret_cast<uint32_t>(r0_45))) | 1 << r1_44;
            goto addr_c5f8_17;
        }
        r3_40 = r1_42;
        addr_c5d4_5:
        less47 = reinterpret_cast<int32_t>(r2_41) < reinterpret_cast<int32_t>(0) != __intrinsic();
        if (less47) {
        }
        if (less47) {
        }
        r0_45 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(r3_40) >> 3);
        if (less47) {
        }
        r3_46 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r12_36) + reinterpret_cast<uint32_t>(r0_45));
        if (less47) {
        }
        __asm__("bic r3, r3, r2, lsl r1");
        addr_c5f8_17:
        ++lr39;
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r12_36) + reinterpret_cast<uint32_t>(r0_45)) = static_cast<signed char>(r3_46);
        if (lr39 == 2) 
            break;
    }
    return;
}

void*** gc8e0 = reinterpret_cast<void***>(0x40000798);

struct s22 {
    int32_t f0;
    int32_t f4;
};

struct s22* gc8e8 = reinterpret_cast<struct s22*>(0x400007b8);

struct s23 {
    int32_t f0;
    int32_t f4;
};

struct s23* gc8ec = reinterpret_cast<struct s23*>(0x400007a8);

void*** gc8e4 = reinterpret_cast<void***>(0x4000079c);

void** gc8f0 = reinterpret_cast<void**>(0xa0);

void** gc8f4 = reinterpret_cast<void**>(0xa4);

void** fun_c708(void** r0, void** r1, void** r2);

void fun_c724(void** r0, void** r1, void** r2, void** r3, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35) {
    void** r6_36;
    void** r4_37;
    void** r5_38;
    void** r6_39;
    void** r0_40;
    void** r8_41;
    void*** r3_42;
    struct s22* r3_43;
    struct s23* r1_44;
    void** r7_45;
    void** r6_46;
    void*** r3_47;
    void** r1_48;
    void*** r3_49;
    void** r3_50;
    void** r3_51;
    void** r3_52;
    void** r1_53;
    void** r3_54;
    void** r3_55;
    void** r2_56;
    void** r2_57;
    void** r5_58;
    int1_t z59;
    void** r4_60;
    void** r3_61;
    int1_t less62;
    int1_t less_or_equal63;
    void*** r2_64;
    void*** r2_65;
    void** r5_66;
    void*** r3_67;
    void** r1_68;
    struct s22* r3_69;
    struct s23* r1_70;

    r6_36 = r0;
    r0_40 = fun_1054(r0, r1, r2, r3, r4_37, r5_38, r6_39);
    r8_41 = r0_40;
    if (r6_36) {
        goto addr_c750_3;
    }
    r3_42 = gc8e0;
    if (reinterpret_cast<unsigned char>(*r3_42 + 0xc8) < reinterpret_cast<unsigned char>(r0_40)) {
        r3_43 = gc8e8;
        r1_44 = gc8ec;
        r7_45 = reinterpret_cast<void**>((r3_43->f0 - r1_44->f0 << 1) + 5);
        r6_46 = reinterpret_cast<void**>((r3_43->f4 - r1_44->f4 << 1) + 5);
    } else {
        addr_c750_3:
        r3_47 = gc8e4;
        r1_48 = *r3_47;
        r3_49 = gc8e0;
        r3_50 = *r3_49;
        goto addr_c76c_7;
    }
    r3_51 = gc8f0;
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3_51) + 0x1f4) >= reinterpret_cast<unsigned char>(r8_41)) {
        addr_c810_10:
        r3_52 = gc8f4;
        r1_53 = *reinterpret_cast<void***>(r3_52);
        r3_54 = gc8f0;
        r3_55 = *reinterpret_cast<void***>(r3_54);
        goto addr_c82c_11;
    }
    addr_c8a0_12:
    addr_c82c_11:
    while (r3_55 = r3_55 + 0x1f4, reinterpret_cast<unsigned char>(r3_55) >= reinterpret_cast<unsigned char>(r8_41)) {
        r1_53 = reinterpret_cast<void**>(1 - reinterpret_cast<unsigned char>(r1_53));
        if (__intrinsic()) 
            continue;
        r1_53 = reinterpret_cast<void**>(0);
    }
    r2_56 = gc8f4;
    *reinterpret_cast<void***>(r2_56) = r1_53;
    r2_57 = gc8f0;
    r5_58 = r7_45;
    *reinterpret_cast<void***>(r2_57) = r3_55 - 0x1f4;
    while (1) {
        z59 = r5_58 == r7_45 + 2;
        if (!z59) {
            r4_60 = r6_46;
        }
        if (z59) 
            goto addr_c8a0_12;
        while (r3_61 = r6_46 + 2, r4_60 != r3_61) {
            less62 = reinterpret_cast<signed char>(r5_58) < reinterpret_cast<signed char>(0);
            if (!less62) {
                less62 = reinterpret_cast<signed char>(r4_60) < reinterpret_cast<signed char>(0);
            }
            if (!less62) {
                less_or_equal63 = reinterpret_cast<signed char>(r5_58) <= reinterpret_cast<signed char>(11);
                if (less_or_equal63) {
                    less_or_equal63 = reinterpret_cast<signed char>(r4_60) <= reinterpret_cast<signed char>(11);
                }
                if (less_or_equal63) {
                    r3_61 = gc8f4;
                }
                if (less_or_equal63) {
                    r2_57 = *reinterpret_cast<void***>(r3_61);
                }
                if (less_or_equal63) {
                    fun_c708(r5_58, r4_60, r2_57);
                }
            }
            ++r4_60;
        }
        ++r5_58;
    }
    addr_c76c_7:
    while (r3_50 = r3_50 + 0xc8, reinterpret_cast<unsigned char>(r3_50) >= reinterpret_cast<unsigned char>(r8_41)) {
        r1_48 = reinterpret_cast<void**>(1 - reinterpret_cast<unsigned char>(r1_48));
        if (__intrinsic()) 
            continue;
        r1_48 = reinterpret_cast<void**>(0);
    }
    r2_64 = gc8e4;
    *r2_64 = r1_48;
    r2_65 = gc8e0;
    r5_66 = reinterpret_cast<void**>(5);
    *r2_65 = r3_50 - 0xc8;
    r4_60 = reinterpret_cast<void**>(5);
    while (1) {
        r3_67 = gc8e4;
        r1_68 = r4_60;
        ++r4_60;
        fun_c708(r5_66, r1_68, *r3_67);
        if (reinterpret_cast<int1_t>(r4_60 == 7)) {
            ++r5_66;
            r4_60 = reinterpret_cast<void**>(5);
            if (reinterpret_cast<int1_t>(r5_66 == 7)) 
                break;
        }
    }
    r3_69 = gc8e8;
    r1_70 = gc8ec;
    r7_45 = reinterpret_cast<void**>((r3_69->f0 - r1_70->f0 << 1) + reinterpret_cast<unsigned char>(5));
    r6_46 = reinterpret_cast<void**>((r3_69->f4 - r1_70->f4 << 1) + reinterpret_cast<unsigned char>(5));
    if (r6_36) {
        goto addr_c810_10;
    }
}

void** gc9b0 = reinterpret_cast<void**>(16);

struct s24 {
    void* f0;
    void* f4;
};

struct s24* gc9b4 = reinterpret_cast<struct s24*>(0x400007a8);

void** fun_c670(void** r0, void** r1, void** r2, void** r3, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35);

void fun_c8fc(void** r0, void** r1, void** r2, void** r3, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35) {
    void** v36;
    void** r4_37;
    void** v38;
    void** r5_39;
    void** v40;
    void** r6_41;
    void** v42;
    void** r7_43;
    void** v44;
    void** r7_45;
    void** r0_46;
    void** r6_47;
    struct s24* r3_48;
    void* r3_49;
    void** r4_50;
    void** r5_51;
    struct s24* r12_52;
    void* r3_53;
    void** r2_54;
    void** r0_55;
    void** r1_56;
    void** r3_57;
    void** r0_58;
    void** r4_59;
    void** r0_60;
    void** r8_61;
    void*** r3_62;
    struct s22* r3_63;
    struct s23* r1_64;
    void** r7_65;
    void** r6_66;
    void*** r3_67;
    void** r1_68;
    void*** r3_69;
    void** r3_70;
    void** r3_71;
    void** r3_72;
    void** r1_73;
    void** r3_74;
    void** r3_75;
    void** r2_76;
    void** r2_77;
    void** r5_78;
    int1_t z79;
    void** r3_80;
    int1_t less81;
    int1_t less_or_equal82;
    void*** r2_83;
    void*** r2_84;
    void** r5_85;
    void*** r3_86;
    void** r1_87;
    struct s22* r3_88;
    struct s23* r1_89;

    v36 = r4_37;
    v38 = r5_39;
    v40 = r6_41;
    v42 = r7_43;
    v44 = reinterpret_cast<void**>(__return_address());
    r7_45 = r0;
    r0_46 = gc9b0;
    fun_edac(r0_46, r1, r2);
    r6_47 = reinterpret_cast<void**>(0);
    while (1) {
        r3_48 = gc9b4;
        r3_49 = reinterpret_cast<void*>(r6_47 + 15);
        r4_50 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(r3_48->f0) + (reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(r3_49) + (reinterpret_cast<uint32_t>(r3_49) >> 31)) >> 1) - 10);
        r5_51 = reinterpret_cast<void**>(0);
        while (1) {
            r12_52 = gc9b4;
            r3_53 = reinterpret_cast<void*>(r5_51 + 15);
            r2_54 = reinterpret_cast<void**>(1);
            r0_55 = r6_47;
            r1_56 = r5_51;
            r3_57 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(r12_52->f4) + reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(r3_53) + (reinterpret_cast<uint32_t>(r3_53) >> 31)) >> reinterpret_cast<unsigned char>(1)));
            if (reinterpret_cast<signed char>(r4_50) >= reinterpret_cast<signed char>(0)) {
                r3_57 = r3_57 - 10;
                if (reinterpret_cast<signed char>(r3_57) >= reinterpret_cast<signed char>(0)) {
                    if (reinterpret_cast<signed char>(r4_50) <= reinterpret_cast<signed char>(23)) {
                        if (reinterpret_cast<signed char>(r3_57) <= reinterpret_cast<signed char>(23)) {
                            r0_58 = fun_c670(r7_45, r4_50, r3_57, r3_57, v36, v38, v40, v42, v44, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30);
                            r1_56 = r5_51;
                            r2_54 = r0_58;
                            r0_55 = r6_47;
                        }
                    }
                }
            }
            ++r5_51;
            fun_c708(r0_55, r1_56, r2_54);
            if (reinterpret_cast<int1_t>(r5_51 == 12)) 
                break;
        }
        ++r6_47;
        if (reinterpret_cast<int1_t>(r6_47 == 12)) 
            break;
    }
    r4_59 = v36;
    r0_60 = fun_1054(1, r1_56, r2_54, r3_57, r4_59, v38, v40);
    r8_61 = r0_60;
    if (1) {
        goto addr_c750_19;
    }
    r3_62 = gc8e0;
    if (reinterpret_cast<unsigned char>(*r3_62 + 0xc8) < reinterpret_cast<unsigned char>(r0_60)) {
        r3_63 = gc8e8;
        r1_64 = gc8ec;
        r7_65 = reinterpret_cast<void**>((r3_63->f0 - r1_64->f0 << 1) + 5);
        r6_66 = reinterpret_cast<void**>((r3_63->f4 - r1_64->f4 << 1) + 5);
    } else {
        addr_c750_19:
        r3_67 = gc8e4;
        r1_68 = *r3_67;
        r3_69 = gc8e0;
        r3_70 = *r3_69;
        goto addr_c76c_23;
    }
    r3_71 = gc8f0;
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3_71) + 0x1f4) >= reinterpret_cast<unsigned char>(r8_61)) {
        addr_c810_26:
        r3_72 = gc8f4;
        r1_73 = *reinterpret_cast<void***>(r3_72);
        r3_74 = gc8f0;
        r3_75 = *reinterpret_cast<void***>(r3_74);
        goto addr_c82c_27;
    }
    addr_c8a0_28:
    addr_c82c_27:
    while (r3_75 = r3_75 + 0x1f4, reinterpret_cast<unsigned char>(r3_75) >= reinterpret_cast<unsigned char>(r8_61)) {
        r1_73 = reinterpret_cast<void**>(1 - reinterpret_cast<unsigned char>(r1_73));
        if (__intrinsic()) 
            continue;
        r1_73 = reinterpret_cast<void**>(0);
    }
    r2_76 = gc8f4;
    *reinterpret_cast<void***>(r2_76) = r1_73;
    r2_77 = gc8f0;
    r5_78 = r7_65;
    *reinterpret_cast<void***>(r2_77) = r3_75 - 0x1f4;
    while (1) {
        z79 = r5_78 == r7_65 + 2;
        if (!z79) {
            r4_59 = r6_66;
        }
        if (z79) 
            goto addr_c8a0_28;
        while (r3_80 = r6_66 + 2, r4_59 != r3_80) {
            less81 = reinterpret_cast<signed char>(r5_78) < reinterpret_cast<signed char>(0);
            if (!less81) {
                less81 = reinterpret_cast<signed char>(r4_59) < reinterpret_cast<signed char>(0);
            }
            if (!less81) {
                less_or_equal82 = reinterpret_cast<signed char>(r5_78) <= reinterpret_cast<signed char>(11);
                if (less_or_equal82) {
                    less_or_equal82 = reinterpret_cast<signed char>(r4_59) <= reinterpret_cast<signed char>(11);
                }
                if (less_or_equal82) {
                    r3_80 = gc8f4;
                }
                if (less_or_equal82) {
                    r2_77 = *reinterpret_cast<void***>(r3_80);
                }
                if (less_or_equal82) {
                    fun_c708(r5_78, r4_59, r2_77);
                }
            }
            ++r4_59;
        }
        ++r5_78;
    }
    addr_c76c_23:
    while (r3_70 = r3_70 + 0xc8, reinterpret_cast<unsigned char>(r3_70) >= reinterpret_cast<unsigned char>(r8_61)) {
        r1_68 = reinterpret_cast<void**>(1 - reinterpret_cast<unsigned char>(r1_68));
        if (__intrinsic()) 
            continue;
        r1_68 = reinterpret_cast<void**>(0);
    }
    r2_83 = gc8e4;
    *r2_83 = r1_68;
    r2_84 = gc8e0;
    r5_85 = reinterpret_cast<void**>(5);
    *r2_84 = r3_70 - 0xc8;
    r4_59 = reinterpret_cast<void**>(5);
    while (1) {
        r3_86 = gc8e4;
        r1_87 = r4_59;
        ++r4_59;
        fun_c708(r5_85, r1_87, *r3_86);
        if (reinterpret_cast<int1_t>(r4_59 == 7)) {
            ++r5_85;
            r4_59 = reinterpret_cast<void**>(5);
            if (reinterpret_cast<int1_t>(r5_85 == 7)) 
                break;
        }
    }
    r3_88 = gc8e8;
    r1_89 = gc8ec;
    r7_65 = reinterpret_cast<void**>((r3_88->f0 - r1_89->f0 << 1) + reinterpret_cast<unsigned char>(5));
    r6_66 = reinterpret_cast<void**>((r3_88->f4 - r1_89->f4 << 1) + reinterpret_cast<unsigned char>(5));
    if (1) {
        goto addr_c810_26;
    }
}

struct s25 {
    signed char[49] pad49;
    void** f49;
};

void*** gd170 = reinterpret_cast<void***>(0x11f60);

struct s25* fun_d140(void** r0, void** r1, void** r2) {
    void*** r2_4;
    void** r1_5;
    struct s25* r0_6;

    r2_4 = gd170;
    r1_5 = r0;
    r0_6 = reinterpret_cast<struct s25*>(0);
    while (r2_4 = r2_4 + 4, *r2_4 != r1_5) {
        r0_6 = reinterpret_cast<struct s25*>(reinterpret_cast<uint32_t>(r0_6) + 1);
        if (reinterpret_cast<int1_t>(r0_6 == 5)) 
            goto addr_d168_4;
    }
    return r0_6;
    addr_d168_4:
    return 0xffffffff;
}

void*** gd208 = reinterpret_cast<void***>(0x400007c0);

void** gd20c = reinterpret_cast<void**>(48);

void** fun_10f6c(void** r0, void** r1, void** r2);

void** gd210 = reinterpret_cast<void**>(0xc4);

void*** gd214 = reinterpret_cast<void***>(0x11d7c);

void** fun_d174(void** r0, void** r1, void** r2, void** r3, void** a5) {
    void** r4_6;
    void** r5_7;
    void** r6_8;
    void** r0_9;
    void*** r3_10;
    int1_t below_or_equal11;
    void** r7_12;
    void** r6_13;
    void** r2_14;
    void** r1_15;
    void** r0_16;
    void** r2_17;
    void** r3_18;
    void*** r5_19;
    void** r4_20;
    int1_t less_or_equal21;
    void** r0_22;
    void*** r3_23;
    void** r0_24;
    int1_t c25;

    r0_9 = fun_1054(r0, r1, r2, r3, r4_6, r5_7, r6_8);
    r3_10 = gd208;
    below_or_equal11 = reinterpret_cast<unsigned char>(r0_9) <= reinterpret_cast<unsigned char>(*r3_10);
    r7_12 = r0_9;
    if (!below_or_equal11) {
        r6_13 = reinterpret_cast<void**>(43);
    }
    if (below_or_equal11) {
        r2_14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*r3_10) - reinterpret_cast<unsigned char>(r0_9));
        r1_15 = gd20c;
        r0_16 = fun_10f6c(reinterpret_cast<unsigned char>(r2_14) * 43, r1_15, r2_14);
        r6_13 = r0_16;
    }
    r2_17 = gd210;
    r3_18 = *reinterpret_cast<void***>(r2_17);
    if (r6_13 != r3_18) {
        *reinterpret_cast<void***>(r2_17) = r6_13;
        r5_19 = gd214;
        r4_20 = reinterpret_cast<void**>(0);
        while (1) {
            less_or_equal21 = reinterpret_cast<signed char>(r4_20) <= reinterpret_cast<signed char>(r6_13);
            if (!less_or_equal21) {
                r2_17 = reinterpret_cast<void**>(0);
            }
            if (less_or_equal21) {
                r2_17 = reinterpret_cast<void**>(1);
            }
            ++r4_20;
            r5_19 = r5_19 + 8;
            r0_22 = fun_62e4(*(r5_19 - 4), *r5_19, r2_17, r3_18);
            if (reinterpret_cast<int1_t>(r4_20 == 44)) 
                break;
        }
        fun_6334(r0_22, *r5_19, r2_17, r3_18);
    }
    r3_23 = gd208;
    r0_24 = *r3_23;
    c25 = reinterpret_cast<unsigned char>(r7_12) < reinterpret_cast<unsigned char>(r0_24);
    if (c25) {
        r0_24 = reinterpret_cast<void**>(0);
    }
    if (!c25) {
        r0_24 = reinterpret_cast<void**>(1);
    }
    return r0_24;
}

unsigned char* gd7a0 = reinterpret_cast<unsigned char*>(0x120da);

void** gd7a4 = reinterpret_cast<void**>(16);

void** fun_d718(void** r0, void** r1, void** r2) {
    void** sp4;
    void** r10_5;
    unsigned char* r3_6;
    void** r6_7;
    unsigned char* r5_8;
    uint32_t r7_9;
    uint32_t r4_10;
    void** r3_11;
    void** r1_12;
    void** r0_13;
    void** r0_14;
    void** r0_15;

    sp4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 28 - 24);
    r10_5 = r1;
    fun_edac(sp4, r1, r2);
    r3_6 = gd7a0;
    r6_7 = reinterpret_cast<void**>(2);
    r5_8 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(r3_6) + (reinterpret_cast<unsigned char>(r0) << 3));
    do {
        r7_9 = *r5_8;
        r4_10 = 0;
        while (r3_11 = reinterpret_cast<void**>(r7_9 & 1 << r4_10), r1_12 = reinterpret_cast<void**>(9 - r4_10), ++r4_10, fun_ee68(sp4, r1_12, r6_7, r3_11), r4_10 != 8) {
        }
        ++r6_7;
        ++r5_8;
    } while (r6_7 != 10);
    r0_13 = gd7a4;
    r0_14 = fun_ef0c(r0_13, sp4, r10_5, r3_11);
    r0_15 = fun_6334(r0_14, sp4, r10_5, r3_11);
    return r0_15;
}

void*** gd9e4 = reinterpret_cast<void***>(0x4000093c);

void fun_d9b4(void** r0, void** r1, void** r2) {
    void** r3_4;
    void*** r2_5;
    int1_t z6;

    r3_4 = reinterpret_cast<void**>(1 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r0 + 8)));
    if (!__intrinsic()) {
        r3_4 = reinterpret_cast<void**>(0);
    }
    *reinterpret_cast<void***>(r0 + 8) = r3_4;
    r2_5 = gd9e4;
    z6 = r3_4 == 0;
    if (!z6) {
        r3_4 = *r2_5;
    }
    if (z6) {
        r3_4 = *r2_5;
    }
    if (!z6) {
        ++r3_4;
    }
    if (z6) {
        --r3_4;
    }
    *r2_5 = r3_4;
    return;
}

struct s26 {
    signed char[8] pad8;
    void** f8;
};

struct s26* gda3c = reinterpret_cast<struct s26*>(0x4000087c);

unsigned char* gda40 = reinterpret_cast<unsigned char*>(0x40000004);

unsigned char* gda44 = reinterpret_cast<unsigned char*>(0x40000010);

void** fun_d9e8() {
    void* sp1;
    struct s26* r5_2;
    unsigned char* r4_3;
    void** r2_4;
    unsigned char* r3_5;
    void** r0_6;
    void** sp7;
    void** r0_8;

    sp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 12);
    r5_2 = gda3c;
    r4_3 = gda40;
    while (fun_6290(static_cast<uint32_t>(*r4_3), 1, r5_2->f8), fun_6290(static_cast<uint32_t>(*r4_3), 2, r5_2->f8), ++r4_3, r2_4 = r5_2->f8, fun_6290(static_cast<uint32_t>(*r4_3), 4, r2_4), r3_5 = gda44, r5_2 = reinterpret_cast<struct s26*>(reinterpret_cast<int32_t>(r5_2) + 16), r4_3 != r3_5) {
    }
    r0_6 = g6330;
    sp7 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp1) + 12 - 12 - 24);
    fun_f1dc(sp7, 4, r2_4);
    fun_eedc(sp7, r0_6, r2_4);
    r0_8 = fun_f1d8(sp7, r0_6, r2_4);
    return r0_8;
}

void** fun_e2f0(uint32_t r0, void** r1, void** r2, void** r3, void** a5, void** a6, void** a7) {
    void** r12_8;
    void** r3_9;
    void** r4_10;

    r12_8 = reinterpret_cast<void**>(r0 * reinterpret_cast<unsigned char>(a6));
    if (reinterpret_cast<unsigned char>(r2) < reinterpret_cast<unsigned char>(r12_8)) {
        r3_9 = reinterpret_cast<void**>(r0 * reinterpret_cast<unsigned char>(a7) + reinterpret_cast<unsigned char>(r12_8));
        if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(r2) + reinterpret_cast<unsigned char>(r3)) <= reinterpret_cast<unsigned char>(r3_9)) {
            fun_e7e0(r1, reinterpret_cast<unsigned char>(a5) + (reinterpret_cast<unsigned char>(r2) - reinterpret_cast<unsigned char>(r12_8)), r3, r3_9, r4_10);
            return 1;
        }
    }
    return 0;
}

struct s27 {
    void** f0;
    signed char[9] pad10;
    uint16_t f10;
    uint16_t f12;
};

void* fun_e3e8(struct s27* r0, void** r1, void*** r2) {
    struct s27* r5_4;
    void** r4_5;
    void* r0_6;
    void*** r1_7;
    uint32_t r12_8;
    uint32_t r2_9;
    void* lr10;
    void** r3_11;

    r5_4 = r0;
    r4_5 = r1;
    r0_6 = reinterpret_cast<void*>(0);
    r1_7 = r2;
    while (1) {
        r12_8 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(r0_6) + reinterpret_cast<unsigned char>(r4_5));
        r2_9 = r12_8 ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(r0_6) + reinterpret_cast<uint32_t>(r5_4)));
        if (r2_9) {
            lr10 = reinterpret_cast<void*>(0);
            while (!(r2_9 & 1)) {
                lr10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(lr10) + 1);
                if (reinterpret_cast<int1_t>(lr10 == 8)) 
                    goto addr_e444_8;
            }
            goto addr_e41c_10;
        }
        addr_e444_8:
        r0_6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(r0_6) + 1);
        if (reinterpret_cast<int1_t>(r0_6 == 10)) 
            break;
    }
    return 0;
    addr_e41c_10:
    r3_11 = reinterpret_cast<void**>(r12_8 & 1);
    if (r3_11) {
        r3_11 = reinterpret_cast<void**>(1);
    }
    *r1_7 = r3_11;
    return reinterpret_cast<int32_t>(lr10) + 1 + (reinterpret_cast<int32_t>(r0_6) << 3);
}

void** fun_e458(void** r0);

void** fun_e4ec(void** r0) {
    void** r0_2;
    int1_t z3;
    void** r3_4;

    r0_2 = fun_e458(r0);
    z3 = r0_2 == 0;
    r3_4 = r0_2;
    if (!z3) {
        r3_4 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r0_2 + 16))));
    }
    if (!z3) {
        *reinterpret_cast<uint16_t*>(r0 + 14) = static_cast<uint16_t>(reinterpret_cast<uint32_t>(r3_4));
    }
    if (!z3) {
        r3_4 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(r0_2 + 18)));
    }
    if (!z3) {
        *reinterpret_cast<void***>(r0 + 12) = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint32_t>(r3_4)));
    }
    if (!z3) {
        r3_4 = reinterpret_cast<void**>(1);
    }
    return r3_4;
}

struct s28 {
    void** f0;
    signed char[12] pad13;
    unsigned char f13;
};

struct s28* ge758 = reinterpret_cast<struct s28*>(0x40000d30);

void*** ge75c = reinterpret_cast<void***>(0x40000d2c);

struct s29 {
    void** f0;
    signed char[11] pad12;
    uint16_t f12;
    signed char[2] pad16;
    int16_t f16;
};

struct s30 {
    signed char[2] pad2;
    unsigned char f2;
};

struct s31 {
    uint16_t f0;
    unsigned char f1;
};

struct s32 {
    int16_t f0;
    signed char f2;
    signed char f3;
};

struct s33 {
    void** f0;
    signed char[11] pad12;
    uint16_t f12;
    unsigned char f13;
};

struct s34 {
    signed char[2] pad2;
    uint16_t f2;
};

struct s35 {
    void** f0;
    signed char[11] pad12;
    uint16_t f12;
};

struct s36 {
    signed char[1] pad1;
    unsigned char f1;
};

void* fun_e760(void** r0, void** r1, int32_t r2, void** r3, void** a5) {
    void** r0_6;
    void** r2_7;
    struct s28* r3_8;
    int1_t z9;
    void*** sp10;
    void** r7_11;
    void*** r5_12;
    struct s28* r6_13;
    void** v14;
    struct s29* r1_15;
    struct s30* r0_16;
    struct s31* r2_17;
    struct s32* r1_18;
    void* r0_19;
    void*** r3_20;
    void** r5_21;
    void** r4_22;
    struct s28* r3_23;
    struct s27* r0_24;
    void** r1_25;
    struct s28* r3_26;
    struct s33* r12_27;
    void** r3_28;
    void** r12_29;
    void*** r3_30;
    int1_t below_or_equal31;
    struct s28* r2_32;
    struct s34* r1_33;
    struct s35* r2_34;
    uint32_t r3_35;
    struct s28* r3_36;
    struct s36* r2_37;
    int1_t z38;

    r0_6 = fun_e458(r0);
    r2_7 = r0_6;
    if (r2_7) {
        *reinterpret_cast<void***>(r2_7 + 16) = reinterpret_cast<void**>(static_cast<uint16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(r0 + 14))));
        *reinterpret_cast<unsigned char*>(r2_7 + 18) = static_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r0 + 12))));
        return 1;
    }
    r3_8 = ge758;
    z9 = (static_cast<uint32_t>(r3_8->f13) & 0x80) == 0;
    sp10 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 + 8 - 20 - 4);
    r7_11 = r0;
    if (!z9) 
        goto addr_e538_6;
    addr_e6a0_8:
    r5_12 = ge75c;
    r6_13 = ge758;
    fun_e7e0(reinterpret_cast<unsigned char>(*r5_12) * 20 + reinterpret_cast<uint32_t>(r6_13), r7_11, static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(r7_11 + 10)) & 15, *r5_12, v14);
    r1_15 = reinterpret_cast<struct s29*>(reinterpret_cast<unsigned char>(*r5_12) * 20 + reinterpret_cast<uint32_t>(r6_13));
    r0_16 = reinterpret_cast<struct s30*>(reinterpret_cast<uint32_t>(r1_15) + 8);
    __asm__("bic r3, r3, #0x3fc0");
    __asm__("bic r3, r3, #0x20");
    r0_16->f2 = reinterpret_cast<unsigned char>(static_cast<uint16_t>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(r0_16->f2))));
    r1_15->f12 = static_cast<uint16_t>(static_cast<uint32_t>(r1_15->f12) & reinterpret_cast<uint32_t>("T"));
    r2_17 = reinterpret_cast<struct s31*>(&r1_15->f12);
    __asm__("bic r3, r3, #0x7e");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r2_17) + 1) = static_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r2_17) + 1)));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r2_17) + 1) = static_cast<unsigned char>(reinterpret_cast<int32_t>(~(~(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r2_17) + 1)) << 25) >> 25)));
    __asm__("bic r3, r3, #0x1f");
    r0_16->f2 = static_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(r7_11 + 10)) & 15 | static_cast<uint32_t>(r0_16->f2));
    r1_15->f16 = static_cast<int16_t>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(r7_11 + 14)));
    r1_18 = reinterpret_cast<struct s32*>(&r1_15->f16);
    r1_18->f2 = static_cast<signed char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r7_11 + 12))));
    r0_19 = reinterpret_cast<void*>(1);
    r1_18->f3 = static_cast<signed char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(r7_11 + 10)) >> 4);
    addr_e750_9:
    return r0_19;
    addr_e538_6:
    r3_20 = ge75c;
    v14 = reinterpret_cast<void**>(0);
    r5_21 = *r3_20;
    r4_22 = reinterpret_cast<void**>(0);
    while (1) {
        r3_23 = ge758;
        r0_24 = reinterpret_cast<struct s27*>(reinterpret_cast<unsigned char>(r4_22) * 20 + reinterpret_cast<uint32_t>(r3_23));
        r1_25 = reinterpret_cast<void**>(static_cast<uint32_t>(r0_24->f10) << 18 >> 23);
        if (z9) {
            __asm__("bic r3, r3, #0xfe00");
            if (!r0_24->f12) 
                goto addr_e578_13;
        }
        r3_26 = ge758;
        r12_27 = reinterpret_cast<struct s33*>(reinterpret_cast<unsigned char>(r4_22) * 20 + reinterpret_cast<uint32_t>(r3_26));
        r0_19 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r12_27) + 13)) >> 1 & 63);
        if (!(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r7_11) + reinterpret_cast<uint32_t>(r0_19) >> 3)) & 1)) {
            if (!r1_25) 
                break;
            r4_22 = r1_25;
        } else {
            r3_28 = reinterpret_cast<void**>(static_cast<uint32_t>(r12_27->f12));
            __asm__("bic r3, r3, #0xfe00");
            if (!r3_28) 
                goto label_20;
            r4_22 = r3_28;
        }
        z9 = r4_22 == r5_21;
        if (reinterpret_cast<unsigned char>(r4_22) > reinterpret_cast<unsigned char>(r5_21)) 
            goto label_23;
    }
    v14 = r1_25;
    addr_e600_27:
    if (r4_22 != 20) {
        r12_29 = r5_21 + 1;
        r3_30 = ge75c;
        below_or_equal31 = reinterpret_cast<unsigned char>(r12_29) <= reinterpret_cast<unsigned char>(19);
        *r3_30 = r12_29;
        if (!below_or_equal31) {
            r0_19 = reinterpret_cast<void*>(0);
        }
        if (!below_or_equal31) {
            *r3_30 = r5_21;
        }
        if (!below_or_equal31) 
            goto label_34; else 
            goto addr_e624_35;
    }
    addr_e74c_36:
    r0_19 = reinterpret_cast<void*>(0);
    goto addr_e750_9;
    label_34:
    goto addr_e750_9;
    addr_e624_35:
    r2_32 = ge758;
    if (!v14) {
        r1_33 = reinterpret_cast<struct s34*>(reinterpret_cast<unsigned char>(r4_22) * 20 + reinterpret_cast<uint32_t>(r2_32) + 8);
        __asm__("bic r3, r3, #0x3fc0");
        __asm__("bic r3, r3, #0x20");
        r1_33->f2 = static_cast<uint16_t>(static_cast<uint32_t>(r1_33->f2) | reinterpret_cast<unsigned char>(r12_29) << 23 >> 23 << 5);
    } else {
        r2_34 = reinterpret_cast<struct s35*>(reinterpret_cast<unsigned char>(r4_22) * 20 + reinterpret_cast<uint32_t>(r2_32));
        r3_35 = static_cast<uint32_t>(r2_34->f12) >> 9 | reinterpret_cast<unsigned char>(r12_29) << 23;
        r2_34->f12 = static_cast<uint16_t>(r3_35 >> 23 | r3_35 << 9);
    }
    r3_36 = ge758;
    r2_37 = reinterpret_cast<struct s36*>(reinterpret_cast<unsigned char>(r4_22) * 20 + reinterpret_cast<uint32_t>(r3_36) + 12);
    __asm__("bic r3, r3, #0x7e");
    r2_37->f1 = static_cast<unsigned char>(static_cast<uint32_t>(r2_37->f1) | (reinterpret_cast<uint32_t>(r0_19) & 63) << 1);
    goto addr_e6a0_8;
    label_23:
    goto addr_e74c_36;
    label_20:
    v14 = reinterpret_cast<void**>(1);
    goto addr_e600_27;
    addr_e578_13:
    r0_19 = fun_e3e8(r0_24, r7_11, sp10);
    z38 = r0_19 == 0;
    if (!z38) {
        r0_19 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r0_19) - 1);
    }
    if (!z38) {
        goto addr_e600_27;
    } else {
        goto addr_e74c_36;
    }
}

struct s37 {
    uint32_t f0;
    uint32_t f4;
};

struct s38 {
    uint32_t f0;
    uint32_t f4;
    signed char[4] pad12;
    uint32_t f12;
    signed char[12] pad28;
    uint32_t f28;
};

void** fun_e7e0(void** r0, void** r1, void** r2, void** r3, void** a5) {
    int1_t z6;
    void** v7;
    uint32_t r3_8;
    uint32_t r3_9;
    int1_t less_or_equal10;
    uint32_t r3_11;
    uint32_t lr12;
    int1_t z13;
    int1_t less_or_equal14;
    uint32_t r2_15;
    void** r1_16;
    void** r0_17;
    struct s37* r1_18;
    uint32_t r12_19;
    struct s38* r1_20;
    uint32_t r3_21;
    uint32_t r3_22;
    int1_t z23;
    int1_t less24;
    int32_t* r2_25;
    int1_t z26;
    int1_t less27;
    void* r2_28;
    int1_t z29;
    int1_t less30;
    int1_t z31;
    int1_t less32;

    z6 = r1 == r0;
    if (z6) {
        r0 = reinterpret_cast<void**>(0);
    }
    if (z6) {
        return r0;
    }
    v7 = r0;
    if (reinterpret_cast<signed char>(r2) >= reinterpret_cast<signed char>(4)) {
        r3_8 = reinterpret_cast<unsigned char>(r0) & 3;
        if (r3_8) {
            r3_9 = 4 - r3_8;
            r2 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r2) - r3_9);
            less_or_equal10 = reinterpret_cast<int32_t>(r3_9) <= reinterpret_cast<int32_t>(2);
            r3_11 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r1));
            ++r1;
            *reinterpret_cast<void***>(r0) = reinterpret_cast<void**>(static_cast<unsigned char>(r3_11));
            ++r0;
            if (!__intrinsic()) 
                goto label_10; else 
                goto addr_e894_11;
        } else {
            lr12 = reinterpret_cast<unsigned char>(r1) & 3;
            z13 = lr12 == 0;
            if (!z13) {
                goto addr_e8b0_14;
            }
        }
    }
    addr_e9b0_15:
    less_or_equal14 = reinterpret_cast<signed char>(r2) <= reinterpret_cast<signed char>(2);
    r2_15 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r1));
    r1_16 = r1 + 1;
    *reinterpret_cast<void***>(r0) = reinterpret_cast<void**>(static_cast<unsigned char>(r2_15));
    r0_17 = r0 + 1;
    if (!__intrinsic()) {
        r2_15 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r1_16));
        ++r1_16;
    }
    if (!__intrinsic()) {
        *reinterpret_cast<void***>(r0_17) = reinterpret_cast<void**>(static_cast<unsigned char>(r2_15));
        ++r0_17;
    }
    if (!less_or_equal14) {
        r2_15 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r1_16));
    }
    if (!less_or_equal14) {
        *reinterpret_cast<void***>(r0_17) = reinterpret_cast<void**>(static_cast<unsigned char>(r2_15));
    }
    return v7;
    label_10:
    r3_11 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r1));
    ++r1;
    addr_e894_11:
    if (!__intrinsic()) {
        *reinterpret_cast<void***>(r0) = reinterpret_cast<void**>(static_cast<unsigned char>(r3_11));
        ++r0;
    }
    if (!less_or_equal10) {
        r3_11 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r1));
        ++r1;
    }
    if (!less_or_equal10) {
        *reinterpret_cast<void***>(r0) = reinterpret_cast<void**>(static_cast<unsigned char>(r3_11));
        ++r0;
    }
    if (reinterpret_cast<signed char>(r2) < reinterpret_cast<signed char>(4)) {
        goto addr_e9b0_15;
    } else {
        lr12 = reinterpret_cast<unsigned char>(r1) & 3;
        z13 = lr12 == 0;
        if (!z13) {
            addr_e8b0_14:
            r1_18 = reinterpret_cast<struct s37*>(reinterpret_cast<unsigned char>(r1) - lr12);
            r12_19 = 4 - lr12 << 3;
            r1_20 = reinterpret_cast<struct s38*>(&r1_18->f4);
            r3_21 = r1_18->f0;
            goto addr_e8cc_33;
        }
    }
    r3_22 = reinterpret_cast<unsigned char>(r2) >> 5;
    if (!z13) {
        while (1) {
            r1 = r1 + 32;
            __asm__("stm r0!, {r4, r5, r6, r7, r8, sb, sl, fp}");
            r2 = r2 - 32;
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
        r1 = r1 + 16;
        __asm__("stm r0!, {r4, r5, r6, r7}");
        r2 = r2 - 16;
        z13 = r2 == 0;
    }
    if (!z13) {
        r1 = r1 + 8;
        __asm__("stm r0!, {r4, r5}");
        r2 = r2 - 8;
        z13 = r2 == 0;
    }
    if (z13) {
        if (reinterpret_cast<signed char>(r2) <= reinterpret_cast<signed char>(0)) 
            goto addr_e878_49;
    } else {
        r1 = r1 + 4;
        *reinterpret_cast<void***>(r0) = *reinterpret_cast<void***>(r1);
        r0 = r0 + 4;
        r2 = r2 - 4;
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r2) < reinterpret_cast<signed char>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(r2 == 0))) {
            goto addr_e9b0_15;
        } else {
            return v7;
        }
    }
    goto addr_e9b0_15;
    addr_e878_49:
    return v7;
    while (1) {
        addr_e8cc_33:
        r2 = r2 - 32;
        z23 = r2 == 0;
        less24 = reinterpret_cast<signed char>(r2) < reinterpret_cast<signed char>(0) != __intrinsic();
        if (less24) {
            r2 = r2 + 32;
        }
        if (less24) 
            break;
        ++r1_20;
        __asm__("stm r0!, {r3, r4, r5, r6, r7, r8, sb, sl}");
        r3_21 = r1_20->f28;
        if (z23) 
            goto label_57;
    }
    r2_25 = reinterpret_cast<int32_t*>(r2 - 16);
    z26 = r2_25 == 0;
    less27 = reinterpret_cast<int32_t>(r2_25) < reinterpret_cast<int32_t>(0) != __intrinsic();
    if (less27) {
        r2_25 = r2_25 + 4;
    }
    if (less27) {
        goto addr_e960_64;
    }
    r1_20 = reinterpret_cast<struct s38*>(&r1_20->pad28);
    __asm__("stm r0!, {r3, r4, r5, r6}");
    r3_21 = r1_20->f12;
    if (!z26) {
        addr_e960_64:
        r2_28 = reinterpret_cast<void*>(r2_25 - 2);
        z29 = r2_28 == 0;
        less30 = reinterpret_cast<int32_t>(r2_28) < reinterpret_cast<int32_t>(0) != __intrinsic();
        if (less30) {
            r2_28 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r2_28) + 8);
            goto addr_e968_68;
        }
    }
    addr_e9d0_69:
    return v7;
    addr_e968_68:
    if (less30) {
        goto addr_e988_71;
    }
    r1_20 = reinterpret_cast<struct s38*>(&r1_20->pad12);
    __asm__("stm r0!, {r3, r4}");
    r3_21 = r1_20->f4;
    if (z29) {
        goto addr_e9d0_69;
    } else {
        addr_e988_71:
        r2 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r2_28) - 4);
        z31 = r2 == 0;
        less32 = reinterpret_cast<signed char>(r2) < reinterpret_cast<signed char>(0) != __intrinsic();
        if (less32) {
            r2 = r2 + 4;
        }
    }
    if (less32) {
        goto addr_e9a4_77;
    }
    r1_20 = reinterpret_cast<struct s38*>(&r1_20->f4);
    *reinterpret_cast<void***>(r0) = reinterpret_cast<void**>(r3_21 | r1_20->f0 << r12_19);
    r0 = r0 + 4;
    if (z31) {
        goto addr_e9d0_69;
    } else {
        addr_e9a4_77:
        r1 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r1_20) - (r12_19 >> 3));
        goto addr_e9b0_15;
    }
    label_57:
    goto addr_e9d0_69;
}

int32_t gea24 = 0x12564;

int32_t gea28 = 0x12564;

struct s39 {
    signed char[4] pad4;
    int32_t f4;
};

struct s39* gea2c = reinterpret_cast<struct s39*>(0x12560);

void fun_e9ec() {
    int32_t r3_1;
    int32_t r2_2;
    struct s39* r5_3;
    uint32_t r4_4;

    r3_1 = gea24;
    r2_2 = gea28;
    r5_3 = gea2c;
    r4_4 = reinterpret_cast<uint32_t>(r3_1 - r2_2) >> 2;
    while (--r4_4, r5_3 = reinterpret_cast<struct s39*>(reinterpret_cast<int32_t>(r5_3) - 4), r4_4 != -1) {
        r5_3->f4();
    }
    return;
}

int32_t gea74 = 0x12564;

int32_t gea78 = 0x1255c;

struct s40 {
    signed char[4] pad4;
    int32_t f4;
};

struct s40* gea7c = reinterpret_cast<struct s40*>(0x12560);

int32_t* gea80 = reinterpret_cast<int32_t*>(0x40000ec0);

void fun_ea30(uint32_t r0) {
    int32_t r3_2;
    int32_t r2_3;
    struct s40* r5_4;
    uint32_t r4_5;
    int32_t* r3_6;

    r3_2 = gea74;
    r2_3 = gea78;
    r5_4 = gea7c;
    r4_5 = reinterpret_cast<uint32_t>(r3_2 - r2_3) >> 2;
    while (--r4_5, r5_4 = reinterpret_cast<struct s40*>(reinterpret_cast<int32_t>(r5_4) - 4), r4_5 != -1) {
        r5_4->f4();
    }
    r3_6 = gea80;
    *r3_6 = 1;
    return;
}

void fun_ea84(void** r0) {
}

unsigned char* gece0 = reinterpret_cast<unsigned char*>(0x400004b0);

void* fun_ecb4(void** r0, void** r1) {
    unsigned char* r1_3;
    void** r2_4;
    void* r0_5;
    uint32_t r3_6;

    r1_3 = gece0;
    r2_4 = r0;
    r0_5 = reinterpret_cast<void*>(0);
    while (r3_6 = *r1_3, ++r1_3, !!r3_6) {
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r0_5) + reinterpret_cast<unsigned char>(r2_4)) = static_cast<signed char>(r3_6);
        r0_5 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r0_5) + 1);
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r2_4) + reinterpret_cast<uint32_t>(r0_5)) = static_cast<signed char>(r3_6);
    return r0_5;
}

void** ged24 = reinterpret_cast<void**>(0xb0);

void** ged28 = reinterpret_cast<void**>(0x80);

void** fun_ece4(void* r0) {
    void** v2;
    void** r4_3;
    int32_t v4;
    int32_t r5_5;
    void** r3_6;
    void* r4_7;
    void* r0_8;
    uint32_t r5_9;
    void** r4_10;
    void** r1_11;
    void** r2_12;
    void** r0_13;

    v2 = r4_3;
    v4 = r5_5;
    r3_6 = ged24;
    r4_7 = r0;
    r0_8 = reinterpret_cast<void*>(0);
    while (r5_9 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3_6)), ++r3_6, !!r5_9) {
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r0_8) + reinterpret_cast<uint32_t>(r4_7)) = static_cast<signed char>(r5_9);
        r0_8 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r0_8) + 1);
    }
    r4_10 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r4_7) + reinterpret_cast<uint32_t>(r0_8));
    r1_11 = ged28;
    r0_13 = fun_eb30(r4_10, r1_11, r2_12, r3_6, v2, *reinterpret_cast<void***>(&v4));
    *reinterpret_cast<signed char*>(r4_10 + 7) = static_cast<signed char>(r5_9);
    return r0_13;
}

int32_t fun_f7d8(void** r0, void** r1, void** r2);

void fun_ed2c(void* r0, void** r1, void** r2) {
    void* sp4;
    void* r4_5;
    void** r5_6;
    void** r6_7;
    int32_t r0_8;
    int1_t z9;
    void* r1_10;
    uint32_t r3_11;
    void** r0_12;

    sp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 16 - 4);
    r4_5 = r0;
    fun_ece4(r0);
    r5_6 = reinterpret_cast<void**>(0);
    while (r6_7 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r5_6) + reinterpret_cast<uint32_t>(r4_5)))), !!r6_7) {
        ++r5_6;
    }
    r0_8 = fun_f7d8(reinterpret_cast<int32_t>(sp4) + 1, r1, r2);
    z9 = r0_8 == 0;
    r1_10 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r4_5) + reinterpret_cast<unsigned char>(r5_6));
    if (!z9) {
        r2 = r6_7;
    }
    if (!z9) {
        while (r3_11 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r2) + (reinterpret_cast<int32_t>(sp4) + 1)), r0_12 = r2 + 1, !!r3_11) {
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r2) + reinterpret_cast<uint32_t>(r1_10)) = static_cast<signed char>(r3_11);
            r2 = r0_12;
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r1_10) + reinterpret_cast<unsigned char>(r2)) = static_cast<signed char>(r3_11 + 47);
        r5_6 = r0_12;
        r4_5 = r1_10;
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r4_5) + reinterpret_cast<unsigned char>(r5_6)) = 0;
    return;
}

int32_t fun_effc(void** r0, void** r1) {
    int1_t below_or_equal3;
    int32_t r3_4;
    int32_t r0_5;
    int1_t less_or_equal6;

    below_or_equal3 = reinterpret_cast<unsigned char>(r0) <= reinterpret_cast<unsigned char>(11);
    if (!below_or_equal3) {
        r3_4 = 0;
    }
    if (below_or_equal3) {
        r3_4 = 1;
    }
    if (reinterpret_cast<signed char>(r1) < reinterpret_cast<signed char>(0)) {
        r3_4 = 0;
    }
    r0_5 = r3_4;
    if (!r3_4) {
        return r0_5;
    } else {
        less_or_equal6 = reinterpret_cast<signed char>(r1) <= reinterpret_cast<signed char>(2);
        if (!less_or_equal6) {
            r0_5 = 0;
        }
        if (less_or_equal6) {
            r0_5 = 1;
        }
        return r0_5;
    }
}

void** fun_f1d8(void** r0, void** r1, void** r2) {
}

int32_t* gf278 = reinterpret_cast<int32_t*>(0x40000ec8);

int32_t fun_f268(int32_t r0) {
    int32_t* r3_2;

    r3_2 = gf278;
    *r3_2 = r0;
    return 0;
}

int32_t* gf374 = reinterpret_cast<int32_t*>(0x40000ecc);

void** gf378 = reinterpret_cast<void**>(0xc4);

void fun_1050(void** r0, void** r1, void** r2, void** r3);

int32_t fun_10e5c(int32_t* r0, uint32_t* r1, void** r2);

void fun_10898(int32_t r0, uint32_t r1, void** r2);

int32_t* gf37c = reinterpret_cast<int32_t*>(0x40000ec8);

uint32_t* gf380 = reinterpret_cast<uint32_t*>(0x40000ed0);

void fun_f290(void** r0, void** r1, void** r2) {
    int32_t* r3_4;
    uint32_t* sp5;
    void** r7_6;
    void** r3_7;
    int32_t r0_8;
    int32_t r1_9;
    int32_t v10;
    uint32_t v11;
    int32_t* r3_12;
    uint32_t r4_13;
    uint32_t v14;
    uint32_t* r2_15;
    uint32_t r6_16;
    int32_t r5_17;
    int32_t r0_18;
    int1_t z19;
    int32_t* r3_20;

    r3_4 = gf374;
    sp5 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 20 - 8);
    r7_6 = r0;
    if (*r3_4) {
        r3_7 = gf378;
        if (!*reinterpret_cast<void***>(r3_7)) {
            fun_1050(r0, r1, r2, r3_7);
            fun_ea84(*reinterpret_cast<void***>(r3_7));
        } else {
            goto *reinterpret_cast<void***>(r3_7);
        }
    }
    while (r0_8 = fun_10e5c(sp5 + 1, sp5, r7_6), r1_9 = r0_8, r1_9 == 0) {
        if (v10 != 1) {
            fun_10898(v10, v11, r7_6);
        } else {
            r3_12 = gf37c;
            r4_13 = v14;
            if (*r3_12) {
                r2_15 = gf380;
                r6_16 = r4_13 ^ *r2_15;
                if (r6_16) {
                    *r2_15 = r4_13;
                    r5_17 = r1_9;
                    while (1) {
                        r0_18 = r5_17;
                        ++r5_17;
                        if (r6_16 & 1) {
                            z19 = (r4_13 & 1) == 0;
                            if (z19) {
                                r1_9 = 2;
                            }
                            if (!z19) {
                                r1_9 = 1;
                            }
                            r3_20 = gf37c;
                            *r3_20(r0_18, r1_9);
                        }
                        if (r5_17 == 32) 
                            break;
                    }
                }
            }
        }
    }
    return;
}

int32_t gf3b0 = 0xf410;

uint32_t gf3b4 = 0x40000edc;

void** gf3b8 = reinterpret_cast<void**>(0xdc);

void** fun_f384() {
    int32_t r1_1;
    uint32_t r3_2;
    void** r0_3;
    void** r0_4;

    r1_1 = gf3b0;
    r3_2 = gf3b4;
    r0_3 = gf3b8;
    r0_4 = fun_ddf4(r0_3, r1_1, 12, r3_2, 0x300);
    return r0_4;
}

void fun_10d20(int32_t* r0);

unsigned char* gf40c = reinterpret_cast<unsigned char*>(0x40000ed4);

void** fun_10d60(int32_t r0);

int32_t fun_10e18(void** r0);

void fun_10a9c(int32_t r0);

void** fun_f3bc(void** r0) {
    unsigned char* r2_2;
    int32_t v3;
    void** r0_4;
    int32_t r0_5;
    void** r0_6;
    int32_t v7;

    fun_10d20(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4);
    r2_2 = gf40c;
    if (!*r2_2) {
        *r2_2 = 1;
        r0_4 = fun_10d60(v3);
        r0_5 = fun_10e18(r0_4);
        fun_10a9c(r0_5);
        r0_6 = fun_f384();
    } else {
        r0_6 = fun_10d60(v7);
    }
    return r0_6;
}

void** gf4c0 = reinterpret_cast<void**>(0xf0);

void** fun_f48c(void** r0, void** r1, void** r2) {
    void** v4;
    void** r4_5;
    int32_t v6;
    void** r4_7;
    void** r0_8;
    void** r3_9;
    void** r1_10;

    v4 = r4_5;
    v6 = reinterpret_cast<int32_t>(__return_address());
    r4_7 = r0;
    fun_ecb4(r0, r1);
    r0_8 = r4_7;
    while (r3_9 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r0_8)))), !!r3_9) {
        ++r0_8;
    }
    r1_10 = gf4c0;
    fun_eb30(r0_8, r1_10, r2, r3_9, v4, *reinterpret_cast<void***>(&v6));
    return r4_7;
}

void*** gf570 = reinterpret_cast<void***>(0x400004e8);

void** gf574 = reinterpret_cast<void**>(84);

void** fun_102c(void** r0, void** r1, void** r2);

void** fun_1030(void** r0, void** r1, void** r2, void** r3);

void** fun_1028(void** r0, void** r1, void** r2, void** r3);

uint32_t fun_f4c4(void** r0, void** r1, void** r2) {
    void*** r3_4;
    void** r2_5;
    int1_t z6;
    void** r6_7;
    void* sp8;
    int1_t z9;
    unsigned char v10;
    void** r0_11;
    void** r1_12;
    void** r0_13;
    void** r4_14;
    void** r3_15;
    void** r0_16;
    int1_t z17;
    void*** r3_18;

    r3_4 = gf570;
    r2_5 = *r3_4;
    z6 = reinterpret_cast<int1_t>(r2_5 == -1);
    if (!z6) {
        r3_4 = reinterpret_cast<void***>(0);
    }
    if (z6) {
        r3_4 = reinterpret_cast<void***>(1);
    }
    r6_7 = r0;
    if (r6_7) {
        r6_7 = reinterpret_cast<void**>(1);
    }
    sp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 16 - 24);
    z9 = (reinterpret_cast<unsigned char>(r6_7) | reinterpret_cast<uint32_t>(r3_4)) == 0;
    v10 = 0;
    if (z9) {
        v10 = static_cast<unsigned char>(reinterpret_cast<uint32_t>(r2_5));
    }
    if (!z9) {
        r0_11 = fun_f48c(reinterpret_cast<int32_t>(sp8) + 1, r1, r2_5);
        r1_12 = gf574;
        r0_13 = fun_102c(r0_11, r1_12, r2_5);
        r4_14 = r0_13;
        r3_15 = r4_14;
        if (r4_14) {
            r0_16 = fun_1030(reinterpret_cast<int32_t>(sp8) + 23, 1, 1, r3_15);
            z17 = r0_16 == 0;
            if (z17) {
                v10 = static_cast<unsigned char>(reinterpret_cast<uint32_t>(r0_16));
            }
            if (!z17) {
                r3_15 = r4_14;
                if (r6_7) {
                    fun_1030(r0, 1, 1, r3_15);
                }
            }
            fun_1028(r4_14, 1, 1, r3_15);
        }
        r3_18 = gf570;
        *r3_18 = reinterpret_cast<void**>(static_cast<uint32_t>(v10));
    }
    return static_cast<uint32_t>(v10);
}

void** gf6a0 = reinterpret_cast<void**>(84);

uint32_t fun_f578(void** r0, void** r1, void** r2) {
    void* sp4;
    uint32_t r4_5;
    unsigned char v6;
    void** r0_7;
    void** r1_8;
    void** r0_9;
    void** r5_10;
    void** r0_11;
    void** r0_12;
    void** r4_13;
    void** r6_14;
    void** r3_15;
    void** r0_16;
    unsigned char v17;
    void** r0_18;
    void** r0_19;
    unsigned char v20;

    sp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 20 - 28);
    r4_5 = reinterpret_cast<unsigned char>(r1) & 0xff;
    v6 = 0;
    r0_7 = fun_f48c(reinterpret_cast<int32_t>(sp4) + 3, r1, r2);
    r1_8 = gf6a0;
    r0_9 = fun_102c(r0_7, r1_8, r2);
    r5_10 = r0_9;
    if (r5_10) {
        r0_11 = fun_1030(reinterpret_cast<int32_t>(sp4) + 27, 1, 1, r5_10);
        if (!r0_11) {
            goto addr_f674_5;
        } else {
            r0_12 = fun_1030(reinterpret_cast<int32_t>(sp4) + 26, 1, 1, r5_10);
            if (!r0_12) {
                goto addr_f674_5;
            } else {
                if (0 > r4_5) {
                    v6 = static_cast<unsigned char>(r4_5);
                }
                r4_13 = r0;
                r6_14 = reinterpret_cast<void**>(0);
                while (r3_15 = r5_10, reinterpret_cast<signed char>(r6_14) < reinterpret_cast<signed char>(static_cast<uint32_t>(v6))) {
                    r0_16 = fun_1030(reinterpret_cast<int32_t>(sp4) + 25, 1, 1, r3_15);
                    if (r0_16) {
                        r0_18 = fun_1030(r4_13, 1, static_cast<uint32_t>(v17), r5_10);
                        if (r0_18) {
                            r0_19 = fun_1030(r4_13 + 31, 1, 2, r5_10);
                            if (r0_19) {
                                *reinterpret_cast<signed char*>(r4_13 + 33) = 0;
                                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r4_13) + v20) = 0;
                                goto addr_f64c_20;
                            }
                        }
                    }
                    v6 = 0;
                    addr_f64c_20:
                    ++r6_14;
                    r4_13 = r4_13 + 36;
                }
                goto addr_f67c_23;
            }
        }
    }
    addr_f694_24:
    return static_cast<uint32_t>(v6);
    addr_f674_5:
    r3_15 = reinterpret_cast<void**>(0);
    v6 = 0;
    addr_f67c_23:
    fun_1028(r5_10, 1, 1, r3_15);
    goto addr_f694_24;
}

void** gf7d0 = reinterpret_cast<void**>(0xe4);

void** gf7d4 = reinterpret_cast<void**>(0xfc);

int32_t fun_1034(void** r0, void** r1, void** r2);

int32_t fun_1038(void* r0);

void** fun_f6a4(void** r0, void** r1, void** r2, void** r3) {
    void* r11_5;
    void** r5_6;
    void** r6_7;
    void** r0_8;
    void** v9;
    void** r0_10;
    int1_t z11;
    uint32_t r0_12;
    void** r1_13;
    void** sp14;
    uint32_t r0_15;
    void** r4_16;
    uint32_t r7_17;
    void** r3_18;
    void** r0_19;
    void** r0_20;
    void** r8_21;
    void** r0_22;
    void** r1_23;
    void** r0_24;
    void** r4_25;
    void** r2_26;
    int32_t r0_27;
    int32_t r0_28;
    void** r0_29;
    void** r0_30;

    r11_5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    r5_6 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(r0 + 2)));
    r6_7 = r0;
    if (!r5_6) {
        r0_8 = gf7d0;
        r0_10 = fun_eafc(r0_8, r6_7, r2, r3, v9);
        z11 = r0_10 == 0;
        if (z11) {
            ++r0_10;
        }
        if (z11) 
            goto label_6; else 
            goto addr_f6e0_7;
    }
    addr_f7c0_8:
    r0_10 = reinterpret_cast<void**>(0);
    addr_f7c4_9:
    return r0_10;
    label_6:
    goto addr_f7c4_9;
    addr_f6e0_7:
    r0_12 = fun_f4c4(r5_6, r6_7, r2);
    r1_13 = reinterpret_cast<void**>(r0_12 & 0xff);
    sp14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 40 - 24 - (reinterpret_cast<unsigned char>(36) * (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(r1_13) << 24) >> 24) + 4));
    r0_15 = fun_f578(sp14, r1_13, 36);
    r4_16 = sp14 + 31;
    r7_17 = r0_15 & 0xff;
    while (r3_18 = reinterpret_cast<void**>(r7_17 << 24), r0_19 = r4_16, r4_16 = r4_16 + 36, reinterpret_cast<signed char>(r5_6) < reinterpret_cast<signed char>(reinterpret_cast<signed char>(r3_18) >> 24)) {
        r0_20 = fun_eafc(r0_19, r6_7, 36, r3_18, *reinterpret_cast<void***>(sp14));
        r8_21 = r0_20;
        if (!r8_21) 
            goto addr_f748_14;
        ++r5_6;
    }
    goto addr_f7c0_8;
    addr_f748_14:
    r0_22 = fun_f48c(reinterpret_cast<int32_t>(r11_5) - 59, r6_7, 36);
    r1_23 = gf7d4;
    r0_24 = fun_102c(r0_22, r1_23, 36);
    r4_25 = r0_24;
    if (!r4_25) {
        goto addr_f7c0_8;
    } else {
        r2_26 = r8_21;
        r0_27 = fun_1034(r0_24, 1, r2_26);
        if (r0_27) {
            goto addr_f794_20;
        } else {
            r2_26 = reinterpret_cast<void**>(1);
            r3_18 = r4_25;
            r0_28 = fun_1038(reinterpret_cast<int32_t>(r11_5) - 37);
            if (r0_28) {
                r0_29 = gf7d0;
                fun_eb30(r0_29, r6_7, 1, r3_18, *reinterpret_cast<void***>(sp14), *reinterpret_cast<void***>(sp14 + 4));
                r0_30 = fun_1028(r4_25, r6_7, 1, r3_18);
                fun_1050(r0_30, r6_7, 1, r3_18);
                r0_10 = reinterpret_cast<void**>(1);
                goto addr_f7c4_9;
            } else {
                addr_f794_20:
                fun_1028(r4_25, 1, r2_26, r3_18);
                r0_10 = r8_21;
                goto addr_f7c4_9;
            }
        }
    }
}

void** gf890 = reinterpret_cast<void**>(0xe4);

void** gf894 = reinterpret_cast<void**>(0);

int32_t fun_f7d8(void** r0, void** r1, void** r2) {
    int32_t v4;
    int32_t r4_5;
    void** r7_6;
    void** r3_7;
    uint32_t r0_8;
    void** r0_9;
    unsigned char v10;
    void** sp11;
    uint32_t r0_12;
    unsigned char v13;
    void** r1_14;
    void** v15;
    void** r1_16;
    void** r0_17;
    void** v18;

    v4 = r4_5;
    r7_6 = gf890;
    r3_7 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r7_6))));
    if (!r3_7) {
        r0_8 = fun_f4c4(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 33, r1, r2);
        r0_9 = reinterpret_cast<void**>(r0_8 & 0xff);
        if (!r0_9) {
            goto addr_f86c_5;
        } else {
            r3_7 = reinterpret_cast<void**>(static_cast<uint32_t>(v10));
            r2 = r3_7 + 1;
            if (reinterpret_cast<unsigned char>(r3_7) < reinterpret_cast<unsigned char>(r0_9)) {
                goto addr_f86c_5;
            } else {
                r3_7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r2) * 36 + 6 >> 2);
                sp11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 36 - 4 - (reinterpret_cast<unsigned char>(r3_7) << 2));
                r0_12 = fun_f578(sp11, reinterpret_cast<unsigned char>(r2) & 0xff, r2);
                if (!(r0_12 & 0xff)) {
                    goto addr_f86c_5;
                } else {
                    r3_7 = reinterpret_cast<void**>(static_cast<uint32_t>(v13));
                    fun_eb30(r7_6, reinterpret_cast<uint32_t>(sp11 + reinterpret_cast<unsigned char>(r3_7) * 36) + 31, r2, r3_7, *reinterpret_cast<void***>(sp11), *reinterpret_cast<void***>(sp11 + 4));
                }
            }
        }
    }
    addr_f878_12:
    r1_14 = gf890;
    fun_eb30(r0, r1_14, r2, r3_7, v15, *reinterpret_cast<void***>(&v4));
    return 1;
    addr_f86c_5:
    r1_16 = gf894;
    r0_17 = gf890;
    fun_eb30(r0_17, r1_16, r2, r3_7, v18, *reinterpret_cast<void***>(&v4));
    goto addr_f878_12;
}

void*** gf8d8 = reinterpret_cast<void***>(0x4000125c);

void** fun_f898(void** r0, void** r1) {
    void*** r3_3;
    void** r2_4;
    void** r1_5;
    void** r0_6;
    void** r3_7;

    r3_3 = gf8d8;
    r2_4 = *r3_3;
    r1_5 = r0;
    r0_6 = reinterpret_cast<void**>(0);
    while (1) {
        r3_7 = r2_4;
        if (r3_7) {
            r3_7 = reinterpret_cast<void**>(1);
        }
        if (r0_6) {
            r3_7 = reinterpret_cast<void**>(0);
        }
        if (!r3_7) 
            break;
        if (*reinterpret_cast<void***>(r2_4 + 8) == r1_5) {
            r0_6 = r2_4;
        }
        r2_4 = *reinterpret_cast<void***>(r2_4 + 28);
    }
    return r0_6;
}

void*** gf93c = reinterpret_cast<void***>(0x4000125c);

void fun_f8dc(void** r0, void** r1, void** r2) {
    void** r2_4;
    void*** r1_5;
    void** r3_6;
    void** r2_7;
    int1_t z8;
    void** r3_9;

    r2_4 = *reinterpret_cast<void***>(r0 + 4);
    *reinterpret_cast<void***>(r0)(1, 0, r2_4);
    r1_5 = gf93c;
    r3_6 = *r1_5;
    r2_7 = *reinterpret_cast<void***>(r0 + 28);
    if (r3_6 == r0) {
        z8 = r2_7 == 0;
        if (!z8) {
            r3_6 = reinterpret_cast<void**>(0);
        }
        if (!z8) {
            *r1_5 = r2_7;
        }
        if (z8) {
            *r1_5 = r2_7;
        }
        if (!z8) {
            *reinterpret_cast<void***>(r2_7 + 24) = r3_6;
        }
        return;
    }
    r3_9 = *reinterpret_cast<void***>(r0 + 24);
    *reinterpret_cast<void***>(r3_9 + 28) = r2_7;
    if (!*reinterpret_cast<void***>(r0 + 28)) 
        goto addr_f938_13;
    *reinterpret_cast<void***>(*reinterpret_cast<void***>(r0 + 28) + 24) = r3_9;
    addr_f938_13:
    return;
}

int32_t* gf970 = reinterpret_cast<int32_t*>(0x40001258);

int32_t gf974 = 0x40001268;

int32_t fun_f940() {
    int32_t* r12_1;
    int32_t r3_2;
    int32_t r0_3;

    r12_1 = gf970;
    r3_2 = *r12_1;
    r0_3 = gf974;
    if (r3_2) {
        return r0_3;
    } else {
        *r12_1 = 1;
    }
}

void** gfa28 = reinterpret_cast<void**>(0x68);

void fun_1130(void** r0, void** r1, void** r2, void** r3);

void** fun_f9f0(void** r0, void** r1, void** r2, void** r3, void** a5) {
    void** r5_6;
    void** r0_7;
    void** r0_8;

    r5_6 = gfa28;
    fun_1118(r5_6, 0xffffffff, r2, r3);
    r0_7 = fun_f898(r0, 0xffffffff);
    fun_1130(r5_6, 0xffffffff, r2, r3);
    r0_8 = r0_7;
    if (r0_8) {
        r0_8 = reinterpret_cast<void**>(1);
    }
    return r0_8;
}

void** gfa5c = reinterpret_cast<void**>(0x68);

void fun_fa2c(void** r0, void** r1, void** r2, void** r3) {
    void** r0_5;
    void** r0_6;

    r0_5 = gfa5c;
    fun_1118(r0_5, 0xffffffff, r2, r3);
    r0_6 = fun_f898(r0, 0xffffffff);
    if (r0_6) {
        fun_f8dc(r0_6, 0xffffffff, r2);
    }
}

void** gfc4c = reinterpret_cast<void**>(0x68);

void*** gfc50 = reinterpret_cast<void***>(0x4000125c);

void** gfc54 = reinterpret_cast<void**>(0xec);

void** gfc58 = reinterpret_cast<void**>(96);

void** gfc5c = reinterpret_cast<void**>(0xf0);

void fun_1098(void** r0);

void*** gfc60 = reinterpret_cast<void***>(0x40001264);

void fun_fda0(void** r0);

void** fun_fae8(void** r0, void** r1, void** r2, void** r3) {
    void** r2_5;
    void** r8_6;
    void** r7_7;
    void** r0_8;
    void** r5_9;
    void** r4_10;
    void*** r3_11;
    void** r1_12;
    void** r3_13;
    void** r2_14;
    void** r0_15;
    int1_t z16;
    int1_t z17;
    int1_t z18;
    void*** r3_19;
    int32_t r6_20;
    int1_t z21;
    void** r0_22;
    void** r3_23;
    int1_t less24;
    void** r4_25;
    void** r0_26;
    void** r3_27;
    int1_t z28;
    void*** r4_29;
    void** r0_30;
    int1_t z31;
    void** r0_32;

    r2_5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r2) << 16);
    r8_6 = r0;
    r7_7 = r1;
    r0_8 = gfc4c;
    r5_9 = r3;
    r4_10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r2_5) >> 16);
    fun_1118(r0_8, 0xffffffff, r2_5, r3);
    r3_11 = gfc50;
    r1_12 = *r3_11;
    r3_13 = reinterpret_cast<void**>(0);
    r2_14 = r1_12;
    while (1) {
        r0_15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r3_13) ^ 1);
        z16 = r2_14 == 0;
        if (z16) {
            r3_13 = reinterpret_cast<void**>(0);
        }
        if (!z16) {
            r3_13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0_15) & 1);
        }
        if (!r3_13) 
            break;
        z17 = r2_14 == r5_9;
        if (!z17) {
            r3_13 = reinterpret_cast<void**>(0);
        }
        if (z17) {
            r3_13 = reinterpret_cast<void**>(1);
        }
        r2_14 = *reinterpret_cast<void***>(r2_14 + 28);
    }
    z18 = r0_15 == 0;
    if (z18) {
        r4_10 = r0_15;
    }
    if (!z18) {
        if (!r1_12) {
            r3_19 = gfc50;
            *r3_19 = r5_9;
            *reinterpret_cast<void***>(r5_9 + 24) = r1_12;
            r6_20 = 1;
        } else {
            while (1) {
                z21 = *reinterpret_cast<void***>(r1_12 + 28) == 0;
                if (!z21) {
                    r1_12 = *reinterpret_cast<void***>(r1_12 + 28);
                }
                if (z21) 
                    break;
            }
            r6_20 = 0;
            *reinterpret_cast<void***>(r1_12 + 28) = r5_9;
            *reinterpret_cast<void***>(r5_9 + 24) = r1_12;
        }
        r0_22 = gfc54;
        r3_23 = *reinterpret_cast<void***>(r0_22);
        r1_12 = r3_23 + 1;
        less24 = reinterpret_cast<signed char>(r1_12) < reinterpret_cast<signed char>(0);
        *reinterpret_cast<void***>(r5_9 + 8) = r3_23;
        r2_14 = reinterpret_cast<void**>(0);
        if (less24) {
            r3_23 = reinterpret_cast<void**>(1);
        }
        *reinterpret_cast<void***>(r0_22) = r1_12;
        *reinterpret_cast<void***>(r5_9 + 20) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(r5_9 + 16) = reinterpret_cast<void**>(0);
        if (less24) {
            *reinterpret_cast<void***>(r0_22) = r3_23;
        }
        *reinterpret_cast<void***>(r5_9 + 12) = reinterpret_cast<void**>(static_cast<uint16_t>(reinterpret_cast<uint32_t>(r4_10)));
        r4_25 = *reinterpret_cast<void***>(r0_22);
        *reinterpret_cast<void***>(r5_9 + 4) = r7_7;
        *reinterpret_cast<void***>(r5_9) = r8_6;
        *reinterpret_cast<void***>(r5_9 + 28) = reinterpret_cast<void**>(0);
        while (r0_26 = fun_f898(r4_25, r1_12), !!r0_26) {
            ++r4_25;
        }
        r3_13 = gfc54;
        *reinterpret_cast<void***>(r3_13) = r4_25;
        if (r6_20) {
            r2_14 = gfc58;
            r3_27 = *reinterpret_cast<void***>(r2_14);
            z28 = r3_27 == 0;
            if (z28) {
                ++r3_27;
            }
            if (z28) {
                r0_26 = gfc5c;
            }
            if (z28) {
                *reinterpret_cast<void***>(r2_14) = r3_27;
            }
            if (z28) {
                fun_1098(r0_26);
            }
            r4_29 = gfc60;
            r3_13 = *r4_29;
            if (!r3_13) {
                r0_30 = fun_fdac(r0_26, r1_12, r2_14);
                z31 = r0_30 == 0;
                if (z31) {
                    r0_30 = r0_30 + 0xc8;
                }
                if (z31) {
                    fun_fda0(r0_30);
                }
                r3_13 = reinterpret_cast<void**>(1);
                *r4_29 = reinterpret_cast<void**>(1);
            }
        }
        r4_10 = *reinterpret_cast<void***>(r5_9 + 8);
    }
    r0_32 = gfc4c;
    fun_1130(r0_32, r1_12, r2_14, r3_13);
    return r4_10;
}

void fun_fda0(void** r0) {
}

void** fun_10618(void** r0, void** r1, void** r2, void** r3);

void** g107c8 = reinterpret_cast<void**>(4);

void** fun_ea94(void** r0, void** r1, void** r2, void** r3, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35);

void** g107cc = reinterpret_cast<void**>(12);

void** g107d0 = reinterpret_cast<void**>(20);

void** g107d4 = reinterpret_cast<void**>(1);

void** g107d8 = reinterpret_cast<void**>(34);

void** g107dc = reinterpret_cast<void**>(28);

void** fun_fe6c(void** r0, void** r1, void** r2, void** r3, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24) {
    void** v25;
    void** r4_26;
    void** v27;
    void** r5_28;
    void** v29;
    void** r6_30;
    void** v31;
    void** r7_32;
    void** v33;
    void** r8_34;
    void** v35;
    void** sp36;
    void** r6_37;
    void** r7_38;
    void** r0_39;
    void** r1_40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** r0_46;
    void** r0_47;
    void** r1_48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** r0_54;
    void** r0_55;
    void** r1_56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** r0_62;
    void** r0_63;
    void** r3_64;
    void** v65;
    void** r2_66;
    void** v67;
    void** r3_68;
    void** r3_69;
    uint16_t v70;
    void** r4_71;
    void** r0_72;
    void** r5_73;
    void** r1_74;
    void** r0_75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    int1_t less_or_equal81;
    int1_t less_or_equal82;

    v25 = r4_26;
    v27 = r5_28;
    v29 = r6_30;
    v31 = r7_32;
    v33 = r8_34;
    v35 = reinterpret_cast<void**>(__return_address());
    sp36 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 24 - 20);
    r6_37 = r0;
    r7_38 = sp36 + 16;
    fun_1034(*reinterpret_cast<void***>(r0), 0, 0);
    r0_39 = fun_10618(r6_37, r7_38, 0, r3);
    if (reinterpret_cast<signed char>(r0_39) >= reinterpret_cast<signed char>(0)) {
        r1_40 = g107c8;
        r0_46 = fun_ea94(r7_38, r1_40, 4, r3, v41, v42, v43, v44, v45, v25, v27, v29, v31, v33, v35, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24);
        if (!r0_46) {
            r0_47 = fun_1030(sp36, 1, 4, *reinterpret_cast<void***>(r6_37));
            if (reinterpret_cast<int1_t>(r0_47 == 4)) {
                r1_48 = g107cc;
                r0_54 = fun_ea94(sp36, r1_48, r0_47, *reinterpret_cast<void***>(r6_37), v49, v50, v51, v52, v53, v25, v27, v29, v31, v33, v35, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24);
                if (!r0_54) {
                    r0_55 = fun_10618(r6_37, r7_38, r0_47, *reinterpret_cast<void***>(r6_37));
                    if (reinterpret_cast<int1_t>(r0_55 == 16)) {
                        r1_56 = g107d0;
                        r0_62 = fun_ea94(r7_38, r1_56, r0_47, *reinterpret_cast<void***>(r6_37), v57, v58, v59, v60, v61, v25, v27, v29, v31, v33, v35, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24);
                        if (!r0_62) {
                            r0_63 = fun_1030(sp36, 1, r0_55, *reinterpret_cast<void***>(r6_37));
                            if (reinterpret_cast<int1_t>(r0_63 == 16)) {
                                r3_64 = g107d4;
                                if (v65 == r3_64) {
                                    r2_66 = v67;
                                    r3_68 = g107d8;
                                    if (r2_66 == r3_68) {
                                        r3_69 = reinterpret_cast<void**>(static_cast<uint32_t>(v70));
                                        if (reinterpret_cast<int1_t>(r3_69 == 16)) {
                                            while (r4_71 = sp36 + 16, r0_72 = fun_10618(r6_37, r4_71, r2_66, r3_69), r5_73 = r0_72, r1_74 = g107dc, r2_66 = reinterpret_cast<void**>(4), r0_75 = r4_71, reinterpret_cast<signed char>(r5_73) < reinterpret_cast<signed char>(0) == __intrinsic()) {
                                                r0_75 = fun_ea94(r0_75, r1_74, 4, r3_69, v76, v77, v78, v79, v80, v25, v27, v29, v31, v33, v35, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24);
                                                if (!r0_75) 
                                                    goto addr_107a0_24;
                                            }
                                            goto label_26;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    r0_75 = reinterpret_cast<void**>(0);
    addr_107c0_28:
    return r0_75;
    label_26:
    addr_107ac_29:
    less_or_equal81 = reinterpret_cast<signed char>(r5_73) <= reinterpret_cast<signed char>(0);
    if (less_or_equal81) {
        r0_75 = reinterpret_cast<void**>(0);
    }
    if (!less_or_equal81) {
        r0_75 = reinterpret_cast<void**>(1);
    }
    goto addr_107c0_28;
    addr_107a0_24:
    less_or_equal82 = reinterpret_cast<signed char>(r5_73) <= reinterpret_cast<signed char>(0);
    if (!less_or_equal82) {
        *reinterpret_cast<void***>(r6_37 + 8) = r0_75;
    }
    if (!less_or_equal82) {
        *reinterpret_cast<void***>(r6_37 + 4) = r5_73;
        goto addr_107ac_29;
    }
}

void** fun_ffa0(void** r0, void** r1, void** r2);

void** g1009c = reinterpret_cast<void**>(34);

void** fun_fe70(void** r0, void** r1, void** r2, void** r3);

void** fun_1003c(void** r0) {
    void** sp2;
    void** r5_3;
    void** v4;
    void** r1_5;
    void** r3_6;
    uint32_t v7;
    void** r0_8;

    sp2 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 12 - 24);
    fun_ffa0(sp2, r0, 0);
    __asm__("stm r4, {r0, r1, r2}");
    r5_3 = v4;
    r1_5 = g1009c;
    if (v4) {
        r3_6 = reinterpret_cast<void**>(v7 >> 1);
        r0_8 = fun_10f6c(reinterpret_cast<unsigned char>(r3_6) * reinterpret_cast<unsigned char>(0x3e8), r1_5, 0x3e8);
        r5_3 = r0_8;
        fun_fe70(sp2 + 12, r1_5, 0x3e8, r3_6);
    }
    return r5_3;
}

void** g102a8 = reinterpret_cast<void**>(60);

void*** g102ac = reinterpret_cast<void***>(0x40001380);

void** g102b0 = reinterpret_cast<void**>(40);

void** g102b4 = reinterpret_cast<void**>(0xd0);

void** g102b8 = reinterpret_cast<void**>(0x6c);

void** fun_100a0(uint32_t r0, void** r1, uint32_t r2, void** r3) {
    void*** sp5;
    void** r2_6;
    int1_t z7;
    void** v8;
    void** r10_9;
    void** r11_10;
    void** v11;
    void** r4_12;
    void** r0_13;
    void** r9_14;
    void*** r8_15;
    uint32_t r5_16;
    uint32_t r7_17;
    void** r1_18;
    void** r0_19;
    void** r0_20;
    void** r0_21;
    int1_t less_or_equal22;
    void** r6_23;
    int1_t less_or_equal24;
    void** r0_25;
    void*** r3_26;
    void** r5_27;
    void** v28;
    void** v29;
    int1_t z30;
    int32_t v31;
    void** r0_32;
    void** r0_33;
    int1_t z34;
    void** r3_35;
    void** r0_36;
    void** r0_37;
    void** r0_38;
    void** r0_39;
    int1_t less_or_equal40;
    int32_t r0_41;
    int1_t z42;

    sp5 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 36 - 20);
    r2_6 = reinterpret_cast<void**>(r2 & 0xff);
    z7 = r2_6 == 0;
    v8 = r2_6;
    r10_9 = r1;
    r11_10 = r3;
    v11 = reinterpret_cast<void**>(r0 << 16 >> 16);
    if (z7) {
        r4_12 = reinterpret_cast<void**>(0xffffffff);
    }
    if (!z7) {
        r0_13 = g102a8;
        r9_14 = *reinterpret_cast<void***>(r3);
        fun_1118(r0_13, 0xffffffff, r2_6, r3);
        r8_15 = g102ac;
        r5_16 = 0;
        r7_17 = 0xffffffff;
        while (1) {
            r1_18 = reinterpret_cast<void**>(0xffffffff);
            r0_19 = g102b0;
            fun_1118(r0_19, 0xffffffff, r2_6, r3);
            r4_12 = *r8_15;
            r8_15 = r8_15 + 56;
            r0_20 = g102b0;
            fun_1130(r0_20, 0xffffffff, r2_6, r3);
            r0_21 = fun_f9f0(r4_12, 0xffffffff, r2_6, r3, v8);
            if (!r0_21) {
                r7_17 = r5_16;
            }
            r3 = reinterpret_cast<void**>(r7_17 >> 31);
            ++r5_16;
            less_or_equal22 = reinterpret_cast<int32_t>(r5_16) <= reinterpret_cast<int32_t>(5);
            if (!less_or_equal22) {
                r6_23 = reinterpret_cast<void**>(0);
            }
            if (less_or_equal22) {
                r6_23 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r3) & 1);
            }
            if (!r6_23) 
                break;
        }
        less_or_equal24 = reinterpret_cast<int32_t>(r7_17) <= -1;
        if (less_or_equal24) 
            goto label_15; else 
            goto addr_10134_16;
    }
    addr_1029c_17:
    return r4_12;
    label_15:
    r4_12 = reinterpret_cast<void**>(0xfffffffd);
    addr_10134_16:
    if (!less_or_equal24) {
        r0_25 = g102b0;
        fun_1118(r0_25, 0xffffffff, r2_6, r3);
        r3_26 = g102ac;
        r5_27 = reinterpret_cast<void**>(r3_26 + r7_17 * 56);
        r4_12 = reinterpret_cast<void**>(sp5 + 8);
        fun_ffa0(r4_12, r9_14, r6_23);
        r1_18 = v28;
        r2_6 = v29;
        r3 = r5_27 + 12;
        z30 = v31 == 0;
        __asm__("stm r3, {r0, r1, r2}");
        if (z30) {
            r4_12 = r6_23;
        }
        if (z30) 
            goto label_22; else 
            goto addr_1017c_23;
    }
    addr_10248_24:
    r0_32 = g102a8;
    fun_1130(r0_32, r1_18, r2_6, r3);
    goto addr_1029c_17;
    label_22:
    addr_10240_25:
    r0_33 = g102b0;
    fun_1130(r0_33, r1_18, r2_6, r3);
    goto addr_10248_24;
    addr_1017c_23:
    z34 = r10_9 == 0;
    *reinterpret_cast<void***>(r5_27 + 8) = r6_23;
    *reinterpret_cast<void***>(r5_27 + 4) = r10_9;
    if (z34) {
        r4_12 = r11_10;
    }
    if (z34) {
        r6_23 = r10_9;
    }
    if (!z34) 
        goto addr_10194_30;
    while (r2_6 = v8, r3 = r2_6 - 1, r6_23 != r3) {
        r1_18 = *reinterpret_cast<void***>(r4_12 + 4);
        r2_6 = g102b4;
        r7_17 = 0;
        while (*reinterpret_cast<void***>(r2_6)) {
            ++r7_17;
            r2_6 = r2_6 + 30;
            if (r7_17 == 20) 
                goto label_37;
        }
        r4_12 = r4_12 + 4;
        if (reinterpret_cast<int32_t>(r7_17) <= -1) 
            goto label_41;
        r3_35 = g102b4;
        fun_eb30(r7_17 * reinterpret_cast<unsigned char>(30) + reinterpret_cast<unsigned char>(r3_35), r1_18, 30, r3_35, v8, v11);
        *reinterpret_cast<void***>(r5_27 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r5_27 + 8)) | 1 << r7_17);
        ++r6_23;
    }
    addr_10254_44:
    r0_36 = g102b0;
    fun_1130(r0_36, r1_18, r2_6, r3);
    r2_6 = v11;
    r3 = r5_27 + 24;
    r0_37 = g102b8;
    r0_38 = fun_fae8(r0_37, r5_27, r2_6, r3);
    r1_18 = reinterpret_cast<void**>(0xffffffff);
    r4_12 = r0_38;
    r0_39 = g102b0;
    fun_1118(r0_39, 0xffffffff, r2_6, r3);
    less_or_equal40 = reinterpret_cast<signed char>(r4_12) <= reinterpret_cast<signed char>(0);
    if (!less_or_equal40) {
        *reinterpret_cast<void***>(r5_27) = r4_12;
    }
    if (!less_or_equal40) {
        goto addr_10240_25;
    }
    addr_10208_49:
    r0_41 = 0;
    while (1) {
        r3 = *reinterpret_cast<void***>(r5_27 + 8);
        z42 = (reinterpret_cast<unsigned char>(r3) & 1) == 0;
        if (!z42) {
            r3 = reinterpret_cast<void**>(30);
        }
        if (!z42) {
            r1_18 = reinterpret_cast<void**>(r7_17 * reinterpret_cast<unsigned char>(r3));
        }
        if (!z42) {
            r3 = g102b4;
        }
        if (!z42) {
            r2_6 = reinterpret_cast<void**>(0);
        }
        ++r0_41;
        if (!z42) {
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r1_18) + reinterpret_cast<unsigned char>(r3)) = static_cast<signed char>(reinterpret_cast<uint32_t>(r2_6));
        }
        if (r0_41 == 20) 
            break;
    }
    fun_fe70(r5_27 + 12, r1_18, r2_6, r3);
    goto addr_10240_25;
    label_37:
    r7_17 = 0xffffffff;
    addr_10294_64:
    r4_12 = reinterpret_cast<void**>(0xfffffffe);
    goto addr_10208_49;
    label_41:
    goto addr_10294_64;
    addr_10194_30:
    goto addr_10254_44;
}

void** fun_102bc(uint32_t r0, void** r1, uint32_t r2, void** r3) {
    void*** sp5;
    void** r2_6;
    int1_t z7;
    void** v8;
    void** r10_9;
    void** r11_10;
    void** v11;
    void** r4_12;
    void** r0_13;
    void** r9_14;
    void*** r8_15;
    uint32_t r5_16;
    uint32_t r7_17;
    void** r1_18;
    void** r0_19;
    void** r0_20;
    void** r0_21;
    int1_t less_or_equal22;
    void** r6_23;
    int1_t less_or_equal24;
    void** r0_25;
    void*** r3_26;
    void** r5_27;
    void** v28;
    void** v29;
    int1_t z30;
    int32_t v31;
    void** r0_32;
    void** r0_33;
    int1_t z34;
    void** r3_35;
    void** r0_36;
    void** r0_37;
    void** r0_38;
    void** r0_39;
    int1_t less_or_equal40;
    int32_t r0_41;
    int1_t z42;

    sp5 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 36 - 20);
    r2_6 = reinterpret_cast<void**>(r2 & 0xff & 0xff);
    z7 = r2_6 == 0;
    v8 = r2_6;
    r10_9 = r1;
    r11_10 = r3;
    v11 = reinterpret_cast<void**>(r0 << 16 >> 16 << 16 >> 16);
    if (z7) {
        r4_12 = reinterpret_cast<void**>(0xffffffff);
    }
    if (!z7) {
        r0_13 = g102a8;
        r9_14 = *reinterpret_cast<void***>(r3);
        fun_1118(r0_13, 0xffffffff, r2_6, r3);
        r8_15 = g102ac;
        r5_16 = 0;
        r7_17 = 0xffffffff;
        while (1) {
            r1_18 = reinterpret_cast<void**>(0xffffffff);
            r0_19 = g102b0;
            fun_1118(r0_19, 0xffffffff, r2_6, r3);
            r4_12 = *r8_15;
            r8_15 = r8_15 + 56;
            r0_20 = g102b0;
            fun_1130(r0_20, 0xffffffff, r2_6, r3);
            r0_21 = fun_f9f0(r4_12, 0xffffffff, r2_6, r3, v8);
            if (!r0_21) {
                r7_17 = r5_16;
            }
            r3 = reinterpret_cast<void**>(r7_17 >> 31);
            ++r5_16;
            less_or_equal22 = reinterpret_cast<int32_t>(r5_16) <= reinterpret_cast<int32_t>(5);
            if (!less_or_equal22) {
                r6_23 = reinterpret_cast<void**>(0);
            }
            if (less_or_equal22) {
                r6_23 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r3) & 1);
            }
            if (!r6_23) 
                break;
        }
        less_or_equal24 = reinterpret_cast<int32_t>(r7_17) <= -1;
        if (less_or_equal24) 
            goto label_16; else 
            goto addr_10134_17;
    }
    addr_1029c_18:
    return r4_12;
    label_16:
    r4_12 = reinterpret_cast<void**>(0xfffffffd);
    addr_10134_17:
    if (!less_or_equal24) {
        r0_25 = g102b0;
        fun_1118(r0_25, 0xffffffff, r2_6, r3);
        r3_26 = g102ac;
        r5_27 = reinterpret_cast<void**>(r3_26 + r7_17 * 56);
        r4_12 = reinterpret_cast<void**>(sp5 + 8);
        fun_ffa0(r4_12, r9_14, r6_23);
        r1_18 = v28;
        r2_6 = v29;
        r3 = r5_27 + 12;
        z30 = v31 == 0;
        __asm__("stm r3, {r0, r1, r2}");
        if (z30) {
            r4_12 = r6_23;
        }
        if (z30) 
            goto label_23; else 
            goto addr_1017c_24;
    }
    addr_10248_25:
    r0_32 = g102a8;
    fun_1130(r0_32, r1_18, r2_6, r3);
    goto addr_1029c_18;
    label_23:
    addr_10240_26:
    r0_33 = g102b0;
    fun_1130(r0_33, r1_18, r2_6, r3);
    goto addr_10248_25;
    addr_1017c_24:
    z34 = r10_9 == 0;
    *reinterpret_cast<void***>(r5_27 + 8) = r6_23;
    *reinterpret_cast<void***>(r5_27 + 4) = r10_9;
    if (z34) {
        r4_12 = r11_10;
    }
    if (z34) {
        r6_23 = r10_9;
    }
    if (!z34) 
        goto addr_10194_31;
    while (r2_6 = v8, r3 = r2_6 - 1, r6_23 != r3) {
        r1_18 = *reinterpret_cast<void***>(r4_12 + 4);
        r2_6 = g102b4;
        r7_17 = 0;
        while (*reinterpret_cast<void***>(r2_6)) {
            ++r7_17;
            r2_6 = r2_6 + 30;
            if (r7_17 == 20) 
                goto label_38;
        }
        r4_12 = r4_12 + 4;
        if (reinterpret_cast<int32_t>(r7_17) <= -1) 
            goto label_42;
        r3_35 = g102b4;
        fun_eb30(r7_17 * reinterpret_cast<unsigned char>(30) + reinterpret_cast<unsigned char>(r3_35), r1_18, 30, r3_35, v8, v11);
        *reinterpret_cast<void***>(r5_27 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r5_27 + 8)) | 1 << r7_17);
        ++r6_23;
    }
    addr_10254_45:
    r0_36 = g102b0;
    fun_1130(r0_36, r1_18, r2_6, r3);
    r2_6 = v11;
    r3 = r5_27 + 24;
    r0_37 = g102b8;
    r0_38 = fun_fae8(r0_37, r5_27, r2_6, r3);
    r1_18 = reinterpret_cast<void**>(0xffffffff);
    r4_12 = r0_38;
    r0_39 = g102b0;
    fun_1118(r0_39, 0xffffffff, r2_6, r3);
    less_or_equal40 = reinterpret_cast<signed char>(r4_12) <= reinterpret_cast<signed char>(0);
    if (!less_or_equal40) {
        *reinterpret_cast<void***>(r5_27) = r4_12;
    }
    if (!less_or_equal40) {
        goto addr_10240_26;
    }
    addr_10208_50:
    r0_41 = 0;
    while (1) {
        r3 = *reinterpret_cast<void***>(r5_27 + 8);
        z42 = (reinterpret_cast<unsigned char>(r3) & 1) == 0;
        if (!z42) {
            r3 = reinterpret_cast<void**>(30);
        }
        if (!z42) {
            r1_18 = reinterpret_cast<void**>(r7_17 * reinterpret_cast<unsigned char>(r3));
        }
        if (!z42) {
            r3 = g102b4;
        }
        if (!z42) {
            r2_6 = reinterpret_cast<void**>(0);
        }
        ++r0_41;
        if (!z42) {
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r1_18) + reinterpret_cast<unsigned char>(r3)) = static_cast<signed char>(reinterpret_cast<uint32_t>(r2_6));
        }
        if (r0_41 == 20) 
            break;
    }
    fun_fe70(r5_27 + 12, r1_18, r2_6, r3);
    goto addr_10240_26;
    label_38:
    r7_17 = 0xffffffff;
    addr_10294_65:
    r4_12 = reinterpret_cast<void**>(0xfffffffe);
    goto addr_10208_50;
    label_42:
    goto addr_10294_65;
    addr_10194_31:
    goto addr_10254_45;
}

void fun_111c(void** r0, int32_t r1, void** r2);

void** g10460 = reinterpret_cast<void**>(0x9c);

void fun_1120(void** r0, void** r1, void** r2, void** r3);

void** fun_10464(void** r0, void** r1, void** r2) {
    void** sp4;
    void** r6_5;
    void** r5_6;
    void** r4_7;
    void** v8;
    void** r3_9;
    void** r0_10;
    void** r0_11;
    int1_t less_or_equal12;

    sp4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 20 - 76);
    fun_ffa0(sp4, r0, 0);
    r6_5 = sp4 + 44;
    __asm__("stm r6, {r0, r1, r2}");
    r5_6 = r6_5 + 12;
    r4_7 = v8;
    if (v8) {
        fun_eadc(r5_6, 0, 20);
        fun_111c(r5_6, 0, 1);
        r3_9 = sp4 + 12;
        r0_10 = g10460;
        r0_11 = fun_fae8(r0_10, r6_5, 0xff, r3_9);
        r4_7 = r0_11;
        fun_1118(r5_6, 0xffffffff, 0xff, r3_9);
        fun_fa2c(r4_7, 0xffffffff, 0xff, r3_9);
        fun_1120(r5_6, 0xffffffff, 0xff, r3_9);
        less_or_equal12 = reinterpret_cast<signed char>(r4_7) <= reinterpret_cast<signed char>(0);
        if (less_or_equal12) {
            r4_7 = reinterpret_cast<void**>(0);
        }
        if (!less_or_equal12) {
            r4_7 = reinterpret_cast<void**>(1);
        }
        fun_fe70(r6_5, 0xffffffff, 0xff, r3_9);
    }
    return r4_7;
}

void** fun_105dc(void** r0, void** r1, void** r2) {
    void* r12_4;
    void* r12_5;
    void** r3_6;
    void** r0_7;
    void** r2_8;
    uint1_t less_or_equal9;

    __asm__("ldmib r0, {ip, lr}");
    if (reinterpret_cast<uint32_t>(__return_address()) + reinterpret_cast<unsigned char>(r2) > reinterpret_cast<uint32_t>(r12_4)) {
        r2 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(r12_5) - reinterpret_cast<uint32_t>(__return_address()));
    }
    r3_6 = *reinterpret_cast<void***>(r0);
    r0_7 = fun_1030(r1, 1, r2, r3_6);
    r2_8 = r0_7;
    less_or_equal9 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r2_8) < reinterpret_cast<signed char>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(r2_8 == 0));
    if (!less_or_equal9) {
        r3_6 = *reinterpret_cast<void***>(r0 + 8);
    }
    if (!less_or_equal9) {
        r3_6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r3_6) + reinterpret_cast<unsigned char>(r2_8));
    }
    if (!less_or_equal9) {
        *reinterpret_cast<void***>(r0 + 8) = r3_6;
    }
    return r0_7;
}

void** fun_107e0(void** r0, void** r1) {
    void** r0_3;
    void** r2_4;
    void** r12_5;

    r0_3 = *reinterpret_cast<void***>(r0);
    if (!r0_3) {
        return r0_3;
    }
    r2_4 = *reinterpret_cast<void***>(r0_3 + 16);
    r12_5 = r0_3;
    while (r2_4 != r1) {
        r12_5 = r2_4;
        r2_4 = *reinterpret_cast<void***>(r2_4 + 16);
        if (!r2_4) 
            goto label_6;
        if (r12_5 == r0_3) 
            goto label_8;
    }
    return r12_5;
    label_6:
    addr_10820_12:
    return 0;
    label_8:
    goto addr_10820_12;
}

void fun_10898(int32_t r0, uint32_t r1, void** r2) {
    goto r0;
}

void fun_108c0(void** r0, void** r1) {
}

void fun_108b0();

void** g1095c = reinterpret_cast<void**>(80);

void** fun_10ee4(void** r0, void** r1, void** r2, void** r3);

void** fun_10828(void** r0, void** r1, void** r2);

void fun_108cc() {
    void** v1;
    void** r4_2;
    void** v3;
    void** r3_4;
    void** r4_5;
    int1_t z6;
    void** r0_7;
    void** r1_8;
    void** v9;
    void** r0_10;
    void** r0_11;
    void** v12;
    void** r0_13;
    void** r3_14;

    v1 = r4_2;
    v3 = reinterpret_cast<void**>(__return_address());
    fun_108b0();
    r3_4 = g1095c;
    r4_5 = *reinterpret_cast<void***>(r3_4);
    z6 = r4_5 == 0;
    while (!z6) {
        r0_10 = fun_1054(r0_7, r1_8, 1, r3_4, v1, v3, v9);
        r0_7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0_10) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r4_5 + 8)));
        if (reinterpret_cast<signed char>(r0_7) >= reinterpret_cast<signed char>(0)) {
            fun_10ee4(*reinterpret_cast<void***>(r4_5 + 4), *reinterpret_cast<void***>(r4_5), 1, *reinterpret_cast<void***>(r4_5 + 8));
            r1_8 = r4_5;
            r0_11 = g1095c;
            if (*reinterpret_cast<void***>(r4_5 + 12)) {
                r0_13 = fun_1054(r0_11, r1_8, 1, *reinterpret_cast<void***>(r4_5 + 12), v1, v3, v12);
                r0_7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0_13) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r4_5 + 12)));
                *reinterpret_cast<void***>(r4_5 + 8) = r0_7;
            } else {
                r0_7 = fun_10828(r0_11, r1_8, 1);
                r4_5 = r0_7;
                goto addr_1093c_9;
            }
        }
        r4_5 = *reinterpret_cast<void***>(r4_5 + 16);
        addr_1093c_9:
        if (!r4_5) 
            goto label_11;
        r3_14 = g1095c;
        r3_4 = *reinterpret_cast<void***>(r3_14);
        z6 = r4_5 == r3_4;
    }
    addr_10954_14:
    label_11:
    goto addr_10954_14;
}

void** g10a30 = reinterpret_cast<void**>(80);

void** fun_10960(void** r0, void** r1, void** r2, void** r3, unsigned char a5) {
    void** r4_6;
    int1_t z7;
    void** r3_8;
    uint32_t r7_9;
    int1_t z10;
    void** r6_11;
    void** r1_12;
    void** r0_13;
    void** r0_14;
    int1_t z15;
    void** r4_16;
    void** r5_17;
    void** r6_18;
    void** r0_19;
    void** r0_20;
    int1_t z21;
    void** r3_22;
    int1_t z23;

    r4_6 = r0;
    z7 = r4_6 == 0;
    r3_8 = reinterpret_cast<void**>(static_cast<uint32_t>(a5));
    if (z7) {
        r0 = reinterpret_cast<void**>(0xfffffffa);
    }
    if (z7) {
        return r0;
    } else {
        r7_9 = 1 - reinterpret_cast<unsigned char>(r3_8);
        if (!__intrinsic()) {
            r7_9 = 0;
        }
        z10 = r3 == 0;
        if (!z10) {
            r6_11 = reinterpret_cast<void**>(0);
        }
        if (z10) {
            r6_11 = reinterpret_cast<void**>(r7_9 & 1);
        }
        if (!r6_11) {
            if (r1) {
                fun_108b0();
                r1_12 = r4_6;
                r0_13 = g10a30;
                r0_14 = fun_107e0(r0_13, r1_12);
                if (r0_14) {
                    *reinterpret_cast<void***>(r4_6 + 16) = r6_11;
                }
                z15 = r7_9 == 0;
                if (!z15) {
                    r3_8 = r3;
                }
                if (z15) {
                    r3_8 = reinterpret_cast<void**>(0);
                }
                *reinterpret_cast<void***>(r4_6 + 12) = r3_8;
                r0_19 = fun_1054(r0_14, r1_12, r2, r3_8, r4_16, r5_17, r6_18);
                r0_20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0_19) + reinterpret_cast<unsigned char>(r3));
                z21 = *reinterpret_cast<void***>(r4_6 + 16) == 0;
                *reinterpret_cast<void***>(r4_6 + 8) = r0_20;
                *reinterpret_cast<void***>(r4_6 + 4) = r1;
                *reinterpret_cast<void***>(r4_6) = r2;
                if (z21) {
                    r1_12 = g10a30;
                    r3_22 = *reinterpret_cast<void***>(r1_12);
                    z23 = r3_22 == 0;
                    if (!z23) {
                        r2 = *reinterpret_cast<void***>(r3_22 + 20);
                    }
                    if (!z23) {
                        *reinterpret_cast<void***>(r4_6 + 16) = r3_22;
                    }
                    if (!z23) {
                        *reinterpret_cast<void***>(r2 + 16) = r4_6;
                    }
                    if (!z23) {
                        r3_22 = *reinterpret_cast<void***>(r4_6 + 16);
                    }
                    if (!z23) {
                        *reinterpret_cast<void***>(r4_6 + 20) = r2;
                    }
                    if (z23) {
                        *reinterpret_cast<void***>(r4_6 + 20) = r4_6;
                    }
                    if (z23) {
                        *reinterpret_cast<void***>(r4_6 + 16) = r4_6;
                    }
                    if (!z23) {
                        *reinterpret_cast<void***>(r3_22 + 20) = r4_6;
                    }
                    *reinterpret_cast<void***>(r1_12) = r4_6;
                }
                fun_108c0(r0_20, r1_12);
                return 0;
            }
        }
        return 0xffffffea;
    }
}

void** g10a98 = reinterpret_cast<void**>(80);

int32_t fun_10a34(void** r0, void** r1, void** r2) {
    void** r4_4;
    void** r1_5;
    void** r0_6;
    void** r0_7;

    r4_4 = r0;
    if (!r4_4) {
        return -6;
    }
    fun_108b0();
    r1_5 = r4_4;
    r0_6 = g10a98;
    if (!*reinterpret_cast<void***>(r4_4 + 16)) {
        goto addr_10a70_5;
    } else {
        r0_7 = fun_107e0(r0_6, r1_5);
        r1_5 = r4_4;
        r0_6 = g10a98;
        if (r0_7) {
            r0_6 = fun_10828(r0_6, r1_5, r2);
            *reinterpret_cast<void***>(r4_4 + 16) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(r4_4 + 20) = reinterpret_cast<void**>(0);
        } else {
            addr_10a70_5:
            *reinterpret_cast<void***>(r4_4 + 16) = reinterpret_cast<void**>(0);
        }
        fun_108c0(r0_6, r1_5);
        return 0;
    }
}

struct s41 {
    signed char[40] pad40;
    int32_t f40;
};

struct s41* g10ac8 = reinterpret_cast<struct s41*>(0x40001754);

int32_t* g10acc = reinterpret_cast<int32_t*>(0x40001750);

void fun_10a9c(int32_t r0) {
    struct s41* lr2;
    int32_t* r3_3;

    lr2 = g10ac8;
    r3_3 = g10acc;
    *r3_3 = 0;
    lr2->f40 = 0;
}

unsigned char* g10af0 = reinterpret_cast<unsigned char*>(0x40001780);

void* g10af4 = reinterpret_cast<void*>(0x12224);

void* fun_10ad0(uint32_t r0, void** r1, void** r2, void** r3) {
    unsigned char* r1_5;
    uint32_t r2_6;
    void* r0_7;

    r1_5 = g10af0;
    r2_6 = r0 & 0xff;
    r0_7 = g10af4;
    if (static_cast<uint32_t>(*r1_5) != r2_6) {
        *r1_5 = static_cast<unsigned char>(r2_6);
    }
    return reinterpret_cast<int32_t>(r0_7) + (r2_6 << 3);
}

int32_t g10ee0 = 0x40001784;

int32_t fun_110c(int32_t r0, void* r1);

int32_t fun_1108(int32_t r0, uint32_t* r1, void** r2);

int32_t fun_10e5c(int32_t* r0, uint32_t* r1, void** r2) {
    uint32_t* sp4;
    void** r3_5;
    int32_t r0_6;
    int32_t r0_7;
    int32_t r0_8;
    int32_t r0_9;
    int32_t r12_10;
    int32_t v11;
    uint32_t v12;

    sp4 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 12 - 8);
    r3_5 = reinterpret_cast<void**>(0xffffffff);
    if (reinterpret_cast<signed char>(r2) >= reinterpret_cast<signed char>(0)) {
        r0_6 = g10ee0;
        if (!r2) {
            r0_7 = fun_110c(r0_6, sp4 + 1);
            goto addr_10ea0_6;
        } else {
            r3_5 = r2;
        }
    }
    r0_8 = g10ee0;
    r0_7 = fun_1108(r0_8, sp4 + 1, r3_5);
    addr_10ea0_6:
    r0_9 = g10ee0;
    r12_10 = -11;
    if (r0_7 != -4) {
        fun_1108(r0_9, sp4, 0xc8);
        *r0 = v11;
        *r1 = v12;
        r12_10 = 0;
    }
    return r12_10;
}

void** g10f64 = reinterpret_cast<void**>(0xf8);

int32_t g10f68 = 0x40001784;

void fun_1110(int32_t r0, void** r1, void** r2);

int32_t fun_112c(void** r0, void** r1);

int32_t fun_1114(int32_t r0, void** r1);

void** fun_10ee4(void** r0, void** r1, void** r2, void** r3) {
    void** r0_5;
    int32_t r0_6;
    void** r0_7;
    int32_t r0_8;
    void** r1_9;
    int32_t r0_10;
    int32_t r0_11;
    int32_t r0_12;
    void** r0_13;

    r0_5 = g10f64;
    if (r2) {
        fun_1118(r0_5, 0xffffffff, r2, r3);
        r0_6 = g10f68;
        fun_1110(r0_6, r0, 0xffffffff);
        goto addr_10f40_3;
    }
    r0_7 = g10f64;
    r0_8 = fun_112c(r0_7, 0xffffffff);
    r1_9 = r0;
    r0_10 = g10f68;
    r3 = reinterpret_cast<void**>(0xfffffff5);
    if (r0_8 != -4) 
        goto addr_10f34_6;
    addr_10f5c_8:
    return r3;
    addr_10f34_6:
    r0_11 = fun_1114(r0_10, r1_9);
    if (r0_11 != -4) {
        addr_10f40_3:
        r1_9 = r1;
        r2 = reinterpret_cast<void**>(0xffffffff);
        r0_12 = g10f68;
        fun_1110(r0_12, r1_9, 0xffffffff);
    }
    r0_13 = g10f64;
    fun_1130(r0_13, r1_9, r2, r3);
    r3 = reinterpret_cast<void**>(0);
    goto addr_10f5c_8;
}

void fun_1136c();

void** fun_10f6c(void** r0, void** r1, void** r2) {
    void** r2_4;
    int1_t z5;
    int1_t z6;
    uint32_t r3_7;
    int1_t c8;
    int1_t c9;
    void** r2_10;
    int1_t c11;
    int1_t c12;
    int1_t c13;
    int1_t c14;
    int1_t z15;
    int1_t c16;
    int1_t c17;
    int1_t c18;
    int1_t below_or_equal19;

    r2_4 = r1 - 1;
    if (!r2_4) {
        return r0;
    }
    if (!__intrinsic()) {
        fun_1136c();
        return 0;
    }
    z5 = r0 == r1;
    if (reinterpret_cast<unsigned char>(r0) > reinterpret_cast<unsigned char>(r1)) 
        goto addr_10f80_7;
    if (!z5) 
        goto addr_11010_10;
    r0 = reinterpret_cast<void**>(1);
    addr_11010_10:
    if (!z5) {
        r0 = reinterpret_cast<void**>(0);
    }
    return r0;
    addr_10f80_7:
    if (reinterpret_cast<unsigned char>(r1) & reinterpret_cast<unsigned char>(r2_4)) {
        z6 = (reinterpret_cast<unsigned char>(r1) & 0xe0000000) == 0;
        if (z6) {
            r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) << 3);
        }
        if (z6) {
            r3_7 = 8;
        }
        if (!z6) {
            r3_7 = 1;
        }
        while (1) {
            c8 = reinterpret_cast<unsigned char>(r1) < reinterpret_cast<unsigned char>(0x10000000);
            if (!c8) {
                c8 = reinterpret_cast<unsigned char>(r1) < reinterpret_cast<unsigned char>(r0);
            }
            if (!c8) {
                r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) << 4);
            }
            if (!c8) {
                r3_7 = r3_7 << 4;
            }
            if (c8) 
                break;
        }
        while (1) {
            c9 = reinterpret_cast<unsigned char>(r1) < reinterpret_cast<unsigned char>(0x80000000);
            if (!c9) {
                c9 = reinterpret_cast<unsigned char>(r1) < reinterpret_cast<unsigned char>(r0);
            }
            if (!c9) {
                r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) << 1);
            }
            if (!c9) {
                r3_7 = r3_7 << 1;
            }
            if (c9) 
                break;
        }
        r2_10 = reinterpret_cast<void**>(0);
        while (1) {
            c11 = reinterpret_cast<unsigned char>(r0) < reinterpret_cast<unsigned char>(r1);
            if (c11) {
                r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) - reinterpret_cast<unsigned char>(r1));
            }
            if (c11) {
                r2_10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r2_10) | r3_7);
            }
            c12 = reinterpret_cast<unsigned char>(r0) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(r1) >> 1);
            if (c12) {
                r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) - (reinterpret_cast<unsigned char>(r1) >> 1));
            }
            if (c12) {
                r2_10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r2_10) | r3_7 >> 1);
            }
            c13 = reinterpret_cast<unsigned char>(r0) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(r1) >> 2);
            if (c13) {
                r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) - (reinterpret_cast<unsigned char>(r1) >> 2));
            }
            if (c13) {
                r2_10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r2_10) | r3_7 >> 2);
            }
            c14 = reinterpret_cast<unsigned char>(r0) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(r1) >> 3);
            if (c14) {
                r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) - (reinterpret_cast<unsigned char>(r1) >> 3));
            }
            if (c14) {
                r2_10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r2_10) | r3_7 >> 3);
            }
            z15 = r0 == 0;
            if (!z15) {
                r3_7 = r3_7 >> 4;
            }
            if (!z15) {
                r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) >> 4);
            }
            if (z15) 
                break;
        }
        return r2_10;
    }
    c16 = reinterpret_cast<unsigned char>(r1) < reinterpret_cast<unsigned char>(0x10000);
    if (!c16) 
        goto addr_11020_62;
    r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) >> 16);
    addr_11020_62:
    if (c16) {
    }
    if (!c16) {
    }
    c17 = reinterpret_cast<unsigned char>(r1) < reinterpret_cast<unsigned char>(0x100);
    if (c17) {
        r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) >> 8);
    }
    if (c17) {
    }
    c18 = reinterpret_cast<unsigned char>(r1) < reinterpret_cast<unsigned char>(16);
    if (c18) {
        r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) >> 4);
    }
    if (c18) {
    }
    below_or_equal19 = reinterpret_cast<unsigned char>(r1) <= reinterpret_cast<unsigned char>(4);
    if (!below_or_equal19) {
    }
    if (below_or_equal19) {
    }
    return r0;
}

void** g5328 = reinterpret_cast<void**>(0x70);

void** fun_102cc(void** r0, void** r1, void** r2, void** r3);

void** fun_fa88(void** r0, void** r1, void** r2, void** r3, void** a5);

void fun_496c(int16_t* r0, int32_t r1);

void fun_57a8(int32_t r0);

void fun_431c(void** r0, void** r1, void** r2, void** r3, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29) {
    void** v30;
    void** r4_31;
    void** v32;
    void** r5_33;
    void** v34;
    void** r6_35;
    void** r1_36;
    void** r7_37;
    void** r8_38;
    void** r0_39;
    void** r5_40;
    void** r7_41;
    void** r8_42;
    void** r0_43;
    int1_t z44;
    void** r3_45;
    void** r0_46;
    void** r6_47;
    void** r0_48;
    void** r0_49;
    int1_t z50;
    int1_t z51;
    void** r0_52;
    void** r4_53;
    void** r0_54;
    void** r0_55;
    void** r0_56;
    int1_t below_or_equal57;
    void** r0_58;
    int1_t z59;
    int1_t z60;
    void** r0_61;
    void** r4_62;
    void** r0_63;
    void** r0_64;
    void** r0_65;

    v30 = r4_31;
    v32 = r5_33;
    v34 = r6_35;
    fun_6388(r0, r1, r2, r3);
    fun_637c(r0, r1, r2, r3);
    fun_6364(r0, r1, r2, r3);
    r1_36 = reinterpret_cast<void**>(3);
    r0_39 = fun_5eb8(1, 3, r2, r3, v30, v32, v34, r7_37, r8_38, __return_address(), a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29);
    r5_40 = reinterpret_cast<void**>(0);
    r7_41 = r0_39;
    r8_42 = reinterpret_cast<void**>(0);
    while (1) {
        r0_43 = reinterpret_cast<void**>(1);
        fun_eb7c(1, r1_36, r2, r3, v30, v32, v34);
        if (!reinterpret_cast<int1_t>(r7_41 == 1)) {
            z44 = r5_40 == 0;
            if (!z44) 
                goto addr_43c0_5;
        } else {
            if (!r5_40) {
                r3_45 = g5328;
                r0_46 = fun_102cc(0xff, r5_40, r7_41, r3_45);
                r8_42 = r0_46;
                fun_6388(r0_46, r5_40, r7_41, r3_45);
                fun_637c(r0_46, r5_40, r7_41, r3_45);
                r6_47 = r5_40;
                fun_62e4(8, 4, 1, r3_45);
                fun_62e4(8, 5, 1, r3_45);
                fun_62e4(8, 6, 1, r3_45);
                r2 = reinterpret_cast<void**>(1);
                fun_62e4(7, 7, 1, r3_45);
                fun_eb7c(1, 7, 1, r3_45, v30, v32, v34);
                r1_36 = r6_47;
                r0_48 = fun_4248(1, r1_36, 1, r3_45);
                fun_6364(r0_48, r1_36, 1, r3_45);
                fun_eb7c(1, r1_36, 1, r3_45, v30, v32, v34);
                goto addr_5684_11;
            }
            r3_45 = r5_40 - 1;
            if (reinterpret_cast<unsigned char>(r3_45) > reinterpret_cast<unsigned char>(25)) 
                goto label_14; else 
                goto addr_4390_15;
        }
        r0_43 = reinterpret_cast<void**>(0xff);
        addr_43c0_5:
        if (z44) {
            r1_36 = r5_40;
        }
        if (!z44) {
            r3_45 = r5_40 - 1;
            if (reinterpret_cast<unsigned char>(r3_45) > reinterpret_cast<unsigned char>(37)) {
                goto addr_43f8_22;
            } else {
                fun_fa88(r8_42, 50, r2, r3_45, v30);
                r0_43 = reinterpret_cast<void**>(0xff);
                r1_36 = reinterpret_cast<void**>(0);
            }
        }
        r2 = reinterpret_cast<void**>(1);
        r3_45 = g5328;
        r0_43 = fun_102cc(r0_43, r1_36, 1, r3_45);
        r8_42 = r0_43;
        addr_43f8_22:
        if (r7_41 == 3) {
            fun_637c(r0_43, r1_36, r2, r3_45);
        } else {
            fun_6388(r0_43, r1_36, r2, r3_45);
            fun_637c(r0_43, r1_36, r2, r3_45);
            if (reinterpret_cast<int1_t>(r7_41 == 2)) {
                if (reinterpret_cast<unsigned char>(r5_40) <= reinterpret_cast<unsigned char>(40)) 
                    goto label_31;
                goto addr_5658_33;
            }
        }
        fun_3120(r5_40, 0, r2, r3_45);
        fun_eb7c(1, 0, r2, r3_45, v30, v32, v34);
        r1_36 = r5_40;
        r0_49 = fun_4248(r7_41, r1_36, r2, r3_45);
        fun_6364(r0_49, r1_36, r2, r3_45);
        fun_eb7c(1, r1_36, r2, r3_45, v30, v32, v34);
        addr_56e8_36:
        z50 = reinterpret_cast<int1_t>(r5_40 == 24);
        if (!z50) {
            z50 = reinterpret_cast<int1_t>(r5_40 == 14);
        }
        if (!z50) {
            z51 = reinterpret_cast<int1_t>(r5_40 == 40);
            if (!z51) {
                z51 = reinterpret_cast<int1_t>(r5_40 == 29);
            }
            if (!z51) 
                goto label_43;
        }
        r0_52 = fun_1054(1, r1_36, r2, r3_45, v30, v32, v34);
        r4_53 = r0_52 + 0x3e8;
        while (r0_54 = fun_1054(r0_52, r1_36, r2, r3_45, v30, v32, v34), r0_55 = reinterpret_cast<void**>(50), reinterpret_cast<unsigned char>(r4_53) < reinterpret_cast<unsigned char>(r0_54)) {
            fun_eb7c(50, r1_36, r2, r3_45, v30, v32, v34);
            fun_637c(50, r1_36, r2, r3_45);
            r1_36 = r5_40;
            r0_56 = fun_4248(r7_41, r1_36, r2, r3_45);
            fun_6364(r0_56, r1_36, r2, r3_45);
            r0_52 = reinterpret_cast<void**>(1);
            fun_eb7c(1, r1_36, r2, r3_45, v30, v32, v34);
        }
        addr_5754_49:
        below_or_equal57 = reinterpret_cast<unsigned char>(r5_40) <= reinterpret_cast<unsigned char>(39);
        addr_5758_50:
        if (!below_or_equal57) 
            break;
        r3 = r5_40 + 1;
        r5_40 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r3) & 0xff);
        fun_eb7c(1, r1_36, r2, r3, v30, v32, v34);
        continue;
        label_43:
        r0_55 = reinterpret_cast<void**>(50);
        fun_eb7c(50, r1_36, r2, r3_45, v30, v32, v34);
        goto addr_5754_49;
        addr_5658_33:
        fun_eb7c(1, r1_36, r2, r3_45, v30, v32, v34);
        r1_36 = r5_40;
        r0_58 = fun_4248(r7_41, r1_36, r2, r3_45);
        fun_6364(r0_58, r1_36, r2, r3_45);
        fun_eb7c(1, r1_36, r2, r3_45, v30, v32, v34);
        r6_47 = r5_40;
        if (!reinterpret_cast<int1_t>(r7_41 == 1)) {
            goto addr_56e8_36;
        } else {
            addr_5684_11:
            z59 = reinterpret_cast<int1_t>(r5_40 == 6);
            if (!z59) {
                z59 = reinterpret_cast<int1_t>(r5_40 == 3);
            }
        }
        if (!z59) {
            z60 = reinterpret_cast<int1_t>(r5_40 == 12);
            if (!z60) {
                z60 = reinterpret_cast<int1_t>(r5_40 == 8);
            }
            if (!z60) 
                goto label_60;
        }
        r0_61 = fun_1054(1, r1_36, r2, r3_45, v30, v32, v34);
        r4_62 = r0_61 + 0x3e8;
        while (r0_63 = fun_1054(r0_61, r1_36, r2, r3_45, v30, v32, v34), r0_55 = reinterpret_cast<void**>(50), reinterpret_cast<unsigned char>(r4_62) < reinterpret_cast<unsigned char>(r0_63)) {
            fun_eb7c(50, r1_36, r2, r3_45, v30, v32, v34);
            fun_637c(50, r1_36, r2, r3_45);
            r1_36 = r6_47;
            r0_64 = fun_4248(1, r1_36, r2, r3_45);
            fun_6364(r0_64, r1_36, r2, r3_45);
            r0_61 = reinterpret_cast<void**>(1);
            fun_eb7c(1, r1_36, r2, r3_45, v30, v32, v34);
        }
        addr_574c_66:
        below_or_equal57 = reinterpret_cast<unsigned char>(r5_40) <= reinterpret_cast<unsigned char>(11);
        goto addr_5758_50;
        label_60:
        r0_55 = reinterpret_cast<void**>(0xc8);
        fun_eb7c(0xc8, r1_36, r2, r3_45, v30, v32, v34);
        goto addr_574c_66;
        label_14:
        addr_5790_68:
        fun_6388(r0_43, r1_36, r2, r3_45);
        fun_637c(r0_43, r1_36, r2, r3_45);
        if (reinterpret_cast<unsigned char>(r5_40) <= reinterpret_cast<unsigned char>(12)) 
            goto label_69;
        goto addr_5658_33;
        addr_4390_15:
        fun_fa88(r8_42, 50, r2, r3_45, v30);
        r1_36 = reinterpret_cast<void**>(0);
        r2 = r7_41;
        r3_45 = g5328;
        r0_43 = fun_102cc(0xff, 0, r2, r3_45);
        r8_42 = r0_43;
        goto addr_5790_68;
    }
    fun_6388(r0_55, r1_36, r2, r3_45);
    fun_6364(r0_55, r1_36, r2, r3_45);
    r0_65 = fun_fa88(r8_42, 50, r2, r3_45, v30);
    fun_6388(r0_65, 50, r2, r3_45);
    label_31:
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(fun_496c) + reinterpret_cast<unsigned char>(r5_40) << 2);
    label_69:
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(fun_57a8) + reinterpret_cast<unsigned char>(r5_40) << 2);
}

void** fun_102cc(void** r0, void** r1, void** r2, void** r3) {
    void** v5;
    void** sp6;
    uint32_t r5_7;
    uint32_t r0_8;
    void* lr9;
    int32_t v10;
    void** r0_11;

    v5 = r2;
    sp6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 - 12 - 88);
    r5_7 = *reinterpret_cast<unsigned char*>(&v5);
    r0_8 = reinterpret_cast<unsigned char>(r0) << 16 >> 16;
    lr9 = reinterpret_cast<void*>(0);
    while (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(lr9) + reinterpret_cast<unsigned char>(sp6)) = v10, lr9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(lr9) + 4), !reinterpret_cast<int1_t>(lr9 == 84)) {
    }
    r0_11 = fun_100a0(r0_8, r1, r5_7, sp6);
    return r0_11;
}

void** gfae0 = reinterpret_cast<void**>(34);

void** gfae4 = reinterpret_cast<void**>(0x68);

void** fun_fa88(void** r0, void** r1, void** r2, void** r3, void** a5) {
    void** r3_6;
    void** r0_7;
    void** r0_8;
    void** r0_9;
    void** r3_10;
    int1_t z11;
    void** r0_12;
    void** v13;
    void** r4_14;
    void** v15;
    void** r4_16;
    void** r0_17;

    r3_6 = gfae0;
    r0_7 = fun_10f6c(reinterpret_cast<unsigned char>(r1) * reinterpret_cast<unsigned char>(r3_6), 0x3e8, r2);
    r0_8 = gfae4;
    fun_1118(r0_8, 0xffffffff, r2, r3_6);
    r0_9 = fun_f898(r0, 0xffffffff);
    r3_10 = r0_9;
    z11 = r3_10 == 0;
    if (!z11) {
        *reinterpret_cast<void***>(r3_10 + 20) = r0_7;
    }
    if (!z11) {
        *reinterpret_cast<void***>(r3_10 + 16) = r0_7;
    }
    r0_12 = gfae4;
    fun_1130(r0_12, 0xffffffff, r2, r3_10);
    if (reinterpret_cast<signed char>(r0_7) <= reinterpret_cast<signed char>(0)) {
        return r0;
    } else {
        v13 = r4_14;
        v15 = reinterpret_cast<void**>(__return_address());
        r4_16 = r0;
        while (r0_17 = fun_f9f0(r4_16, 0xffffffff, r2, r3_10, v13), !!r0_17) {
            fun_eb7c(10, 0xffffffff, r2, r3_10, v13, v15, a5);
        }
        return 10;
    }
}

void fun_eb7c(void** r0, void** r1, void** r2, void** r3, void** a5, void** a6, void** a7) {
    if (!r0) {
        return;
    }
}

void** fun_7928(void** r0, void** r1, void** r2, uint32_t r3) {
    void** r8_5;
    void** r7_6;
    void** r6_7;
    uint32_t r5_8;
    uint32_t r4_9;
    void** r0_10;

    r8_5 = r0;
    r7_6 = r1;
    r6_7 = r2;
    r5_8 = r3;
    r4_9 = 0;
    while (r0_10 = fun_7904(r8_5, r7_6, r6_7), r4_9 = r4_9 + 1 & 0xff, reinterpret_cast<signed char>(r0_10) <= reinterpret_cast<signed char>(0)) {
        if (r4_9 > r5_8) 
            goto addr_7968_4;
    }
    return r0_10;
    addr_7968_4:
    return r0_10;
}

void** fun_5db0(void* r0, void** r1) {
    void* r3_3;
    void** r6_4;
    void** r12_5;
    int1_t less_or_equal6;
    uint32_t r2_7;
    void** r0_8;
    void** r4_9;
    uint32_t r1_10;
    uint32_t r5_11;
    int1_t less12;
    uint32_t lr13;
    uint32_t r12_14;
    int1_t below_or_equal15;
    int1_t z16;
    int1_t z17;

    r3_3 = reinterpret_cast<void*>(0);
    r6_4 = r1;
    while (r12_5 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r3_3) + reinterpret_cast<uint32_t>(r0)))), !!r12_5) {
        r3_3 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r3_3) + 1);
    }
    less_or_equal6 = reinterpret_cast<int32_t>(r3_3) <= reinterpret_cast<int32_t>(0);
    if (less_or_equal6) {
        r2_7 = 0;
    }
    if (!less_or_equal6) {
        r2_7 = 1;
    }
    r0_8 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r0) + reinterpret_cast<uint32_t>(r3_3));
    r4_9 = r12_5;
    r1_10 = reinterpret_cast<uint32_t>(r3_3) - 1;
    r5_11 = 1;
    while (1) {
        less12 = reinterpret_cast<int32_t>(r1_10) < reinterpret_cast<int32_t>(0);
        if (less12) {
            r3_3 = reinterpret_cast<void*>(0);
        }
        if (!less12) {
            r3_3 = reinterpret_cast<void*>(r2_7 & 1);
        }
        if (!r3_3) 
            break;
        lr13 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r0_8 + 0xffffffff));
        r12_14 = lr13 - 48;
        r3_3 = reinterpret_cast<void*>(r12_14 & 0xff);
        below_or_equal15 = reinterpret_cast<uint32_t>(r3_3) <= 9;
        if (!below_or_equal15) {
            r2_7 = 0;
        }
        if (below_or_equal15) {
            r2_7 = 1;
        }
        if (r2_7) {
            r3_3 = reinterpret_cast<void*>(10);
            r4_9 = reinterpret_cast<void**>(r12_14 * r5_11 + reinterpret_cast<unsigned char>(r4_9));
            r5_11 = 10 * r5_11;
        } else {
            z16 = lr13 == 45;
            if (z16) {
                z16 = r1_10 == 0;
            }
            if (z16) {
                r4_9 = reinterpret_cast<void**>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(r4_9)));
            }
            if (z16) {
                r2_7 = 1;
            }
        }
        --r1_10;
        --r0_8;
    }
    z17 = r2_7 == 0;
    if (!z17) {
        r0_8 = r4_9;
    }
    if (z17) {
        r0_8 = r6_4;
    }
    return r0_8;
}

void fun_6210(void* r0, void*** r1) {
    return;
}

void** fun_11288(void** r0, void** r1, void** r2) {
    void** r2_4;
    uint1_t z5;
    uint1_t below_or_equal6;
    int32_t r2_7;
    int1_t c8;
    int1_t c9;
    uint32_t r2_10;
    int1_t less11;
    int1_t z12;

    if (!r1) {
        fun_1136c();
        return 0;
    }
    if (__intrinsic()) {
        r1 = reinterpret_cast<void**>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(r1)));
    }
    if (__intrinsic()) {
        r0 = reinterpret_cast<void**>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(r0)));
    }
    r2_4 = r1 - 1;
    z5 = reinterpret_cast<uint1_t>(r2_4 == 0);
    below_or_equal6 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(!__intrinsic()) | z5);
    if (!z5) {
        z5 = reinterpret_cast<uint1_t>(r0 == r1);
        below_or_equal6 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(r0) <= reinterpret_cast<unsigned char>(r1));
    }
    if (z5) {
        r0 = reinterpret_cast<void**>(0);
    }
    if (!below_or_equal6) {
        z5 = reinterpret_cast<uint1_t>((reinterpret_cast<unsigned char>(r1) & reinterpret_cast<unsigned char>(r2_4)) == 0);
        below_or_equal6 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(!__intrinsic()) | z5);
    }
    if (z5) {
        r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) & reinterpret_cast<unsigned char>(r2_4));
    }
    if (!below_or_equal6) 
        goto addr_112b4_17;
    addr_11350_19:
    if (__intrinsic()) {
        r0 = reinterpret_cast<void**>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(r0)));
    }
    return r0;
    addr_112b4_17:
    r2_7 = 0;
    while (1) {
        c8 = reinterpret_cast<unsigned char>(r1) < reinterpret_cast<unsigned char>(0x10000000);
        if (!c8) {
            c8 = reinterpret_cast<unsigned char>(r1) < reinterpret_cast<unsigned char>(r0);
        }
        if (!c8) {
            r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) << 4);
        }
        if (!c8) {
            r2_7 = r2_7 + 4;
        }
        if (c8) 
            break;
    }
    while (1) {
        c9 = reinterpret_cast<unsigned char>(r1) < reinterpret_cast<unsigned char>(0x80000000);
        if (!c9) {
            c9 = reinterpret_cast<unsigned char>(r1) < reinterpret_cast<unsigned char>(r0);
        }
        if (!c9) {
            r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) << 1);
        }
        if (!c9) {
            ++r2_7;
        }
        if (c9) 
            break;
    }
    r2_10 = r2_7 - 3;
    if (reinterpret_cast<int32_t>(r2_10) < reinterpret_cast<int32_t>(0) == __intrinsic()) 
        goto addr_112e8_39;
    goto addr_11324_41;
    while (1) {
        addr_112e8_39:
        if (reinterpret_cast<unsigned char>(r0) < reinterpret_cast<unsigned char>(r1)) {
            r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) - reinterpret_cast<unsigned char>(r1));
        }
        if (reinterpret_cast<unsigned char>(r0) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(r1) >> 1)) {
            r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) - (reinterpret_cast<unsigned char>(r1) >> 1));
        }
        if (reinterpret_cast<unsigned char>(r0) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(r1) >> 2)) {
            r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) - (reinterpret_cast<unsigned char>(r1) >> 2));
        }
        if (reinterpret_cast<unsigned char>(r0) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(r1) >> 3)) {
            r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) - (reinterpret_cast<unsigned char>(r1) >> 3));
        }
        less11 = reinterpret_cast<signed char>(r0) < reinterpret_cast<signed char>(1);
        r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) >> 4);
        if (!less11) {
            r2_10 = r2_10 - 4;
            less11 = reinterpret_cast<int32_t>(r2_10) < reinterpret_cast<int32_t>(0) != __intrinsic();
        }
        if (less11) 
            break;
    }
    z12 = (r2_10 & 3) == 0;
    if (z12) 
        goto addr_11320_54;
    __asm__("teqne r0, #0");
    addr_11320_54:
    if (z12) {
        goto addr_11350_19;
    } else {
        addr_11324_41:
        if (reinterpret_cast<int32_t>(r2_10) >= -2) {
            if (r2_10 != -2) {
                if (reinterpret_cast<unsigned char>(r0) < reinterpret_cast<unsigned char>(r1)) {
                    r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) - reinterpret_cast<unsigned char>(r1));
                }
                r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) >> 1);
            }
            if (reinterpret_cast<unsigned char>(r0) < reinterpret_cast<unsigned char>(r1)) {
                r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) - reinterpret_cast<unsigned char>(r1));
            }
            r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) >> 1);
        }
    }
    if (reinterpret_cast<unsigned char>(r0) < reinterpret_cast<unsigned char>(r1)) {
        r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) - reinterpret_cast<unsigned char>(r1));
        goto addr_11350_19;
    }
}

void** gfe54 = reinterpret_cast<void**>(0x7c);

void** gfe58 = reinterpret_cast<void**>(60);

void** gfe5c = reinterpret_cast<void**>(40);

struct s42 {
    void** f0;
    signed char[55] pad56;
    void** f56;
    signed char[55] pad112;
    void** f112;
    signed char[55] pad168;
    void** f168;
    signed char[55] pad224;
    void** f224;
    signed char[55] pad280;
    void** f280;
};

struct s42* gfe60 = reinterpret_cast<struct s42*>(0x40001380);

signed char* gfe64 = reinterpret_cast<signed char*>(0x400014d0);

signed char* gfe68 = reinterpret_cast<signed char*>(0x40001728);

int32_t fun_5ee0(void** r0, void** r1, void** r2, void** r3) {
    int32_t r0_5;
    void** r3_6;
    void** r5_7;
    void** r0_8;
    void** r0_9;
    void** r0_10;
    struct s42* r3_11;
    signed char* r2_12;
    signed char* r3_13;

    fun_6fe8(r0, r1, r2, r3);
    r0_5 = fun_f940();
    r3_6 = gfe54;
    r5_7 = *reinterpret_cast<void***>(r3_6);
    if (r5_7) {
        return r0_5;
    } else {
        *reinterpret_cast<void***>(r3_6) = reinterpret_cast<void**>(1);
        r0_8 = gfe58;
        fun_111c(r0_8, 1, 1);
        r0_9 = gfe5c;
        fun_111c(r0_9, 1, 1);
        r0_10 = gfe5c;
        fun_1118(r0_10, 0xffffffff, 1, r3_6);
        r3_11 = gfe60;
        r2_12 = gfe64;
        r3_11->f280 = r5_7;
        r3_11->f0 = r5_7;
        r3_11->f56 = r5_7;
        r3_11->f112 = r5_7;
        r3_11->f168 = r5_7;
        r3_11->f224 = r5_7;
        while (*r2_12 = 0, r2_12 = r2_12 + 30, r3_13 = gfe68, r2_12 != r3_13) {
        }
    }
}

void** fun_5ef4(void*** r0, void** r1, void** r2, void** r3, void** a5, void** a6) {
    void** r12_7;
    void** r8_8;
    void** r10_9;
    void** r5_10;
    void** r6_11;
    void** r7_12;
    void** lr13;
    uint32_t r3_14;
    int1_t z15;
    void** r4_16;
    void** r1_17;
    unsigned char* r3_18;
    uint32_t r2_19;
    int1_t z20;
    int1_t less21;
    void** r12_22;
    void* r0_23;
    void** lr24;
    int1_t less25;

    r12_7 = reinterpret_cast<void**>(0);
    r8_8 = a5;
    r10_9 = a6;
    r5_10 = r1;
    r6_11 = r2;
    r7_12 = r3;
    lr13 = reinterpret_cast<void**>(0);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r0) + reinterpret_cast<unsigned char>(r1)) = 0;
    while (reinterpret_cast<signed char>(lr13) < reinterpret_cast<signed char>(r5_10)) {
        r3_14 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(lr13) + reinterpret_cast<uint32_t>(r0));
        z15 = r3_14 == 32;
        if (!z15) {
            z15 = r3_14 == 9;
        }
        if (!z15) {
            r12_7 = reinterpret_cast<void**>(0);
        }
        if (z15) {
            r12_7 = reinterpret_cast<void**>(1);
        }
        if (!z15) 
            goto addr_5f40_10;
        ++lr13;
    }
    addr_5fc0_14:
    r4_16 = reinterpret_cast<void**>(0);
    addr_5fe0_15:
    return r4_16;
    addr_5f40_10:
    if (r3_14 == 35) {
        goto addr_5fc0_14;
    } else {
        r1_17 = r12_7;
        r3_18 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r0) + reinterpret_cast<unsigned char>(lr13));
        while (1) {
            r2_19 = *r3_18;
            z20 = r2_19 == 61;
            if (!z20) {
                r4_16 = reinterpret_cast<void**>(0);
            }
            if (z20) {
                r4_16 = reinterpret_cast<void**>(1);
            }
            if (r4_16) 
                break;
            less21 = reinterpret_cast<signed char>(r1_17) < reinterpret_cast<signed char>(r8_8 - 1);
            ++lr13;
            if (less21) {
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r6_11) + reinterpret_cast<unsigned char>(r1_17)) = static_cast<signed char>(r2_19);
            }
            if (less21) {
                ++r1_17;
            }
            ++r3_18;
            if (reinterpret_cast<signed char>(lr13) >= reinterpret_cast<signed char>(r5_10)) 
                goto label_28;
        }
    }
    r12_22 = lr13 + 1;
    r0_23 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r0) + reinterpret_cast<unsigned char>(r12_22));
    lr24 = reinterpret_cast<void**>(0);
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r6_11) + reinterpret_cast<unsigned char>(r1_17)) = 0;
    while (less25 = reinterpret_cast<signed char>(r12_22) < reinterpret_cast<signed char>(r5_10), ++r12_22, less25) {
        r0_23 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r0_23) + 1);
        if (reinterpret_cast<signed char>(lr24) >= reinterpret_cast<signed char>(r10_9 - 1)) 
            goto addr_5fb4_34;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(lr24) + reinterpret_cast<unsigned char>(r7_12)) = static_cast<signed char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r0_23) - 1)));
        ++lr24;
    }
    addr_5fb4_34:
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r7_12) + reinterpret_cast<unsigned char>(lr24)) = 0;
    goto addr_5fe0_15;
    label_28:
    goto addr_5fe0_15;
}

void** g6204 = reinterpret_cast<void**>(84);

void** fun_6198(void** r0, struct s8* r1, void** r2) {
    void** r3_4;
    void* sp5;
    void** r5_6;
    int1_t z7;
    void** r1_8;
    void** r0_9;
    void* r0_10;
    void** v11;
    void** v12;
    void** r1_13;
    void** r0_14;
    void** r0_15;

    r3_4 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r0))));
    sp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 16 - 0x100);
    r5_6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp5) + 1);
    z7 = reinterpret_cast<int1_t>(r3_4 == 63);
    r1_8 = r0;
    r0_9 = r5_6;
    if (!z7) {
        r0_9 = r5_6;
    }
    if (z7) {
        r0_10 = fun_ecb4(r0_9, r1_8);
        r1_8 = r0 + 1;
        r0_9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r5_6) + reinterpret_cast<uint32_t>(r0_10));
    }
    fun_eb30(r0_9, r1_8, r2, r3_4, v11, v12);
    r1_13 = g6204;
    r0_14 = fun_102c(reinterpret_cast<int32_t>(sp5) + 1, r1_13, r2);
    r0_15 = r0_14;
    if (r0_15) {
        r0_15 = reinterpret_cast<void**>(1);
    }
    r1->f208 = 0;
    r1->f0 = r0_14;
    r1->f204 = 0;
    return r0_15;
}

struct s43 {
    signed char[1] pad1;
    void** f1;
};

struct s43* fun_eb5c(void** r0);

void** fun_eb30(void** r0, void** r1, void** r2, void** r3, void** a5, void** a6) {
    struct s43* r0_7;
    void** r4_8;

    r0_7 = fun_eb5c(r1);
    fun_e7e0(r0, r1, &r0_7->f1, r3, r4_8);
    return r0;
}

struct s44 {
    signed char* f0;
    int32_t f4;
};

void fun_10c08(struct s2* r0, void** r1, void** r2, void** r3, signed char* a5, int32_t a6) {
    struct s43* r0_7;
    struct s44* v8;
    signed char* r0_9;
    int32_t r2_10;
    void** r1_11;
    uint32_t r3_12;
    int1_t z13;
    int1_t z14;
    int1_t below_or_equal15;
    int1_t z16;
    int1_t z17;
    int1_t z18;
    int1_t z19;
    int1_t z20;

    r0->f20 = a5;
    r0->f24 = a6;
    r0->f8 = -6;
    __asm__("stm r0, {r1, r2}");
    r0->f12 = 2;
    r0_7 = fun_eb5c(r3);
    v8 = reinterpret_cast<struct s44*>(&r0->f20);
    r0_9 = v8->f0;
    r2_10 = v8->f4;
    r1_11 = r3;
    r0->f16 = reinterpret_cast<uint32_t>(r0_7) * 6 + 10;
    while (r2_10) {
        r3_12 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r1_11));
        if (!r3_12) 
            goto addr_10b98_5;
        z13 = r3_12 == 0xc3;
        if (!z13) {
            r3_12 = r3_12 - 24;
        }
        if (z13) {
            r3_12 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r1_11 + 1));
            ++r1_11;
            z14 = r3_12 == 0x9f;
            below_or_equal15 = r3_12 <= 0x9f;
            if (z14) {
                r3_12 = 7;
            }
            if (z14) 
                goto label_14; else 
                goto addr_10b18_15;
        }
        addr_10b74_16:
        *r0_9 = static_cast<signed char>(r3_12);
        ++r1_11;
        ++r0_9;
        --r2_10;
        continue;
        label_14:
        goto addr_10b74_16;
        addr_10b18_15:
        if (!below_or_equal15) {
            z16 = r3_12 == 0xb6;
            if (!z16) 
                goto addr_10b48_19;
        } else {
            z17 = r3_12 == 0x96;
            if (z17) {
                r3_12 = 5;
            }
            if (z17) 
                goto label_23; else 
                goto addr_10b28_24;
        }
        r3_12 = 2;
        addr_10b48_19:
        if (z16) {
            goto addr_10b74_16;
        } else {
            z18 = r3_12 == 0xbc;
            if (z18) {
                r3_12 = 3;
            }
            if (!z18) 
                goto addr_10b58_30;
        }
        goto addr_10b74_16;
        addr_10b58_30:
        z19 = r3_12 == 0xa4;
        if (z19) {
            r3_12 = 1;
        }
        if (!z19) 
            goto addr_10b64_34;
        goto addr_10b74_16;
        addr_10b64_34:
        addr_10b70_36:
        r3_12 = 0;
        goto addr_10b74_16;
        label_23:
        goto addr_10b74_16;
        addr_10b28_24:
        z20 = r3_12 == 0x9c;
        if (z20) {
            r3_12 = 6;
        }
        if (!z20) 
            goto addr_10b34_39;
        goto addr_10b74_16;
        addr_10b34_39:
        if (r3_12 != 0x84) {
            goto addr_10b70_36;
        } else {
            r3_12 = 4;
            goto addr_10b74_16;
        }
    }
    addr_10b98_5:
    *r0_9 = 0;
    return;
}

void** gf1d4 = reinterpret_cast<void**>(0xd8);

struct s45 {
    signed char[1] pad1;
    void** f1;
    signed char[2] pad4;
    void** f4;
    signed char[1] pad6;
    void** f6;
};

uint32_t fun_f258(void** r0, void** r1, void** r2, void** r3);

void** fun_f0cc(void** r0, void** r1) {
    void** r8_3;
    int1_t less4;
    void** r10_5;
    void** r2_6;
    void** r0_7;
    void** r11_8;
    void** r0_9;
    void** r1_10;
    void** r0_11;
    struct s45* r7_12;
    void** r9_13;
    int32_t r5_14;
    void** r6_15;
    void** r0_16;
    void** r3_17;
    uint32_t r0_18;
    void** r3_19;
    void** r1_20;
    uint32_t r0_21;
    void** r0_22;
    uint32_t r0_23;
    void** r3_24;

    r8_3 = r1;
    less4 = reinterpret_cast<signed char>(r8_3) < reinterpret_cast<signed char>(0) != __intrinsic();
    r10_5 = r0;
    if (less4) {
        r1 = gf1d4;
    }
    if (less4) {
        r2_6 = reinterpret_cast<void**>(0);
    }
    if (!less4) {
        if (reinterpret_cast<signed char>(r8_3) <= reinterpret_cast<signed char>(99)) {
            fun_edac(r0, r1, 0);
            r0_7 = fun_11288(r8_3, 10, 0);
            r11_8 = r0_7;
            r0_9 = fun_1107c(r8_3, 10, 0);
            r1_10 = reinterpret_cast<void**>(10);
            r0_11 = fun_11288(r0_9, 10, 0);
            r7_12 = reinterpret_cast<struct s45*>(0);
            r9_13 = r0_11;
            do {
                r5_14 = 0;
                r6_15 = reinterpret_cast<void**>(3);
                while (1) {
                    r0_16 = r9_13;
                    if (r0_16) {
                        r0_18 = fun_f258(r0_16, r1_10, r2_6, r3_17);
                        r3_19 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(r0_18 + r5_14)) & 1);
                        r1_20 = reinterpret_cast<void**>(&r7_12->f6);
                        fun_ee68(r10_5, r1_20, r6_15, r3_19);
                        r0_21 = fun_f258(r11_8, r1_20, r6_15, r3_19);
                        r2_6 = r6_15;
                        r3_17 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(r0_21 + r5_14)) & 1);
                        r0_22 = r10_5;
                        r1_10 = reinterpret_cast<void**>(&r7_12->f1);
                    } else {
                        r0_23 = fun_f258(r11_8, r1_10, r2_6, r3_17);
                        r3_17 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(r0_23 + r5_14)) & 1 << reinterpret_cast<uint32_t>(r7_12));
                        r0_22 = r10_5;
                        r1_10 = reinterpret_cast<void**>(&r7_12->f4);
                        r2_6 = r6_15;
                    }
                    ++r5_14;
                    fun_ee68(r0_22, r1_10, r2_6, r3_17);
                    ++r6_15;
                    if (r5_14 == 8) 
                        break;
                }
                r7_12 = reinterpret_cast<struct s45*>(&r7_12->f1);
            } while (r7_12 != 4);
            goto addr_f1cc_19;
        } else {
            r1 = gf1d4;
            r2_6 = reinterpret_cast<void**>(0xb4);
        }
    }
    fun_ef0c(r0, r1, r2_6, r3_24);
    r8_3 = reinterpret_cast<void**>(0xffffffff);
    addr_f1cc_19:
    return r8_3;
}

void** fun_f064(unsigned char* r0, void** r1, void** r2, void** r3) {
    void** r7_5;
    int32_t r0_6;
    void** r12_7;
    int1_t z8;
    uint32_t r0_9;
    void** r1_10;

    r7_5 = r3;
    r0_6 = fun_effc(r1, r2);
    r12_7 = reinterpret_cast<void**>(0xffffffff);
    if (r0_6) {
        z8 = r7_5 == 0;
        r0_9 = reinterpret_cast<unsigned char>(r1) << 1;
        if (!z8) {
            r3 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(r0) + r0_9)));
        }
        if (z8) {
            r3 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(r0) + r0_9)));
        }
        r1_10 = r2 + 4;
        if (!z8) {
            r2 = reinterpret_cast<void**>(1);
        }
        if (z8) {
            r2 = reinterpret_cast<void**>(1);
        }
        if (!z8) {
            r3 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r3) | reinterpret_cast<unsigned char>(r2) << reinterpret_cast<unsigned char>(r1_10));
        }
        if (z8) {
            __asm__("biceq r3, r3, r2, lsl r1");
        }
        if (!z8) {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(r0) + r0_9) = static_cast<unsigned char>(reinterpret_cast<uint32_t>(r3));
        }
        if (z8) {
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(r0) + r0_9) = static_cast<unsigned char>(reinterpret_cast<uint32_t>(r3));
        }
        r12_7 = reinterpret_cast<void**>(0);
        if (z8) {
            r12_7 = r7_5;
        }
    }
    return r12_7;
}

void** fun_ee68(void** r0, void** r1, void** r2, void** r3) {
    int32_t r0_5;
    void** r6_6;
    void*** r5_7;
    uint32_t r3_8;
    int1_t z9;
    void* r12_10;

    r0_5 = fun_edf8(r1, r2);
    r6_6 = reinterpret_cast<void**>(0xffffffff);
    if (r0_5) {
        r5_7 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r0) + (reinterpret_cast<unsigned char>(r2) << 1));
        r3_8 = reinterpret_cast<uint32_t>(reinterpret_cast<signed char>(r1) >> 3);
        z9 = r3 == 0;
        r12_10 = reinterpret_cast<void*>(1 - r3_8);
        if (!z9) {
            r3_8 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r5_7) + reinterpret_cast<uint32_t>(r12_10));
        }
        if (z9) {
            r3_8 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r5_7) + reinterpret_cast<uint32_t>(r12_10));
        }
        if (!z9) {
            r2 = reinterpret_cast<void**>(1);
        }
        if (z9) {
            r2 = reinterpret_cast<void**>(1);
        }
        if (!z9) {
            r3_8 = r3_8 | reinterpret_cast<unsigned char>(r2) << (reinterpret_cast<unsigned char>(r1) & 7);
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
        r6_6 = reinterpret_cast<void**>(0);
        if (z9) {
            r6_6 = r3;
        }
    }
    return r6_6;
}

void** fun_ee24(void** r0, void** r1, void** r2, void** r3) {
    int32_t r0_5;
    int1_t z6;
    void** r0_7;

    r0_5 = fun_edf8(r1, r2);
    z6 = r0_5 == 0;
    if (!z6) {
        r3 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>((reinterpret_cast<unsigned char>(r2) << 1) - (reinterpret_cast<signed char>(r1) >> 3) + reinterpret_cast<unsigned char>(r0) + 1)));
    }
    if (!z6) {
        r3 = r3;
    }
    r0_7 = reinterpret_cast<void**>(0xffffffff);
    if (!z6) {
        r0_7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r3) & 1);
    }
    return r0_7;
}

void** fun_ef0c(void** r0, void** r1, void** r2, void** r3) {
    void** r10_5;
    void** r8_6;
    void** r7_7;
    void** r9_8;
    void** r6_9;
    void** r5_10;
    void** r4_11;
    void** r0_12;
    void** r1_13;
    void** r2_14;
    void** r0_15;
    void** r0_16;
    void** r0_17;
    void** r3_18;
    void** r0_19;

    r10_5 = r0;
    r8_6 = r1;
    r7_7 = r2;
    r9_8 = reinterpret_cast<void**>(11);
    do {
        r6_9 = reinterpret_cast<void**>(11 - reinterpret_cast<unsigned char>(r9_8));
        r5_10 = reinterpret_cast<void**>(11);
        while (1) {
            r4_11 = reinterpret_cast<void**>(11 - reinterpret_cast<unsigned char>(r5_10));
            if (r7_7 == 90) {
                r0_12 = fun_ee24(r8_6, r6_9, r4_11, r3);
                r1_13 = r4_11;
                r3 = r0_12;
                r2_14 = r9_8;
                r0_15 = r10_5;
            } else {
                if (reinterpret_cast<signed char>(r7_7) > reinterpret_cast<signed char>(90)) {
                    if (r7_7 == 0xb4) 
                        goto label_9; else 
                        goto addr_ef60_10;
                } else {
                    if (r7_7) 
                        goto addr_ef48_12;
                    r0_16 = fun_ee24(r8_6, r6_9, r4_11, r3);
                    r1_13 = r6_9;
                    r3 = r0_16;
                    r2_14 = r4_11;
                    r0_15 = r10_5;
                }
            }
            addr_efd0_15:
            fun_ee68(r0_15, r1_13, r2_14, r3);
            --r5_10;
            if (!__intrinsic()) 
                break;
            continue;
            label_9:
            r0_17 = fun_ee24(r8_6, r6_9, r4_11, r3);
            r1_13 = r9_8;
            r3 = r0_17;
            r2_14 = r5_10;
            r0_15 = r10_5;
            goto addr_efd0_15;
            addr_ef60_10:
            r3_18 = geff8;
            if (r7_7 != r3_18) 
                goto addr_ef6c_18;
            r0_19 = fun_ee24(r8_6, r6_9, r4_11, r3_18);
            r1_13 = r5_10;
            r3 = r0_19;
            r2_14 = r6_9;
            r0_15 = r10_5;
            goto addr_efd0_15;
        }
        --r9_8;
    } while (__intrinsic());
    goto label_22;
    addr_ef6c_18:
    r7_7 = reinterpret_cast<void**>(0xffffffff);
    addr_eff0_23:
    return r7_7;
    addr_ef48_12:
    goto addr_ef6c_18;
    label_22:
    goto addr_eff0_23;
}

void fun_f1dc(void** r0, void** r1, void** r2) {
}

void fun_edac(void** r0, void** r1, void** r2) {
    int32_t r2_4;

    r2_4 = 0;
    while (++r2_4, *reinterpret_cast<void***>(r0) = reinterpret_cast<void**>(static_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r0))) & 0x70)), *reinterpret_cast<void***>(r0 + 1) = reinterpret_cast<void**>(0), r0 = r0 + 2, r2_4 != 12) {
    }
    return;
}

void fun_eadc(void** r0, void** r1, void** r2) {
    void* r3_4;
    int1_t z5;

    r3_4 = reinterpret_cast<void*>(0);
    while (z5 = r2 == 0, --r2, !z5) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(r3_4) + reinterpret_cast<unsigned char>(r0)) = static_cast<signed char>(reinterpret_cast<uint32_t>(r1));
        r3_4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(r3_4) + 1);
    }
    return;
}

void*** g6a38 = reinterpret_cast<void***>(0x400005f4);

void*** g6a3c = reinterpret_cast<void***>(0x400005f0);

void** fun_69d0(void** r0, void** r1, void** r2) {
    void** r1_4;
    void** r4_5;
    void*** r5_6;
    void*** r12_7;
    void** r3_8;
    void** r4_9;
    void** r5_10;
    void** r0_11;
    void** r3_12;
    void** r1_13;
    void** r0_14;
    int1_t less15;

    r1_4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) & 0xff);
    r4_5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) & 0xff);
    r5_6 = g6a38;
    r12_7 = g6a3c;
    if (reinterpret_cast<int1_t>(r1_4 == 1)) {
        r3_8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*r12_7) | reinterpret_cast<unsigned char>(r1_4) << reinterpret_cast<unsigned char>(r4_5));
        *r12_7 = r3_8;
        if (reinterpret_cast<signed char>(r4_5) > reinterpret_cast<signed char>(14)) {
            return 60;
        } else {
            r0_11 = fun_1054(60, r1_4, r2, r3_8, r4_9, r5_10, __return_address());
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(r5_6) + reinterpret_cast<unsigned char>(r4_5) << 2) = r0_11;
            return r0_11;
        }
    }
    r3_12 = *r12_7;
    __asm__("bic r3, r3, r2, lsl r4");
    r1_13 = *r5_6;
    *r12_7 = r3_12;
    r0_14 = fun_10f6c(60, r1_13, 1);
    less15 = reinterpret_cast<signed char>(r4_5) < reinterpret_cast<signed char>(r0_14);
    if (!less15) 
        goto addr_6a30_7;
    r3_12 = reinterpret_cast<void**>(0);
    addr_6a30_7:
    if (less15) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(r5_6) + reinterpret_cast<unsigned char>(r4_5) << 2) = r3_12;
    }
    return r0_14;
}

void** fun_10330(void** r0, void** r1, void** r2) {
    void** sp4;
    void* lr5;
    int32_t v6;
    void** r0_7;

    sp4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 - 12 - 88);
    lr5 = reinterpret_cast<void*>(0);
    while (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(lr5) + reinterpret_cast<unsigned char>(sp4)) = v6, lr5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(lr5) + 4), !reinterpret_cast<int1_t>(lr5 == 84)) {
    }
    r0_7 = fun_100a0(0xff, 0, 1, sp4);
    return r0_7;
}

void** fun_6eac(void** r0, void** r1, void** r2, void** r3, void** a5) {
    void** v6;
    void** r4_7;
    void** r4_8;
    void** r6_9;
    void** r5_10;
    void** r0_11;
    void** r2_12;
    void** r3_13;
    uint32_t r1_14;
    void** r0_15;
    void** r5_16;
    void** r6_17;
    void** r0_18;
    void** r7_19;
    signed char* r5_20;
    signed char* r6_21;
    void** r8_22;
    void** r4_23;
    void** r1_24;
    void** r0_25;
    void** r12_26;
    void*** r3_27;
    int1_t z28;
    int1_t z29;
    void** r2_30;
    signed char* r6_31;
    signed char* r5_32;
    void** r4_33;
    int1_t z34;
    int1_t z35;
    void** r0_36;
    void** r1_37;
    int1_t z38;

    v6 = r4_7;
    r4_8 = r0;
    r6_9 = r1;
    if (reinterpret_cast<signed char>(r4_8) < reinterpret_cast<signed char>(0) != __intrinsic()) {
        r5_10 = reinterpret_cast<void**>(0);
        while (1) {
            r0_11 = r5_10;
            ++r5_10;
            if (reinterpret_cast<unsigned char>(r4_8) & 1) {
                r0_11 = fun_6f70(r0_11, r6_9, r2, r4_8, v6);
            }
            if (r5_10 == 31) 
                break;
        }
        return r0_11;
    }
    if (r1) 
        goto addr_6eec_10;
    r2_12 = g6f68;
    r3_13 = reinterpret_cast<void**>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r2_12) + reinterpret_cast<unsigned char>(r4_8)) - 1);
    r1_14 = reinterpret_cast<unsigned char>(r3_13) & 0xff;
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r2_12) + reinterpret_cast<unsigned char>(r4_8)) = static_cast<signed char>(r1_14);
    if (reinterpret_cast<signed char>(r4_8) <= reinterpret_cast<signed char>(14)) 
        goto addr_6f4c_13;
    addr_6f58_15:
    if (reinterpret_cast<signed char>(r4_8) > reinterpret_cast<signed char>(11)) {
        return r0;
    }
    r0_15 = g6b98;
    fun_1118(r0_15, 0xffffffff, r2_12, r3_13);
    r0_18 = fun_1054(r0_15, 0xffffffff, r2_12, r3_13, v6, r5_16, r6_17);
    r7_19 = reinterpret_cast<void**>(0);
    r5_20 = g6b9c;
    r6_21 = g6ba0;
    r8_22 = r0_18;
    r4_23 = reinterpret_cast<void**>(0);
    while (1) {
        r1_24 = r8_22;
        r0_25 = fun_6928(r4_23, r1_24, r2_12);
        r12_26 = r0_25;
        if (r0_25) {
            r3_27 = g6ba4;
            r2_12 = *r3_27;
            z28 = (reinterpret_cast<unsigned char>(r2_12) & 1 << reinterpret_cast<unsigned char>(r4_23)) == 0;
            if (!z28) {
                r12_26 = reinterpret_cast<void**>(0);
            }
            if (z28) {
                r12_26 = reinterpret_cast<void**>(1);
            }
        }
        if (r12_26 != static_cast<int32_t>(*r5_20)) {
            z29 = static_cast<int32_t>(*r6_21) == 0;
            r2_12 = r12_26;
            r0_25 = r4_23;
            r1_24 = reinterpret_cast<void**>(1);
            *r5_20 = static_cast<signed char>(reinterpret_cast<uint32_t>(r12_26));
            if (!z29) {
                r7_19 = reinterpret_cast<void**>(1);
            }
            if (!z29) {
                r0_25 = fun_6290(r0_25, 1, r2_12);
            }
        }
        ++r4_23;
        ++r5_20;
        ++r6_21;
        if (reinterpret_cast<int1_t>(r4_23 == 12)) 
            break;
    }
    r2_30 = g6ba8;
    if (*reinterpret_cast<void***>(r2_30)) 
        goto addr_6b3c_34;
    if (r7_19) 
        goto addr_6b88_37;
    addr_6b8c_39:
    addr_6b88_37:
    fun_6328(r0_25, r1_24, r2_30);
    goto addr_6b8c_39;
    addr_6b3c_34:
    *reinterpret_cast<void***>(r2_30) = reinterpret_cast<void**>(0);
    r6_31 = g6ba0;
    r5_32 = g6b9c;
    r4_33 = reinterpret_cast<void**>(0);
    while (1) {
        z34 = static_cast<int32_t>(*r6_31) == 0;
        r0_25 = r4_33;
        r1_24 = reinterpret_cast<void**>(1);
        ++r4_33;
        if (!z34) {
            r2_30 = reinterpret_cast<void**>(static_cast<int32_t>(*r5_32));
        }
        if (!z34) {
            r0_25 = fun_6290(r0_25, 1, r2_30);
        }
        ++r6_31;
        ++r5_32;
        if (r4_33 == 12) 
            break;
    }
    goto addr_6b88_37;
    addr_6f4c_13:
    z35 = r1_14 == 0;
    if (z35) {
        r3_13 = g6f6c;
    }
    if (z35) {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(r3_13) + reinterpret_cast<unsigned char>(r4_8) << 2) = r1_14;
        goto addr_6f58_15;
    }
    addr_6eec_10:
    r0_36 = fun_1054(r0, r1, r2, r3, v6, r5_16, r6_17);
    r0 = fun_6928(r4_8, r0_36, r2);
    r1_37 = r0;
    z38 = r1_37 == 0;
    if (z38) {
        r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r4_8) & 0xff);
    }
    if (z38) {
        r0 = fun_69d0(r0, r1_37, r2);
    }
    r2_12 = g6f68;
    r3_13 = reinterpret_cast<void**>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r2_12) + reinterpret_cast<unsigned char>(r4_8)) + 1 & 0xff);
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r2_12) + reinterpret_cast<unsigned char>(r4_8)) = static_cast<signed char>(reinterpret_cast<uint32_t>(r3_13));
    if (!reinterpret_cast<int1_t>(r3_13 == 1)) {
        goto addr_6f58_15;
    } else {
        r0 = fun_6d18(r4_8, r1_37, r2_12, r3_13, v6);
        goto addr_6f58_15;
    }
}

void* g6fe0 = reinterpret_cast<void*>(0x40000014);

void** g6fe4 = reinterpret_cast<void**>(52);

void fun_6f74(void** r0, void** r1, void** r2) {
    void** lr4;
    void** v5;
    void** r4_6;
    int1_t z7;
    void* r3_8;
    void** r4_9;
    void** r12_10;
    signed char* r2_11;
    int32_t r1_12;
    int1_t less13;
    int1_t less_or_equal14;
    void** r3_15;
    void** r2_16;
    void** r0_17;
    void** r5_18;
    void** r6_19;
    void** r0_20;
    void** r7_21;
    signed char* r5_22;
    signed char* r6_23;
    void** r8_24;
    void** r4_25;
    void** r1_26;
    void** r0_27;
    void** r12_28;
    void*** r3_29;
    int1_t z30;
    int1_t z31;
    void** r2_32;
    signed char* r6_33;
    signed char* r5_34;
    void** r4_35;
    int1_t z36;

    lr4 = reinterpret_cast<void**>(__return_address());
    v5 = r4_6;
    z7 = reinterpret_cast<int1_t>(r0 == -1);
    r3_8 = g6fe0;
    if (!z7) {
        r2 = r0;
    }
    if (z7) {
        r2 = reinterpret_cast<void**>(0);
    }
    r4_9 = r1;
    r12_10 = r2;
    if (!z7) {
        lr4 = r0;
    }
    if (z7) {
        lr4 = reinterpret_cast<void**>(11);
    }
    r2_11 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r2) + reinterpret_cast<uint32_t>(r3_8));
    r1_12 = 0;
    while (less13 = reinterpret_cast<signed char>(r12_10) < reinterpret_cast<signed char>(lr4 + 1), ++r12_10, less13) {
        less_or_equal14 = reinterpret_cast<signed char>(r0) <= reinterpret_cast<signed char>(11);
        if (less_or_equal14) {
            *r2_11 = static_cast<signed char>(reinterpret_cast<uint32_t>(r4_9));
        }
        if (less_or_equal14) {
            r1_12 = 1;
        }
        ++r2_11;
    }
    if (!r1_12) {
        return;
    }
    r3_15 = g6fe4;
    r2_16 = reinterpret_cast<void**>(1);
    *reinterpret_cast<void***>(r3_15) = reinterpret_cast<void**>(1);
    r0_17 = g6b98;
    fun_1118(r0_17, 0xffffffff, 1, r3_15);
    r0_20 = fun_1054(r0_17, 0xffffffff, 1, r3_15, v5, r5_18, r6_19);
    r7_21 = reinterpret_cast<void**>(0);
    r5_22 = g6b9c;
    r6_23 = g6ba0;
    r8_24 = r0_20;
    r4_25 = reinterpret_cast<void**>(0);
    while (1) {
        r1_26 = r8_24;
        r0_27 = fun_6928(r4_25, r1_26, r2_16);
        r12_28 = r0_27;
        if (r0_27) {
            r3_29 = g6ba4;
            r2_16 = *r3_29;
            z30 = (reinterpret_cast<unsigned char>(r2_16) & 1 << reinterpret_cast<unsigned char>(r4_25)) == 0;
            if (!z30) {
                r12_28 = reinterpret_cast<void**>(0);
            }
            if (z30) {
                r12_28 = reinterpret_cast<void**>(1);
            }
        }
        if (r12_28 != static_cast<int32_t>(*r5_22)) {
            z31 = static_cast<int32_t>(*r6_23) == 0;
            r2_16 = r12_28;
            r0_27 = r4_25;
            r1_26 = reinterpret_cast<void**>(1);
            *r5_22 = static_cast<signed char>(reinterpret_cast<uint32_t>(r12_28));
            if (!z31) {
                r7_21 = reinterpret_cast<void**>(1);
            }
            if (!z31) {
                r0_27 = fun_6290(r0_27, 1, r2_16);
            }
        }
        ++r4_25;
        ++r5_22;
        ++r6_23;
        if (reinterpret_cast<int1_t>(r4_25 == 12)) 
            break;
    }
    r2_32 = g6ba8;
    if (*reinterpret_cast<void***>(r2_32)) 
        goto addr_6b3c_36;
    if (r7_21) 
        goto addr_6b88_39;
    addr_6b8c_41:
    addr_6b88_39:
    fun_6328(r0_27, r1_26, r2_32);
    goto addr_6b8c_41;
    addr_6b3c_36:
    *reinterpret_cast<void***>(r2_32) = reinterpret_cast<void**>(0);
    r6_33 = g6ba0;
    r5_34 = g6b9c;
    r4_35 = reinterpret_cast<void**>(0);
    while (1) {
        z36 = static_cast<int32_t>(*r6_33) == 0;
        r0_27 = r4_35;
        r1_26 = reinterpret_cast<void**>(1);
        ++r4_35;
        if (!z36) {
            r2_32 = reinterpret_cast<void**>(static_cast<int32_t>(*r5_34));
        }
        if (!z36) {
            r0_27 = fun_6290(r0_27, 1, r2_32);
        }
        ++r6_33;
        ++r5_34;
        if (r4_35 == 12) 
            break;
    }
    goto addr_6b88_39;
}

void** fun_eafc(void** r0, void** r1, void** r2, void** r3, void** a5) {
    void* r12_6;
    void** lr7;
    void* r3_8;
    uint32_t r2_9;
    void** r0_10;

    r12_6 = reinterpret_cast<void*>(0);
    lr7 = r0;
    while (r3_8 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(r12_6) + reinterpret_cast<unsigned char>(lr7)))), r2_9 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(r12_6) + reinterpret_cast<unsigned char>(r1)), r0_10 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r3_8) - r2_9), r12_6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(r12_6) + 1), !r0_10) {
        if (!r3_8) 
            goto label_4;
        if (!r2_9) 
            goto addr_eb2c_6;
    }
    return r0_10;
    label_4:
    return r0_10;
    addr_eb2c_6:
    return r0_10;
}

struct s46 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[3] pad16;
    void** f16;
    signed char[3] pad20;
    void** f20;
    signed char[3] pad24;
    void** f24;
    signed char[3] pad28;
    void** f28;
    signed char[3] pad32;
    void** f32;
    signed char[3] pad36;
    void** f36;
    signed char[3] pad40;
    void** f40;
    signed char[3] pad44;
    void** f44;
    signed char[3] pad48;
    void** f48;
    signed char[3] pad52;
    void** f52;
    signed char[3] pad56;
    void** f56;
    signed char[3] pad60;
    void** f60;
    signed char[3] pad64;
    void** f64;
    signed char[3] pad68;
    void** f68;
    signed char[3] pad72;
    void** f72;
    signed char[3] pad76;
    void** f76;
    signed char[3] pad80;
    void** f80;
    signed char[3] pad84;
    void** f84;
    signed char[3] pad88;
    void** f88;
    signed char[3] pad92;
    void** f92;
    signed char[3] pad96;
    void** f96;
    signed char[3] pad100;
    void** f100;
    signed char[3] pad104;
    void** f104;
    signed char[3] pad108;
    void** f108;
    signed char[3] pad112;
    void** f112;
    signed char[3] pad116;
    void** f116;
    signed char[3] pad120;
    void** f120;
};

struct s47 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

void** g618c = reinterpret_cast<void**>(52);

void** fun_5fe8(void** r0, void** r1, void** r2, void** r3, void** a5) {
    void** r8_6;
    void** r3_7;
    void** v8;
    void** r5_9;
    struct s46* sp10;
    void** r4_11;
    void*** r7_12;
    struct s47* r6_13;
    void** r9_14;
    void** r10_15;
    void** v16;
    void** v17;
    void** v18;
    struct s47* v19;
    void** r0_20;
    void** r3_21;
    int1_t less22;
    void** r3_23;
    int1_t z24;
    int1_t less25;
    int1_t z26;
    void** r0_27;
    void** r0_28;
    uint32_t r3_29;
    void** r0_30;

    r8_6 = r3;
    r3_7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r8_6) + reinterpret_cast<unsigned char>(a5));
    v8 = r3_7;
    __asm__("bic r3, r3, #3");
    r5_9 = reinterpret_cast<void**>(0);
    sp10 = reinterpret_cast<struct s46*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 44 - 28 - reinterpret_cast<uint32_t>(r3_7 + 6));
    r4_11 = r0;
    r7_12 = &sp10->f8;
    r6_13 = reinterpret_cast<struct s47*>(r0 + 0xcc);
    r9_14 = r0 + 4;
    r10_15 = reinterpret_cast<void**>(0);
    v16 = r1;
    v17 = r2;
    v18 = reinterpret_cast<void**>(0);
    while (1) {
        v19 = reinterpret_cast<struct s47*>(r4_11 + 0xcc);
        if (reinterpret_cast<signed char>(v19->f0) >= reinterpret_cast<signed char>(v19->f4)) {
            *reinterpret_cast<void***>(r4_11 + 0xcc) = reinterpret_cast<void**>(0);
            r1 = reinterpret_cast<void**>(1);
            r0_20 = fun_1030(r9_14, 1, 0xc8, *reinterpret_cast<void***>(r4_11));
            *reinterpret_cast<void***>(r4_11 + 0xd0) = r0_20;
        }
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r4_11 + 0xd0)) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(r4_11 + 0xcc))) 
            break;
        if (r5_9) 
            goto addr_6130_7;
        while (1) {
            r3_21 = *reinterpret_cast<void***>(r4_11 + 0xd0);
            less22 = reinterpret_cast<signed char>(r6_13->f0) < reinterpret_cast<signed char>(r3_21);
            if (!less22) {
                r3_21 = reinterpret_cast<void**>(0);
            }
            if (less22) {
                r3_21 = reinterpret_cast<void**>(1);
            }
            if (r5_9) {
                r3_21 = reinterpret_cast<void**>(0);
            }
            if (!r3_21) 
                break;
            r3_23 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r9_14) + reinterpret_cast<unsigned char>(r6_13->f0))));
            z24 = reinterpret_cast<int1_t>(r3_23 == 10);
            if (!z24) {
                z24 = reinterpret_cast<int1_t>(r3_23 == 13);
            }
            if (!z24) {
                less25 = reinterpret_cast<signed char>(r10_15) < reinterpret_cast<signed char>(v8);
                if (!less25) 
                    goto addr_60a4_22;
            } else {
                z26 = v18 == 0;
                if (!z26) {
                    r10_15 = reinterpret_cast<void**>(0);
                }
                if (!z26) {
                    v18 = r10_15;
                }
                if (!z26) {
                    goto addr_60b8_29;
                } else {
                    r1 = r10_15;
                    if (!r10_15) {
                        goto addr_60b8_29;
                    } else {
                        sp10->f0 = r8_6;
                        sp10->f4 = a5;
                        r10_15 = v18;
                        r0_27 = fun_5ef4(r7_12, r1, v16, v17, sp10->f0, sp10->f4);
                        r5_9 = r0_27;
                        goto addr_60b8_29;
                    }
                }
            }
            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r7_12) + reinterpret_cast<unsigned char>(r10_15)) = static_cast<signed char>(reinterpret_cast<uint32_t>(r3_23));
            addr_60a4_22:
            r0_28 = g618c;
            if (less25) {
                ++r10_15;
            }
            if (!less25) {
                r3_23 = reinterpret_cast<void**>(1);
            }
            if (!less25) {
                v18 = r3_23;
            }
            if (!less25) {
                fun_6208(r0_28, r1, v8, r3_23, sp10->f0, sp10->f4, sp10->f8, sp10->f12, sp10->f16, sp10->f20, sp10->f24, sp10->f28, sp10->f32, sp10->f36, sp10->f40, sp10->f44, sp10->f48, sp10->f52, sp10->f56, sp10->f60, sp10->f64, sp10->f68, sp10->f72, sp10->f76, sp10->f80, sp10->f84, sp10->f88, sp10->f92, sp10->f96, sp10->f100, sp10->f104, sp10->f108, sp10->f112, sp10->f116, sp10->f120);
            }
            addr_60b8_29:
            r6_13->f0 = r6_13->f0 + 1;
        }
    }
    r3_29 = 1 - reinterpret_cast<unsigned char>(r5_9);
    if (!__intrinsic()) {
        r3_29 = 0;
    }
    if (!r10_15) {
        r3_29 = 0;
    }
    if (r3_29) {
        if (!v18) {
            sp10->f0 = r8_6;
            sp10->f4 = a5;
            r0_30 = fun_5ef4(r7_12, r10_15, v16, v17, sp10->f0, sp10->f4);
            r5_9 = r0_30;
        }
    }
    addr_617c_51:
    return r5_9;
    addr_6130_7:
    goto addr_617c_51;
}

void** fun_74f4(void** r0, void** r1, void** r2, void** r3, void** a5) {
    void** r12_6;
    void** r10_7;
    void** r7_8;
    void** r9_9;
    void** r6_10;
    void** r8_11;
    void** r2_12;
    int1_t z13;
    void** r4_14;
    void** r5_15;
    int1_t less16;
    void** r0_17;
    void** v18;
    void** v19;
    void** r12_20;
    void** v21;
    void** v22;
    void** r0_23;
    void** lr24;
    void** r5_25;
    void** r4_26;
    void** r0_27;

    r12_6 = reinterpret_cast<void**>(0);
    r10_7 = a5;
    r7_8 = r2;
    r9_9 = r0;
    r6_10 = r1;
    r8_11 = r3;
    r2_12 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<signed char>(r2_12) < reinterpret_cast<signed char>(r6_10)) {
        r3 = reinterpret_cast<void**>(static_cast<uint32_t>(**reinterpret_cast<unsigned char**>(reinterpret_cast<unsigned char>(r7_8) + reinterpret_cast<unsigned char>(r2_12) << 2)));
        ++r2_12;
        if (r3 != 35) 
            continue;
        ++r12_6;
    }
    z13 = r12_6 == 0;
    if (z13) {
        r4_14 = r10_7;
    }
    if (z13) {
        r5_15 = r12_6;
    }
    if (z13) {
        while (1) {
            less16 = reinterpret_cast<signed char>(r5_15) < reinterpret_cast<signed char>(r6_10);
            if (less16) {
                less16 = reinterpret_cast<signed char>(r5_15) < reinterpret_cast<signed char>(r8_11);
            }
            r0_17 = r4_14;
            r4_14 = r4_14 + 0x65;
            if (!less16) 
                break;
            ++r5_15;
            fun_eb30(r0_17, *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r7_8) + reinterpret_cast<unsigned char>(r5_15) << 2), r2_12, r3, v18, v19);
        }
        r12_20 = r5_15;
    } else {
        __asm__("stm sp, {sl, ip}");
        r0_23 = fun_700c(r9_9, r6_10, r7_8, r8_11, v21, v22);
        lr24 = reinterpret_cast<void**>(0);
        r12_20 = r0_23;
        r5_25 = reinterpret_cast<void**>(0);
        r4_26 = reinterpret_cast<void**>(4);
        while (1) {
            if (reinterpret_cast<signed char>(r5_25) >= reinterpret_cast<signed char>(r12_20)) {
                --r4_26;
                if (reinterpret_cast<signed char>(lr24) <= reinterpret_cast<signed char>(0)) 
                    break;
                r0_27 = fun_7444(r9_9, r12_20, r8_11, r10_7, lr24);
                lr24 = reinterpret_cast<void**>(0);
                r12_20 = r0_27;
                r5_25 = reinterpret_cast<void**>(0);
                if (reinterpret_cast<signed char>(r4_26) <= reinterpret_cast<signed char>(0)) 
                    goto label_24;
                continue;
            }
            if (static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r10_7 + reinterpret_cast<unsigned char>(r5_25) * 0x65))) != 35) 
                goto addr_75d4_28;
            ++lr24;
            addr_75d4_28:
            ++r5_25;
        }
    }
    addr_75fc_30:
    return r12_20;
    label_24:
    goto addr_75fc_30;
}

void** g7674 = reinterpret_cast<void**>(0xb0);

void** fun_7608(void** r0, void** r1, void** r2, void** r3) {
    void*** sp5;
    void** r5_6;
    void** r4_7;
    void** r1_8;
    void** v9;
    int32_t r0_10;
    void** v11;
    void** r0_12;

    sp5 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 28 - 24);
    r5_6 = reinterpret_cast<void**>(sp5 + 7);
    r4_7 = reinterpret_cast<void**>(sp5 + 21);
    r1_8 = g7674;
    fun_e7e0(r5_6, r1_8, 14, r3, v9);
    r0_10 = fun_f7d8(r4_7, r1_8, 14);
    if (r0_10) {
        fun_e7e0(r5_6 + 7, r4_7, 2, r3, v11);
    }
    r0_12 = fun_74f4(r5_6, r0, r1, r2, r3);
    return r0_12;
}

void** fun_e084(void** r0, void** r1, void** r2, void** r3, uint32_t a5);

void** fun_7844(void** r0, void** r1, void** r2, void** r3, void** a5) {
    void* sp6;
    void** r8_7;
    void** r10_8;
    void** r5_9;
    void** r7_10;
    void** r9_11;
    void** r0_12;
    int1_t z13;
    void** r6_14;
    void** r3_15;
    int1_t z16;
    void** r4_17;
    int1_t z18;

    sp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 32 - 8);
    r8_7 = r0;
    r10_8 = r1;
    r5_9 = r2;
    r7_10 = r3;
    r9_11 = a5;
    r0_12 = fun_7a54(r0, r1, r2, r3);
    z13 = r0_12 == 0;
    if (!z13) {
        r0_12 = reinterpret_cast<void**>(1);
    }
    if (z13) {
        r6_14 = r0_12;
        while (1) {
            r0_12 = fun_e084(r8_7, r7_10, r10_8, reinterpret_cast<int32_t>(sp6) + 8 + 0xfffffffc, 3);
            r3_15 = r6_14 + 1;
            r6_14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r3_15) & 0xff);
            z16 = r5_9 == r5_9;
            if (!z16) {
                r3_15 = reinterpret_cast<void**>(0);
            }
            if (z16) {
                r3_15 = reinterpret_cast<void**>(1);
            }
            if (reinterpret_cast<signed char>(r0_12) <= reinterpret_cast<signed char>(0)) {
                r3_15 = reinterpret_cast<void**>(0);
            }
            r4_17 = r0_12;
            if (r3_15) 
                goto label_13;
            if (reinterpret_cast<unsigned char>(r6_14) > reinterpret_cast<unsigned char>(r9_11)) 
                goto addr_78c8_15;
        }
    }
    addr_78fc_17:
    return r0_12;
    label_13:
    goto addr_78d0_18;
    addr_78c8_15:
    if (r3_15) {
        addr_78d0_18:
        r0_12 = fun_7b2c(r8_7, r10_8, r5_9, r7_10, 3);
    }
    z18 = r5_9 == r5_9;
    if (!z18) {
        r0_12 = reinterpret_cast<void**>(0);
    }
    if (z18) {
        r0_12 = reinterpret_cast<void**>(1);
    }
    if (reinterpret_cast<signed char>(r4_17) <= reinterpret_cast<signed char>(0)) {
        r0_12 = reinterpret_cast<void**>(0);
        goto addr_78fc_17;
    }
}

void** fun_e348(void** r0, void** r1, void** r2, void** r3);

void** fun_df1c(void** r0, void** r1, void** r2, void** r3);

void** fun_deb0(void** r0, void** r1, void** r2, void** r3, void** a5);

void** fun_1078(void*** r0, void** r1, void** r2, void** r3, void** a5);

void fun_1080(void** r0, void** r1, void** r2, void** r3, void** a5, void** a6, void** a7);

int32_t fun_e23c(void** r0, void** r1, int32_t r2, void** r3, void** a5);

void** fun_e084(void** r0, void** r1, void** r2, void** r3, uint32_t a5) {
    void*** sp6;
    uint32_t r12_7;
    uint32_t v8;
    void** v9;
    void** r10_10;
    void** r9_11;
    void** r6_12;
    void** r0_13;
    int1_t z14;
    void** r11_15;
    void** r0_16;
    void** r0_17;
    void** r2_18;
    void** v19;
    void** r0_20;
    void** r5_21;
    void** v22;
    void** r8_23;
    void** r4_24;
    void*** r7_25;
    int1_t z26;
    void** v27;
    void** v28;
    void** r1_29;
    int32_t v30;
    uint32_t r0_31;
    void** v32;

    sp6 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 36 - 68);
    r12_7 = a5 & 1;
    v8 = r12_7;
    v9 = r1;
    r10_10 = r2;
    r9_11 = r3;
    r6_12 = r0;
    if (r12_7) {
        fun_e4ec(r0);
        r1 = v9;
        r2 = r10_10;
        r3 = r9_11;
        r0_13 = fun_e348(r6_12, r1, r2, r3);
        z14 = r0_13 == 0;
        if (!z14) {
            r11_15 = reinterpret_cast<void**>(1);
        }
        if (!z14) 
            goto label_6;
    }
    r0_16 = fun_df1c(r6_12, r1, r2, r3);
    r11_15 = r0_16;
    if (reinterpret_cast<signed char>(r11_15) < reinterpret_cast<signed char>(0) == __intrinsic()) {
        r0_17 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r6_12 + 12))));
        r2_18 = *reinterpret_cast<void***>(r9_11);
        r3 = reinterpret_cast<void**>(sp6 + 64);
        v19 = reinterpret_cast<void**>(sp6 + 60);
        r0_20 = fun_deb0(r0_17, r10_10, r2_18, r3, v19);
        r5_21 = v22;
        r8_23 = r0_20;
        r4_24 = r0_20;
        r7_25 = sp6 + 20;
        while (z26 = r4_24 == 0, r2 = r5_21, r1 = r6_12, ++r5_21, --r4_24, !z26) {
            r0_16 = fun_1078(r7_25, r1, r2, r3, v19);
            r11_15 = r0_16;
            if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r11_15) < reinterpret_cast<signed char>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(r11_15 == 0)) 
                goto label_13;
            r7_25 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(r7_25) + reinterpret_cast<unsigned char>(r11_15));
        }
        goto addr_e13c_15;
    }
    addr_e18c_16:
    if (!(a5 & 2)) {
        fun_1080(r0_16, r1, r2, r3, v19, v27, v28);
    }
    addr_e198_18:
    return r11_15;
    addr_e13c_15:
    if (v8) {
        r1_29 = reinterpret_cast<void**>(sp6 + 20);
        fun_e23c(r6_12, r1_29, v30, r8_23, v19);
        fun_e760(r6_12, r1_29, v30, r8_23, v19);
    }
    r0_31 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r6_12 + 12));
    r3 = *reinterpret_cast<void***>(r9_11);
    v19 = reinterpret_cast<void**>(sp6 + 20);
    r1 = v9;
    r2 = r10_10;
    v27 = v32;
    v28 = r8_23;
    r0_16 = fun_e2f0(r0_31, r1, r2, r3, v19, v27, v28);
    goto addr_e18c_16;
    label_13:
    goto addr_e18c_16;
    label_6:
    goto addr_e198_18;
}

void** fun_e1a4(void** r0, void** r1, void** r2, void* r3, void** a5);

void** fun_7904(void** r0, void** r1, void** r2) {
    void** r0_4;

    r0_4 = fun_e1a4(r0, 20, r1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 8 + 4, r2);
    return r0_4;
}

uint32_t fun_e238(void** r0, void* r1) {
}

void** fun_7dbc(void** r0, void** r1, void** r2, void** r3) {
    void*** sp5;
    void** r5_6;
    void** r4_7;
    void** r1_8;
    void** v9;
    int32_t r0_10;
    void** v11;
    void** r0_12;

    sp5 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 28 - 24);
    r5_6 = reinterpret_cast<void**>(sp5 + 7);
    r4_7 = reinterpret_cast<void**>(sp5 + 21);
    r1_8 = g7674;
    fun_e7e0(r5_6, r1_8, 14, r0, v9);
    r0_10 = fun_f7d8(r4_7, r1_8, 14);
    if (r0_10) {
        fun_e7e0(r5_6 + 7, r4_7, 2, r0, v11);
    }
    r0_12 = fun_74f4(r5_6, r2, r3, r1, r0);
    return r0_12;
}

void** fun_10344(uint32_t r0, void** r1, void** r2) {
    void** r3_4;
    void*** sp5;
    void** r2_6;
    int1_t z7;
    void** v8;
    void** r11_9;
    void** r4_10;
    void** r0_11;
    void** r9_12;
    void*** r8_13;
    uint32_t r5_14;
    uint32_t r7_15;
    void** r1_16;
    void** r0_17;
    void** r0_18;
    void** r0_19;
    int1_t less_or_equal20;
    void** r6_21;
    int1_t less_or_equal22;
    void** r0_23;
    void*** r3_24;
    void** r5_25;
    void** v26;
    void** v27;
    int1_t z28;
    int32_t v29;
    void** r0_30;
    void** r0_31;
    void** r3_32;
    void** r0_33;
    void** r0_34;
    void** r0_35;
    void** r0_36;
    int1_t less_or_equal37;
    int32_t r0_38;
    int1_t z39;

    r3_4 = r1;
    sp5 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 36 - 20);
    r2_6 = reinterpret_cast<void**>(r0 & 0xff & 0xff);
    z7 = r2_6 == 0;
    v8 = r2_6;
    r11_9 = r3_4;
    if (z7) {
        r4_10 = reinterpret_cast<void**>(0xffffffff);
    }
    if (!z7) {
        r0_11 = g102a8;
        r9_12 = *reinterpret_cast<void***>(r3_4);
        fun_1118(r0_11, 0xffffffff, r2_6, r3_4);
        r8_13 = g102ac;
        r5_14 = 0;
        r7_15 = 0xffffffff;
        while (1) {
            r1_16 = reinterpret_cast<void**>(0xffffffff);
            r0_17 = g102b0;
            fun_1118(r0_17, 0xffffffff, r2_6, r3_4);
            r4_10 = *r8_13;
            r8_13 = r8_13 + 56;
            r0_18 = g102b0;
            fun_1130(r0_18, 0xffffffff, r2_6, r3_4);
            r0_19 = fun_f9f0(r4_10, 0xffffffff, r2_6, r3_4, v8);
            if (!r0_19) {
                r7_15 = r5_14;
            }
            r3_4 = reinterpret_cast<void**>(r7_15 >> 31);
            ++r5_14;
            less_or_equal20 = reinterpret_cast<int32_t>(r5_14) <= reinterpret_cast<int32_t>(5);
            if (!less_or_equal20) {
                r6_21 = reinterpret_cast<void**>(0);
            }
            if (less_or_equal20) {
                r6_21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r3_4) & 1);
            }
            if (!r6_21) 
                break;
        }
        less_or_equal22 = reinterpret_cast<int32_t>(r7_15) <= -1;
        if (less_or_equal22) 
            goto label_16; else 
            goto addr_10134_17;
    }
    addr_1029c_18:
    return r4_10;
    label_16:
    r4_10 = reinterpret_cast<void**>(0xfffffffd);
    addr_10134_17:
    if (!less_or_equal22) {
        r0_23 = g102b0;
        fun_1118(r0_23, 0xffffffff, r2_6, r3_4);
        r3_24 = g102ac;
        r5_25 = reinterpret_cast<void**>(r3_24 + r7_15 * 56);
        r4_10 = reinterpret_cast<void**>(sp5 + 8);
        fun_ffa0(r4_10, r9_12, r6_21);
        r1_16 = v26;
        r2_6 = v27;
        r3_4 = r5_25 + 12;
        z28 = v29 == 0;
        __asm__("stm r3, {r0, r1, r2}");
        if (z28) {
            r4_10 = r6_21;
        }
        if (z28) 
            goto label_23; else 
            goto addr_1017c_24;
    }
    addr_10248_25:
    r0_30 = g102a8;
    fun_1130(r0_30, r1_16, r2_6, r3_4);
    goto addr_1029c_18;
    label_23:
    addr_10240_26:
    r0_31 = g102b0;
    fun_1130(r0_31, r1_16, r2_6, r3_4);
    goto addr_10248_25;
    addr_1017c_24:
    *reinterpret_cast<void***>(r5_25 + 8) = r6_21;
    *reinterpret_cast<void***>(r5_25 + 4) = reinterpret_cast<void**>(0);
    if (1) {
        r4_10 = r11_9;
    }
    if (1) {
        r6_21 = reinterpret_cast<void**>(0);
    }
    if (!1) 
        goto addr_10194_31;
    while (r2_6 = v8, r3_4 = r2_6 - 1, r6_21 != r3_4) {
        r1_16 = *reinterpret_cast<void***>(r4_10 + 4);
        r2_6 = g102b4;
        r7_15 = 0;
        while (*reinterpret_cast<void***>(r2_6)) {
            ++r7_15;
            r2_6 = r2_6 + 30;
            if (r7_15 == 20) 
                goto label_38;
        }
        r4_10 = r4_10 + 4;
        if (reinterpret_cast<int32_t>(r7_15) <= -1) 
            goto label_42;
        r3_32 = g102b4;
        fun_eb30(r7_15 * reinterpret_cast<unsigned char>(30) + reinterpret_cast<unsigned char>(r3_32), r1_16, 30, r3_32, v8, 0xff);
        *reinterpret_cast<void***>(r5_25 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r5_25 + 8)) | 1 << r7_15);
        ++r6_21;
    }
    addr_10254_45:
    r0_33 = g102b0;
    fun_1130(r0_33, r1_16, r2_6, r3_4);
    r2_6 = reinterpret_cast<void**>(0xff);
    r3_4 = r5_25 + 24;
    r0_34 = g102b8;
    r0_35 = fun_fae8(r0_34, r5_25, 0xff, r3_4);
    r1_16 = reinterpret_cast<void**>(0xffffffff);
    r4_10 = r0_35;
    r0_36 = g102b0;
    fun_1118(r0_36, 0xffffffff, 0xff, r3_4);
    less_or_equal37 = reinterpret_cast<signed char>(r4_10) <= reinterpret_cast<signed char>(0);
    if (!less_or_equal37) {
        *reinterpret_cast<void***>(r5_25) = r4_10;
    }
    if (!less_or_equal37) {
        goto addr_10240_26;
    }
    addr_10208_50:
    r0_38 = 0;
    while (1) {
        r3_4 = *reinterpret_cast<void***>(r5_25 + 8);
        z39 = (reinterpret_cast<unsigned char>(r3_4) & 1) == 0;
        if (!z39) {
            r3_4 = reinterpret_cast<void**>(30);
        }
        if (!z39) {
            r1_16 = reinterpret_cast<void**>(r7_15 * reinterpret_cast<unsigned char>(r3_4));
        }
        if (!z39) {
            r3_4 = g102b4;
        }
        if (!z39) {
            r2_6 = reinterpret_cast<void**>(0);
        }
        ++r0_38;
        if (!z39) {
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r1_16) + reinterpret_cast<unsigned char>(r3_4)) = static_cast<signed char>(reinterpret_cast<uint32_t>(r2_6));
        }
        if (r0_38 == 20) 
            break;
    }
    fun_fe70(r5_25 + 12, r1_16, r2_6, r3_4);
    goto addr_10240_26;
    label_38:
    r7_15 = 0xffffffff;
    addr_10294_65:
    r4_10 = reinterpret_cast<void**>(0xfffffffe);
    goto addr_10208_50;
    label_42:
    goto addr_10294_65;
    addr_10194_31:
    goto addr_10254_45;
}

struct s48 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

void** g8060 = reinterpret_cast<void**>(0xf8);

void** g8064 = reinterpret_cast<void**>(28);

void** fun_7de0(void** r0, void** r1, void** r2, void** r3, void** a5, int32_t a6) {
    int1_t z7;
    void** r6_8;
    uint32_t r12_9;
    void** sp10;
    void** r8_11;
    void*** sp12;
    void** v13;
    void** v14;
    void*** v15;
    void** sp16;
    void** r1_17;
    void** r0_18;
    void** r7_19;
    void** r9_20;
    void** v21;
    void** v22;
    void** v23;
    void** r2_24;
    void** r3_25;
    int1_t less26;
    void** r4_27;
    void* r5_28;
    void** r0_29;
    void** r10_30;
    int1_t z31;
    struct s48* r2_32;
    void** v33;
    void** r0_34;
    void*** r2_35;
    void** r1_36;
    void*** r3_37;
    int1_t less38;
    void** r2_39;
    void** r5_40;
    void* v41;
    void** v42;
    int1_t less43;
    void** r3_44;
    void** r0_45;
    void** r3_46;
    void** r0_47;
    void** r0_48;
    void** r0_49;
    int1_t z50;
    int1_t less51;

    z7 = a5 == 0;
    if (!z7) {
        r6_8 = reinterpret_cast<void**>(21);
    }
    if (z7) {
        r6_8 = reinterpret_cast<void**>(40);
    }
    r12_9 = reinterpret_cast<unsigned char>(r6_8) * 0x65 + 6 >> 2 << 2;
    sp10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 44 - 40 - r12_9);
    r8_11 = sp10;
    sp12 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(sp10) - r12_9);
    v13 = r2;
    v14 = r3;
    v15 = sp12;
    sp16 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(sp12) - ((reinterpret_cast<unsigned char>(r6_8) << 2) + 6 & 0x1fc));
    r1_17 = r6_8;
    r0_18 = fun_7dbc(r8_11, r1_17, r1, r0);
    r7_19 = reinterpret_cast<void**>(0);
    r9_20 = sp16;
    v21 = r0_18;
    v22 = reinterpret_cast<void**>(0);
    v23 = reinterpret_cast<void**>(0);
    while (1) {
        r2_24 = v23;
        r3_25 = v21;
        less26 = reinterpret_cast<signed char>(r7_19) < reinterpret_cast<signed char>(r6_8);
        if (less26) {
            less26 = reinterpret_cast<signed char>(r2_24) < reinterpret_cast<signed char>(r3_25);
        }
        if (!less26) {
            r4_27 = reinterpret_cast<void**>(0);
        }
        if (less26) {
            r4_27 = reinterpret_cast<void**>(1);
        }
        if (less26) {
            r4_27 = reinterpret_cast<void**>(0);
        }
        if (!less26) 
            break;
        while (r5_28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r4_27) << 3), reinterpret_cast<signed char>(r4_27) < reinterpret_cast<signed char>(v13)) {
            r0_29 = fun_eafc(r8_11, *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(v14) + reinterpret_cast<unsigned char>(r4_27) << 3), r2_24, r3_25, *reinterpret_cast<void***>(sp16));
            if (!r0_29) 
                goto label_19;
            ++r4_27;
        }
        goto addr_7ea4_22;
        label_19:
        if (!reinterpret_cast<int1_t>(r4_27 == -1)) {
            r10_30 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(v14) + reinterpret_cast<uint32_t>(r5_28));
            z31 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r10_30))) == 0x7e;
            r2_32 = reinterpret_cast<struct s48*>(reinterpret_cast<unsigned char>(v14) + reinterpret_cast<uint32_t>(r5_28));
            v33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r6_8) - reinterpret_cast<unsigned char>(v22));
            if (z31) 
                goto addr_7edc_26;
        } else {
            addr_7ea4_22:
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r9_20) + reinterpret_cast<unsigned char>(r7_19) << 2) = r8_11;
            ++r7_19;
            goto addr_7fc0_27;
        }
        r0_34 = fun_7dbc(v15 + reinterpret_cast<unsigned char>(v22) * 0x65, v33, 1, &r2_32->f4);
        addr_7f78_30:
        r2_35 = v15 + reinterpret_cast<unsigned char>(v22) * 0x65;
        r1_36 = reinterpret_cast<void**>(0);
        r3_37 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r9_20) + (reinterpret_cast<unsigned char>(r7_19) << 2));
        while (1) {
            less38 = reinterpret_cast<signed char>(r7_19) < reinterpret_cast<signed char>(r6_8);
            if (less38) {
                less38 = reinterpret_cast<signed char>(r1_36) < reinterpret_cast<signed char>(r0_34);
            }
            r3_37 = r3_37 + 4;
            ++r1_36;
            if (!less38) 
                break;
            *reinterpret_cast<void****>(r3_37 + 0xfffffffc) = r2_35;
            ++r7_19;
            r2_35 = r2_35 + 0x65;
        }
        v22 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v22) + reinterpret_cast<unsigned char>(r0_34));
        addr_7fc0_27:
        r1_17 = v23 + 1;
        v23 = r1_17;
        r8_11 = r8_11 + 0x65;
        continue;
        addr_7edc_26:
        r2_39 = *reinterpret_cast<void***>(&r2_32->f4);
        r4_27 = v14;
        r5_40 = reinterpret_cast<void**>(0);
        v41 = reinterpret_cast<void*>(0x65 * reinterpret_cast<unsigned char>(v22));
        v42 = r2_39;
        while (less43 = reinterpret_cast<signed char>(r5_40) < reinterpret_cast<signed char>(v13), ++r5_40, less43) {
            r3_44 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(r4_27)))));
            if (reinterpret_cast<int1_t>(r3_44 == 35)) {
                r0_45 = fun_eafc(r10_30, *reinterpret_cast<void***>(r4_27) + 1, r2_39, r3_44, *reinterpret_cast<void***>(sp16));
                if (!r0_45) 
                    goto label_42;
            }
            r4_27 = r4_27 + 8;
        }
        r3_46 = reinterpret_cast<void**>(0);
        addr_7f3c_45:
        r0_34 = fun_7678(v42, v33, reinterpret_cast<uint32_t>(v15) + reinterpret_cast<uint32_t>(v41), r3_46);
        goto addr_7f78_30;
        label_42:
        r3_46 = *reinterpret_cast<void***>(r4_27 + 4);
        goto addr_7f3c_45;
    }
    r0_47 = g8060;
    fun_6208(r0_47, r1_17, r2_24, r3_25, *reinterpret_cast<void***>(sp16), *reinterpret_cast<void***>(sp16 + 4), *reinterpret_cast<void***>(sp16 + 8), *reinterpret_cast<void***>(sp16 + 12), *reinterpret_cast<void***>(sp16 + 16), *reinterpret_cast<void***>(sp16 + 20), *reinterpret_cast<void***>(sp16 + 24), *reinterpret_cast<void***>(sp16 + 28), *reinterpret_cast<void***>(sp16 + 32), *reinterpret_cast<void***>(sp16 + 36), *reinterpret_cast<void***>(sp16 + 40), *reinterpret_cast<void***>(sp16 + 44), *reinterpret_cast<void***>(sp16 + 48), *reinterpret_cast<void***>(sp16 + 52), *reinterpret_cast<void***>(sp16 + 56), *reinterpret_cast<void***>(sp16 + 60), *reinterpret_cast<void***>(sp16 + 64), *reinterpret_cast<void***>(sp16 + 68), *reinterpret_cast<void***>(sp16 + 72), *reinterpret_cast<void***>(sp16 + 76), *reinterpret_cast<void***>(sp16 + 80), *reinterpret_cast<void***>(sp16 + 84), *reinterpret_cast<void***>(sp16 + 88), *reinterpret_cast<void***>(sp16 + 92), *reinterpret_cast<void***>(sp16 + 96), *reinterpret_cast<void***>(sp16 + 100), *reinterpret_cast<void***>(sp16 + 0x68), *reinterpret_cast<void***>(sp16 + 0x6c), *reinterpret_cast<void***>(sp16 + 0x70), *reinterpret_cast<void***>(sp16 + 0x74), *reinterpret_cast<void***>(sp16 + 0x78));
    while (reinterpret_cast<signed char>(r4_27) < reinterpret_cast<signed char>(r7_19)) {
        fun_6208(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r9_20) + reinterpret_cast<unsigned char>(r4_27) << 2), r1_17, r2_24, r3_25, *reinterpret_cast<void***>(sp16), *reinterpret_cast<void***>(sp16 + 4), *reinterpret_cast<void***>(sp16 + 8), *reinterpret_cast<void***>(sp16 + 12), *reinterpret_cast<void***>(sp16 + 16), *reinterpret_cast<void***>(sp16 + 20), *reinterpret_cast<void***>(sp16 + 24), *reinterpret_cast<void***>(sp16 + 28), *reinterpret_cast<void***>(sp16 + 32), *reinterpret_cast<void***>(sp16 + 36), *reinterpret_cast<void***>(sp16 + 40), *reinterpret_cast<void***>(sp16 + 44), *reinterpret_cast<void***>(sp16 + 48), *reinterpret_cast<void***>(sp16 + 52), *reinterpret_cast<void***>(sp16 + 56), *reinterpret_cast<void***>(sp16 + 60), *reinterpret_cast<void***>(sp16 + 64), *reinterpret_cast<void***>(sp16 + 68), *reinterpret_cast<void***>(sp16 + 72), *reinterpret_cast<void***>(sp16 + 76), *reinterpret_cast<void***>(sp16 + 80), *reinterpret_cast<void***>(sp16 + 84), *reinterpret_cast<void***>(sp16 + 88), *reinterpret_cast<void***>(sp16 + 92), *reinterpret_cast<void***>(sp16 + 96), *reinterpret_cast<void***>(sp16 + 100), *reinterpret_cast<void***>(sp16 + 0x68), *reinterpret_cast<void***>(sp16 + 0x6c), *reinterpret_cast<void***>(sp16 + 0x70), *reinterpret_cast<void***>(sp16 + 0x74), *reinterpret_cast<void***>(sp16 + 0x78));
        ++r4_27;
    }
    r0_48 = g8064;
    r0_49 = fun_6208(r0_48, r1_17, r2_24, r3_25, *reinterpret_cast<void***>(sp16), *reinterpret_cast<void***>(sp16 + 4), *reinterpret_cast<void***>(sp16 + 8), *reinterpret_cast<void***>(sp16 + 12), *reinterpret_cast<void***>(sp16 + 16), *reinterpret_cast<void***>(sp16 + 20), *reinterpret_cast<void***>(sp16 + 24), *reinterpret_cast<void***>(sp16 + 28), *reinterpret_cast<void***>(sp16 + 32), *reinterpret_cast<void***>(sp16 + 36), *reinterpret_cast<void***>(sp16 + 40), *reinterpret_cast<void***>(sp16 + 44), *reinterpret_cast<void***>(sp16 + 48), *reinterpret_cast<void***>(sp16 + 52), *reinterpret_cast<void***>(sp16 + 56), *reinterpret_cast<void***>(sp16 + 60), *reinterpret_cast<void***>(sp16 + 64), *reinterpret_cast<void***>(sp16 + 68), *reinterpret_cast<void***>(sp16 + 72), *reinterpret_cast<void***>(sp16 + 76), *reinterpret_cast<void***>(sp16 + 80), *reinterpret_cast<void***>(sp16 + 84), *reinterpret_cast<void***>(sp16 + 88), *reinterpret_cast<void***>(sp16 + 92), *reinterpret_cast<void***>(sp16 + 96), *reinterpret_cast<void***>(sp16 + 100), *reinterpret_cast<void***>(sp16 + 0x68), *reinterpret_cast<void***>(sp16 + 0x6c), *reinterpret_cast<void***>(sp16 + 0x70), *reinterpret_cast<void***>(sp16 + 0x74), *reinterpret_cast<void***>(sp16 + 0x78));
    z50 = a5 == 0;
    if (z50) {
        r4_27 = a5;
    }
    if (z50) {
        r0_49 = reinterpret_cast<void**>(1);
    }
    if (z50) {
        while (1) {
            less51 = reinterpret_cast<signed char>(r0_49) < reinterpret_cast<signed char>(0);
            if (r0_49) {
                less51 = reinterpret_cast<signed char>(r4_27) < reinterpret_cast<signed char>(r7_19);
            }
            if (!less51) 
                break;
            r0_49 = fun_10464(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r9_20) + reinterpret_cast<unsigned char>(r4_27) << 2), r1_17, r2_24);
            ++r4_27;
        }
    } else {
        r0_49 = fun_10344(reinterpret_cast<unsigned char>(r7_19) & 0xff, r9_20, r2_24);
    }
    return r0_49;
}

void** fun_80e4(void** r0, void** r1);

void** fun_814c(int32_t r0) {
    void** r0_2;

    r0_2 = fun_80e4(1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4);
    return r0_2;
}

void** fun_fdac(void** r0, void** r1, void** r2) {
}

void** fun_fdb4(void** r0, void** r1, void** r2) {
    fun_fdac(r0, r1, r2);
}

void** fun_f214(void** r0, void** r1, void** r2, void** r3) {
    void** sp5;
    void** r0_6;

    sp5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 12 - 24);
    fun_f1dc(sp5, r1, r2);
    fun_ef0c(sp5, r0, 0, r3);
    r0_6 = fun_f1d8(sp5, r0, 0);
    return r0_6;
}

void** fun_6214(void** r0, void** r1, void** r2) {
    return r0;
}

void** g622c = reinterpret_cast<void**>(16);

struct s49 {
    signed char[8] pad8;
    void** f8;
    signed char[3] pad12;
    void** f12;
    signed char[7] pad20;
    unsigned char* f20;
};

struct s49* g6230 = reinterpret_cast<struct s49*>(0x40001828);

void** fun_10c64(void** r0, void** r1, void** r2, void** r3);

void** fun_6220() {
    void** r0_1;
    struct s49* r1_2;
    void** r4_3;
    unsigned char* r5_4;
    struct s49* r6_5;
    void** r7_6;
    void** r3_7;
    void** r2_8;
    int1_t below_or_equal9;
    void** r1_10;

    r0_1 = g622c;
    r1_2 = g6230;
    r4_3 = r1_2->f8;
    r5_4 = r1_2->f20;
    r6_5 = r1_2;
    r7_6 = r0_1;
    while (r3_7 = reinterpret_cast<void**>(static_cast<uint32_t>(*r5_4)), r2_8 = r4_3 + 5, ++r5_4, !!r3_7) {
        below_or_equal9 = reinterpret_cast<unsigned char>(r2_8) <= reinterpret_cast<unsigned char>(17);
        r1_10 = r4_3;
        r0_1 = r7_6;
        r4_3 = r4_3 - 6;
        if (below_or_equal9) {
            r2_8 = r6_5->f12;
        }
        if (!below_or_equal9) 
            continue;
        r0_1 = fun_10c64(r0_1, r1_10, r2_8, r3_7);
    }
    return r0_1;
}

void** fun_8a48(void** r0, void** r1, void** r2) {
    void** r0_4;
    void** v5;
    void** r4_6;
    void** v7;
    void** r5_8;
    void** v9;
    void** r6_10;
    unsigned char* r3_11;
    void** r4_12;
    void** r8_13;
    void*** r7_14;
    void** r4_15;
    void** r5_16;
    unsigned char* r3_17;
    void** r3_18;
    void** r0_19;
    void** r0_20;
    uint32_t* r3_21;
    int1_t below_or_equal22;
    void* r3_23;

    r0_4 = reinterpret_cast<void**>(0x7000);
    v5 = r4_6;
    v7 = r5_8;
    v9 = r6_10;
    r3_11 = g6e78;
    r4_12 = reinterpret_cast<void**>(static_cast<uint32_t>(*r3_11));
    if (!r4_12) {
        fun_6a64(0x7000, r1);
        r0_4 = r4_12;
        fun_f290(r0_4, r1, r2);
    }
    r8_13 = reinterpret_cast<void**>(0xffffffff);
    r7_14 = g6e7c;
    r4_15 = reinterpret_cast<void**>(0);
    r5_16 = reinterpret_cast<void**>(0xffffffff);
    while (1) {
        if (!1) {
            r3_17 = g6e80;
            r3_18 = reinterpret_cast<void**>(static_cast<uint32_t>(*r3_17));
            if (!r3_18) {
                r0_19 = fun_1054(r0_4, r1, r2, r3_18, v5, v7, v9);
                r0_20 = fun_6928(r4_15, r0_19, r2);
                r1 = r0_20;
                if (!r1) {
                    fun_69d0(r4_15, r1, r2);
                }
            }
            r0_4 = fun_6d18(r4_15, r1, r2, r3_18, v5);
            r3_21 = g6e84;
            if (1 & *r3_21) {
                below_or_equal22 = reinterpret_cast<unsigned char>(r8_13) <= reinterpret_cast<unsigned char>(*r7_14);
                if (!below_or_equal22) {
                    r8_13 = *r7_14;
                }
                if (!below_or_equal22) {
                    r5_16 = r4_15;
                }
            }
        }
        ++r4_15;
        r7_14 = r7_14 + 4;
        if (reinterpret_cast<int1_t>(r4_15 == 15)) 
            break;
    }
    if (reinterpret_cast<signed char>(r5_16) > reinterpret_cast<signed char>(-1)) {
        r3_23 = g6e88;
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(r3_23) + reinterpret_cast<unsigned char>(r5_16) << 2) = reinterpret_cast<void**>(1);
        fun_69d0(reinterpret_cast<unsigned char>(r5_16) & 0xff, 0, 1);
    }
    return r5_16;
}

void** fun_8a50() {
    void** r2_1;
    void** r2_2;
    void*** r5_3;
    void*** r12_4;
    void** r3_5;
    void** r2_6;
    void** r4_7;
    void** r5_8;
    void** r0_9;
    void** r3_10;
    void** r1_11;
    void** r0_12;
    int1_t less13;

    fun_69d0(12, 0, r2_1);
    fun_69d0(13, 0, r2_2);
    r5_3 = g6a38;
    r12_4 = g6a3c;
    if (!1) {
        r3_5 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*r12_4)));
        *r12_4 = r3_5;
        if (0) {
            return 60;
        } else {
            r0_9 = fun_1054(60, 0, r2_6, r3_5, r4_7, r5_8, __return_address());
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(r5_3) + reinterpret_cast<unsigned char>(14) << 2) = r0_9;
            return r0_9;
        }
    }
    r3_10 = *r12_4;
    __asm__("bic r3, r3, r2, lsl r4");
    r1_11 = *r5_3;
    *r12_4 = r3_10;
    r0_12 = fun_10f6c(60, r1_11, 1);
    less13 = reinterpret_cast<signed char>(14) < reinterpret_cast<signed char>(r0_12);
    if (!less13) 
        goto addr_6a30_8;
    r3_10 = reinterpret_cast<void**>(0);
    addr_6a30_8:
    if (less13) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(r5_3) + reinterpret_cast<unsigned char>(14) << 2) = r3_10;
    }
    return r0_12;
}

void** g9d54 = reinterpret_cast<void**>(68);

void** g9d58 = reinterpret_cast<void**>(72);

void*** g9d5c = reinterpret_cast<void***>(0x4000070c);

void** g9d60 = reinterpret_cast<void**>(0x40000708);

void** g9d64 = reinterpret_cast<void**>(72);

void** g9d68 = reinterpret_cast<void**>(16);

void** g9d6c = reinterpret_cast<void**>(28);

void** g9d70 = reinterpret_cast<void**>(36);

void** fun_9bd4(void** r0, void** r1) {
    void* sp3;
    void** r3_4;
    void** r5_5;
    void** r1_6;
    void** r4_7;
    void** r6_8;
    void** v9;
    void** r2_10;
    void** v11;
    void** v12;
    void** r0_13;
    void** r0_14;
    void** r4_15;
    void** r1_16;
    void** r0_17;
    int1_t z18;
    void*** r3_19;
    int1_t less20;
    void** r8_21;
    void** r7_22;
    void** r0_23;
    void** r4_24;
    void** r1_25;
    void** r0_26;
    int1_t z27;
    void** r1_28;
    int1_t z29;
    void** r1_30;
    void** r0_31;
    void** v32;
    void** r0_33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** r0_65;

    sp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 24 - 0x12c);
    r3_4 = g9d54;
    r5_5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp3) + 0x114 + 3);
    r1_6 = g9d58;
    r4_7 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp3) + 0x128 + 1);
    r6_8 = *reinterpret_cast<void***>(r3_4);
    fun_e7e0(r5_5, r1_6, 18, r3_4, v9);
    fun_f7d8(r4_7, r1_6, 18);
    r2_10 = reinterpret_cast<void**>(2);
    fun_e7e0(r5_5 + 6, r4_7, 2, r3_4, v11);
    r0_13 = fun_eafc(r4_7, r6_8, 2, r3_4, v12);
    if (r0_13) {
        r0_14 = fun_6198(r5_5, reinterpret_cast<int32_t>(sp3) + 4, 2);
        if (r0_14) {
            while (1) {
                r4_15 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp3) + 4);
                r1_16 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp3) + 0x100 + 3);
                r2_10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp3) + 0xdb);
                r3_4 = reinterpret_cast<void**>(20);
                r0_17 = fun_5fe8(r4_15, r1_16, r2_10, 20, 40);
                z18 = r0_17 == 0;
                if (!z18) {
                    r4_15 = reinterpret_cast<void**>(0);
                }
                if (!z18) {
                    r5_5 = r4_15;
                }
                if (z18) 
                    break;
                do {
                    r3_19 = g9d5c;
                    less20 = reinterpret_cast<signed char>(r5_5) < reinterpret_cast<signed char>(*r3_19);
                    r8_21 = g9d60;
                    r7_22 = r4_15;
                    ++r5_5;
                    if (!less20) 
                        break;
                    r0_23 = fun_eafc(reinterpret_cast<int32_t>(sp3) + 0x100 + 3, reinterpret_cast<unsigned char>(r4_15) + reinterpret_cast<uint32_t>(*r8_21) + 4, r2_10, *r3_19, 40);
                    r4_15 = r4_15 + 76;
                } while (r0_23);
                goto label_14;
                addr_9ca0_15:
                r4_24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp3) + 0x100 + 3);
                r1_25 = g9d64;
                r0_26 = fun_eafc(r4_24, r1_25, r2_10, *r3_19, 40);
                z27 = r0_26 == 0;
                if (z27) {
                    r0_26 = r6_8 + 3;
                }
                if (!z27) {
                    r1_28 = g9d68;
                    r0_26 = fun_eafc(r4_24, r1_28, r2_10, *r3_19, 40);
                    z29 = r0_26 == 0;
                    if (z29) {
                        r0_26 = r6_8 + 43;
                    }
                    if (!z29) {
                        r1_30 = g9d6c;
                        r0_31 = fun_eafc(r4_24, r1_30, r2_10, *r3_19, 40);
                        if (r0_31) {
                            continue;
                        } else {
                            r0_26 = r6_8 + 83;
                        }
                    }
                }
                fun_eb30(r0_26, reinterpret_cast<int32_t>(sp3) + 0xdb, r2_10, *r3_19, 40, v32);
                continue;
                label_14:
                fun_9a64(reinterpret_cast<unsigned char>(r7_22) + reinterpret_cast<uint32_t>(*r8_21) + 12, reinterpret_cast<int32_t>(sp3) + 0xdb, r2_10, *r3_19, 40);
                goto addr_9ca0_15;
            }
            fun_6190(r4_15, r1_16, r2_10, 20, 40);
            r0_33 = g9d70;
            fun_6208(r0_33, r1_16, r2_10, 20, 40, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63);
        }
    }
    r0_65 = fun_eb30(r6_8, reinterpret_cast<int32_t>(sp3) + 0x128 + 1, r2_10, r3_4, 40, v64);
    return r0_65;
}

void** g9784 = reinterpret_cast<void**>(0xac);

void fun_1024(void** r0, void** r1, void** r2);

void** fun_9714(void** r0, void** r1, void** r2) {
    void** r4_4;
    int1_t z5;
    void* sp6;
    void** r3_7;
    void** r5_8;
    void** r1_9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;

    r4_4 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r0 + 40))));
    z5 = r4_4 == 0;
    if (z5) {
    }
    sp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 12 - 28);
    if (z5) {
        r0 = reinterpret_cast<void**>(0xffffffff);
    }
    if (z5) {
        *reinterpret_cast<void***>(r2) = reinterpret_cast<void**>(2);
    }
    if (!z5) {
        r3_7 = reinterpret_cast<void**>(0);
        while (r5_8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp6) + 2), *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r3_7) + reinterpret_cast<unsigned char>(r5_8)) = static_cast<signed char>(reinterpret_cast<uint32_t>(r4_4)), r4_4 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(r0 + 41))), ++r3_7, ++r0, !!r4_4) {
        }
        r1_9 = g9784;
        fun_eb30(reinterpret_cast<unsigned char>(r5_8) + reinterpret_cast<unsigned char>(r3_7), r1_9, r2, r3_7, v10, v11);
        fun_eb7c(0x3e8, r1_9, r2, r3_7, v12, v13, v14);
        fun_1024(r5_8, r4_4, r4_4);
        r0 = r4_4;
    }
    return r0;
}

int32_t* g9aac = reinterpret_cast<int32_t*>(0x40000714);

int32_t* g9ab0 = reinterpret_cast<int32_t*>(0x40000710);

void fun_9a94(int32_t r0) {
    int32_t* r3_2;
    int32_t* r3_3;

    r3_2 = g9aac;
    *r3_2 = r0;
    r3_3 = g9ab0;
    *r3_3 = 1;
    return;
}

void** fun_9bb8(void** r0, void** r1, void** r2, void** r3, void** a5) {
    void*** r3_6;
    void** r3_7;
    void** r1_8;
    void** sp9;
    void** r0_10;
    void** r10_11;
    void** r8_12;
    void** r7_13;
    void** r9_14;
    void** r6_15;
    void** r5_16;
    void** r4_17;
    void** r0_18;
    void** r1_19;
    void** r2_20;
    void** r0_21;
    void** r0_22;
    void** r0_23;
    void** r3_24;
    void** r0_25;

    fun_6240(1, 0xffffffff, r0);
    fun_6388(1, 0xffffffff, r0, r3);
    fun_6234();
    fun_6220();
    r3_6 = g635c;
    r3_7 = *r3_6;
    r1_8 = g6360;
    if (!r3_7) {
        sp9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 4 + 4 - 12 - 24);
        fun_f1dc(sp9, r1_8, 0);
        fun_ef0c(sp9, r1_8, 0, r3_7);
        r0_10 = fun_f1d8(sp9, r1_8, 0);
        return r0_10;
    }
    r10_11 = r3_7;
    r8_12 = r1_8;
    r7_13 = reinterpret_cast<void**>(0);
    r9_14 = reinterpret_cast<void**>(11);
    do {
        r6_15 = reinterpret_cast<void**>(11 - reinterpret_cast<unsigned char>(r9_14));
        r5_16 = reinterpret_cast<void**>(11);
        while (1) {
            r4_17 = reinterpret_cast<void**>(11 - reinterpret_cast<unsigned char>(r5_16));
            if (0) {
                r0_18 = fun_ee24(r8_12, r6_15, r4_17, r3_7);
                r1_19 = r4_17;
                r3_7 = r0_18;
                r2_20 = r9_14;
                r0_21 = r10_11;
            } else {
                if (0) {
                    if (0) 
                        goto label_16; else 
                        goto addr_ef60_17;
                } else {
                    if (!1) 
                        goto addr_ef48_19;
                    r0_22 = fun_ee24(r8_12, r6_15, r4_17, r3_7);
                    r1_19 = r6_15;
                    r3_7 = r0_22;
                    r2_20 = r4_17;
                    r0_21 = r10_11;
                }
            }
            addr_efd0_22:
            fun_ee68(r0_21, r1_19, r2_20, r3_7);
            --r5_16;
            if (!__intrinsic()) 
                break;
            continue;
            label_16:
            r0_23 = fun_ee24(r8_12, r6_15, r4_17, r3_7);
            r1_19 = r9_14;
            r3_7 = r0_23;
            r2_20 = r5_16;
            r0_21 = r10_11;
            goto addr_efd0_22;
            addr_ef60_17:
            r3_24 = geff8;
            if (r3_24) 
                goto addr_ef6c_25;
            r0_25 = fun_ee24(r8_12, r6_15, r4_17, r3_24);
            r1_19 = r5_16;
            r3_7 = r0_25;
            r2_20 = r6_15;
            r0_21 = r10_11;
            goto addr_efd0_22;
        }
        --r9_14;
    } while (__intrinsic());
    goto label_29;
    addr_ef6c_25:
    r7_13 = reinterpret_cast<void**>(0xffffffff);
    addr_eff0_30:
    return r7_13;
    addr_ef48_19:
    goto addr_ef6c_25;
    label_29:
    goto addr_eff0_30;
}

struct s50 {
    uint32_t f0;
    void* f4;
};

struct s50*** ga6d4 = reinterpret_cast<struct s50***>(0x40000728);

void** fun_a64c() {
    struct s50*** r3_1;
    void** r0_2;
    int1_t below_or_equal3;
    int1_t below_or_equal4;
    int1_t below_or_equal5;

    r3_1 = ga6d4;
    r0_2 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>((**r3_1)->f4) - 2);
    if (reinterpret_cast<unsigned char>(r0_2) <= reinterpret_cast<unsigned char>(7)) {
        below_or_equal3 = (**r3_1)->f0 <= 2;
        if (below_or_equal3) {
            r0_2 = reinterpret_cast<void**>(4);
        }
        if (below_or_equal3) {
            return r0_2;
        }
    }
    if (reinterpret_cast<uint32_t>((**r3_1)->f4) - 10 <= 1) {
        below_or_equal4 = (**r3_1)->f0 - 2 <= 7;
        if (below_or_equal4) {
            r0_2 = reinterpret_cast<void**>(2);
        }
        if (below_or_equal4) {
            return r0_2;
        }
    }
    if (reinterpret_cast<unsigned char>(r0_2) > reinterpret_cast<unsigned char>(7)) {
        goto addr_a6b0_15;
    } else {
        if ((**r3_1)->f0 - 10 > 1) {
            addr_a6b0_15:
            if (reinterpret_cast<uint32_t>((**r3_1)->f4) <= 2) {
                below_or_equal5 = (**r3_1)->f0 - 2 <= 7;
                if (below_or_equal5) {
                    r0_2 = reinterpret_cast<void**>(1);
                }
                if (below_or_equal5) {
                    return r0_2;
                }
            }
        }
        return 3;
    }
}

struct s51 {
    signed char[34] pad34;
    unsigned char f34;
};

void fun_bb5c(void** r0, void** r1, void** r2, void** r3) {
    void** r7_5;
    void** r4_6;
    void** r5_7;
    void** r6_8;
    void** r0_9;
    void*** r1_10;
    void** r2_11;
    void** r3_12;
    void** r5_13;
    struct s51* r6_14;
    void** r4_15;
    void** r3_16;
    void** r3_17;
    void* r2_18;
    void** r3_19;
    void** r2_20;
    int1_t less_or_equal21;
    void** r0_22;
    void** r1_23;
    void** r5_24;
    void** r4_25;
    void** r1_26;

    r7_5 = r0;
    r0_9 = fun_1054(r0, r1, r2, r3, r4_6, r5_7, r6_8);
    r1_10 = gbc5c;
    if (reinterpret_cast<unsigned char>(*r1_10 + 0xc8) >= reinterpret_cast<unsigned char>(r0_9)) {
        r2_11 = gbc60;
        r3_12 = reinterpret_cast<void**>(1 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r2_11)));
        if (!__intrinsic()) {
            r3_12 = reinterpret_cast<void**>(0);
        }
        *reinterpret_cast<void***>(r2_11) = r3_12;
        *r1_10 = r0_9;
    }
    r5_13 = reinterpret_cast<void**>(0);
    while (1) {
        r6_14 = reinterpret_cast<struct s51*>(reinterpret_cast<unsigned char>(r7_5) + reinterpret_cast<unsigned char>(r5_13));
        r4_15 = reinterpret_cast<void**>(11);
        while (1) {
            r3_16 = gbc64;
            r3_17 = gbc68;
            r2_18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(*r3_16) - reinterpret_cast<unsigned char>(r4_15) + 5);
            r3_19 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*r3_17) - 6 + reinterpret_cast<unsigned char>(r5_13));
            if (reinterpret_cast<signed char>(r3_19) < reinterpret_cast<signed char>(0)) {
                r3_19 = reinterpret_cast<void**>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(r3_19)));
            }
            if (reinterpret_cast<int32_t>(r2_18) < reinterpret_cast<int32_t>(0)) {
                r2_18 = reinterpret_cast<void*>(-static_cast<uint32_t>(r2_18));
            }
            r2_20 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r2_18) + reinterpret_cast<unsigned char>(r3_19));
            less_or_equal21 = reinterpret_cast<signed char>(r2_20) <= reinterpret_cast<signed char>(100);
            if (!less_or_equal21) {
                r3_19 = gbc60;
            }
            r0_22 = r4_15;
            if (less_or_equal21) {
                r2_20 = reinterpret_cast<void**>(static_cast<uint32_t>(r6_14->f34));
            }
            if (less_or_equal21) {
                r0_22 = r4_15;
            }
            r1_23 = r5_13;
            if (!less_or_equal21) {
                r2_20 = *reinterpret_cast<void***>(r3_19);
            }
            if (less_or_equal21) {
                r1_23 = r5_13;
            }
            --r4_15;
            fun_62e4(r0_22, r1_23, r2_20, r3_19);
            r6_14 = reinterpret_cast<struct s51*>(reinterpret_cast<uint32_t>(r6_14) + 16);
            if (reinterpret_cast<int1_t>(r4_15 == -1)) 
                break;
        }
        ++r5_13;
        if (r5_13 == 12) 
            break;
    }
    r5_24 = reinterpret_cast<void**>(5);
    while (1) {
        r4_25 = reinterpret_cast<void**>(5);
        while (r1_26 = r4_25, ++r4_25, fun_62e4(r5_24, r1_26, 1, r3_19), !reinterpret_cast<int1_t>(r4_25 == 7)) {
        }
        ++r5_24;
        if (reinterpret_cast<int1_t>(r5_24 == 7)) 
            break;
    }
}

void** fun_1107c(void** r0, void** r1, void** r2) {
    uint32_t r12_4;
    void** r2_5;
    int1_t n6;
    void** r3_7;
    int1_t z8;
    int1_t z9;
    int1_t c10;
    int1_t c11;
    void** r0_12;
    int1_t c13;
    int1_t c14;
    int1_t c15;
    int1_t c16;
    int1_t z17;
    int1_t c18;
    int1_t c19;
    int1_t c20;
    int1_t below_or_equal21;
    void** r0_22;

    r12_4 = reinterpret_cast<unsigned char>(r0) ^ reinterpret_cast<unsigned char>(r1);
    if (!r1) {
        fun_1136c();
        return 0;
    }
    if (__intrinsic()) {
        r1 = reinterpret_cast<void**>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(r1)));
    }
    r2_5 = r1 - 1;
    n6 = reinterpret_cast<signed char>(r2_5) < reinterpret_cast<signed char>(0);
    if (r2_5) 
        goto addr_11094_7;
    __asm__("teq ip, r0");
    if (!n6) 
        goto addr_1113c_10;
    r0 = reinterpret_cast<void**>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(r0)));
    addr_1113c_10:
    return r0;
    addr_11094_7:
    r3_7 = r0;
    if (n6) {
        r3_7 = reinterpret_cast<void**>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(r0)));
    }
    z8 = r3_7 == r1;
    if (reinterpret_cast<unsigned char>(r3_7) > reinterpret_cast<unsigned char>(r1)) 
        goto addr_110a4_14;
    if (reinterpret_cast<unsigned char>(r3_7) < reinterpret_cast<unsigned char>(r1)) 
        goto addr_11144_17;
    r0 = reinterpret_cast<void**>(0);
    addr_11144_17:
    if (z8) {
        r0 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(r12_4) >> 31);
    }
    if (z8) {
        r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) | 1);
    }
    return r0;
    addr_110a4_14:
    if (reinterpret_cast<unsigned char>(r1) & reinterpret_cast<unsigned char>(r2_5)) {
        z9 = (reinterpret_cast<unsigned char>(r1) & 0xe0000000) == 0;
        if (z9) {
            r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) << 3);
        }
        if (z9) {
            r2_5 = reinterpret_cast<void**>(8);
        }
        if (!z9) {
            r2_5 = reinterpret_cast<void**>(1);
        }
        while (1) {
            c10 = reinterpret_cast<unsigned char>(r1) < reinterpret_cast<unsigned char>(0x10000000);
            if (!c10) {
                c10 = reinterpret_cast<unsigned char>(r1) < reinterpret_cast<unsigned char>(r3_7);
            }
            if (!c10) {
                r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) << 4);
            }
            if (!c10) {
                r2_5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r2_5) << 4);
            }
            if (c10) 
                break;
        }
        while (1) {
            c11 = reinterpret_cast<unsigned char>(r1) < reinterpret_cast<unsigned char>(0x80000000);
            if (!c11) {
                c11 = reinterpret_cast<unsigned char>(r1) < reinterpret_cast<unsigned char>(r3_7);
            }
            if (!c11) {
                r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) << 1);
            }
            if (!c11) {
                r2_5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r2_5) << 1);
            }
            if (c11) 
                break;
        }
        r0_12 = reinterpret_cast<void**>(0);
        while (1) {
            c13 = reinterpret_cast<unsigned char>(r3_7) < reinterpret_cast<unsigned char>(r1);
            if (c13) {
                r3_7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r3_7) - reinterpret_cast<unsigned char>(r1));
            }
            if (c13) {
                r0_12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0_12) | reinterpret_cast<unsigned char>(r2_5));
            }
            c14 = reinterpret_cast<unsigned char>(r3_7) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(r1) >> 1);
            if (c14) {
                r3_7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r3_7) - (reinterpret_cast<unsigned char>(r1) >> 1));
            }
            if (c14) {
                r0_12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0_12) | reinterpret_cast<unsigned char>(r2_5) >> 1);
            }
            c15 = reinterpret_cast<unsigned char>(r3_7) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(r1) >> 2);
            if (c15) {
                r3_7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r3_7) - (reinterpret_cast<unsigned char>(r1) >> 2));
            }
            if (c15) {
                r0_12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0_12) | reinterpret_cast<unsigned char>(r2_5) >> 2);
            }
            c16 = reinterpret_cast<unsigned char>(r3_7) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(r1) >> 3);
            if (c16) {
                r3_7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r3_7) - (reinterpret_cast<unsigned char>(r1) >> 3));
            }
            if (c16) {
                r0_12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0_12) | reinterpret_cast<unsigned char>(r2_5) >> 3);
            }
            z17 = r3_7 == 0;
            if (!z17) {
                r2_5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r2_5) >> 4);
            }
            if (!z17) {
                r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) >> 4);
            }
            if (z17) 
                break;
        }
        if (__intrinsic()) {
            r0_12 = reinterpret_cast<void**>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(r0_12)));
        }
        return r0_12;
    }
    c18 = reinterpret_cast<unsigned char>(r1) < reinterpret_cast<unsigned char>(0x10000);
    if (!c18) 
        goto addr_11158_73;
    r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) >> 16);
    addr_11158_73:
    if (c18) {
    }
    if (!c18) {
    }
    c19 = reinterpret_cast<unsigned char>(r1) < reinterpret_cast<unsigned char>(0x100);
    if (c19) {
        r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) >> 8);
    }
    if (c19) {
    }
    c20 = reinterpret_cast<unsigned char>(r1) < reinterpret_cast<unsigned char>(16);
    if (c20) {
        r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) >> 4);
    }
    if (c20) {
    }
    below_or_equal21 = reinterpret_cast<unsigned char>(r1) <= reinterpret_cast<unsigned char>(4);
    if (!below_or_equal21) {
    }
    if (below_or_equal21) {
    }
    r0_22 = r3_7;
    if (__intrinsic()) {
        r0_22 = reinterpret_cast<void**>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(r0_22)));
    }
    return r0_22;
}

void** fun_c60c(void** r0, void** r1, void** r2, void** r3, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35) {
    void*** lr36;
    void** r0_37;
    void* r12_38;
    void** r1_39;
    void*** r3_40;
    void*** r2_41;
    int1_t n42;
    uint32_t r3_43;
    int1_t z44;

    lr36 = reinterpret_cast<void***>(r0 + reinterpret_cast<unsigned char>(r1) * 6);
    r0_37 = reinterpret_cast<void**>(0);
    r12_38 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r2) << 1);
    r1_39 = reinterpret_cast<void**>(0);
    while (1) {
        r3_40 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(r12_38) + reinterpret_cast<unsigned char>(r1_39));
        r2_41 = r3_40 + 7;
        if (reinterpret_cast<int32_t>(r3_40) >= reinterpret_cast<int32_t>(0)) {
            r2_41 = r3_40;
        }
        n42 = reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(r3_40) & 0x80000007) < reinterpret_cast<int32_t>(0);
        if (n42) {
        }
        if (n42) {
        }
        if (n42) {
        }
        if (n42) {
        }
        r3_43 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(lr36) + reinterpret_cast<uint32_t>(r2_41)) >> 3);
        z44 = (r3_43 & 1) == 0;
        if (!z44) {
            r3_43 = 1;
        }
        if (!z44) {
            r3_43 = reinterpret_cast<unsigned char>(r0_37) | r3_43 << reinterpret_cast<unsigned char>(r1_39);
        }
        ++r1_39;
        if (!z44) {
            r0_37 = reinterpret_cast<void**>(r3_43 & 0xff);
        }
        if (reinterpret_cast<int1_t>(r1_39 == 2)) 
            break;
    }
    return r0_37;
}

void** fun_c670(void** r0, void** r1, void** r2, void** r3, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35) {
    void** r0_36;
    int1_t z37;

    r0_36 = fun_c60c(r0, r1, r2, r3, __return_address(), a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34);
    z37 = reinterpret_cast<int1_t>(r0_36 == 1);
    if (!z37) {
        r0_36 = reinterpret_cast<void**>(0);
    }
    if (z37) {
        r0_36 = reinterpret_cast<void**>(1);
    }
    return r0_36;
}

void** fun_c688(void** r0, void** r1, void** r2, void** r3, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35) {
    void** v36;
    void** r4_37;
    void** v38;
    void** r5_39;
    void** v40;
    void** r6_41;
    void** v42;
    void** r7_43;
    void** v44;
    void** r8_45;
    void** v46;
    void** r10_47;
    void** v48;
    void** r10_49;
    void** r8_50;
    void** r5_51;
    void** r7_52;
    void** r6_53;
    void** r12_54;
    int1_t less_or_equal55;
    int1_t z56;
    void** r4_57;
    int1_t less_or_equal58;
    void** r2_59;
    void** r0_60;

    v36 = r4_37;
    v38 = r5_39;
    v40 = r6_41;
    v42 = r7_43;
    v44 = r8_45;
    v46 = r10_47;
    v48 = reinterpret_cast<void**>(__return_address());
    r10_49 = a5;
    r8_50 = r3;
    r5_51 = r0;
    r7_52 = r1;
    r6_53 = r2;
    r12_54 = reinterpret_cast<void**>(1);
    while (1) {
        less_or_equal55 = reinterpret_cast<signed char>(r5_51) <= reinterpret_cast<signed char>(r6_53);
        if (!less_or_equal55) {
            r3 = reinterpret_cast<void**>(0);
        }
        if (less_or_equal55) {
            r3 = reinterpret_cast<void**>(1);
        }
        if (!r12_54) {
            r3 = reinterpret_cast<void**>(0);
        }
        z56 = r3 == 0;
        if (!z56) {
            r4_57 = r7_52;
        }
        if (z56) 
            break;
        while (1) {
            less_or_equal58 = reinterpret_cast<signed char>(r4_57) <= reinterpret_cast<signed char>(r8_50);
            if (!less_or_equal58) {
                r3 = reinterpret_cast<void**>(0);
            }
            if (less_or_equal58) {
                r3 = reinterpret_cast<void**>(1);
            }
            if (!r12_54) {
                r3 = reinterpret_cast<void**>(0);
            }
            r2_59 = r4_57;
            ++r4_57;
            if (!r3) 
                break;
            r0_60 = fun_c670(r10_49, r5_51, r2_59, r3, v36, v38, v40, v42, v44, v46, v48, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28);
            r12_54 = r0_60;
        }
        ++r5_51;
    }
    return r12_54;
}

int32_t gc720 = 0x40001810;

void** fun_c708(void** r0, void** r1, void** r2) {
    int32_t r0_4;
    void** r2_5;
    void** r4_6;
    int32_t r0_7;
    void** r6_8;
    uint32_t r5_9;
    uint32_t r3_10;
    int1_t z11;
    uint32_t r12_12;

    r0_4 = gc720;
    r2_5 = r1;
    r4_6 = reinterpret_cast<void**>(11 - reinterpret_cast<unsigned char>(r0));
    r0_7 = fun_edf8(r4_6, r2_5);
    r6_8 = reinterpret_cast<void**>(0xffffffff);
    if (r0_7) {
        r5_9 = r0_4 + (reinterpret_cast<unsigned char>(r2_5) << 1);
        r3_10 = reinterpret_cast<uint32_t>(reinterpret_cast<signed char>(r4_6) >> 3);
        z11 = r2 == 0;
        r12_12 = 1 - r3_10;
        if (!z11) {
            r3_10 = *reinterpret_cast<unsigned char*>(r5_9 + r12_12);
        }
        if (z11) {
            r3_10 = *reinterpret_cast<unsigned char*>(r5_9 + r12_12);
        }
        if (!z11) {
            r2_5 = reinterpret_cast<void**>(1);
        }
        if (z11) {
            r2_5 = reinterpret_cast<void**>(1);
        }
        if (!z11) {
            r3_10 = r3_10 | reinterpret_cast<unsigned char>(r2_5) << (reinterpret_cast<unsigned char>(r4_6) & 7);
        }
        if (z11) {
            __asm__("biceq r3, r3, r2, lsl lr");
        }
        if (!z11) {
            *reinterpret_cast<signed char*>(r5_9 + r12_12) = static_cast<signed char>(r3_10);
        }
        if (z11) {
            *reinterpret_cast<signed char*>(r5_9 + r12_12) = static_cast<signed char>(r3_10);
        }
        r6_8 = reinterpret_cast<void**>(0);
        if (z11) {
            r6_8 = r2;
        }
    }
    return r6_8;
}

void fun_fe98(void** r0, void** r1, void** r2, void** r3) {
    void** r0_5;
    void** r0_6;

    r0_5 = gfa5c;
    fun_1118(r0_5, 0xffffffff, r2, r3);
    r0_6 = fun_f898(r0, 0xffffffff);
    if (r0_6) {
        fun_f8dc(r0_6, 0xffffffff, r2);
    }
}

void** g58cc = reinterpret_cast<void**>(0x84);

void** g58d0 = reinterpret_cast<void**>(0xac);

struct s52 {
    signed char[8] pad8;
    void** f8;
    signed char[7] pad16;
    void** f16;
};

struct s52* g58d4 = reinterpret_cast<struct s52*>(0x113dc);

void** g58d8 = reinterpret_cast<void**>(0xd4);

void** fun_5808(void** r0, void** r1, void** r2, void** r3) {
    void* sp5;
    void** r0_6;
    void** r0_7;
    void** r0_8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** r0_40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    struct s52* lr72;
    void** r2_73;
    void** r3_74;
    void** r1_75;
    void** r0_76;
    void** v77;
    void** r0_78;
    void** r4_79;
    void** r2_80;
    void** r3_81;
    void** r0_82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** r0_108;
    void** v109;
    void** v110;

    sp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 - 0x490 - 4);
    r0_6 = fun_857c(reinterpret_cast<int32_t>(sp5) + 4 - 4, r1);
    fun_6388(r0_6, r1, r2, r3);
    fun_637c(r0_6, r1, r2, r3);
    fun_6364(r0_6, r1, r2, r3);
    r0_7 = fun_f3bc(r0_6);
    fun_6a64(r0_7, r1);
    r0_8 = g58cc;
    fun_6208(r0_8, r1, r2, r3, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39);
    r0_40 = g58d0;
    fun_6208(r0_40, r1, r2, r3, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71);
    lr72 = g58d4;
    r2_73 = lr72->f8;
    __asm__("stm ip!, {r0, r1, r2, r3}");
    r3_74 = lr72->f16;
    r1_75 = *reinterpret_cast<void***>(r1 + 4);
    r0_76 = g58d8;
    r0_78 = fun_eafc(r0_76, r1_75, r2_73, r3_74, v77);
    r4_79 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp5) + 0x480);
    r2_80 = r0_78;
    r3_81 = r2_80;
    r0_82 = r4_79;
    if (r2_80) {
        fun_431c(r0_82, 2, r2_80, r3_81, v83, v84, v85, v86, v87, v88, v89, v90, v91, v92, v93, v94, v95, v96, v97, v98, v99, v100, v101, v102, v103, v104, v105, v106, v107);
        fun_6388(r0_82, 2, r2_80, r3_81);
        fun_637c(r0_82, 2, r2_80, r3_81);
        fun_6364(r0_82, 2, r2_80, r3_81);
        r0_82 = r4_79;
        r2_80 = reinterpret_cast<void**>(2);
        r3_81 = reinterpret_cast<void**>(1);
    }
    r0_108 = fun_9d74(r0_82, 2, r2_80, r3_81);
    fun_8524(reinterpret_cast<int32_t>(sp5) + 4 - 4, 2, r2_80, r3_81, v109, v110);
    return r0_108;
}

int32_t gde74 = 0xde98;

void** fun_113c(void** r0, int32_t r1, int32_t r2, uint32_t r3);

void** fun_ddf4(void** r0, int32_t r1, int32_t r2, uint32_t r3, int32_t a5) {
    int32_t r5_6;
    int1_t less_or_equal7;
    int32_t r1_8;
    int32_t r6_9;
    int32_t r6_10;
    void** r0_11;

    r5_6 = r2;
    less_or_equal7 = r5_6 <= 1;
    __asm__("bic r6, r3, #3");
    if (less_or_equal7) {
        r5_6 = 1;
    }
    if (!less_or_equal7) {
        if (r5_6 >= 30) {
            r5_6 = 30;
        }
    }
    __asm__("bic r4, r4, #3");
    fun_eadc(r0, 0, 0x7c);
    r1_8 = gde74;
    __asm__("stm sp, {r4, r8, ip}");
    r0_11 = fun_113c(r0, r1_8, r5_6, r6_9 + (a5 - (r6_10 - r3)) - 4);
    return r0_11;
}

void** fun_111bc(void** r0, void** r1, void** r2, void** r3, void** a5);

void** fun_deb0(void** r0, void** r1, void** r2, void** r3, void** a5) {
    void** r0_6;
    void** r5_7;
    void** r0_8;
    void** r4_9;
    void** r0_10;

    r0_6 = fun_10f6c(r1, r0, r2);
    r5_7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) + reinterpret_cast<unsigned char>(r2));
    *reinterpret_cast<void***>(r3) = r0_6;
    r0_8 = fun_10f6c(r5_7, r0, r2);
    *reinterpret_cast<void***>(a5) = r0_8;
    r0_10 = fun_111bc(r5_7, r0, r2, r3, r4_9);
    if (r0_10) {
        *reinterpret_cast<void***>(a5) = r0_8 + 1;
    }
    return reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a5)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3));
}

void** fun_111bc(void** r0, void** r1, void** r2, void** r3, void** a5) {
    void** r2_6;
    uint1_t z7;
    uint1_t below_or_equal8;
    int32_t r2_9;
    int1_t c10;
    int1_t c11;
    uint32_t r2_12;
    int1_t less13;
    int1_t z14;

    r2_6 = r1 - 1;
    z7 = reinterpret_cast<uint1_t>(r2_6 == 0);
    below_or_equal8 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(!__intrinsic()) | z7);
    if (!__intrinsic()) {
        fun_1136c();
        return 0;
    }
    if (!z7) {
        z7 = reinterpret_cast<uint1_t>(r0 == r1);
        below_or_equal8 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(r0) <= reinterpret_cast<unsigned char>(r1));
    }
    if (z7) {
        r0 = reinterpret_cast<void**>(0);
    }
    if (!below_or_equal8) {
        z7 = reinterpret_cast<uint1_t>((reinterpret_cast<unsigned char>(r1) & reinterpret_cast<unsigned char>(r2_6)) == 0);
        below_or_equal8 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(!__intrinsic()) | z7);
    }
    if (z7) {
        r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) & reinterpret_cast<unsigned char>(r2_6));
    }
    if (below_or_equal8) {
        return r0;
    }
    r2_9 = 0;
    while (1) {
        c10 = reinterpret_cast<unsigned char>(r1) < reinterpret_cast<unsigned char>(0x10000000);
        if (!c10) {
            c10 = reinterpret_cast<unsigned char>(r1) < reinterpret_cast<unsigned char>(r0);
        }
        if (!c10) {
            r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) << 4);
        }
        if (!c10) {
            r2_9 = r2_9 + 4;
        }
        if (c10) 
            break;
    }
    while (1) {
        c11 = reinterpret_cast<unsigned char>(r1) < reinterpret_cast<unsigned char>(0x80000000);
        if (!c11) {
            c11 = reinterpret_cast<unsigned char>(r1) < reinterpret_cast<unsigned char>(r0);
        }
        if (!c11) {
            r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) << 1);
        }
        if (!c11) {
            ++r2_9;
        }
        if (c11) 
            break;
    }
    r2_12 = r2_9 - 3;
    if (reinterpret_cast<int32_t>(r2_12) < reinterpret_cast<int32_t>(0) == __intrinsic()) 
        goto addr_1120c_32;
    goto addr_11248_34;
    while (1) {
        addr_1120c_32:
        if (reinterpret_cast<unsigned char>(r0) < reinterpret_cast<unsigned char>(r1)) {
            r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) - reinterpret_cast<unsigned char>(r1));
        }
        if (reinterpret_cast<unsigned char>(r0) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(r1) >> 1)) {
            r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) - (reinterpret_cast<unsigned char>(r1) >> 1));
        }
        if (reinterpret_cast<unsigned char>(r0) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(r1) >> 2)) {
            r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) - (reinterpret_cast<unsigned char>(r1) >> 2));
        }
        if (reinterpret_cast<unsigned char>(r0) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(r1) >> 3)) {
            r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) - (reinterpret_cast<unsigned char>(r1) >> 3));
        }
        less13 = reinterpret_cast<signed char>(r0) < reinterpret_cast<signed char>(1);
        r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) >> 4);
        if (!less13) {
            r2_12 = r2_12 - 4;
            less13 = reinterpret_cast<int32_t>(r2_12) < reinterpret_cast<int32_t>(0) != __intrinsic();
        }
        if (less13) 
            break;
    }
    z14 = (r2_12 & 3) == 0;
    if (z14) 
        goto addr_11244_47;
    __asm__("teqne r0, #0");
    addr_11244_47:
    if (!z14) {
        addr_11248_34:
        if (reinterpret_cast<int32_t>(r2_12) < -2) {
            goto addr_1126c_51;
        } else {
            if (r2_12 != -2) {
                if (reinterpret_cast<unsigned char>(r0) < reinterpret_cast<unsigned char>(r1)) {
                    r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) - reinterpret_cast<unsigned char>(r1));
                }
                r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) >> 1);
            }
            if (reinterpret_cast<unsigned char>(r0) < reinterpret_cast<unsigned char>(r1)) {
                r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) - reinterpret_cast<unsigned char>(r1));
            }
            r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) >> 1);
            goto addr_1126c_51;
        }
    }
    addr_11274_60:
    return r0;
    addr_1126c_51:
    if (reinterpret_cast<unsigned char>(r0) < reinterpret_cast<unsigned char>(r1)) {
        r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) - reinterpret_cast<unsigned char>(r1));
        goto addr_11274_60;
    }
}

void* ge3b0 = reinterpret_cast<void*>(0xffff);

int32_t ge3b4 = 0x40000941;

void** fun_e348(void** r0, void** r1, void** r2, void** r3) {
    void* r12_5;
    void* r0_6;
    int32_t r5_7;
    void** r0_8;
    void** lr9;
    int32_t r3_10;
    int1_t z11;
    void** v12;
    void** v13;
    void** v14;

    r12_5 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(r0 + 14)));
    r0_6 = ge3b0;
    r5_7 = ge3b4;
    r0_8 = reinterpret_cast<void**>(0);
    if (r12_5 != r0_6) {
        lr9 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r12_5) + r5_7)));
        r3_10 = r5_7 + 1;
        z11 = lr9 == 0;
        if (z11) {
            r3_10 = -1;
        }
        r0_8 = lr9;
        if (z11) {
            *reinterpret_cast<uint16_t*>(r0 + 14) = static_cast<uint16_t>(r3_10);
        }
        if (!z11) {
            __asm__("stm sp, {r5, ip, lr}");
            r0_8 = fun_e2f0(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r0 + 12))), r1, r2, *reinterpret_cast<void***>(r3), v12, v13, v14);
        }
    }
    return r0_8;
}

void** fun_df1c(void** r0, void** r1, void** r2, void** r3) {
    void** r2_5;
    void** r3_6;
    void** v7;
    void** r0_8;
    int1_t less_or_equal9;

    r2_5 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r0 + 12))))));
    r3_6 = reinterpret_cast<void**>(1);
    if (!r2_5) {
        r0_8 = fun_1078(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 - 0x100, r0, r2_5, 1, v7);
        less_or_equal9 = reinterpret_cast<signed char>(r0_8) <= reinterpret_cast<signed char>(0);
        if (!less_or_equal9) {
            *reinterpret_cast<void***>(r0 + 12) = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint32_t>(r0_8)));
        }
        r3_6 = reinterpret_cast<void**>(0xffffffff);
        if (!less_or_equal9) {
            r3_6 = reinterpret_cast<void**>(1);
        }
    }
    return r3_6;
}

void* ge2e0 = reinterpret_cast<void*>(0xffff);

void* ge2e4 = reinterpret_cast<void*>(0x40000940);

struct s53 {
    signed char f0;
    signed char f1;
    void** f2;
};

struct s53** ge2e8 = reinterpret_cast<struct s53**>(0x40000d28);

void* ge2ec = reinterpret_cast<void*>(0x40000941);

int32_t fun_e23c(void** r0, void** r1, int32_t r2, void** r3, void** a5) {
    void* r12_6;
    void* r0_7;
    void* r8_8;
    struct s53** r10_9;
    void* r3_10;
    void* r2_11;
    struct s53* r0_12;
    int1_t c13;
    void* r3_14;
    void** r3_15;
    void** r4_16;

    r12_6 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(r0 + 14)));
    r0_7 = ge2e0;
    r8_8 = ge2e4;
    r10_9 = ge2e8;
    if (r12_6 != r0_7) {
        r3_10 = ge2ec;
        if (reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r12_6) + reinterpret_cast<uint32_t>(r3_10)))) < reinterpret_cast<unsigned char>(r3)) 
            goto addr_e2ac_4;
    } else {
        r2_11 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r0 + 12)) * reinterpret_cast<unsigned char>(r3));
        r0_12 = *r10_9;
        c13 = reinterpret_cast<uint32_t>(r8_8) + 0x3e8 - reinterpret_cast<uint32_t>(r0_12) < reinterpret_cast<uint32_t>(r2_11);
        if (c13) {
            *r10_9 = reinterpret_cast<struct s53*>(reinterpret_cast<uint32_t>(r0_12) + reinterpret_cast<uint32_t>(r2_11) + 2);
        }
        if (c13) {
            *reinterpret_cast<uint16_t*>(r0 + 14) = static_cast<uint16_t>(reinterpret_cast<uint32_t>(r0_12) - reinterpret_cast<uint32_t>(r8_8));
        }
        if (c13) 
            goto label_10; else 
            goto addr_e298_11;
    }
    addr_e2d8_13:
    return 0;
    addr_e2ac_4:
    r3_14 = ge2e4;
    r0_12 = reinterpret_cast<struct s53*>(reinterpret_cast<uint32_t>(r12_6) + reinterpret_cast<uint32_t>(r3_14));
    addr_e2b4_14:
    r0_12->f0 = static_cast<signed char>(r2);
    r0_12->f1 = static_cast<signed char>(reinterpret_cast<uint32_t>(r3));
    r3_15 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r0 + 12))));
    fun_e7e0(&r0_12->f2, r1, reinterpret_cast<unsigned char>(r3_15) * reinterpret_cast<unsigned char>(r3), r3_15, r4_16);
    return 1;
    label_10:
    goto addr_e2b4_14;
    addr_e298_11:
    goto addr_e2d8_13;
}

void** fun_1074(void** r0);

void** fun_e1a4(void** r0, void** r1, void** r2, void* r3, void** a5) {
    void** sp6;
    void** r4_7;
    void** r0_8;
    void** r3_9;
    void** r5_10;
    void** r6_11;
    void** r7_12;

    sp6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 36 - (reinterpret_cast<unsigned char>(r1) * 12 + 4));
    r4_7 = r0;
    r0_8 = fun_1074(sp6);
    r3_9 = a5;
    r5_10 = sp6;
    r6_11 = r0_8;
    if (!(reinterpret_cast<unsigned char>(r3_9) & 2)) {
        fun_1080(r0_8, r1, r2, r3_9, *reinterpret_cast<void***>(sp6), *reinterpret_cast<void***>(sp6 + 4), *reinterpret_cast<void***>(sp6 + 8));
    }
    if (reinterpret_cast<signed char>(r6_11) > reinterpret_cast<signed char>(0)) {
        r7_12 = reinterpret_cast<void**>(0);
        while (fun_e7e0(r4_7, r5_10, 12, r3_9, *reinterpret_cast<void***>(sp6)), ++r7_12, *reinterpret_cast<unsigned char*>(r4_7 + 13) = 0, *reinterpret_cast<void***>(r4_7 + 12) = reinterpret_cast<void**>(0), r3_9 = reinterpret_cast<void**>(0xffffffff), *reinterpret_cast<uint16_t*>(r4_7 + 14) = 0xffff, r5_10 = r5_10 + 12, r4_7 = r4_7 + 16, r7_12 != r6_11) {
        }
    }
    return r6_11;
}

void** ge4e8 = reinterpret_cast<void**>(48);

void** fun_e458(void** r0) {
    void** v2;
    void** r4_3;
    void** v4;
    void** r5_5;
    void** v6;
    void** r4_7;
    void** r5_8;
    void** r3_9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** r0_38;
    uint32_t r3_39;
    uint32_t r3_40;
    int1_t z41;
    void** r1_42;
    void** r3_43;

    v2 = r4_3;
    v4 = r5_5;
    v6 = reinterpret_cast<void**>(__return_address());
    r4_7 = ge4e8;
    r5_8 = r0;
    while (1) {
        r3_9 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(r5_8 + 10)) & 15);
        if (reinterpret_cast<int1_t>(r3_9 == (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(r4_7 + 10)) & 31))) {
            r0_38 = fun_ea94(r5_8, r4_7, r3_9, r3_9, v2, v4, v6, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37);
            if (!r0_38) 
                goto label_5;
        }
        r3_39 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(r4_7 + 13)) >> 1;
        r3_40 = r3_39 & 7;
        z41 = (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r5_8) + (r3_39 & 63) >> 3)) & 1) == 0;
        if (z41) {
            r3_40 = *reinterpret_cast<unsigned char*>(r4_7 + 10);
        }
        if (!z41) {
            r3_40 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r4_7 + 12));
        }
        if (z41) {
            r3_40 = r3_40 << 18;
        }
        r1_42 = ge4e8;
        if (!z41) {
            __asm__("bicne r3, r3, #0xfe00");
        }
        if (z41) {
            r3_40 = r3_40 >> 23;
        }
        r4_7 = r1_42 + r3_40 * 20;
        r3_43 = ge4e8;
        if (r4_7 == r3_43) 
            break;
    }
    r4_7 = reinterpret_cast<void**>(0);
    addr_e4e0_19:
    return r4_7;
    label_5:
    goto addr_e4e0_19;
}

void** fun_ea94(void** r0, void** r1, void** r2, void** r3, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35) {
    void* lr36;
    uint32_t r2_37;
    uint32_t r3_38;

    lr36 = reinterpret_cast<void*>(0);
    while (__intrinsic()) {
        r2_37 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(lr36) + reinterpret_cast<unsigned char>(r0));
        r3_38 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(lr36) + reinterpret_cast<unsigned char>(r1));
        lr36 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(lr36) + 1);
        if (r2_37 >= r3_38) 
            goto addr_eab8_5;
        if (r2_37 > r3_38) 
            goto addr_eac4_8;
    }
    return 0;
    addr_eab8_5:
    return 0xffffffff;
    addr_eac4_8:
    return 1;
}

int32_t fun_edf8(void** r0, void** r1) {
    int1_t less3;
    int32_t r3_4;
    int1_t less_or_equal5;

    less3 = reinterpret_cast<signed char>(r0) < reinterpret_cast<signed char>(0);
    if (!less3) {
        less3 = reinterpret_cast<signed char>(r1) < reinterpret_cast<signed char>(0);
    }
    if (less3) {
        r3_4 = 0;
    }
    if (!less3) {
        r3_4 = 1;
    }
    if (!less3) {
        less_or_equal5 = reinterpret_cast<signed char>(r0) <= reinterpret_cast<signed char>(11);
        if (less_or_equal5) {
            less_or_equal5 = reinterpret_cast<signed char>(r1) <= reinterpret_cast<signed char>(11);
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

int32_t fun_eedc(void** r0, void** r1, void** r2) {
    void* r12_4;

    r12_4 = reinterpret_cast<void*>(0);
    while (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(r12_4) + reinterpret_cast<unsigned char>(r0)) = static_cast<signed char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(r12_4) + reinterpret_cast<unsigned char>(r0))) | static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(r12_4) + reinterpret_cast<unsigned char>(r1))) & 0x70), r12_4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(r12_4) + 2), !reinterpret_cast<int1_t>(r12_4 == 24)) {
    }
    return 0;
}

int32_t gf264 = 0x12188;

uint32_t fun_f258(void** r0, void** r1, void** r2, void** r3) {
    int32_t r3_5;

    r3_5 = gf264;
    return r3_5 + (reinterpret_cast<unsigned char>(r0) << 3);
}

void fun_10d20(int32_t* r0) {
    int32_t r12_2;

    __asm__("mrs ip, apsr");
    __asm__("bic r1, r1, r3");
    __asm__("msr cpsr_fc, r1");
    *r0 = r12_2;
    return;
}

void** fun_10d60(int32_t r0) {
    __asm__("mrs r2, apsr");
    __asm__("bic r1, r1, r0");
    __asm__("msr cpsr_fc, r1");
    return reinterpret_cast<uint32_t>(~r0) & 0x80;
}

void** fun_fe70(void** r0, void** r1, void** r2, void** r3) {
    void** r0_5;
    int1_t less6;

    r0_5 = fun_1028(*reinterpret_cast<void***>(r0), r1, r2, r3);
    less6 = reinterpret_cast<signed char>(r0_5) < reinterpret_cast<signed char>(0);
    if (less6) {
        r0_5 = reinterpret_cast<void**>(0);
    }
    if (!less6) {
        r0_5 = reinterpret_cast<void**>(1);
    }
    *reinterpret_cast<void***>(r0) = reinterpret_cast<void**>(0);
    return r0_5;
}

void** fun_fedc(void** r0, void** r1, void** r2);

void** g10038 = reinterpret_cast<void**>(84);

void** fun_ffa0(void** r0, void** r1, void** r2) {
    void* sp4;
    void** r4_5;
    int1_t z6;
    void** r1_7;
    void** r0_8;
    void** r3_9;
    void** r7_10;
    int1_t z11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** r4_27;
    void** r5_28;
    void** r6_29;
    void** r7_30;
    void** r0_31;
    int1_t z32;

    sp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 20 - 64);
    r4_5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp4) + 2);
    fun_fedc(r4_5, r1, 50);
    z6 = r2 == 0;
    if (!z6) {
    }
    if (!z6) {
        *reinterpret_cast<void***>(r2) = reinterpret_cast<void**>(0);
    }
    r1_7 = g10038;
    r0_8 = fun_102c(r4_5, r1_7, 50);
    r3_9 = r0_8;
    r7_10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp4) + 52);
    if (!r3_9) {
        z11 = r2 == 0;
        if (z11) 
            goto addr_1001c_8;
    } else {
        r0_31 = fun_fe6c(r7_10, r1_7, 50, r3_9, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, r3_9, v25, v26, r4_27, r5_28, r6_29, r7_30);
        if (r0_31) {
            goto addr_10020_11;
        } else {
            z32 = r2 == 0;
            if (!z32) {
                r3_9 = reinterpret_cast<void**>(0x7c);
            }
            if (!z32) {
                *reinterpret_cast<void***>(r2) = r3_9;
            }
            fun_fe70(r7_10, r1_7, 50, r3_9);
            goto addr_10020_11;
        }
    }
    r3_9 = reinterpret_cast<void**>(2);
    addr_1001c_8:
    if (!z11) {
        *reinterpret_cast<void***>(r2) = r3_9;
    }
    addr_10020_11:
    __asm__("stm r6, {r0, r1, r2}");
    return r0;
}

void** fun_10618(void** r0, void** r1, void** r2, void** r3) {
    void** r0_5;
    void** r0_6;
    int1_t z7;
    void** v8;

    r0_5 = fun_1030(r1, 1, 4, *reinterpret_cast<void***>(r0));
    if (reinterpret_cast<int1_t>(r0_5 == 4)) {
        r0_6 = fun_1030(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 - 4, 1, r0_5, *reinterpret_cast<void***>(r0));
        z7 = reinterpret_cast<int1_t>(r0_6 == 4);
        if (z7) {
            r0_6 = v8;
        }
        if (z7) 
            goto label_6;
    }
    r0_6 = reinterpret_cast<void**>(0xffffffff);
    addr_10668_8:
    return r0_6;
    label_6:
    goto addr_10668_8;
}

void fun_108b0() {
}

struct s54 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

void** fun_10828(void** r0, void** r1, void** r2) {
    void** r0_4;
    int1_t z5;
    struct s54* v6;
    void** r2_7;

    r0_4 = *reinterpret_cast<void***>(r1 + 16);
    if (*reinterpret_cast<void***>(r0) == r1) {
        z5 = r0_4 == r1;
        if (z5) {
            *reinterpret_cast<void***>(r0) = reinterpret_cast<void**>(0);
        }
        if (!z5) {
            *reinterpret_cast<void***>(r0) = r0_4;
        }
        if (z5) {
            r0_4 = reinterpret_cast<void**>(0);
        }
    }
    v6 = reinterpret_cast<struct s54*>(r1 + 16);
    r2_7 = v6->f0;
    *reinterpret_cast<void***>(r2_7 + 20) = v6->f4;
    *reinterpret_cast<void***>(*reinterpret_cast<void***>(r1 + 20) + 16) = r2_7;
    return r0_4;
}

void** fun_10c64(void** r0, void** r1, void** r2, void** r3) {
    void** r10_5;
    void** r8_6;
    void** r7_7;
    uint32_t r6_8;
    void* r5_9;
    void* r4_10;
    void* r0_11;
    void** r0_12;

    r10_5 = r0;
    r8_6 = r1;
    r7_7 = r2;
    r6_8 = reinterpret_cast<unsigned char>(r3) & 0xff;
    r5_9 = reinterpret_cast<void*>(0);
    while (1) {
        r4_10 = reinterpret_cast<void*>(0);
        while (1) {
            r0_11 = fun_10ad0(r6_8, r1, r2, r3);
            r2 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r7_7) + reinterpret_cast<uint32_t>(r4_10));
            r0_12 = r10_5;
            r4_10 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r4_10) + 1);
            r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r8_6) + reinterpret_cast<uint32_t>(r5_9));
            r3 = reinterpret_cast<void**>(1);
            if (static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r0_11) + reinterpret_cast<uint32_t>(r4_10))) & 1) {
                r0_12 = fun_ee68(r0_12, r1, r2, 1);
            }
            if (reinterpret_cast<int1_t>(r4_10 == 8)) 
                break;
        }
        r5_9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r5_9) + 1);
        if (reinterpret_cast<int1_t>(r5_9 == 8)) 
            break;
    }
    return r0_12;
}

struct s43* fun_eb5c(void** r0) {
    void** r2_2;

    r2_2 = r0;
    while (*reinterpret_cast<void***>(r0)) {
        ++r0;
    }
    return reinterpret_cast<unsigned char>(r0) - reinterpret_cast<unsigned char>(r2_2);
}

void** fun_80e4(void** r0, void** r1) {
    void** sp3;
    void** r4_4;
    void** r2_5;
    void** r0_6;
    void** r1_7;
    void** r3_8;
    void** r0_9;

    sp3 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 24 - 0x840 - 12);
    r4_4 = sp3;
    r2_5 = r0;
    r0_6 = fun_7dbc(r4_4, 21, r2_5, r1);
    r1_7 = sp3 - 88;
    r3_8 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<signed char>(r3_8) < reinterpret_cast<signed char>(r0_6)) {
        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r1_7) + reinterpret_cast<unsigned char>(r3_8) << 2) = r4_4;
        ++r3_8;
        r4_4 = r4_4 + 0x65;
    }
    r0_9 = fun_10344(reinterpret_cast<unsigned char>(r0_6) & 0xff, r1_7, r2_5);
    return r0_9;
}

void** fun_81a4(void** r0, void** r1) {
    void** sp3;
    void** r2_4;
    void** r0_5;
    void** r4_6;
    void** r6_7;
    void** r5_8;
    void** r3_9;
    int1_t less10;
    void** r0_11;
    void** r0_12;

    sp3 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 32 - 0xfc0 - 12);
    r2_4 = r0;
    r0_5 = fun_7dbc(sp3, 40, r2_4, r1);
    r4_6 = sp3;
    r6_7 = r0_5;
    r5_8 = reinterpret_cast<void**>(0);
    r3_9 = reinterpret_cast<void**>(1);
    while (1) {
        less10 = reinterpret_cast<signed char>(r3_9) < reinterpret_cast<signed char>(0);
        if (r3_9) {
            less10 = reinterpret_cast<signed char>(r5_8) < reinterpret_cast<signed char>(r6_7);
        }
        r0_11 = r4_6;
        ++r5_8;
        r4_6 = r4_6 + 0x65;
        if (!less10) 
            break;
        r0_12 = fun_10464(r0_11, 40, r2_4);
        r3_9 = r0_12;
    }
    return r3_9;
}

struct s55 {
    signed char[32] pad32;
    int32_t f32;
};

struct s55* g10e50 = reinterpret_cast<struct s55*>(0x40001784);

int32_t g10e54 = 0x400017a8;

void fun_10f8(struct s55* r0, int32_t r1, int32_t r2);

void** g10e58 = reinterpret_cast<void**>(0xf8);

int32_t fun_10e18(void** r0) {
    struct s55* r3_2;
    int32_t r1_3;
    void** r0_4;

    r3_2 = g10e50;
    r3_2->f32 = 0;
    r1_3 = g10e54;
    fun_10f8(r3_2, r1_3, 20);
    r0_4 = g10e58;
    fun_111c(r0_4, 1, 1);
    return 0;
}

void** fun_fedc(void** r0, void** r1, void** r2) {
    void* r11_4;
    void** r2_5;
    int1_t z6;
    void** r6_7;
    void** sp8;
    void** r5_9;
    void** r4_10;
    void* r0_11;
    uint32_t r3_12;
    unsigned char* r1_13;
    void** r2_14;
    void** r3_15;
    void** r0_16;

    r11_4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    r2_5 = r2 + 6;
    z6 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r1))) == 63;
    __asm__("bic r2, r2, #3");
    r6_7 = r0;
    sp8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 32 - 52 - reinterpret_cast<unsigned char>(r2_5));
    if (!z6) {
        r0 = reinterpret_cast<void**>(0);
    }
    r5_9 = r1;
    r4_10 = sp8;
    if (!z6) {
        r1 = r0;
    }
    if (z6) {
        r0_11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(r11_4) - 78);
        if (static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r5_9 + 1))) != 63) {
            fun_ece4(r0_11);
            r1 = reinterpret_cast<void**>(1);
        } else {
            fun_ed2c(r0_11, r1, r2_5);
            r1 = reinterpret_cast<void**>(2);
        }
        r0 = reinterpret_cast<void**>(0);
        while (r3_12 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r0) + (reinterpret_cast<int32_t>(r11_4) - 78)), !!r3_12) {
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r0) + reinterpret_cast<unsigned char>(r4_10)) = static_cast<signed char>(r3_12);
            ++r0;
        }
    }
    r1_13 = reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r5_9) + reinterpret_cast<unsigned char>(r1));
    r2_14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r4_10) + reinterpret_cast<unsigned char>(r0));
    while (r3_15 = reinterpret_cast<void**>(static_cast<uint32_t>(*r1_13)), ++r1_13, ++r2_14, !!r3_15) {
        *reinterpret_cast<void***>(r2_14 + 0xffffffff) = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint32_t>(r3_15)));
        ++r0;
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r4_10) + reinterpret_cast<unsigned char>(r0)) = static_cast<signed char>(reinterpret_cast<uint32_t>(r3_15));
    r0_16 = fun_eb30(r6_7, r4_10, r2_14, r3_15, *reinterpret_cast<void***>(sp8), *reinterpret_cast<void***>(sp8 + 4));
    return r0_16;
}

void fun_1136c() {
    return;
}

int32_t* g3044 = reinterpret_cast<int32_t*>(0x4000050c);

int32_t* g3048 = reinterpret_cast<int32_t*>(0x40001958);

int32_t* g304c = reinterpret_cast<int32_t*>(0x12564);

int32_t* g3050 = reinterpret_cast<int32_t*>(0x40000000);

int32_t* g3054 = reinterpret_cast<int32_t*>(0x4000050c);

int32_t g3058 = 0xddb0;

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

void fun_310c(int32_t r0) {
    int1_t z2;
    int1_t z3;
    int1_t z4;
    int1_t z5;
    int1_t z6;

    if (z2) {
    }
    if (z3) {
    }
    if (z4) {
    }
    if (z5) {
    }
    if (!z6) 
        goto "???";
}

void fun_e2e4(int32_t r0, int32_t r1) {
    int1_t n3;
    int1_t n4;
    int1_t n5;

    if (n3) {
    }
    if (n4) {
    }
    if (!n5) 
        goto "???";
}

void** ge3e0 = reinterpret_cast<void**>(64);

void*** ge3e4 = reinterpret_cast<void***>(0x40000d28);

void fun_e3b4(int32_t r0, int32_t r1) {
    int1_t n3;
    int1_t n4;
    void** r4_5;
    void*** r3_6;

    if (n3) {
    }
    if (n4) {
    }
    r4_5 = ge3e0;
    fun_eadc(r4_5, 0, 0x3e8);
    r3_6 = ge3e4;
    *r3_6 = r4_5;
    return;
}

void fun_fd9c(int64_t* r0) {
    int1_t z2;
    int64_t v3;

    if (!z2) 
        goto "???";
    *r0 = v3;
}

signed char g1117b = -29;

void fun_11388(int32_t r0, int32_t r1) {
    int1_t v3;
    int1_t v4;
    int1_t v5;
    int32_t r4_6;
    int1_t v7;
    int1_t c8;
    int1_t v9;
    int1_t v10;
    int32_t r5_11;
    int1_t v12;
    int32_t r6_13;
    int1_t z14;
    int1_t c15;
    int1_t c16;
    int1_t c17;
    int1_t c18;
    int1_t c19;
    int1_t c20;
    int1_t c21;
    int1_t c22;
    int1_t c23;
    int1_t z24;

    if (v3) {
        __asm__("mrcvs p2, #3, r7, c5, c0, #3");
    }
    if (v4) {
        __asm__("cdpvs p0, #6, c2, c9, c7, #3");
    }
    if (!v5) {
        *reinterpret_cast<signed char*>(r1 - 0x820) = static_cast<signed char>(r4_6);
    }
    if (v7) {
    }
    if (c8) {
        __asm__("stclhs p5, c7, [r5, #-0x1b8]!");
    }
    if (v9) {
        __asm__("cdpvs p1, #6, c6, c9, c13, #3");
    }
    if (!v10) {
        g1117b = static_cast<signed char>(r5_11);
    }
    if (v12) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__return_address()) - 0x974) = static_cast<signed char>(r6_13);
    }
    if (z14) {
    }
    if (c15) {
        __asm__("stchs p13, c2, [sp, #-0xb4]!");
    }
    if (c16) {
        __asm__("stchs p13, c2, [sp, #-0xb4]!");
    }
    if (c17) {
        __asm__("stchs p13, c2, [sp, #-0xb4]!");
    }
    if (c18) {
        __asm__("stchs p13, c2, [sp, #-0xb4]!");
    }
    if (c19) {
        __asm__("stchs p13, c2, [sp, #-0xb4]!");
    }
    if (c20) {
        __asm__("stchs p13, c2, [sp, #-0xb4]!");
    }
    if (c21) {
        __asm__("stchs p13, c2, [sp, #-0xb4]!");
    }
    if (c22) {
        __asm__("stchs p13, c2, [sp, #-0xb4]!");
    }
    if (c23) {
        __asm__("stchs p13, c2, [sp, #-0xb4]!");
    }
    if (z24) {
    }
}

uint32_t fun_293820();

void fun_113d8(uint32_t r0) {
    int1_t z2;
    int1_t z3;
    uint32_t r2_4;
    int1_t z5;
    uint32_t r4_6;
    int1_t z7;
    uint32_t r12_8;
    int1_t z9;
    uint32_t r5_10;
    int1_t z11;
    uint32_t r6_12;
    int1_t z13;
    int1_t z14;
    int32_t r6_15;
    int32_t r4_16;
    int1_t z17;
    int1_t z18;
    int1_t z19;
    int1_t z20;
    uint32_t r2_21;
    int1_t c22;
    int1_t v23;
    int32_t r4_24;
    int32_t r2_25;
    int1_t v26;
    int1_t v27;
    int1_t v28;
    int1_t v29;

    if (z2) {
        r0 = r0 & r0;
    }
    if (z3) {
        r0 = r0 & r2_4;
    }
    if (z5) {
        r0 = r0 & r4_6;
    }
    if (z7) {
        r0 = r0 & r12_8;
    }
    if (z9) {
        r0 = r0 & r5_10;
    }
    if (z11) {
        r0 = r0 & r6_12;
    }
    if (z13) {
        *reinterpret_cast<int16_t*>(&r0) = 0x2100;
    }
    if (z14) {
        *reinterpret_cast<uint32_t*>(r6_15 + r4_16 << 10) = r0;
    }
    if (z17) {
        fun_293820();
    }
    if (z18) {
        __asm__("svceq #0xe0d0c");
    }
    if (!z19) {
        z20 = (r2_21 & 4) == 0;
        c22 = __intrinsic();
    }
    if (z20) {
    }
    if (v23) {
        *reinterpret_cast<signed char*>(r4_24 - 45) = static_cast<signed char>(r2_25);
    }
    if (v26) {
        __asm__("svcvs #0x207473");
    }
    if (!v27) {
        __asm__("ldrbtvc r2, [r3], #-0x66");
    }
    if (!v28) {
        __asm__("ldmdbvc r0!, {r1, r4, r5, r6, r8, sb, sp, lr} ^");
    }
    if (c22) {
        v29 = __intrinsic();
    }
    if (!v29) {
        __asm__("strtvc r7, [r0], #-0x369");
    }
}

void fun_11424(int32_t* r0, int32_t r1) {
    int1_t v3;
    int1_t v4;
    int1_t v5;
    int32_t r3_6;
    int32_t r7_7;
    int32_t r3_8;
    int32_t r3_9;
    int1_t z10;
    uint32_t r2_11;
    uint32_t r10_12;
    int1_t v13;
    void* r12_14;
    void* r12_15;
    void* r12_16;
    void* r12_17;
    int32_t r5_18;
    void** r12_19;
    int1_t v20;
    int32_t r5_21;
    int32_t r6_22;
    int32_t r8_23;
    int32_t r10_24;
    int1_t v25;
    int1_t v26;
    int32_t r9_27;
    int32_t r9_28;
    int32_t r6_29;
    int32_t r9_30;
    int32_t r9_31;
    int1_t c32;
    int1_t z33;
    int1_t c34;
    int1_t v35;
    uint32_t r11_36;
    uint32_t r11_37;

    if (v3) {
        __asm__("stclvs p1, c6, [ip], #-0x1b4");
    }
    if (v4) {
        __asm__("svcvs #0x73202e");
    }
    if (v5) {
        *reinterpret_cast<signed char*>(r3_6 - 0x275) = static_cast<signed char>(r7_7);
        r3_8 = r3_9 - 0x275;
    }
    if (z10) {
        r2_11 = reinterpret_cast<uint32_t>(r0) & r10_12 >> reinterpret_cast<uint32_t>(r0);
    }
    if (v13) {
        *reinterpret_cast<int32_t**>(reinterpret_cast<int32_t>(r12_14) - 16) = r0;
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(r12_15) - 12) = r2_11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r12_16) - 8) = r3_8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r12_17) - 4) = r5_18;
        *r12_19 = __zero_stack_offset();
    }
    if (v20) {
        *(r0 - 8) = r1;
        *reinterpret_cast<uint32_t*>(r0 - 7) = r2_11;
        *(r0 - 6) = r3_8;
        *(r0 - 5) = r5_21;
        *(r0 - 4) = r6_22;
        *(r0 - 3) = r8_23;
        *(r0 - 2) = r10_24;
        *reinterpret_cast<void**>(r0 - 1) = __zero_stack_offset();
        *r0 = reinterpret_cast<int32_t>(__return_address());
        r0 = r0 - 9;
    }
    if (v25) {
        __asm__("svcvs #0x63206e");
    }
    if (v26) {
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r9_27 + reinterpret_cast<int32_t>(__return_address())) >> 12 | reinterpret_cast<uint32_t>(r9_28 + reinterpret_cast<int32_t>(__return_address())) << 20) = static_cast<signed char>(r6_29);
        r9_30 = r9_31;
    }
    if (c32) {
        z33 = (reinterpret_cast<uint32_t>(r0) >> 18) - r3_8 == 0;
        c34 = __intrinsic();
        v35 = __intrinsic();
    }
    if (c34) {
    }
    if (v35) {
    }
    if (z33) {
    }
    if (z33) {
    }
    if (c34) {
        z33 = (r11_36 >> 10 | r11_37 << 22) - r9_30 == 0;
        c34 = __intrinsic();
        v35 = __intrinsic();
    }
    if (v35) {
        __asm__("svcvs #0x6e6769");
    }
    if (c34) {
        if (z33) {
        }
        if (!v35) {
            __asm__("ldrbtvc r6, [r2], #-0x976");
        }
        if (c34) {
        }
        if (c34) {
        }
    }
}

void fun_11478(uint32_t r0, int32_t r1, int32_t r2, void* r3) {
    int1_t z5;
    uint32_t r6_6;
    int32_t r5_7;
    int32_t r5_8;
    int32_t r4_9;
    int1_t v10;
    int32_t r11_11;
    int1_t z12;
    uint32_t r9_13;
    int32_t r10_14;
    uint32_t r9_15;
    int32_t r10_16;
    int1_t v17;
    int1_t c18;
    int1_t z19;
    int1_t n20;
    int1_t c21;
    void** r4_22;
    int32_t r9_23;
    int1_t n24;
    int1_t z25;
    int1_t c26;
    int1_t v27;
    uint32_t r5_28;
    uint32_t r10_29;
    int32_t r9_30;

    if (z5) {
        r6_6 = (reinterpret_cast<uint32_t>(r3) >> r5_7 | reinterpret_cast<uint32_t>(r3) << reinterpret_cast<uint32_t>(32 - r5_8)) - r4_9;
    }
    if (v10) {
        *reinterpret_cast<signed char*>(r11_11 - 32) = static_cast<signed char>(r2);
    }
    if (z12) {
        r3 = reinterpret_cast<void*>(r0 ^ (r9_13 >> r10_14 | r9_15 << reinterpret_cast<uint32_t>(32 - r10_16)));
    }
    if (!v17) {
        __asm__("strbtvc r2, [r5], -r0, lsr #32");
    }
    if (c18) {
        if (z19) {
            r0 = 0;
        }
        if (n20) {
            __asm__("mcrrmi p0, #2, r2, r1, c13");
        }
        if (c21) {
            r4_22 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r3) - (r9_23 >> 2));
            n24 = reinterpret_cast<int32_t>(r4_22) < reinterpret_cast<int32_t>(0);
            z25 = r4_22 == 0;
            c26 = __intrinsic();
            v27 = __intrinsic();
        }
        if (c26) {
            r4_22 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r4_22) - (reinterpret_cast<int32_t>(__return_address()) >> 30));
            n24 = reinterpret_cast<int32_t>(r4_22) < reinterpret_cast<int32_t>(0);
            z25 = r4_22 == 0;
            c26 = __intrinsic();
            v27 = __intrinsic();
        }
        if (n24) {
            __asm__("cdpmi p15, #5, c4, c5, c6, #2");
        }
        if (!n24) {
            r2 = reinterpret_cast<int32_t>(" ");
        }
        if (!n24) {
            r4_22 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - (r0 >> 10));
        }
        if (c26) {
            r5_28 = r10_29 ^ reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(r4_22) >> r9_30);
            n24 = reinterpret_cast<int32_t>(r5_28) < reinterpret_cast<int32_t>(0);
            z25 = r5_28 == 0;
            c26 = __intrinsic();
        }
        if (z25) {
            r0 = r0 & r0;
        }
        if (v27) {
            __asm__("stclvs p6, c6, [sb], #-0xfc");
        }
        if (v27) {
        }
        if (!v27) {
            __asm__("ldmdavc r4!, {r0, r2, r5, r6, sb, sl, fp, sp} ^");
        }
        if (z25) {
            r0 = r0 & (reinterpret_cast<uint32_t>(r4_22) >> r0 | reinterpret_cast<uint32_t>(r4_22) << 32 - r0);
        }
        if (!n24) {
            __asm__("svcpl #0x6d756e");
        }
        if (z25) {
            r0 = r0 & r0;
        }
        if (z25) {
            r0 = r0 & r0;
        }
        if (z25) {
            r0 = r0 & r0;
        }
        if (z25) {
            r0 = 0;
        }
        if (z25) {
            r0 = r0 & r0;
        }
        if (z25) {
            r0 = r0 & r0;
        }
        if (z25) {
            r0 = r0 & r0;
        }
        if (z25) {
            r0 = r0 & r0;
        }
        if (z25) {
            r0 = r0 & r0;
        }
        if (z25) {
            r0 = r0 & r0;
        }
        if (z25) {
            r0 = r0 & r0;
        }
        if (z25) {
            r0 = r0 & r0;
        }
        if (z25) {
            r0 = r0 & r0;
        }
        if (!c26) {
            __asm__("ldclo p13, c3, [sp, #-0xf4]!");
        }
        if (!c26) {
            __asm__("ldclo p13, c3, [sp, #-0xf4]!");
        }
        if (!v27) {
            *reinterpret_cast<uint32_t*>(r4_22 - 5) = r0;
            *reinterpret_cast<int32_t*>(r4_22 - 4) = r2;
            *(r4_22 - 3) = r3;
            *reinterpret_cast<void***>(r4_22 - 2) = r4_22;
            *reinterpret_cast<uint32_t*>(r4_22 - 1) = r5_28;
            *r4_22 = __zero_stack_offset();
        }
        if (v27) {
            __asm__("cdpvs p0, #7, c2, c3, c14, #3");
        }
        if (!c26) {
            __asm__("stclo p3, c7, [r0, #-0x190]!");
        }
        if (!c26) {
            __asm__("ldclo p13, c3, [sp, #-0xf4]!");
        }
        if (!c26) {
            __asm__("ldclo p13, c3, [sp, #-0xf4]!");
        }
        if (!c26) {
            __asm__("ldclo p13, c3, [sp, #-0xf4]!");
        }
        if (z25) {
        }
        if (!c26) {
            __asm__("ldclo p13, c3, [sp, #-0xf4]!");
        }
        if (!c26) {
            __asm__("ldclo p13, c3, [sp, #-0xf4]!");
        }
        if (!c26) {
            __asm__("ldclo p13, c3, [sp, #-0xf4]!");
        }
        if (!c26) {
            __asm__("ldclo p13, c3, [sp, #-0xf4]!");
        }
        if (!c26) {
            __asm__("ldclo p13, c3, [sp, #-0xf4]!");
        }
        if (!c26) {
            __asm__("ldclo p13, c3, [sp, #-0xf4]!");
        }
        if (z25) {
        }
        if (c26) {
            z25 = (reinterpret_cast<uint32_t>(__return_address()) ^ reinterpret_cast<uint32_t>(__return_address()) >> reinterpret_cast<uint32_t>(__return_address())) == 0;
            c26 = __intrinsic();
        }
        if (v27) {
        }
        if (v27) {
            __asm__("ldmdbvs r2!, {r0, r1, r2, r3, r4, r6, sl, sp, lr} ^");
        }
        if (c26) {
            z25 = (r6_6 >> r5_28 | r6_6 << 32 - r5_28) - r2 == 0;
            v27 = __intrinsic();
        }
        if (v27) {
        }
        if (z25) {
        }
        if (!v27) {
            __asm__("ldrbtvc r7, [r3], #-0x973");
        }
        if (v27) {
            __asm__("stcvs p13, c6, [pc], #-0x194");
        }
    }
}

void fun_11560(uint32_t r0, int32_t r1, uint32_t r2, int32_t r3) {
    int1_t z5;
    int1_t c6;
    uint32_t r6_7;
    int32_t r6_8;
    uint32_t r12_9;
    int1_t v10;
    int1_t c11;
    int1_t z12;
    uint32_t r10_13;
    uint32_t r5_14;
    uint32_t r5_15;
    int1_t c16;
    uint32_t r12_17;
    int1_t v18;
    void* r5_19;
    void* r5_20;
    void* r5_21;
    void* r5_22;
    int32_t r5_23;
    void* r5_24;
    void* r5_25;
    int32_t r10_26;
    void* r5_27;
    int32_t r11_28;
    void* r5_29;
    uint32_t* r5_30;
    int1_t v31;

    if (z5) {
    }
    if (c6) {
        r6_7 = (r6_8 >> reinterpret_cast<int32_t>("er: ")) - r12_9;
    }
    if (v10) {
        __asm__("ldmdavs r2!, {r1, r2, r4, r5, r6, r8, sb, sl, fp, sp, lr} ^");
    }
    if (c11) {
        z12 = (r10_13 ^ (r5_14 >> 4 | r5_15 << 28)) == 0;
        c16 = __intrinsic();
    }
    if (z12) {
        r0 = r0 & r0;
    }
    if (c16) {
        r6_7 = (reinterpret_cast<int32_t>(r6_7) >> reinterpret_cast<int32_t>("ner 50")) - r12_17;
    }
    if (v18) {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(r5_19) - 32) = r0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_20) - 28) = r1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_21) - 24) = r3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_22) - 20) = r5_23;
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(r5_24) - 16) = r6_7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_25) - 12) = r10_26;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_27) - 8) = r11_28;
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(r5_29) - 4) = __zero_stack_offset();
        *r5_30 = reinterpret_cast<uint32_t>(__return_address());
    }
    if (c16) {
        z12 = (reinterpret_cast<uint32_t>(__return_address()) >> 10 | reinterpret_cast<uint32_t>(__return_address()) << 22) - r2 == 0;
        c16 = __intrinsic();
        v31 = __intrinsic();
    }
    if (z12) {
    }
    if (c16) {
    }
    if (v31) {
        __asm__("stmdavs r3!, {r1, r2, r3, r5, r6, r8, sp, lr} ^");
    }
    if (c16) {
        if (z12) {
        }
        if (v31) {
            __asm__("mcrvs p5, #3, r6, c9, c2, #2");
        }
    }
}

void fun_1159c(int32_t r0) {
    int1_t v2;
    int1_t v3;
    int1_t v4;
    int1_t z5;
    int1_t v6;
    int32_t r9_7;
    int32_t r7_8;
    int1_t v9;
    int1_t v10;

    if (v2) {
        __asm__("ldmdbvs r0!, {r5, r8, sb, ip, lr} ^");
    }
    if (v3) {
        __asm__("stclvs p12, c6, [r5, #-0x194]!");
    }
    if (v4) {
    }
    if (z5) {
    }
    if (v6) {
        *reinterpret_cast<signed char*>(r9_7 - 83) = static_cast<signed char>(r7_8);
    }
    if (v9) {
        __asm__("svcvs #0x66206c");
    }
    if (v10) {
    }
}

void fun_115bc(uint32_t r0, int32_t r1) {
    int1_t z3;
    int1_t v4;
    uint1_t c5;
    uint32_t r5_6;
    int1_t z7;
    int32_t r5_8;
    int1_t v9;
    uint32_t r5_10;
    int32_t r5_11;
    uint32_t r2_12;
    int32_t r3_13;
    int32_t r12_14;
    int32_t r6_15;
    uint32_t r12_16;
    int32_t r12_17;
    int32_t r6_18;
    uint32_t r5_19;
    uint32_t r7_20;
    uint32_t r9_21;
    uint32_t r9_22;
    int32_t r3_23;
    int32_t r9_24;
    int32_t r9_25;
    int32_t r9_26;

    if (z3) {
        r0 = r0 & reinterpret_cast<uint32_t>(" ausm Spielemenue - Zurueck ins Spiel.") >> r0;
    }
    if (!v4) {
        c5 = reinterpret_cast<uint1_t>(r5_6 < reinterpret_cast<uint32_t>(-0x80000014));
        z7 = r5_8 == -0x80000014;
        v9 = __intrinsic();
    }
    if (!v9) {
        c5 = reinterpret_cast<uint1_t>(r5_10 < reinterpret_cast<uint32_t>(-8));
        z7 = r5_11 == -8;
        v9 = __intrinsic();
    }
    if (!v9) {
        r2_12 = reinterpret_cast<uint32_t>(r3_13 - static_cast<int32_t>(static_cast<uint33_t>(reinterpret_cast<uint32_t>(__zero_stack_offset())) | static_cast<uint33_t>(c5) << 1));
        z7 = r2_12 == 0;
        c5 = __intrinsic();
        v9 = __intrinsic();
    }
    if (v9) {
        *reinterpret_cast<signed char*>(r12_14 - 0x569) = static_cast<signed char>(r6_15);
        r12_16 = reinterpret_cast<uint32_t>(r12_17 - 0x569);
    }
    if (!v9) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__return_address()) - 0x56d) = static_cast<signed char>(r6_18);
    }
    if (c5) {
        r2_12 = reinterpret_cast<uint32_t>(__zero_stack_offset()) ^ static_cast<uint32_t>(static_cast<uint33_t>(r5_19) | static_cast<uint33_t>(c5) << 1);
    }
    if (!v9) {
        r7_20 = *reinterpret_cast<unsigned char*>(r2_12 - 0x55a);
        r2_12 = r2_12 - 0x55a;
    }
    if (c5) {
    }
    if (c5) {
        z7 = (r9_21 >> 28 | r9_22 << 4) - r3_23 == 0;
        v9 = __intrinsic();
    }
    if (v9) {
        *reinterpret_cast<signed char*>(r9_24 - 83) = static_cast<signed char>(r7_20);
        r9_25 = r9_26 - 83;
    }
    if (z7) {
        r2_12 = r0 & (r12_16 >> 28 | r12_16 << 4);
    }
    if (v9) {
        *reinterpret_cast<signed char*>(r9_25 - 83) = static_cast<signed char>(r7_20);
    }
    if (v9) {
    }
    if (!v9) {
        *reinterpret_cast<signed char*>(r1 - 0x74) = static_cast<signed char>(r2_12);
    }
    if (!v9) {
    }
}

void fun_11600(uint32_t r0) {
    int1_t v2;
    int32_t r5_3;
    int32_t r6_4;
    uint32_t r5_5;
    int32_t r5_6;
    int1_t v7;
    int1_t z8;
    int1_t v9;
    uint1_t c10;
    int1_t v11;
    uint32_t r2_12;
    int32_t r3_13;
    int32_t r12_14;
    int32_t r6_15;
    int32_t r6_16;
    uint32_t r7_17;
    int32_t r9_18;

    if (v2) {
        *reinterpret_cast<signed char*>(r5_3 - 0x220) = static_cast<signed char>(r6_4);
        r5_5 = r5_6 + 0xfffffde0;
    }
    if (v7) {
        __asm__("cdpvs p4, #6, c6, c5, c14, #3");
    }
    if (z8) {
        r0 = r0 & reinterpret_cast<uint32_t>(" ausm Spielemenue - Zurueck ins Spiel, um es mit Auswertung zu beenden.") >> r0;
    }
    if (!v9) {
        c10 = reinterpret_cast<uint1_t>(r5_5 < reinterpret_cast<uint32_t>(-0x80000014));
        v11 = __intrinsic();
    }
    if (!v11) {
        c10 = reinterpret_cast<uint1_t>(r5_5 < reinterpret_cast<uint32_t>(-8));
        v11 = __intrinsic();
    }
    if (!v11) {
        r2_12 = reinterpret_cast<uint32_t>(r3_13 - static_cast<int32_t>(static_cast<uint33_t>(reinterpret_cast<uint32_t>(__zero_stack_offset())) | static_cast<uint33_t>(c10) << 1));
        c10 = __intrinsic();
        v11 = __intrinsic();
    }
    if (v11) {
        *reinterpret_cast<signed char*>(r12_14 - 0x569) = static_cast<signed char>(r6_15);
    }
    if (!v11) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__return_address()) - 0x56d) = static_cast<signed char>(r6_16);
    }
    if (c10) {
        r2_12 = reinterpret_cast<uint32_t>(__zero_stack_offset()) ^ static_cast<uint32_t>(static_cast<uint33_t>(r5_5) | static_cast<uint33_t>(c10) << 1);
    }
    if (!v11) {
        r7_17 = *reinterpret_cast<unsigned char*>(r2_12 - 0x55a);
        r2_12 = r2_12 - 0x55a;
    }
    if (c10) {
    }
    if (c10) {
        v11 = __intrinsic();
    }
    if (v11) {
        *reinterpret_cast<signed char*>(r9_18 - 83) = static_cast<signed char>(r7_17);
    }
    if (!v11) {
        *reinterpret_cast<uint32_t*>(r0 - 0xc6c) = r2_12;
    }
}

void fun_1163c(uint32_t r0, uint32_t r1, uint32_t r2) {
    int1_t v4;
    int1_t v5;
    int1_t c6;
    uint32_t r5_7;
    int1_t z8;
    int32_t r5_9;
    int1_t v10;
    uint32_t r6_11;
    uint32_t r5_12;
    uint32_t r5_13;
    int32_t r7_14;
    uint32_t r7_15;
    uint32_t r5_16;
    uint32_t r5_17;
    uint32_t r11_18;
    uint32_t r11_19;
    int32_t r5_20;
    uint32_t r5_21;
    uint32_t r5_22;
    int32_t r5_23;
    uint32_t r5_24;
    uint32_t r5_25;
    int32_t r11_26;
    int32_t r11_27;
    int32_t r5_28;
    int32_t r4_29;
    int32_t r4_30;

    if (!v4) {
        __asm__("strbtvc r6, [sb], #-0xd20");
    }
    if (!v5) {
        c6 = r5_7 < reinterpret_cast<uint32_t>(-8);
        z8 = r5_9 == -8;
        v10 = __intrinsic();
    }
    if (!v10) {
        __asm__("ldrbtvc r6, [r2], #-0x577");
    }
    if (c6) {
        r6_11 = (r5_12 >> reinterpret_cast<uint32_t>(__return_address()) | r5_13 << 32 - reinterpret_cast<uint32_t>(__return_address())) - r7_14;
    }
    if (v10) {
        r7_15 = r0 ^ 0x1e800000;
    }
    if (v10) {
        __asm__("strbtvs r6, [lr], #-0x565");
    }
    if (z8) {
        r6_11 = reinterpret_cast<uint32_t>(__return_address()) ^ (r5_16 >> 28 | r5_17 << 4);
    }
    if (!v10) {
        __asm__("ldrbtvc r6, [r5], #-0x14c");
    }
    if (!v10) {
        __asm__("rscvc r7, r4, #0x73000000");
    }
    if (z8) {
        r6_11 = r0 & (r11_18 >> 10 | r11_19 << 22);
    }
    if (!v10) {
        __asm__("ldrbtvc r6, [r5], #-0x14c");
    }
    if (v10) {
        *reinterpret_cast<signed char*>(r1 - 0x473) = static_cast<signed char>(r7_15);
        r1 = r1 - 0x473;
    }
    if (!v10) {
        r6_11 = reinterpret_cast<uint32_t>(0x1c800 - r5_20);
    }
    if (v10) {
        __asm__("stclvs p7, c6, [r5], #-0x194");
    }
    if (c6) {
        r6_11 = (r5_21 >> reinterpret_cast<uint32_t>(__return_address()) | r5_22 << 32 - reinterpret_cast<uint32_t>(__return_address())) - r7_15;
    }
    if (c6) {
        __asm__("cdphs p5, #7, c7, c3, c1, #3");
    }
    if (z8) {
    }
    if (!v10) {
        __asm__("ldrbtvc r6, [r5], #-0x14c");
    }
    if (v10) {
        *reinterpret_cast<signed char*>(r1 - 0x473) = static_cast<signed char>(r7_15);
        r1 = r1 - 0x473;
    }
    if (!v10) {
        r6_11 = reinterpret_cast<uint32_t>(0x1c800 - r5_23);
    }
    if (v10) {
        __asm__("stclvs p7, c6, [r5], #-0x194");
    }
    if (c6) {
        r6_11 = (r5_24 >> reinterpret_cast<uint32_t>(__return_address()) | r5_25 << 32 - reinterpret_cast<uint32_t>(__return_address())) - r7_15;
    }
    if (z8) {
        r6_11 = reinterpret_cast<uint32_t>(__return_address()) ^ (r1 >> 28 | r1 << 4);
    }
    if (!v10) {
        __asm__("ldrbtvc r6, [r5], #-0x14c");
    }
    if (v10) {
        *reinterpret_cast<signed char*>(r1 - 0x473) = static_cast<signed char>(r7_15);
        r1 = r1 - 0x473;
    }
    if (c6) {
        r6_11 = (r2 >> r11_26 | r2 << reinterpret_cast<uint32_t>(32 - r11_27)) - r5_28;
    }
    if (!v10) {
        r6_11 = 0x1d800000 - r2;
        z8 = r6_11 == 0;
        c6 = __intrinsic();
        v10 = __intrinsic();
    }
    if (v10) {
        *reinterpret_cast<signed char*>(r7_15 - 0xe69) = static_cast<signed char>(r6_11);
        r7_15 = r7_15 - 0xe69;
    }
    if (z8) {
        r7_15 = reinterpret_cast<uint32_t>(__return_address()) ^ (r2 >> r4_29 | r2 << reinterpret_cast<uint32_t>(32 - r4_30));
    }
    if (!v10) {
        __asm__("ldrbtvc r6, [r5], #-0x14c");
    }
    if (v10) {
        *reinterpret_cast<signed char*>(r1 - 0x473) = static_cast<signed char>(r7_15);
    }
    if (c6) {
    }
}

void fun_116c4(uint32_t r0, int32_t r1, uint32_t r2, uint32_t r3) {
    int1_t v5;
    int1_t z6;
    int1_t v7;
    int1_t c8;
    int1_t z9;
    int1_t v10;
    uint32_t r6_11;
    int32_t r5_12;

    if (!v5) {
        __asm__("ldrbtvc r6, [r2], #-0x573");
    }
    if (z6) {
        r0 = 0;
    }
    if (v7) {
        c8 = r2 < reinterpret_cast<uint32_t>(-(reinterpret_cast<int32_t>(r3) >> r0));
        z9 = r2 == -(reinterpret_cast<int32_t>(r3) >> r0);
        v10 = __intrinsic();
    }
    if (z9) {
        r6_11 = (r3 >> 16 | r3 << 16) - r5_12;
    }
    if (v10) {
        c8 = r2 < reinterpret_cast<uint32_t>(-(reinterpret_cast<int32_t>(r3) >> r0));
        z9 = r2 == -(reinterpret_cast<int32_t>(r3) >> r0);
        v10 = __intrinsic();
    }
    if (!v10) {
        *reinterpret_cast<signed char*>(r1 - 0x863) = static_cast<signed char>(r6_11);
        r1 = r1 - 0x863;
    }
    if (v10) {
        __asm__("stmdavs r1!, {r0, r1, r4, r5, r6, r8, sb, sl, ip, sp, lr} ^");
    }
    if (!v10) {
        *reinterpret_cast<signed char*>(r1 - 0x6c) = static_cast<signed char>(r2);
        r1 = r1 - 0x6c;
    }
    if (z9) {
        r2 = r0 & (r3 >> reinterpret_cast<int32_t>(__return_address()) | r3 << reinterpret_cast<uint32_t>(32 - reinterpret_cast<int32_t>(__return_address())));
    }
    if (v10) {
        c8 = r2 < reinterpret_cast<uint32_t>(-(reinterpret_cast<int32_t>(r3) >> r0));
        z9 = r2 == -(reinterpret_cast<int32_t>(r3) >> r0);
        v10 = __intrinsic();
    }
    if (!v10) {
        *reinterpret_cast<signed char*>(r1 - 0x863) = static_cast<signed char>(r6_11);
    }
    if (v10) {
        __asm__("stmdavs r1!, {r0, r1, r4, r5, r6, r8, sb, sl, ip, sp, lr} ^");
    }
    if (v10) {
        __asm__("cdpvs p0, #6, c2, c1, c12, #3");
    }
    if (z9) {
        r0 = 0;
    }
    if (v10) {
        c8 = r2 < reinterpret_cast<uint32_t>(-(reinterpret_cast<int32_t>(r3) >> r0));
        z9 = r2 == -(reinterpret_cast<int32_t>(r3) >> r0);
        v10 = __intrinsic();
    }
    if (c8) {
    }
    if (!v10) {
        __asm__("strbtvc r7, [lr], #-0x572");
    }
    if (z9) {
    }
    if (v10) {
        c8 = r2 < reinterpret_cast<uint32_t>(-(reinterpret_cast<int32_t>(r3) >> r0));
        z9 = r2 == -(reinterpret_cast<int32_t>(r3) >> r0);
        v10 = __intrinsic();
    }
    if (c8) {
    }
    if (v10) {
        __asm__("stmdavs r3!, {r3, r5, r6, r8, sb, sl, fp, sp, lr} ^");
    }
    if (z9) {
    }
    if (!v10) {
        __asm__("ldrbtvc r6, [r3], #-0x154");
    }
}

void fun_11724(int32_t r0) {
    int1_t z2;
    int1_t v3;
    int1_t v4;
    int1_t v5;
    int1_t v6;
    int1_t v7;
    int32_t r12_8;
    int32_t r12_9;
    int32_t r7_10;

    if (z2) {
    }
    if (!v3) {
        __asm__("ldrbtvc r6, [r3], #-0x154");
    }
    if (v4) {
        __asm__("svcvs #0x746e65");
    }
    if (v5) {
        __asm__("cdpvs p5, #6, c6, c9, c14, #3");
    }
    if (v6) {
        __asm__("stclvs p4, c7, [r5], #-0x1cc");
    }
    if (v7) {
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(__return_address()) + r12_8) >> 10 | reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(__return_address()) + r12_9) << 22) = static_cast<signed char>(r7_10);
    }
}

void fun_11740() {
    int1_t z1;
    uint32_t r7_2;
    uint32_t r5_3;
    int32_t r3_4;
    uint32_t r5_5;
    int32_t r3_6;
    int1_t v7;
    int1_t v8;
    int1_t v9;
    int1_t v10;
    int1_t v11;
    int32_t r12_12;
    int32_t r12_13;

    if (z1) {
        r7_2 = reinterpret_cast<uint32_t>(__return_address()) ^ (r5_3 >> r3_4 | r5_5 << reinterpret_cast<uint32_t>(32 - r3_6));
    }
    if (!v7) {
        __asm__("ldrbtvc r6, [r3], #-0x154");
    }
    if (v8) {
        __asm__("svcvs #0x746e65");
    }
    if (v9) {
        __asm__("cdpvs p5, #6, c6, c9, c14, #3");
    }
    if (v10) {
        __asm__("stclvs p4, c7, [r5], #-0x1cc");
    }
    if (v11) {
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(__return_address()) + r12_12 >> 10 | reinterpret_cast<uint32_t>(__return_address()) + r12_13 << 22) = static_cast<signed char>(r7_2);
    }
}

void fun_1175c(int32_t r0) {
    int1_t z2;
    int1_t v3;
    int1_t v4;
    int1_t c5;
    int1_t c6;
    int1_t z7;
    int1_t v8;

    if (z2) {
    }
    if (!v3) {
        __asm__("ldrbtvc r6, [r3], #-0x154");
    }
    if (v4) {
        __asm__("svcvs #0x746e65");
    }
    if (c5) {
    }
    if (c6) {
        __asm__("cdphs p5, #7, c7, c3, c1, #3");
    }
    if (z7) {
    }
    if (!v8) {
        __asm__("ldrbtvc r6, [r3], #-0x154");
    }
}

void fun_11780(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t v4;
    int1_t v5;
    int1_t c6;
    int1_t z7;
    int1_t v8;

    if (z3) {
    }
    if (!v4) {
        __asm__("ldrbtvc r6, [r3], #-0x154");
    }
    if (v5) {
        __asm__("svcvs #0x746e65");
    }
    if (c6) {
    }
    if (z7) {
    }
    if (!v8) {
        __asm__("ldrbtvc r6, [r3], #-0x154");
    }
}

signed char g1144b = 32;

signed char g11457 = 0;

signed char g11477 = 0x73;

signed char g11497 = 32;

signed char g114ab = 32;

signed char g114bb = 0x78;

signed char g114cb = 0;

void fun_117a0(uint32_t r0, uint32_t r1) {
    int1_t z3;
    uint1_t c4;
    int1_t v5;
    int1_t v6;
    int32_t r7_7;
    int1_t z8;
    uint32_t r6_9;
    int32_t r3_10;
    int1_t z11;
    int1_t c12;
    int1_t v13;
    int32_t r7_14;
    int32_t r3_15;
    int32_t r3_16;
    int32_t r3_17;
    int32_t r12_18;
    int32_t r12_19;
    int32_t r12_20;
    uint32_t r5_21;
    int32_t r5_22;
    int32_t r7_23;
    int32_t r7_24;
    int32_t r7_25;
    uint32_t r7_26;

    if (z3) {
        r0 = r0 & static_cast<uint32_t>(static_cast<uint33_t>(reinterpret_cast<uint32_t>(__return_address())) | static_cast<uint33_t>(c4) << 1);
    }
    if (v5) {
        __asm__("strbtvs r6, [ip], -r8, asr #18");
    }
    if (!v6) {
        g1144b = static_cast<signed char>(r7_7);
    }
    if (z8) {
        r6_9 = (reinterpret_cast<uint32_t>(__return_address()) >> 8 | reinterpret_cast<uint32_t>(__return_address()) << 24) - r3_10;
        z11 = r6_9 == 0;
        c12 = __intrinsic();
        v13 = __intrinsic();
    }
    if (v13) {
        __asm__("strbtvs r6, [ip], -r8, asr #18");
    }
    if (!v13) {
        g11457 = static_cast<signed char>(r7_14);
    }
    if (v13) {
        r6_9 = *reinterpret_cast<unsigned char*>(r3_15 - 0x46e);
        r3_16 = r3_17 - 0x46e;
    }
    if (!v13) {
        __asm__("ldrbtvc r6, [r3], #-0xe69");
    }
    if (!v13) {
        *reinterpret_cast<signed char*>(r12_18 - 0xc65) = static_cast<signed char>(r6_9);
        r12_19 = r12_20 - 0xc65;
    }
    if (v13) {
        __asm__("cdpvs p7, #6, c6, c5, c14, #3");
    }
    if (!v13) {
        c12 = r5_21 < reinterpret_cast<uint32_t>(-8);
        z11 = r5_22 == -8;
        v13 = __intrinsic();
    }
    if (z11) {
        r0 = 0;
    }
    if (v13) {
        __asm__("strbtvs r6, [ip], -r8, asr #18");
    }
    if (!v13) {
        g11477 = static_cast<signed char>(r7_23);
    }
    if (v13) {
        r6_9 = *reinterpret_cast<unsigned char*>(r3_16 - 0x46e);
        r3_16 = r3_16 - 0x46e;
    }
    if (!v13) {
        __asm__("ldrbtvc r6, [r3], #-0xe69");
    }
    if (!v13) {
        *reinterpret_cast<signed char*>(r12_19 - 0xc65) = static_cast<signed char>(r6_9);
    }
    if (v13) {
        __asm__("cdpvs p7, #6, c6, c5, c14, #3");
    }
    if (c12) {
        __asm__("cdphs p1, #6, c6, c14, c0, #1");
    }
    if (z11) {
        r0 = r0 & r0;
    }
    if (v13) {
        __asm__("strbtvs r6, [ip], -r8, asr #18");
    }
    if (!v13) {
        g11497 = static_cast<signed char>(r7_24);
    }
    if (c12) {
        r6_9 = (reinterpret_cast<uint32_t>(__return_address()) >> 8 | reinterpret_cast<uint32_t>(__return_address()) << 24) - r3_16;
        z11 = r6_9 == 0;
        c12 = __intrinsic();
        v13 = __intrinsic();
    }
    if (c12) {
        __asm__("cdphs p5, #7, c7, c3, c1, #3");
    }
    if (z11) {
        r0 = r0 & r0;
    }
    if (v13) {
        __asm__("strbtvs r6, [ip], -r8, asr #18");
    }
    if (!v13) {
        g114ab = static_cast<signed char>(r7_25);
    }
    if (c12) {
        r6_9 = (reinterpret_cast<uint32_t>(__return_address()) >> 8 | reinterpret_cast<uint32_t>(__return_address()) << 24) - r3_16;
        z11 = r6_9 == 0;
        c12 = __intrinsic();
        v13 = __intrinsic();
    }
    if (z11) {
        r7_26 = (r1 >> 10 | r1 << 22) - r3_16;
        z11 = r7_26 == 0;
        c12 = __intrinsic();
        v13 = __intrinsic();
    }
    if (v13) {
        __asm__("strbtvs r6, [ip], -r8, asr #18");
    }
    if (!v13) {
        g114bb = static_cast<signed char>(r7_26);
    }
    if (c12) {
        r6_9 = (reinterpret_cast<uint32_t>(__return_address()) >> 8 | reinterpret_cast<uint32_t>(__return_address()) << 24) - r3_16;
        z11 = r6_9 == 0;
        c12 = __intrinsic();
        v13 = __intrinsic();
    }
    if (z11) {
        r6_9 = reinterpret_cast<uint32_t>(__return_address()) ^ (r1 >> 28 | r1 << 4);
    }
    if (v13) {
        __asm__("strbtvs r6, [ip], -r8, asr #18");
    }
    if (!v13) {
        g114cb = static_cast<signed char>(r7_26);
    }
    if (c12) {
        r6_9 = (reinterpret_cast<uint32_t>(__return_address()) >> 8 | reinterpret_cast<uint32_t>(__return_address()) << 24) - r3_16;
        z11 = r6_9 == 0;
        v13 = __intrinsic();
    }
    if (z11) {
        r6_9 = r0 & (r1 >> 28 | r1 << 4);
    }
    if (v13) {
        __asm__("svcvs #0x726353");
    }
    if (v13) {
        *reinterpret_cast<signed char*>(r7_26 - 0xc6c) = static_cast<signed char>(r6_9);
    }
}

void fun_11840(int32_t r0, int32_t r1, int32_t r2, int32_t r3) {
    int1_t v5;
    void* r4_6;
    void* r4_7;
    void* r4_8;
    int32_t r5_9;
    void* r4_10;
    int32_t r6_11;
    void* r4_12;
    int32_t r9_13;
    void* r4_14;
    int32_t r10_15;
    void* r4_16;
    int32_t r11_17;
    void* r4_18;
    int32_t* r4_19;
    int1_t v20;
    void* r5_21;
    void* r5_22;
    void* r5_23;
    void* r5_24;
    int32_t r5_25;
    void* r5_26;
    int32_t r6_27;
    void* r5_28;
    int32_t r8_29;
    void* r5_30;
    int32_t r9_31;
    void* r5_32;
    int32_t r11_33;
    void* r5_34;
    int32_t* r5_35;
    int1_t z36;
    int1_t v37;
    int1_t v38;
    int32_t r7_39;
    int32_t r6_40;

    if (v5) {
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_6) - 32) = r0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_7) - 28) = r3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_8) - 24) = r5_9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_10) - 20) = r6_11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_12) - 16) = r9_13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_14) - 12) = r10_15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_16) - 8) = r11_17;
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(r4_18) - 4) = __zero_stack_offset();
        *r4_19 = reinterpret_cast<int32_t>(__return_address());
    }
    if (v20) {
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_21) - 36) = r0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_22) - 32) = r1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_23) - 28) = r2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_24) - 24) = r5_25;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_26) - 20) = r6_27;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_28) - 16) = r8_29;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_30) - 12) = r9_31;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_32) - 8) = r11_33;
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(r5_34) - 4) = __zero_stack_offset();
        *r5_35 = reinterpret_cast<int32_t>(__return_address());
    }
    if (z36) {
    }
    if (v37) {
        __asm__("svcvs #0x726353");
    }
    if (v38) {
        *reinterpret_cast<signed char*>(r7_39 - 0xc6c) = static_cast<signed char>(r6_40);
    }
}

void fun_11858(int32_t r0, int32_t r1, int32_t r2, int32_t r3) {
    int1_t v5;
    void* r4_6;
    void* r4_7;
    void* r4_8;
    int32_t r5_9;
    void* r4_10;
    int32_t r6_11;
    void* r4_12;
    int32_t r9_13;
    void* r4_14;
    int32_t r10_15;
    void* r4_16;
    int32_t r11_17;
    void* r4_18;
    int32_t* r4_19;
    int1_t v20;
    void* r5_21;
    void* r5_22;
    void* r5_23;
    void* r5_24;
    int32_t r5_25;
    void* r5_26;
    int32_t r6_27;
    void* r5_28;
    int32_t r8_29;
    void* r5_30;
    int32_t r9_31;
    void* r5_32;
    int32_t r11_33;
    void* r5_34;
    int32_t* r5_35;
    int1_t v36;
    int1_t v37;
    int32_t r12_38;
    int32_t r6_39;

    if (v5) {
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_6) - 32) = r0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_7) - 28) = r3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_8) - 24) = r5_9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_10) - 20) = r6_11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_12) - 16) = r9_13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_14) - 12) = r10_15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_16) - 8) = r11_17;
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(r4_18) - 4) = __zero_stack_offset();
        *r4_19 = reinterpret_cast<int32_t>(__return_address());
    }
    if (v20) {
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_21) - 36) = r0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_22) - 32) = r1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_23) - 28) = r2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_24) - 24) = r5_25;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_26) - 20) = r6_27;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_28) - 16) = r8_29;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_30) - 12) = r9_31;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_32) - 8) = r11_33;
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(r5_34) - 4) = __zero_stack_offset();
        *r5_35 = reinterpret_cast<int32_t>(__return_address());
    }
    if (v36) {
    }
    if (!v37) {
        *reinterpret_cast<signed char*>(r12_38 - 0x567) = static_cast<signed char>(r6_39);
    }
}

void fun_1186c() {
    int1_t z1;
    uint32_t r7_2;
    uint32_t r5_3;
    int32_t r3_4;
    uint32_t r5_5;
    int32_t r3_6;
    int1_t v7;
    int1_t v8;
    int32_t r6_9;

    if (z1) {
        r7_2 = reinterpret_cast<uint32_t>(__return_address()) ^ (r5_3 >> r3_4 | r5_5 << reinterpret_cast<uint32_t>(32 - r3_6));
    }
    if (v7) {
        __asm__("svcvs #0x726353");
    }
    if (v8) {
        *reinterpret_cast<signed char*>(r7_2 - 0xc6c) = static_cast<signed char>(r6_9);
    }
}

void fun_1187c(int32_t r0, int32_t r1, int32_t r2, int32_t r3) {
    int1_t v5;
    void* r4_6;
    void* r4_7;
    void* r4_8;
    int32_t r5_9;
    void* r4_10;
    int32_t r6_11;
    void* r4_12;
    int32_t r9_13;
    void* r4_14;
    int32_t r10_15;
    void* r4_16;
    int32_t r11_17;
    void* r4_18;
    int32_t* r4_19;
    int1_t v20;
    void* r5_21;
    void* r5_22;
    void* r5_23;
    void* r5_24;
    int32_t r5_25;
    void* r5_26;
    int32_t r6_27;
    void* r5_28;
    int32_t r8_29;
    void* r5_30;
    int32_t r9_31;
    void* r5_32;
    int32_t r11_33;
    void* r5_34;
    int32_t* r5_35;
    int1_t v36;
    int1_t v37;
    int32_t r12_38;
    int32_t r6_39;

    if (v5) {
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_6) - 32) = r0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_7) - 28) = r3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_8) - 24) = r5_9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_10) - 20) = r6_11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_12) - 16) = r9_13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_14) - 12) = r10_15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_16) - 8) = r11_17;
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(r4_18) - 4) = __zero_stack_offset();
        *r4_19 = reinterpret_cast<int32_t>(__return_address());
    }
    if (v20) {
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_21) - 36) = r0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_22) - 32) = r1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_23) - 28) = r2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_24) - 24) = r5_25;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_26) - 20) = r6_27;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_28) - 16) = r8_29;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_30) - 12) = r9_31;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_32) - 8) = r11_33;
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(r5_34) - 4) = __zero_stack_offset();
        *r5_35 = reinterpret_cast<int32_t>(__return_address());
    }
    if (v36) {
    }
    if (!v37) {
        *reinterpret_cast<signed char*>(r12_38 - 0x567) = static_cast<signed char>(r6_39);
    }
}

void fun_11890(int32_t r0) {
    int1_t z2;
    int1_t v3;
    int1_t v4;
    int32_t r7_5;
    int32_t r6_6;

    if (z2) {
    }
    if (v3) {
        __asm__("svcvs #0x726353");
    }
    if (v4) {
        *reinterpret_cast<signed char*>(r7_5 - 0xc6c) = static_cast<signed char>(r6_6);
    }
}

void fun_118a0(int32_t r0, int32_t r1, int32_t r2, int32_t r3) {
    int1_t v5;
    void* r4_6;
    void* r4_7;
    void* r4_8;
    int32_t r5_9;
    void* r4_10;
    int32_t r6_11;
    void* r4_12;
    int32_t r9_13;
    void* r4_14;
    int32_t r10_15;
    void* r4_16;
    int32_t r11_17;
    void* r4_18;
    int32_t* r4_19;
    int1_t v20;
    void* r5_21;
    void* r5_22;
    void* r5_23;
    void* r5_24;
    int32_t r5_25;
    void* r5_26;
    int32_t r6_27;
    void* r5_28;
    int32_t r8_29;
    void* r5_30;
    int32_t r9_31;
    void* r5_32;
    int32_t r11_33;
    void* r5_34;
    int32_t* r5_35;
    int1_t v36;
    int32_t r6_37;
    int32_t r6_38;
    int1_t v39;
    int1_t v40;
    int1_t z41;
    int1_t v42;
    int1_t v43;
    int32_t r7_44;

    if (v5) {
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_6) - 32) = r0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_7) - 28) = r3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_8) - 24) = r5_9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_10) - 20) = r6_11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_12) - 16) = r9_13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_14) - 12) = r10_15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_16) - 8) = r11_17;
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(r4_18) - 4) = __zero_stack_offset();
        *r4_19 = reinterpret_cast<int32_t>(__return_address());
    }
    if (v20) {
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_21) - 36) = r0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_22) - 32) = r1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_23) - 28) = r2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_24) - 24) = r5_25;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_26) - 20) = r6_27;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_28) - 16) = r8_29;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_30) - 12) = r9_31;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_32) - 8) = r11_33;
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(r5_34) - 4) = __zero_stack_offset();
        *r5_35 = reinterpret_cast<int32_t>(__return_address());
    }
    if (v36) {
        r6_37 = r6_38 - 0x74;
    }
    if (v39) {
        __asm__("mcrvs p2, #3, r7, c9, c2, #3");
    }
    if (!v40) {
        __asm__("ldrbtvc r6, [r2], #-0x567");
    }
    if (z41) {
    }
    if (v42) {
        __asm__("svcvs #0x726353");
    }
    if (v43) {
        *reinterpret_cast<signed char*>(r7_44 - 0xc6c) = static_cast<signed char>(r6_37);
    }
}

void fun_118c4(int32_t r0, int32_t r1, int32_t r2, int32_t r3) {
    int1_t v5;
    void* r4_6;
    void* r4_7;
    void* r4_8;
    int32_t r5_9;
    void* r4_10;
    int32_t r6_11;
    void* r4_12;
    int32_t r9_13;
    void* r4_14;
    int32_t r10_15;
    void* r4_16;
    int32_t r11_17;
    void* r4_18;
    int32_t* r4_19;
    int1_t v20;
    void* r5_21;
    void* r5_22;
    void* r5_23;
    void* r5_24;
    int32_t r5_25;
    void* r5_26;
    int32_t r6_27;
    void* r5_28;
    int32_t r8_29;
    void* r5_30;
    int32_t r9_31;
    void* r5_32;
    int32_t r11_33;
    void* r5_34;
    int32_t* r5_35;
    int32_t r5_36;
    int32_t r5_37;
    int1_t v38;
    int1_t v39;
    int32_t r6_40;
    int1_t z41;
    int1_t v42;
    int1_t v43;
    int32_t r7_44;

    if (v5) {
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_6) - 32) = r0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_7) - 28) = r3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_8) - 24) = r5_9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_10) - 20) = r6_11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_12) - 16) = r9_13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_14) - 12) = r10_15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_16) - 8) = r11_17;
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(r4_18) - 4) = __zero_stack_offset();
        *r4_19 = reinterpret_cast<int32_t>(__return_address());
    }
    if (v20) {
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_21) - 36) = r0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_22) - 32) = r1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_23) - 28) = r2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_24) - 24) = r5_25;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_26) - 20) = r6_27;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_28) - 16) = r8_29;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_30) - 12) = r9_31;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_32) - 8) = r11_33;
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(r5_34) - 4) = __zero_stack_offset();
        *r5_35 = reinterpret_cast<int32_t>(__return_address());
        r5_36 = r5_37 - 40;
    }
    if (v38) {
        __asm__("svcvs #0x762074");
    }
    if (!v39) {
        r6_40 = 0x720000 - r5_36;
    }
    if (z41) {
    }
    if (v42) {
        __asm__("svcvs #0x726353");
    }
    if (v43) {
        *reinterpret_cast<signed char*>(r7_44 - 0xc6c) = static_cast<signed char>(r6_40);
    }
}

void fun_118e4(int32_t r0, int32_t r1, int32_t r2, int32_t r3) {
    int1_t v5;
    void* r4_6;
    void* r4_7;
    void* r4_8;
    int32_t r5_9;
    void* r4_10;
    int32_t r6_11;
    void* r4_12;
    int32_t r9_13;
    void* r4_14;
    int32_t r10_15;
    void* r4_16;
    int32_t r11_17;
    void* r4_18;
    int32_t* r4_19;
    int1_t v20;
    void* r5_21;
    void* r5_22;
    void* r5_23;
    void* r5_24;
    int32_t r5_25;
    void* r5_26;
    int32_t r6_27;
    void* r5_28;
    int32_t r8_29;
    void* r5_30;
    int32_t r9_31;
    void* r5_32;
    int32_t r11_33;
    void* r5_34;
    int32_t* r5_35;

    if (v5) {
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_6) - 32) = r0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_7) - 28) = r3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_8) - 24) = r5_9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_10) - 20) = r6_11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_12) - 16) = r9_13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_14) - 12) = r10_15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_16) - 8) = r11_17;
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(r4_18) - 4) = __zero_stack_offset();
        *r4_19 = reinterpret_cast<int32_t>(__return_address());
    }
    if (v20) {
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_21) - 36) = r0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_22) - 32) = r1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_23) - 28) = r2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_24) - 24) = r5_25;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_26) - 20) = r6_27;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_28) - 16) = r8_29;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_30) - 12) = r9_31;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_32) - 8) = r11_33;
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(r5_34) - 4) = __zero_stack_offset();
        *r5_35 = reinterpret_cast<int32_t>(__return_address());
    }
}

void fun_118f0(int32_t r0) {
    int1_t v2;
    int32_t r8_3;
    int32_t r6_4;
    int1_t z5;
    int1_t v6;
    int1_t v7;
    int32_t r7_8;
    int32_t r6_9;

    if (v2) {
        *reinterpret_cast<signed char*>(r8_3 - 0x863) = static_cast<signed char>(r6_4);
    }
    if (z5) {
    }
    if (v6) {
        __asm__("svcvs #0x726353");
    }
    if (v7) {
        *reinterpret_cast<signed char*>(r7_8 - 0xc6c) = static_cast<signed char>(r6_9);
    }
}

void fun_11904(int32_t r0, int32_t r1, uint32_t r2, int32_t r3) {
    int1_t v5;
    void* r4_6;
    void* r4_7;
    void* r4_8;
    int32_t r5_9;
    void* r4_10;
    int32_t r6_11;
    void* r4_12;
    int32_t r9_13;
    void* r4_14;
    int32_t r10_15;
    void* r4_16;
    int32_t r11_17;
    void* r4_18;
    uint32_t* r4_19;
    int32_t r4_20;
    int32_t r4_21;
    int1_t v22;
    void* r5_23;
    void* r5_24;
    void* r5_25;
    void* r5_26;
    int32_t r5_27;
    void* r5_28;
    int32_t r6_29;
    void* r5_30;
    int32_t r8_31;
    void* r5_32;
    int32_t r9_33;
    void* r5_34;
    int32_t r11_35;
    void* r5_36;
    uint32_t* r5_37;
    int1_t v38;
    int32_t r6_39;
    int32_t r6_40;
    int32_t r6_41;
    int1_t v42;
    int1_t v43;
    uint32_t r7_44;
    int1_t z45;
    int1_t v46;
    int32_t r9_47;
    int1_t v48;
    int1_t v49;
    int1_t v50;
    int1_t v51;

    if (v5) {
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_6) - 32) = r0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_7) - 28) = r3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_8) - 24) = r5_9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_10) - 20) = r6_11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_12) - 16) = r9_13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_14) - 12) = r10_15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_16) - 8) = r11_17;
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(r4_18) - 4) = __zero_stack_offset();
        *r4_19 = reinterpret_cast<uint32_t>(__return_address());
        r4_20 = r4_21 - 36;
    }
    if (v22) {
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_23) - 36) = r0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_24) - 32) = r1;
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(r5_25) - 28) = r2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_26) - 24) = r5_27;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_28) - 20) = r6_29;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_30) - 16) = r8_31;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_32) - 12) = r9_33;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_34) - 8) = r11_35;
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(r5_36) - 4) = __zero_stack_offset();
        *r5_37 = reinterpret_cast<uint32_t>(__return_address());
    }
    if (v38) {
        r2 = *reinterpret_cast<unsigned char*>(r6_39 - 0x74);
        r6_40 = r6_41 - 0x74;
    }
    if (v42) {
        __asm__("svcvs #0x726772");
    }
    if (v43) {
        r7_44 = *reinterpret_cast<unsigned char*>(r3 - 0x365);
    }
    if (z45) {
        r7_44 = reinterpret_cast<uint32_t>(__return_address()) ^ (r2 >> r4_20 | r2 << reinterpret_cast<uint32_t>(32 - r4_20));
    }
    if (v46) {
        *reinterpret_cast<signed char*>(r9_47 - 83) = static_cast<signed char>(r7_44);
    }
    if (v48) {
        *reinterpret_cast<signed char*>(r2 - 0x6c) = static_cast<signed char>(r2);
    }
    if (v49) {
        *reinterpret_cast<signed char*>(r4_20 - 0xe65) = static_cast<signed char>(r6_40);
    }
    if (v50) {
        __asm__("cdpvs p0, #7, c2, c5, c14, #3");
    }
    if (v51) {
        __asm__("cdpvs p0, #6, c2, c9, c4, #3");
    }
}

void fun_11934(int32_t* r0, int32_t r1) {
    int32_t lr3;
    int1_t v4;
    int1_t v5;
    uint32_t r6_6;
    int32_t r5_7;
    uint32_t r5_8;
    int32_t r5_9;
    int1_t z10;
    int1_t v11;
    int1_t n12;
    uint1_t c13;
    int1_t z14;
    int1_t v15;
    int32_t r2_16;
    int32_t r3_17;
    int32_t r12_18;
    int32_t r9_19;
    int32_t r7_20;
    int32_t r7_21;
    int32_t r7_22;

    lr3 = reinterpret_cast<int32_t>(__return_address());
    if (v4) {
        __asm__("ldclvs p0, c7, [r4, #-0x1d4]!");
    }
    if (v5) {
        r6_6 = *reinterpret_cast<unsigned char*>(r5_7 - 0xe65);
        r5_8 = r5_9 + 0xfffff19b;
    }
    if (z10) {
        r0 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(" ausm Spielemenue - Ab ins Hauptmenue.") >> reinterpret_cast<uint32_t>(r0));
    }
    if (!v11) {
        n12 = __intrinsic();
        c13 = reinterpret_cast<uint1_t>(r5_8 < reinterpret_cast<uint32_t>(-0x80000014));
        z14 = r5_8 == -0x80000014;
        v15 = __intrinsic();
    }
    if (!v15) {
        n12 = __intrinsic();
        c13 = reinterpret_cast<uint1_t>(r5_8 < reinterpret_cast<uint32_t>(-8));
        z14 = r5_8 == -8;
        v15 = __intrinsic();
    }
    if (!v15) {
        r2_16 = r3_17 - static_cast<int32_t>(static_cast<uint33_t>(reinterpret_cast<uint32_t>(__zero_stack_offset())) | static_cast<uint33_t>(c13) << 1);
        n12 = r2_16 < 0;
        z14 = r2_16 == 0;
        c13 = __intrinsic();
        v15 = __intrinsic();
    }
    if (v15) {
        *reinterpret_cast<signed char*>(r12_18 - 0x569) = static_cast<signed char>(r6_6);
    }
    if (!v15) {
        *reinterpret_cast<signed char*>(lr3 - 0x56d) = static_cast<signed char>(r6_6);
        lr3 = lr3 - 0x56d;
    }
    if (c13) {
    }
    if (v15) {
        *reinterpret_cast<int32_t**>(r0 - 4) = r0;
        *reinterpret_cast<uint32_t*>(r0 - 3) = r6_6;
        *(r0 - 2) = r9_19;
        *reinterpret_cast<void**>(r0 - 1) = __zero_stack_offset();
        *r0 = lr3;
    }
    if (n12) {
        __asm__("stmdami r0!, {r1, r2, r3, r5, r6, r8, sb, ip, sp, lr}");
    }
    if (!v15) {
        __asm__("ldrbtvc r7, [r0], #-0x561");
    }
    if (!v15) {
        *reinterpret_cast<signed char*>(lr3 - 0x56d) = static_cast<signed char>(r6_6);
    }
    if (z14) {
    }
    if (c13) {
        __asm__("cdphs p0, #7, c7, c0, c1, #3");
    }
    if (z14) {
    }
    if (v15) {
        __asm__("svcvs #0x6e202d");
    }
    if (v15) {
        __asm__("cdpvs p12, #6, c6, c1, c0, #1");
    }
    if (v15) {
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r1 + r7_20) >> 10 | reinterpret_cast<uint32_t>(r1 + r7_21) << 22) = static_cast<signed char>(r7_22);
    }
    if (v15) {
        __asm__("strtvs r7, [r0], -r5, ror #6");
    }
    if (v15) {
        __asm__("strbtvs r7, [lr], #-0x56f");
    }
    if (v15) {
        __asm__("stcvs p13, c2, [r0, #-0x80]!");
    }
    if (c13) {
    }
    if (v15) {
    }
}

void fun_1199c(uint32_t r0) {
    int1_t v2;
    int1_t v3;
    int32_t r7_4;
    int1_t v5;
    int1_t z6;
    uint32_t r2_7;
    uint32_t r3_8;
    uint32_t r3_9;
    int1_t v10;
    int1_t z11;
    int1_t c12;
    int1_t v13;
    uint32_t r3_14;
    int32_t r3_15;
    int32_t r12_16;

    if (!v2) {
        __asm__("strtvc r6, [lr], #-0x76e");
    }
    if (v3) {
        *reinterpret_cast<int32_t*>(r0 - 0x478) = r7_4;
        r0 = r0 - 0x478;
    }
    if (!v5) {
        __asm__("ldrbtvc r6, [r3], #-0x978");
    }
    if (z6) {
        r2_7 = r0 & (r3_8 >> reinterpret_cast<int32_t>(__return_address()) | r3_9 << reinterpret_cast<uint32_t>(32 - reinterpret_cast<int32_t>(__return_address())));
    }
    if (!v10) {
        z11 = 0x466d - r0 == 0;
        c12 = __intrinsic();
        v13 = __intrinsic();
    }
    if (v13) {
        __asm__("strbtvs r6, [ip], -lr, lsr #10");
    }
    if (z11) {
    }
    if (z11) {
    }
    if (v13) {
        __asm__("strbtvs r6, [lr], -pc, lsr #18");
    }
    if (!v13) {
        __asm__("ldmdavc r4!, {r0, r1, r2, r3, r5, r6, sb, sl, fp, sp} ^");
    }
    if (z11) {
    }
    if (v13) {
        c12 = r3_14 < reinterpret_cast<uint32_t>(-0x19000000);
        z11 = r3_15 == -0x19000000;
        v13 = __intrinsic();
    }
    if (!v13) {
        __asm__("ldrbtvc r6, [r0], #-0x972");
    }
    if (z11) {
    }
    if (v13) {
        *reinterpret_cast<signed char*>(r12_16 - 45) = static_cast<signed char>(r2_7);
    }
    if (!v13) {
        __asm__("strtvc r7, [r0], #-0x373");
    }
    if (c12) {
    }
}

int32_t fun_18e9fac();

void fun_119e4(int32_t r0, uint32_t* r1, int32_t r2, uint32_t r3) {
    int1_t v5;
    int1_t c6;
    uint32_t r5_7;
    int1_t z8;
    int32_t r5_9;
    int1_t v10;
    uint32_t r6_11;
    uint32_t r7_12;
    uint32_t r7_13;
    int32_t r5_14;
    int32_t r9_15;
    int32_t r10_16;
    int32_t r12_17;
    uint32_t r4_18;
    uint32_t r4_19;
    int32_t r9_20;
    int32_t r4_21;
    uint32_t r4_22;
    int32_t r4_23;

    if (v5) {
        c6 = r5_7 < -(reinterpret_cast<uint32_t>(__return_address()) >> 14 | reinterpret_cast<uint32_t>(__return_address()) << 18);
        z8 = r5_9 == -(reinterpret_cast<uint32_t>(__return_address()) >> 14 | reinterpret_cast<uint32_t>(__return_address()) << 18);
        v10 = __intrinsic();
    }
    if (c6) {
        r6_11 = (r7_12 >> 10 | r7_13 << 22) - r3;
        z8 = r6_11 == 0;
        c6 = __intrinsic();
        v10 = __intrinsic();
    }
    if (v10) {
        *reinterpret_cast<int32_t*>(r1 - 7) = r0;
        *reinterpret_cast<int32_t*>(r1 - 6) = r5_14;
        *(r1 - 5) = r6_11;
        *reinterpret_cast<int32_t*>(r1 - 4) = r9_15;
        *reinterpret_cast<int32_t*>(r1 - 3) = r10_16;
        *reinterpret_cast<int32_t*>(r1 - 2) = r12_17;
        *reinterpret_cast<void**>(r1 - 1) = __zero_stack_offset();
        *r1 = reinterpret_cast<uint32_t>(__return_address());
    }
    if (v10) {
        __asm__("stclvs p1, c6, [r2], #-0x1b0");
    }
    if (v10) {
        __asm__("svcvs #0x732065");
    }
    if (v10) {
        __asm__("cdpvs p13, #6, c6, c5, c0, #1");
    }
    if (v10) {
        __asm__("mcrvs p0, #3, r2, c5, c5, #3");
    }
    if (c6) {
        z8 = (r4_18 >> r2 | r4_19 << reinterpret_cast<uint32_t>(32 - r2)) - r9_20 == 0;
        v10 = __intrinsic();
    }
    if (v10) {
        __asm__("stmdavs r0!, {r0, r3, r5, r6, r8, sb, ip, sp, lr}");
    }
    if (v10) {
        *reinterpret_cast<signed char*>(r4_21 - 0x469) = static_cast<signed char>(r6_11);
        r4_22 = reinterpret_cast<uint32_t>(r4_23 - 0x469);
    }
    if (z8) {
    }
    if (v10) {
        z8 = r3 == -(r4_22 >> 18 | r4_22 << 14);
        v10 = __intrinsic();
    }
    if (v10) {
        __asm__("strbtvs r6, [r5], #-0xc62");
    }
    if (z8) {
    }
    if (v10) {
        fun_18e9fac();
    }
    if (z8) {
    }
    if (v10) {
        __asm__("svcvs #0x67202d");
    }
    if (v10) {
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(__return_address()) - 0x74) = static_cast<signed char>(r2);
    }
    if (v10) {
    }
}

signed char g1188b = 0x75;

signed char g118bb = 0x6f;

void fun_11a34(uint32_t r0, uint32_t r1, uint32_t r2, signed char* r3) {
    uint32_t lr5;
    int1_t v6;
    int1_t c7;
    uint32_t r6_8;
    int1_t z9;
    uint1_t c10;
    int1_t v11;
    int1_t less12;
    uint32_t r5_13;
    int32_t r4_14;
    uint32_t r4_15;
    int32_t r4_16;
    void* r5_17;
    uint32_t r7_18;
    uint32_t r11_19;
    int32_t r9_20;
    int32_t r11_21;
    int32_t r11_22;

    lr5 = reinterpret_cast<uint32_t>(__return_address());
    if (v6) {
        __asm__("ldmdbvs r4!, {r0, r5, r6, ip, sp, lr} ^");
    }
    if (c7) {
        r6_8 = 0x11a400 - reinterpret_cast<uint32_t>(r3);
        z9 = r6_8 == 0;
        c10 = __intrinsic();
        v11 = __intrinsic();
        less12 = reinterpret_cast<int32_t>(r6_8) < reinterpret_cast<int32_t>(0) != v11;
    }
    if (v11) {
        __asm__("stclvs p2, c7, [pc, #-0x198]!");
    }
    if (v11) {
        __asm__("stclvs p6, c6, [sb], #-0x80");
    }
    if (z9) {
        r0 = r0 & static_cast<uint32_t>(static_cast<uint33_t>(r5_13) | static_cast<uint33_t>(c10) << 1);
    }
    if (v11) {
        __asm__("mcrvs p13, #3, r6, c5, c15, #1");
    }
    if (v11) {
        *reinterpret_cast<signed char*>(r4_14 - 0xf75) = static_cast<signed char>(r2);
        r4_15 = reinterpret_cast<uint32_t>(r4_16 - 0xf75);
    }
    if (v11) {
        __asm__("mcrvs p13, #3, r6, c5, c15, #2");
    }
    if (!v11) {
        __asm__("ldmdavc r4!, {r0, r2, r4, r5, r6, sb, sl, fp, sp} ^");
    }
    if (z9) {
        r0 = r0 & (r4_15 >> r0 | r4_15 << 32 - r0);
    }
    if (z9) {
        r5_17 = reinterpret_cast<void*>(0);
    }
    if (!c10) {
        r6_8 = r1 ^ (reinterpret_cast<uint32_t>(__zero_stack_offset()) >> 26 | reinterpret_cast<uint32_t>(__zero_stack_offset()) << 6);
        z9 = r6_8 == 0;
        less12 = reinterpret_cast<int32_t>(r6_8) < reinterpret_cast<int32_t>(0) != v11;
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (z9) {
        r4_15 = r0 & reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(r1) >> 28);
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (z9) {
        r5_17 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r3) - (reinterpret_cast<int32_t>(r1) >> 10));
        z9 = r5_17 == 0;
        v11 = __intrinsic();
        less12 = reinterpret_cast<int32_t>(r5_17) < reinterpret_cast<int32_t>(0) != v11;
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (!v11) {
        r7_18 = *reinterpret_cast<unsigned char*>(r2 + 0xfffffaa6);
        r2 = r2 + 0xfffffaa6;
    }
    if (z9) {
        r6_8 = (reinterpret_cast<uint32_t>(r5_17) >> 6 | reinterpret_cast<uint32_t>(r5_17) << 26) - r11_19;
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (!v11) {
        __asm__("ldrbtvc r6, [r2], #-0xf46");
    }
    if (v11) {
        if (z9) {
            r6_8 = r0 & (reinterpret_cast<uint32_t>(r5_17) >> 28 | reinterpret_cast<uint32_t>(r5_17) << 4);
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (z9) {
            r6_8 = r0 ^ (reinterpret_cast<uint32_t>(__zero_stack_offset()) >> 26 | reinterpret_cast<uint32_t>(__zero_stack_offset()) << 6);
            z9 = r6_8 == 0;
            less12 = reinterpret_cast<int32_t>(r6_8) < reinterpret_cast<int32_t>(0) != v11;
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (v11) {
            *reinterpret_cast<signed char*>(r9_20 - 83) = static_cast<signed char>(r7_18);
        }
        if (!v11) {
            *reinterpret_cast<signed char*>(r1 + 0xffffff94) = static_cast<signed char>(r2);
            r1 = r1 + 0xffffff94;
        }
        if (!less12) {
            *r3 = static_cast<signed char>(r7_18);
            r3 = r3 + 0x773;
        }
        if (v11) {
            __asm__("cdpvs p12, #6, c6, c5, c8, #3");
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (z9) {
            r6_8 = r1 ^ (reinterpret_cast<uint32_t>(__zero_stack_offset()) >> 26 | reinterpret_cast<uint32_t>(__zero_stack_offset()) << 6);
            z9 = r6_8 == 0;
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (!v11) {
            __asm__("ldrbtvc r6, [r5], #-0x14c");
        }
        if (v11) {
            *reinterpret_cast<signed char*>(r1 + 0xfffffb8d) = static_cast<signed char>(r7_18);
        }
        if (z9) {
            r6_8 = (r2 >> r11_21 | r2 << reinterpret_cast<uint32_t>(32 - r11_22)) - reinterpret_cast<uint32_t>(r5_17);
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (z9) {
            r6_8 = r2 ^ (reinterpret_cast<uint32_t>(__zero_stack_offset()) >> 26 | reinterpret_cast<uint32_t>(__zero_stack_offset()) << 6);
            z9 = r6_8 == 0;
        }
        if (z9) {
            r0 = r0 & r0;
        }
        if (v11) {
            z9 = r2 == -(reinterpret_cast<int32_t>(r3) >> r0);
            v11 = __intrinsic();
        }
        if (z9) {
            r6_8 = (reinterpret_cast<uint32_t>(r3) >> 16 | reinterpret_cast<uint32_t>(r3) << 16) - reinterpret_cast<uint32_t>(r5_17);
        }
        if (z9) {
        }
        if (z9) {
        }
        if (z9) {
        }
        if (z9) {
        }
        if (z9) {
        }
        if (z9) {
        }
        if (z9) {
        }
        if (z9) {
        }
        if (z9) {
            r6_8 = reinterpret_cast<uint32_t>(r3) ^ (reinterpret_cast<uint32_t>(__zero_stack_offset()) >> 26 | reinterpret_cast<uint32_t>(__zero_stack_offset()) << 6);
            z9 = r6_8 == 0;
        }
        if (z9) {
        }
        if (!v11) {
            __asm__("ldrbtvc r6, [r3], #-0x154");
        }
        if (v11) {
            __asm__("svcvs #0x746e65");
        }
        if (z9) {
            r6_8 = (reinterpret_cast<uint32_t>(r5_17) >> 28 | reinterpret_cast<uint32_t>(r5_17) << 4) - reinterpret_cast<uint32_t>(r5_17);
        }
        if (z9) {
        }
        if (z9) {
        }
        if (z9) {
        }
        if (z9) {
        }
        if (z9) {
        }
        if (z9) {
        }
        if (z9) {
        }
        if (z9) {
            r6_8 = r4_15 ^ (reinterpret_cast<uint32_t>(__zero_stack_offset()) >> 26 | reinterpret_cast<uint32_t>(__zero_stack_offset()) << 6);
            z9 = r6_8 == 0;
        }
        if (z9) {
        }
        if (!v11) {
            *reinterpret_cast<signed char*>(lr5 - 0x54d) = static_cast<signed char>(r6_8);
            lr5 = lr5 - 0x54d;
        }
        if (!v11) {
            g1188b = static_cast<signed char>(r7_18);
        }
        if (z9) {
            r6_8 = (lr5 >> 8 | lr5 << 24) - reinterpret_cast<uint32_t>(r3);
            z9 = r6_8 == 0;
            v11 = __intrinsic();
        }
        if (z9) {
        }
        if (z9) {
        }
        if (z9) {
        }
        if (z9) {
        }
        if (z9) {
        }
        if (z9) {
        }
        if (z9) {
        }
        if (z9) {
            r6_8 = reinterpret_cast<uint32_t>(r5_17) ^ (reinterpret_cast<uint32_t>(__zero_stack_offset()) >> 26 | reinterpret_cast<uint32_t>(__zero_stack_offset()) << 6);
            z9 = r6_8 == 0;
        }
        if (z9) {
        }
        if (v11) {
            __asm__("strbtvs r6, [ip], -r8, asr #18");
        }
        if (!v11) {
            g118bb = static_cast<signed char>(r7_18);
        }
        if (z9) {
            r6_8 = (lr5 >> 8 | lr5 << 24) - reinterpret_cast<uint32_t>(r3);
            z9 = r6_8 == 0;
            v11 = __intrinsic();
        }
        if (z9) {
        }
        if (z9) {
        }
        if (z9) {
        }
        if (z9) {
        }
        if (z9) {
        }
        if (z9) {
        }
        if (z9) {
        }
        if (z9) {
            r6_8 = r6_8 ^ (reinterpret_cast<uint32_t>(__zero_stack_offset()) >> 26 | reinterpret_cast<uint32_t>(__zero_stack_offset()) << 6);
            z9 = r6_8 == 0;
        }
        if (z9) {
        }
        if (v11) {
            __asm__("svcvs #0x726353");
        }
        if (v11) {
            *reinterpret_cast<signed char*>(r7_18 - 0xc6c) = static_cast<signed char>(r6_8);
        }
    }
}

void fun_11c50(int32_t r0, int32_t r1, int32_t r2, int32_t r3) {
    int1_t v5;
    void* r4_6;
    void* r4_7;
    void* r4_8;
    int32_t r5_9;
    void* r4_10;
    int32_t r6_11;
    void* r4_12;
    int32_t r9_13;
    void* r4_14;
    int32_t r10_15;
    void* r4_16;
    int32_t r11_17;
    void* r4_18;
    int32_t* r4_19;
    int32_t r4_20;
    int32_t r4_21;
    int1_t v22;
    void* r5_23;
    void* r5_24;
    void* r5_25;
    void* r5_26;
    int32_t r5_27;
    void* r5_28;
    int32_t r6_29;
    void* r5_30;
    int32_t r8_31;
    void* r5_32;
    int32_t r9_33;
    void* r5_34;
    int32_t r11_35;
    void* r5_36;
    int32_t* r5_37;
    int32_t r5_38;
    int32_t r5_39;
    int1_t z40;
    int1_t z41;
    int1_t z42;
    int1_t z43;
    int1_t z44;
    int1_t z45;
    uint32_t r6_46;
    uint32_t r7_47;
    int1_t z48;
    int1_t c49;
    int1_t v50;
    int32_t r9_51;
    int32_t r7_52;
    uint32_t r9_53;
    int32_t r9_54;
    int1_t v55;
    int1_t v56;
    uint32_t r8_57;
    int1_t v58;

    if (v5) {
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_6) - 32) = r0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_7) - 28) = r3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_8) - 24) = r5_9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_10) - 20) = r6_11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_12) - 16) = r9_13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_14) - 12) = r10_15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r4_16) - 8) = r11_17;
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(r4_18) - 4) = __zero_stack_offset();
        *r4_19 = reinterpret_cast<int32_t>(__return_address());
        r4_20 = r4_21 - 36;
    }
    if (v22) {
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_23) - 36) = r0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_24) - 32) = r1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_25) - 28) = r2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_26) - 24) = r5_27;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_28) - 20) = r6_29;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_30) - 16) = r8_31;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_32) - 12) = r9_33;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r5_34) - 8) = r11_35;
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(r5_36) - 4) = __zero_stack_offset();
        *r5_37 = reinterpret_cast<int32_t>(__return_address());
        r5_38 = r5_39 - 40;
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
        r6_46 = r7_47 ^ (reinterpret_cast<uint32_t>(__zero_stack_offset()) >> 26 | reinterpret_cast<uint32_t>(__zero_stack_offset()) << 6);
        z48 = r6_46 == 0;
        c49 = __intrinsic();
    }
    if (z48) {
    }
    if (v50) {
        *reinterpret_cast<signed char*>(r9_51 - 83) = static_cast<signed char>(r7_52);
        r9_53 = reinterpret_cast<uint32_t>(r9_54 - 83);
    }
    if (v55) {
        *reinterpret_cast<signed char*>(r2 - 0x6c) = static_cast<signed char>(r2);
    }
    if (v56) {
        *reinterpret_cast<signed char*>(r4_20 - 0xe65) = static_cast<signed char>(r6_46);
    }
    if (z48) {
    }
    if (z48) {
    }
    if (z48) {
    }
    if (z48) {
    }
    if (z48) {
    }
    if (z48) {
    }
    if (z48) {
    }
    if (z48) {
        z48 = (r8_57 ^ (reinterpret_cast<uint32_t>(__zero_stack_offset()) >> 26 | reinterpret_cast<uint32_t>(__zero_stack_offset()) << 6)) == 0;
        c49 = __intrinsic();
    }
    if (z48) {
    }
    if (c49) {
        z48 = (reinterpret_cast<int32_t>(__return_address()) >> 10) - r5_38 == 0;
        v58 = __intrinsic();
    }
    if (!v58) {
    }
    if (z48) {
    }
    if (z48) {
    }
    if (z48) {
    }
    if (z48) {
    }
    if (z48) {
    }
    if (z48) {
    }
    if (z48) {
    }
    if (z48) {
    }
    if (z48) {
        z48 = (r9_53 ^ (reinterpret_cast<uint32_t>(__zero_stack_offset()) >> 26 | reinterpret_cast<uint32_t>(__zero_stack_offset()) << 6)) == 0;
    }
    if (z48) {
    }
    if (v58) {
        __asm__("svcvs #0x697679");
    }
    if (!v58) {
    }
}

signed char g11410 = 0x66;

void fun_11ce0(int32_t r0) {
    int1_t v2;
    int1_t z3;
    int1_t z4;
    int1_t z5;
    int1_t z6;
    int1_t z7;
    int1_t z8;
    int1_t c9;
    int32_t r6_10;
    int32_t r9_11;
    int32_t r5_12;
    int1_t z13;
    int1_t c14;
    int1_t v15;
    int32_t r2_16;
    int32_t r5_17;

    if (v2) {
        __asm__("cdpvs p4, #6, c7, c5, c12, #3");
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
    if (c9) {
        r6_10 = (r9_11 >> 0x11d04) - r5_12;
        z13 = r6_10 == 0;
        c14 = __intrinsic();
        v15 = __intrinsic();
    }
    if (c14) {
        __asm__("mcrhs p9, #3, r6, c14, c7, #3");
    }
    if (z13) {
    }
    if (v15) {
        *reinterpret_cast<signed char*>(r2_16 - 0x54c) = static_cast<signed char>(r6_10);
    }
    if (!v15) {
    }
    if (v15) {
    }
    if (z13) {
    }
    if (v15) {
        __asm__("stcvs p15, c6, [r0, #-0x138]!");
    }
    if (c14) {
    }
    if (v15) {
        __asm__("mcrvs p15, #3, r6, c9, c0, #2");
    }
    if (c14) {
        __asm__("stchs p3, c7, [r0, #-0x1d0]!");
    }
    if (!v15) {
        g11410 = static_cast<signed char>(r5_17);
    }
}

void fun_11d30(uint32_t r0, uint32_t r1) {
    int1_t z3;
    uint32_t r2_4;
    uint32_t r5_5;
    uint32_t r5_6;
    int1_t v7;
    int32_t r5_8;
    int32_t r7_9;
    uint32_t r5_10;
    int32_t r5_11;
    int1_t z12;
    uint32_t r3_13;
    uint32_t r4_14;
    uint32_t r4_15;
    int1_t v16;
    int1_t c17;
    uint32_t r7_18;
    int1_t z19;
    int1_t c20;
    int1_t v21;
    uint32_t r6_22;
    int32_t r9_23;
    int32_t r8_24;
    uint32_t r8_25;
    int32_t r8_26;
    uint32_t r4_27;
    uint32_t r4_28;
    uint32_t r9_29;
    uint32_t r9_30;
    uint32_t r10_31;
    uint32_t r10_32;
    uint32_t r10_33;
    uint32_t r4_34;
    uint32_t r11_35;
    uint32_t r4_36;
    uint32_t r11_37;
    uint32_t r11_38;
    uint32_t r11_39;
    uint32_t r10_40;
    uint32_t r10_41;
    uint32_t r10_42;
    uint32_t r9_43;
    uint32_t r9_44;
    uint32_t r9_45;
    uint32_t r9_46;
    uint32_t r10_47;
    uint32_t r10_48;
    uint32_t r10_49;
    uint32_t r11_50;
    uint32_t r11_51;
    uint32_t r11_52;
    uint32_t r4_53;
    uint32_t r11_54;
    uint32_t r4_55;
    uint32_t r10_56;
    uint32_t r10_57;
    uint32_t r10_58;
    uint32_t r9_59;
    uint32_t r9_60;
    uint32_t r4_61;
    uint32_t r4_62;
    uint32_t r4_63;
    uint32_t r4_64;
    int32_t r9_65;
    int32_t r12_66;
    int32_t r12_67;

    if (z3) {
        r2_4 = r0 & (r5_5 >> 28 | r5_6 << 4);
    }
    if (v7) {
        *reinterpret_cast<signed char*>(r5_8 - 0x73) = static_cast<signed char>(r7_9);
        r5_10 = reinterpret_cast<uint32_t>(r5_11 - 0x73);
    }
    if (z12) {
        r3_13 = r0 ^ (r4_14 >> 20 | r4_15 << 12);
    }
    if (v16) {
    }
    if (c17) {
        r7_18 = (r0 >> 10) - r0;
        z19 = r7_18 == 0;
        c20 = __intrinsic();
        v21 = __intrinsic();
    }
    if (v21) {
        __asm__("svcvs #0x59202d");
    }
    if (v21) {
        __asm__("svcvs #0x6c2075");
    }
    if (z19) {
        r6_22 = reinterpret_cast<uint32_t>(__return_address()) ^ (r3_13 >> r5_10 | r3_13 << 32 - r5_10);
    }
    if (v21) {
        __asm__("stclvs p1, c6, [ip], #-0x18c");
    }
    if (c20) {
        r7_18 = (r0 >> 8) - 0x11d5c;
    }
    if (!v21) {
        __asm__("strbtvc r6, [sb], #-0xe69");
    }
    if (z19) {
        r0 = r0 & r0;
    }
    if (c20) {
        r6_22 = (r9_23 >> reinterpret_cast<int32_t>(" Wall reached.")) - r5_10;
        z19 = r6_22 == 0;
        c20 = __intrinsic();
        v21 = __intrinsic();
    }
    if (c20) {
        __asm__("stclhs p9, c6, [lr], #-0x1dc");
    }
    if (v21) {
        __asm__("stclvs p7, c5, [r1], #-0x80");
    }
    if (v21) {
        r2_4 = *reinterpret_cast<unsigned char*>(r2_4 - 0x6c) - 0x6c;
    }
    if (v21) {
        *reinterpret_cast<signed char*>(r8_24 - 0x361) = static_cast<signed char>(r6_22);
        r8_25 = reinterpret_cast<uint32_t>(r8_26 - 0x361);
    }
    if (z19) {
        r2_4 = r0 & (r4_27 >> 28 | r4_28 << 4);
    }
    if (z19) {
        r0 = r0 & r6_22;
    }
    if (z19) {
        r0 = r0 & r0;
    }
    if (z19) {
        r0 = r0 & r7_18;
    }
    if (z19) {
        r0 = r0 & r0;
    }
    if (z19) {
        r0 = r0 & r8_25;
    }
    if (z19) {
        r0 = r0 & r1;
    }
    if (z19) {
        r0 = r0 & r8_25;
    }
    if (z19) {
        r0 = r0 & r1;
    }
    if (z19) {
        r0 = r0 & r9_29;
    }
    if (z19) {
        r0 = r0 & r1;
    }
    if (z19) {
        r0 = r0 & r9_30;
    }
    if (z19) {
        r0 = r0 & r2_4;
    }
    if (z19) {
        r0 = r0 & r10_31;
    }
    if (z19) {
        r0 = r0 & r2_4;
    }
    if (z19) {
        r0 = r0 & r10_32;
    }
    if (z19) {
        r0 = r0 & r3_13;
    }
    if (z19) {
        r0 = r0 & r10_33;
    }
    if (z19) {
        r0 = r0 & r4_34;
    }
    if (z19) {
        r0 = r0 & r11_35;
    }
    if (z19) {
        r0 = r0 & r4_36;
    }
    if (z19) {
        r0 = r0 & r11_37;
    }
    if (z19) {
        r0 = r0 & r5_10;
    }
    if (z19) {
        r0 = r0 & r11_38;
    }
    if (z19) {
        r0 = r0 & r6_22;
    }
    if (z19) {
        r0 = r0 & r11_39;
    }
    if (z19) {
        r0 = r0 & r7_18;
    }
    if (z19) {
        r0 = r0 & r10_40;
    }
    if (z19) {
        r0 = r0 & r7_18;
    }
    if (z19) {
        r0 = r0 & r10_41;
    }
    if (z19) {
        r0 = r0 & r8_25;
    }
    if (z19) {
        r0 = r0 & r10_42;
    }
    if (z19) {
        r0 = r0 & r9_43;
    }
    if (z19) {
        r0 = r0 & r9_44;
    }
    if (z19) {
        r0 = r0 & r9_45;
    }
    if (z19) {
        r0 = r0 & r9_46;
    }
    if (z19) {
        r0 = r0 & r10_47;
    }
    if (z19) {
        r0 = r0 & r8_25;
    }
    if (z19) {
        r0 = r0 & r10_48;
    }
    if (z19) {
        r0 = r0 & r7_18;
    }
    if (z19) {
        r0 = r0 & r10_49;
    }
    if (z19) {
        r0 = r0 & r7_18;
    }
    if (z19) {
        r0 = r0 & r11_50;
    }
    if (z19) {
        r0 = r0 & r6_22;
    }
    if (z19) {
        r0 = r0 & r11_51;
    }
    if (z19) {
        r0 = r0 & r5_10;
    }
    if (z19) {
        r0 = r0 & r11_52;
    }
    if (z19) {
        r0 = r0 & r4_53;
    }
    if (z19) {
        r0 = r0 & r11_54;
    }
    if (z19) {
        r0 = r0 & r4_55;
    }
    if (z19) {
        r0 = r0 & r10_56;
    }
    if (z19) {
        r0 = r0 & r3_13;
    }
    if (z19) {
        r0 = r0 & r10_57;
    }
    if (z19) {
        r0 = r0 & r2_4;
    }
    if (z19) {
        r0 = r0 & r10_58;
    }
    if (z19) {
        r0 = r0 & r2_4;
    }
    if (z19) {
        r0 = r0 & r9_59;
    }
    if (z19) {
        r0 = r0 & r1;
    }
    if (z19) {
        r0 = r0 & r9_60;
    }
    if (z19) {
        r0 = r0 & r1;
    }
    if (z19) {
        r0 = r0 & r8_25;
    }
    if (z19) {
        r0 = r0 & r1;
    }
    if (z19) {
        r0 = r0 & r7_18;
    }
    if (z19) {
        r0 = r0 & r0;
    }
    if (z19) {
        r0 = r0 & r7_18;
    }
    if (z19) {
        r0 = r0 & r0;
    }
    if (z19) {
        r0 = r0 & r6_22;
    }
    if (z19) {
        r0 = r0 & r0;
    }
    if (z19) {
        r0 = r0 & r5_10;
    }
    if (z19) {
        r0 = r0 & r0;
    }
    if (z19) {
        r0 = r0 & r4_61;
    }
    if (z19) {
        r0 = r0 & r1;
    }
    if (z19) {
        r0 = r0 & r4_62;
    }
    if (z19) {
        r0 = r0 & r1;
    }
    if (z19) {
        r0 = r0 & r3_13;
    }
    if (z19) {
        r0 = r0 & r1;
    }
    if (z19) {
        r0 = r0 & r2_4;
    }
    if (z19) {
        r0 = r0 & r2_4;
    }
    if (z19) {
        r0 = r0 & r2_4;
    }
    if (z19) {
        r0 = r0 & r2_4;
    }
    if (z19) {
        r0 = r0 & r1;
    }
    if (z19) {
        r0 = r0 & r3_13;
    }
    if (z19) {
        r0 = r0 & r1;
    }
    if (z19) {
        r0 = r0 & r4_63;
    }
    if (z19) {
        r0 = r0 & r1;
    }
    if (z19) {
        r0 = r0 & r4_64;
    }
    if (z19) {
        r0 = r0 & r0;
    }
    if (z19) {
        r0 = r0 & r5_10;
    }
    if (z19) {
        r0 = r0 & r0;
    }
    if (v21) {
        __asm__("svcvs #0x706d69");
    }
    if (v21) {
        r7_18 = reinterpret_cast<uint32_t>(0xcc000001 - r9_65);
    }
    if (!v21) {
        *reinterpret_cast<uint32_t*>(r0 + r12_66 >> 10 | r0 + r12_67 << 22) = r6_22;
        r0 = r0;
    }
    if (z19) {
        r7_18 = r0 & (r1 >> 18 | r1 << 14);
    }
    if (v21) {
    }
    if (c20) {
        __asm__("svchs #0x73696e");
    }
    if (v21) {
        __asm__("svcvs #0x6c656d");
    }
    if (c20) {
        __asm__("cdphs p9, #3, c7, c1, c4, #3");
    }
    if (z19) {
        r6_22 = (r7_18 >> r1 | r7_18 << 32 - r1) - r6_22;
        z19 = r6_22 == 0;
        c20 = __intrinsic();
        v21 = __intrinsic();
    }
    if (v21) {
    }
    if (c20) {
        __asm__("svchs #0x73696e");
    }
    if (v21) {
        __asm__("svcvs #0x6c656d");
    }
    if (c20) {
        __asm__("cdphs p9, #3, c7, c2, c4, #3");
    }
    if (z19) {
        r6_22 = (r7_18 >> r1 | r7_18 << 32 - r1) - r6_22;
        z19 = r6_22 == 0;
        c20 = __intrinsic();
        v21 = __intrinsic();
    }
    if (v21) {
    }
    if (c20) {
        __asm__("svchs #0x73696e");
    }
    if (v21) {
        __asm__("svcvs #0x6c656d");
    }
    if (c20) {
        __asm__("cdphs p9, #3, c7, c3, c4, #3");
    }
    if (z19) {
        r6_22 = (r7_18 >> r1 | r7_18 << 32 - r1) - r6_22;
        z19 = r6_22 == 0;
        c20 = __intrinsic();
        v21 = __intrinsic();
    }
    if (v21) {
    }
    if (c20) {
        __asm__("svchs #0x73696e");
    }
    if (v21) {
        __asm__("svcvs #0x6c656d");
    }
    if (c20) {
        __asm__("cdphs p9, #3, c7, c4, c4, #3");
    }
    if (z19) {
        r6_22 = (r7_18 >> r1 | r7_18 << 32 - r1) - r6_22;
        z19 = r6_22 == 0;
        c20 = __intrinsic();
        v21 = __intrinsic();
    }
    if (v21) {
    }
    if (c20) {
        __asm__("svchs #0x73696e");
    }
    if (v21) {
        __asm__("svcvs #0x6c656d");
    }
    if (c20) {
        __asm__("cdphs p9, #3, c7, c5, c4, #3");
    }
    if (z19) {
        r6_22 = (r7_18 >> r1 | r7_18 << 32 - r1) - r6_22;
        z19 = r6_22 == 0;
        c20 = __intrinsic();
        v21 = __intrinsic();
    }
    if (v21) {
    }
    if (c20) {
        __asm__("svchs #0x73696e");
    }
    if (v21) {
        __asm__("svcvs #0x6c656d");
    }
    if (c20) {
        __asm__("cdphs p9, #7, c7, c8, c4, #3");
    }
    if (z19) {
        r6_22 = (r7_18 >> r1 | r7_18 << 32 - r1) - r6_22;
        z19 = r6_22 == 0;
        v21 = __intrinsic();
    }
    if (z19) {
    }
    if (z19) {
    }
    if (z19) {
    }
    if (z19) {
    }
    if (z19) {
    }
    if (z19) {
    }
    if (v21) {
        __asm__("strbtvs r6, [r4], #-0xe73");
    }
}

void fun_11f80(uint32_t r0) {
    int1_t v2;
    int1_t z3;
    int1_t v4;
    int1_t c5;
    uint32_t r6_6;
    int32_t r6_7;
    int1_t v8;
    int1_t z9;
    int1_t v10;
    int32_t r4_11;
    int32_t r4_12;
    int32_t r4_13;
    int1_t c14;
    uint32_t r2_15;
    int32_t r5_16;
    uint32_t r2_17;
    int32_t r5_18;
    int1_t v19;
    int32_t r2_20;
    int32_t r3_21;
    int32_t r5_22;
    int32_t r8_23;
    int32_t r11_24;
    int1_t v25;

    if (!v2) {
        __asm__("strbtvc r7, [r1], -lr, lsr #14");
    }
    if (z3) {
        r0 = r0 & r0;
    }
    if (v4) {
        __asm__("strbtvs r6, [r4], #-0xe73");
    }
    if (!c5) {
        r6_6 = reinterpret_cast<uint32_t>(0x6900000 - r6_7);
    }
    if (!v8) {
        __asm__("strbtvc r7, [r1], -lr, lsr #14");
    }
    if (z9) {
        r0 = r0 & r0;
    }
    if (v10) {
        r6_6 = *reinterpret_cast<unsigned char*>(r4_11 - 0xe65);
        r4_12 = r4_13 - 0xe65;
    }
    if (c14) {
        r6_6 = (r2_15 >> r5_16 | r2_17 << reinterpret_cast<uint32_t>(32 - r5_18)) - r4_12;
    }
    if (v19) {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(__return_address()) - 32) = r0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) - 28) = r2_20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) - 24) = r3_21;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) - 20) = r5_22;
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(__return_address()) - 16) = r6_6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) - 12) = r8_23;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) - 8) = r11_24;
        *reinterpret_cast<void**>(reinterpret_cast<int32_t>(__return_address()) - 4) = __zero_stack_offset();
        *reinterpret_cast<void***>(__return_address()) = reinterpret_cast<void**>(__return_address());
    }
    if (v25) {
    }
}

void fun_11fac(uint32_t* r0, int32_t r1, uint32_t r2, int32_t r3) {
    int1_t z5;
    uint32_t r7_6;
    int1_t v7;
    int1_t c8;
    int1_t v9;
    int32_t r5_10;
    int32_t r6_11;
    uint32_t r5_12;
    int32_t r5_13;
    int1_t v14;
    int1_t v15;
    int1_t c16;
    uint32_t r6_17;
    uint32_t r8_18;
    uint32_t r8_19;
    int1_t z20;
    uint1_t c21;
    int1_t v22;
    int32_t r4_23;
    uint32_t r4_24;
    int32_t r4_25;
    int32_t r8_26;
    int32_t r8_27;
    int32_t r9_28;
    int32_t r10_29;
    int32_t r11_30;

    if (z5) {
        r7_6 = reinterpret_cast<uint32_t>(r0) & (reinterpret_cast<uint32_t>(__return_address()) >> 6 | reinterpret_cast<uint32_t>(__return_address()) << 26);
    }
    if (v7) {
        __asm__("svcvs #0x73202d");
    }
    if (c8) {
        if (v9) {
            *reinterpret_cast<signed char*>(r5_10 - 0xb20) = static_cast<signed char>(r6_11);
            r5_12 = reinterpret_cast<uint32_t>(r5_13 - 0xb20);
        }
        if (v14) {
            __asm__("ldmdavs r4!, {r4, r5, r6, sp} ^");
        }
        if (!v15) {
            __asm__("strtvc r7, [r0], #-0x369");
        }
        if (c16) {
            r6_17 = (r8_18 >> 18 | r8_19 << 14) - r3;
            z20 = r6_17 == 0;
            c21 = __intrinsic();
            v22 = __intrinsic();
        }
        if (v22) {
            __asm__("mcrvs p9, #3, r6, c7, c3, #3");
        }
        if (v22) {
            __asm__("mcrvs p0, #3, r2, c1, c3, #3");
        }
        if (v22) {
            __asm__("ldmdavs r4!, {r2, r5, r6, sp} ^");
        }
        if (c21) {
            r7_6 = (r5_12 >> 4 | r5_12 << 28) - r5_12;
        }
        if (v22) {
            *reinterpret_cast<signed char*>(r4_23 - 0x26f) = static_cast<signed char>(r7_6);
            r4_24 = reinterpret_cast<uint32_t>(r4_25 - 0x26f);
        }
        if (v22) {
            __asm__("mcrvs p0, #3, r2, c9, c2, #3");
        }
        if (v22) {
            __asm__("cdpvs p13, #6, c6, c9, c0, #1");
        }
        if (z20) {
            r0 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(r0) & static_cast<uint32_t>(static_cast<uint33_t>(r4_24) | static_cast<uint33_t>(c21) << 1));
        }
        if (v22) {
            __asm__("svcvs #0x73202d");
        }
        if (c21) {
            if (v22) {
                __asm__("svcvs #0x686320");
            }
            if (c21) {
            }
            if (c21) {
                r6_17 = (r4_24 >> r8_26 | r4_24 << reinterpret_cast<uint32_t>(32 - r8_27)) - r5_12;
            }
            if (!v22) {
                c21 = reinterpret_cast<uint1_t>(r2 < reinterpret_cast<uint32_t>(-0x198000));
                z20 = r2 == -0x198000;
                v22 = __intrinsic();
            }
            if (v22) {
                __asm__("ldmdbvs r3!, {r2, r4, r5, r6, sp} ^");
            }
            if (!v22) {
                *reinterpret_cast<uint32_t**>(r0 - 9) = r0;
                *reinterpret_cast<int32_t*>(r0 - 8) = r1;
                *(r0 - 7) = r2;
                *(r0 - 6) = r5_12;
                *(r0 - 5) = r6_17;
                *reinterpret_cast<int32_t*>(r0 - 4) = r9_28;
                *reinterpret_cast<int32_t*>(r0 - 3) = r10_29;
                *reinterpret_cast<int32_t*>(r0 - 2) = r11_30;
                *reinterpret_cast<void**>(r0 - 1) = __zero_stack_offset();
                *r0 = reinterpret_cast<uint32_t>(__return_address());
            }
            if (v22) {
                __asm__("stmdavs r0!, {r0, r1, r2, r3, r5, r6, r8, sl, ip, sp, lr}");
            }
            if (c21) {
            }
            if (v22) {
                __asm__("mcrvs p5, #3, r6, c5, c3, #3");
            }
            if (v22) {
            }
            if (v22) {
                __asm__("svcvs #0x207373");
            }
            if (z20) {
            }
            if (v22) {
                __asm__("svcvs #0x73202d");
            }
            if (!c21) {
            }
        }
    }
}

void fun_1202c(uint32_t r0) {
    int1_t c2;
    int1_t c3;
    int1_t z4;
    uint32_t r9_5;
    int32_t r5_6;
    int1_t c7;
    int1_t v8;
    uint32_t r7_9;
    uint32_t r9_10;
    uint32_t r9_11;
    int32_t r8_12;

    if (c2) {
    }
    if (c3) {
        z4 = (r9_5 >> reinterpret_cast<int32_t>(" solved it")) - r5_6 == 0;
        c7 = __intrinsic();
        v8 = __intrinsic();
    }
    if (v8) {
    }
    if (v8) {
        __asm__("stclvs p3, c7, [pc], #-0x80");
    }
    if (c7) {
    }
    if (z4) {
        r7_9 = r0 & (r9_10 >> 8 | r9_11 << 24);
    }
    if (v8) {
        __asm__("svcvs #0x73202d");
    }
    if (c7) {
        if (v8) {
            *reinterpret_cast<signed char*>(r8_12 - 0x420) = static_cast<signed char>(r7_9);
        }
        if (v8) {
            __asm__("stclvs p3, c7, [r5], #-0x80");
        }
        if (v8) {
        }
        if (v8) {
            __asm__("ldmdbvs r3!, {r2, r5, r6, sp} ^");
        }
        if (c7) {
            v8 = __intrinsic();
        }
        if (v8) {
        }
    }
}

signed char g1177c = 0x6e;

void fun_12068(int32_t r0, int32_t* r1, int32_t r2, uint32_t r3) {
    int1_t v5;
    uint32_t r7_6;
    int1_t c7;
    uint32_t r12_8;
    int1_t c9;
    uint32_t r4_10;
    uint32_t r4_11;
    int32_t r9_12;
    int1_t z13;
    int1_t c14;
    int1_t v15;
    int32_t r5_16;
    int32_t r6_17;
    int32_t r8_18;
    int32_t r9_19;
    int32_t r10_20;
    int32_t r5_21;

    if (v5) {
        r7_6 = *reinterpret_cast<unsigned char*>(r2 - 0x26f);
        r2 = r2 - 0x26f;
    }
    if (c7) {
        r7_6 = r12_8 ^ (r3 >> 8 | r3 << 24);
    }
    if (c9) {
        r7_6 = (r4_10 >> r2 | r4_11 << reinterpret_cast<uint32_t>(32 - r2)) - r9_12;
        z13 = r7_6 == 0;
        c14 = __intrinsic();
        v15 = __intrinsic();
    }
    if (v15) {
        *(r1 - 7) = r0;
        *(r1 - 6) = r5_16;
        *(r1 - 5) = r6_17;
        *(r1 - 4) = r8_18;
        *(r1 - 3) = r9_19;
        *(r1 - 2) = r10_20;
        *reinterpret_cast<void**>(r1 - 1) = __zero_stack_offset();
        *r1 = reinterpret_cast<int32_t>(__return_address());
    }
    if (z13) {
    }
    if (v15) {
        __asm__("svcvs #0x73202d");
    }
    if (c14) {
        if (v15) {
            __asm__("svcvs #0x686320");
        }
        if (c14) {
            r7_6 = 0x40000482 - r5_21;
        }
        if (c14) {
        }
        if (v15) {
            __asm__("mcrvs p9, #3, r6, c7, c3, #3");
        }
        if (!v15) {
            g1177c = static_cast<signed char>(r7_6);
        }
        if (!v15) {
            __asm__("strbtvc r6, [r1], -r0, lsr #16");
        }
        if (v15) {
        }
        if (v15) {
            __asm__("cdpvs p14, #2, c6, c0, c5, #3");
        }
        if (c14) {
            c14 = __intrinsic();
        }
        if (c14) {
        }
    }
}

int32_t fun_1bda284();

void fun_120b0() {
    int1_t v1;
    int1_t z2;
    int1_t v3;
    int1_t c4;
    int1_t c5;
    int1_t v6;
    int32_t r8_7;
    int32_t r7_8;
    int1_t v9;

    if (v1) {
        fun_1bda284();
    }
    if (z2) {
    }
    if (v3) {
        __asm__("svcvs #0x73202d");
    }
    if (c4) {
        if (c5) {
            __asm__("stclhs p15, c6, [r8], #-0x80");
        }
        if (v6) {
            *reinterpret_cast<signed char*>(r8_7 - 0x420) = static_cast<signed char>(r7_8);
        }
        if (v9) {
            __asm__("stclvs p4, c7, [sb, #-0x80]!");
        }
    }
}

void fun_120d0() {
    int1_t v1;
    int1_t c2;
    int1_t z3;
    int1_t less_or_equal4;
    int1_t z5;
    int1_t less_or_equal6;
    int1_t less_or_equal7;
    int1_t less_or_equal8;

    if (v1) {
    }
    if (c2) {
        __asm__("ldchs p0, c2, [sl, #-0x1c8]!");
    }
    if (z3) {
    }
    if (!less_or_equal4) {
        __asm__("bicgt r0, r3, #0xc000000");
    }
    if (!z5) {
        if (!less_or_equal6) {
            __asm__("rscsgt pc, pc, r3, lsl #30");
        }
        if (!less_or_equal7) {
            __asm__("sbcgt ip, r0, r0, asr #1");
        }
        if (!less_or_equal8) {
            __asm__("bicgt ip, r3, #0xc0");
        }
    }
}

uint32_t fun_82b700();

void fun_120f8(uint32_t r0, int32_t r1, uint32_t r2, uint32_t r3) {
    int1_t z5;
    int1_t v6;
    int1_t v7;
    int1_t v8;
    int1_t v9;
    int1_t v10;
    int1_t v11;
    int1_t z12;
    int32_t r9_13;
    int32_t r9_14;
    int1_t c15;
    int1_t v16;

    if (z5) {
        r0 = r0 & r3 << 6;
    }
    if (v6) {
        *reinterpret_cast<uint32_t*>(r0 - 0xe3e) = r3;
        r0 = r0 - 0xe3e;
    }
    if (!v7) {
    }
    if (v8) {
        __asm__("cdpvs p13, #6, c6, c9, c0, #1");
    }
    if (v9) {
        __asm__("stclvs p7, c6, [r1, #-0x1a4]!");
    }
    if (!v10) {
        __asm__("strtvc r3, [r0], #-0xa65");
    }
    if (!v11) {
        z12 = (r2 >> r9_13 | r2 << reinterpret_cast<uint32_t>(32 - r9_14)) - r0 == 0;
        c15 = __intrinsic();
        v16 = __intrinsic();
    }
    if (v16) {
        __asm__("svcvs #0x5f656c");
    }
    if (z12) {
    }
    if (v16) {
        __asm__("ldmdbvs r4!, {r0, r5, r6, r8, sb, sp, lr} ^");
    }
    if (v16) {
        fun_82b700();
    }
    if (c15) {
        if (z12) {
        }
        if (v16) {
        }
        if (c15) {
            __asm__("svchs #0x73696e");
        }
        if (!v16) {
        }
    }
}

void fun_1213c(int32_t r0) {
    int1_t v2;
    int1_t z3;
    int1_t n4;
    int1_t n5;
    int1_t c6;
    uint32_t r5_7;
    int1_t z8;
    int32_t r5_9;
    uint32_t r7_10;
    uint32_t r3_11;
    int32_t r6_12;
    uint32_t r5_13;
    int32_t r5_14;

    if (!v2) {
        __asm__("strbtvc r7, [r1], -lr, lsr #14");
    }
    if (z3) {
    }
    if (!n4) {
        n5 = __intrinsic();
        c6 = r5_7 < reinterpret_cast<uint32_t>(-0x7000);
        z8 = r5_9 == -0x7000;
    }
    if (z8) {
        r7_10 = r3_11 ^ reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>("_v35") >> r6_12);
        n5 = reinterpret_cast<int32_t>(r7_10) < reinterpret_cast<int32_t>(0);
        z8 = r7_10 == 0;
        c6 = __intrinsic();
    }
    if (!n5) {
        c6 = r5_13 < reinterpret_cast<uint32_t>(-0x7000);
        z8 = r5_14 == -0x7000;
    }
    if (!c6) {
    }
    if (z8) {
    }
}

void fun_1215c(uint32_t r0, uint32_t* r1) {
    int1_t z3;
    int1_t z4;
    uint32_t* r2_5;
    int32_t r4_6;
    int1_t z7;
    int1_t z8;
    int32_t r12_9;
    int1_t z10;
    uint32_t r5_11;
    int1_t z12;
    int32_t r8_13;
    int1_t z14;
    uint32_t r5_15;
    int1_t z16;
    int1_t z17;
    int1_t v18;
    int1_t z19;
    int1_t z20;
    void* r9_21;
    void* r9_22;
    void* r9_23;
    int32_t r8_24;
    int32_t* r9_25;
    int32_t r11_26;
    int1_t z27;
    uint32_t r6_28;
    uint32_t r9_29;
    int1_t z30;
    uint32_t r10_31;
    int1_t z32;
    int1_t z33;
    int1_t z34;
    uint32_t r4_35;
    int1_t z36;
    int32_t r6_37;
    int1_t z38;
    uint32_t r6_39;
    int1_t z40;
    int1_t z41;
    int1_t z42;
    uint32_t* r8_43;
    uint32_t r8_44;
    int32_t r8_45;
    int1_t z46;
    uint32_t r6_47;
    int1_t z48;
    int1_t z49;
    uint32_t r6_50;
    uint32_t r9_51;
    int1_t z52;
    int1_t z53;
    uint32_t r4_54;
    int1_t z55;
    uint32_t* r9_56;
    uint32_t r9_57;
    int32_t r9_58;
    int32_t r6_59;
    int1_t z60;
    uint32_t r6_61;
    int1_t z62;
    int32_t r6_63;
    int1_t z64;
    int1_t z65;

    if (z3) {
        r0 = r0 & r0;
    }
    if (z4) {
        r2_5 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(r1) & reinterpret_cast<uint32_t>(r4_6 >> 2));
    }
    if (z7) {
        r0 = r0 & reinterpret_cast<uint32_t>(__zero_stack_offset());
    }
    if (z8) {
        r2_5 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(r1) & reinterpret_cast<uint32_t>(r12_9 >> 2));
    }
    if (z10) {
        r0 = r0 & r5_11 << r0;
    }
    if (z12) {
        r2_5 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(r1) & reinterpret_cast<uint32_t>(r8_13 >> reinterpret_cast<uint32_t>(r1)));
    }
    if (z14) {
        r0 = r0 & r5_15 << r0;
    }
    if (z16) {
        r0 = r0 & r0;
    }
    if (z17) {
        r0 = r0 & r0;
    }
    if (v18) {
        __asm__("mrcvs p15, #3, r6, c5, c3, #3");
    }
    if (z19) {
    }
    if (z20) {
        *reinterpret_cast<uint32_t**>(reinterpret_cast<int32_t>(r9_21) - 12) = r1;
        *reinterpret_cast<uint32_t**>(reinterpret_cast<int32_t>(r9_22) - 8) = r2_5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r9_23) - 4) = r8_24;
        *r9_25 = r11_26;
    }
    if (z27) {
        r0 = r6_28 & r9_29 << 18;
    }
    if (z30) {
        r0 = r10_31 & 0x200000;
    }
    if (z32) {
        r0 = 0x1219c & reinterpret_cast<uint32_t>(r2_5) << 4;
    }
    if (z33) {
        r0 = reinterpret_cast<uint32_t>(r1) & 0x18000;
    }
    if (z34) {
        r0 = 0x121a4 & r4_35 << 16;
    }
    if (z36) {
        *r1 = r0;
        r1 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(r1) - (r6_37 << 18));
    }
    if (z38) {
        r0 = r6_39 & reinterpret_cast<uint32_t>(r1) << 18;
    }
    if (z40) {
        __asm__("svceq #0x90908");
    }
    if (z41) {
        r0 = reinterpret_cast<uint32_t>(r1) & reinterpret_cast<uint32_t>(r1) << 2;
    }
    if (z42) {
        *r8_43 = r0;
        r8_44 = reinterpret_cast<uint32_t>(r8_45 - 0x21b80000);
    }
    if (z46) {
        r0 = r6_47 & reinterpret_cast<uint32_t>(r1) << 18;
    }
    if (z48) {
        __asm__("cdpeq p4, #0, c0, c8, c3, #0");
    }
    if (z49) {
        r0 = r6_50 & r9_51 << 18;
    }
    if (z52) {
        *r2_5 = r0;
    }
    if (z53) {
        r0 = r8_44 & r4_54 << 16;
    }
    if (z55) {
        *r9_56 = r0;
        r9_57 = reinterpret_cast<uint32_t>(r9_58 - (r6_59 << 18));
    }
    if (z60) {
        r0 = r6_61 & r9_57 << 18;
    }
    if (z62) {
        *reinterpret_cast<uint32_t*>(r9_57 + r6_63 << 18) = r0;
    }
    if (z64) {
    }
    if (z65) {
    }
}

void fun_121e0(int32_t r0, int32_t r1) {
    int1_t v3;
    int1_t c4;
    int1_t less_or_equal5;
    int1_t z6;
    int1_t v7;
    int32_t r12_8;
    int32_t r12_9;
    int32_t r6_10;
    int1_t v11;
    int1_t z12;
    int1_t z13;
    int1_t z14;

    if (!v3) {
    }
    if (!c4) {
        __asm__("stmdalo r7, {r1, r2, r3, ip, sp, lr}");
    }
    if (!less_or_equal5) {
        __asm__("cdpgt p12, #0, c9, c1, c3, #0");
    }
    if (z6) {
    }
    if (v7) {
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(__return_address()) + r12_8) >> 2 | reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(__return_address()) + r12_9) << 30) = static_cast<signed char>(r6_10);
    }
    if (!v11) {
        __asm__("ldrbtvc r7, [r8], #-0x42e");
    }
    if (z12) {
    }
    if (z13) {
    }
    if (z14) {
    }
}

void fun_12208(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t n4;
    uint32_t r4_5;
    int32_t r6_6;
    int1_t z7;
    int1_t c8;
    int1_t z9;
    uint32_t r6_10;
    uint32_t r6_11;
    int1_t v12;

    if (z3) {
    }
    if (n4) {
        r4_5 = *reinterpret_cast<unsigned char*>(r6_6 - 0x157);
    }
    if (z7) {
    }
    if (c8) {
        z9 = (r6_10 >> 26 | r6_11 << 6) - r4_5 == 0;
        v12 = __intrinsic();
    }
    if (z9) {
    }
    if (v12) {
        z9 = r4_5 == -(r4_5 >> 2 | r4_5 << 30);
    }
    if (z9) {
    }
    if (z9) {
    }
    if (z9) {
    }
}

void fun_12230() {
    int1_t z1;

    if (z1) {
    }
}

void fun_12238() {
    int1_t z1;
    uint32_t r1_2;
    uint32_t r1_3;
    uint32_t r1_4;
    int1_t z5;
    uint32_t r0_6;
    uint32_t r2_7;
    int1_t z8;
    uint32_t r2_9;
    uint32_t r2_10;
    uint32_t r6_11;
    uint32_t* r4_12;
    uint32_t* r4_13;
    void* r4_14;
    uint32_t r10_15;
    uint32_t r10_16;
    uint32_t r10_17;
    uint32_t r10_18;
    uint32_t r5_19;
    uint32_t* r2_20;
    uint32_t* r2_21;
    void* r2_22;
    uint32_t r3_23;
    uint32_t r8_24;
    uint32_t r5_25;
    uint32_t r8_26;
    uint32_t r12_27;
    uint32_t r8_28;
    uint32_t r8_29;
    uint32_t r5_30;
    uint32_t r8_31;
    uint32_t r12_32;
    uint32_t r12_33;
    uint32_t r8_34;
    int32_t r3_35;
    uint32_t r9_36;
    uint32_t r10_37;
    uint32_t r12_38;
    uint32_t r12_39;
    uint32_t r12_40;
    uint32_t r12_41;
    uint32_t r8_42;
    uint32_t r12_43;
    uint32_t r8_44;
    uint32_t r8_45;

    if (z1) {
        r1_2 = reinterpret_cast<uint32_t>(__return_address()) & r1_3 << r1_4;
    }
    if (!z5) {
        r0_6 = r2_7 & 10;
        z8 = r0_6 == 0;
    }
    if (z8) {
        r1_2 = reinterpret_cast<uint32_t>(__zero_stack_offset()) & r2_9 << r2_10;
    }
    if (!z8) {
        z8 = (r1_2 & r1_2 << reinterpret_cast<uint32_t>(__return_address())) == 0;
    }
    if (z8) {
        r1_2 = r1_2 & 0x12250 << r1_2;
        z8 = r1_2 == 0;
    }
    if (!z8) {
        z8 = (r1_2 & r1_2 << reinterpret_cast<uint32_t>(__return_address())) == 0;
    }
    if (z8) {
        r1_2 = reinterpret_cast<uint32_t>(__return_address()) & r1_2 << r1_2;
    }
    if (!z8) {
        z8 = (r1_2 & r1_2 << r0_6) == 0;
    }
    if (z8) {
        r1_2 = reinterpret_cast<uint32_t>(__return_address()) & r1_2 << r1_2;
    }
    if (!z8) {
        __asm__("cdpne p1, #1, c1, c1, c14, #0");
    }
    if (z8) {
        r1_2 = r6_11 & r1_2 << r1_2;
        z8 = r1_2 == 0;
    }
    if (z8) {
        r0_6 = r0_6 & r0_6;
    }
    if (z8) {
        r0_6 = r0_6 & r0_6;
    }
    if (z8) {
        *r4_12 = r0_6;
        r4_13 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(r4_14) - 0x404);
    }
    if (z8) {
        r0_6 = reinterpret_cast<uint32_t>(r4_13) & r0_6;
    }
    if (z8) {
        r0_6 = r10_15 & r10_16 << 20;
    }
    if (z8) {
        r0_6 = r0_6 & r0_6;
    }
    if (!z8) {
        if (z8) {
            r0_6 = r10_17 & 0x12288 << r10_18;
        }
        if (z8) {
            __asm__("cdpeq p15, #1, c0, c4, c4, #0");
        }
        if (z8) {
            r1_2 = reinterpret_cast<uint32_t>(r4_13) & r5_19 << 28;
        }
        if (z8) {
            *r2_20 = r1_2;
            r2_21 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(r2_22) - 0x918);
        }
        if (z8) {
            r1_2 = r3_23 & r8_24 << 6;
        }
        if (z8) {
            __asm__("ldmdaeq r4, {r2, r3, sb, ip}");
        }
        if (z8) {
            r1_2 = reinterpret_cast<uint32_t>(__zero_stack_offset()) & r5_25 << reinterpret_cast<uint32_t>(r2_21);
        }
        if (z8) {
            r0_6 = r8_26 & r12_27 << 8;
        }
        if (z8) {
            r0_6 = r0_6 & r0_6;
        }
        if (z8) {
            __asm__("stmdaeq r8, {r1, sl}");
        }
        if (z8) {
            r0_6 = reinterpret_cast<uint32_t>(r2_21) & r8_28 << 8;
        }
        if (z8) {
            r0_6 = reinterpret_cast<uint32_t>(r2_21) & 0x8000000;
        }
        if (z8) {
            r0_6 = r8_29 & reinterpret_cast<uint32_t>(r2_21) << 8;
        }
        if (z8) {
            __asm__("cdpeq p4, #1, c0, c5, c0, #0");
        }
        if (z8) {
            r0_6 = r0_6 & r5_30 << reinterpret_cast<uint32_t>(r4_13);
        }
        if (!z8) {
            __asm__("svcne #0x40400");
        }
        if (z8) {
            r0_6 = r0_6 & reinterpret_cast<uint32_t>(r4_13) << 8;
        }
        if (z8) {
            r0_6 = r0_6 & r0_6;
        }
        if (z8) {
            r0_6 = r8_31 & r12_32 << 8;
        }
        if (!z8) {
            __asm__("svcne #0");
        }
        if (z8) {
            r0_6 = r0_6 & r0_6;
        }
        if (z8) {
            r0_6 = r0_6 & r0_6;
        }
        if (z8) {
            r0_6 = r12_33 & r0_6 << 24;
        }
        if (z8) {
            *r2_21 = r0_6;
            r2_21 = r2_21 - 64;
        }
        if (z8) {
            r1_2 = r0_6 & r8_34;
        }
        if (!z8) {
            r1_2 = *reinterpret_cast<uint32_t*>(r3_35 - 0x10e);
        }
        if (z8) {
            r1_2 = reinterpret_cast<uint32_t>(__return_address()) & r9_36 << r1_2;
        }
        if (z8) {
            *r4_13 = r0_6;
            r4_13 = r4_13 - 0x301;
        }
        if (z8) {
            r0_6 = reinterpret_cast<uint32_t>(__return_address()) & reinterpret_cast<uint32_t>(r4_13) << 8;
        }
        if (z8) {
            r1_2 = r1_2 & 0x80000003;
        }
        if (z8) {
            r0_6 = 0x12300 & reinterpret_cast<uint32_t>(r4_13) << 16;
            z8 = r0_6 == 0;
        }
        if (z8) {
            r0_6 = reinterpret_cast<uint32_t>(r4_13) & 0xf0000001;
        }
        if (z8) {
            r1_2 = reinterpret_cast<uint32_t>(__return_address()) & r1_2 << 2;
        }
        if (!z8) {
            r0_6 = r10_37 & 0x200000;
        }
        if (z8) {
            r0_6 = reinterpret_cast<uint32_t>(r2_21) & 0x12310 << reinterpret_cast<uint32_t>(r2_21);
        }
        if (z8) {
            z8 = (reinterpret_cast<uint32_t>(__return_address()) & 0x12314 << r0_6) == 0;
        }
        if (z8) {
            r1_2 = reinterpret_cast<uint32_t>(__return_address()) & r1_2 << 2;
        }
        if (!z8) {
            __asm__("cdpne p8, #1, c0, c0, c6, #0");
        }
        if (z8) {
            r1_2 = reinterpret_cast<uint32_t>(__return_address()) & r1_2 << r1_2;
        }
        if (z8) {
            *r2_21 = r0_6;
            r2_21 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(r2_21) - 0x11f);
        }
        if (z8) {
            r0_6 = reinterpret_cast<uint32_t>(r4_13) & reinterpret_cast<uint32_t>(r4_13) << 8;
        }
        if (z8) {
            __asm__("mrceq p1, #0, r1, c1, c14, #0");
        }
        if (z8) {
            r1_2 = reinterpret_cast<uint32_t>(__return_address()) & r1_2 << r1_2;
        }
        if (z8) {
            __asm__("svceq #0x11110e");
        }
        if (z8) {
            r0_6 = r12_38 & r1_2 << 4;
        }
        if (z8) {
            r0_6 = r12_39 & r0_6 << 24;
        }
        if (z8) {
            r0_6 = r0_6 & r12_40 << 24;
        }
        if (z8) {
            r0_6 = r12_41 & r0_6 << 24;
        }
        if (z8) {
            r0_6 = r8_42 & r12_43 << 8;
        }
        if (!z8) {
            r0_6 = r8_44 & reinterpret_cast<uint32_t>(r2_21) << 8;
        }
        if (z8) {
            r0_6 = reinterpret_cast<uint32_t>(r2_21) & r8_45 << 8;
        }
        if (z8) {
            r0_6 = 0x12354 & r0_6;
            z8 = r0_6 == 0;
        }
        if (z8) {
        }
    }
}

void fun_12358() {
    int1_t z1;
    uint32_t r0_2;
    uint32_t r8_3;
    uint32_t r2_4;
    int1_t z5;
    uint32_t r1_6;
    uint32_t r1_7;
    int1_t z8;
    uint32_t r4_9;
    uint32_t r4_10;
    int1_t z11;
    int1_t z12;
    uint32_t r5_13;
    uint32_t r5_14;
    int1_t z15;
    int1_t z16;
    uint32_t r9_17;
    void* r9_18;
    void* r9_19;
    int32_t r2_20;
    void* r9_21;
    int32_t r3_22;
    void* r9_23;
    int32_t r4_24;
    void* r9_25;
    int32_t r8_26;
    int32_t* r9_27;
    int32_t r11_28;
    uint32_t r9_29;
    uint32_t* r4_30;
    uint32_t* r4_31;
    void* r4_32;
    uint32_t r2_33;
    uint32_t r12_34;
    uint32_t r2_35;
    uint32_t r2_36;
    int32_t r5_37;
    int32_t r9_38;
    uint32_t r3_39;
    uint32_t r3_40;
    uint32_t r5_41;
    uint32_t r2_42;
    uint32_t r2_43;
    uint32_t r10_44;
    uint32_t r5_45;
    uint32_t r11_46;
    uint32_t* r10_47;
    uint32_t r10_48;
    int32_t r10_49;
    uint32_t* r2_50;
    uint32_t r2_51;
    int32_t r2_52;
    uint32_t r8_53;
    uint32_t r8_54;
    uint32_t* r8_55;

    if (z1) {
        r0_2 = r8_3 & r2_4 << 8;
    }
    if (z5) {
        r1_6 = r1_7 & 0x80000003;
    }
    if (z8) {
        r0_2 = r4_9 & r4_10;
    }
    if (z11) {
        __asm__("stceq p1, c1, [r1, #-0x38]");
    }
    if (z12) {
        r1_6 = reinterpret_cast<uint32_t>(__return_address()) & r5_13 << r5_14;
    }
    if (!z15) {
        z16 = (r1_6 & reinterpret_cast<uint32_t>(__return_address()) << 2) == 0;
    }
    if (z16) {
        r1_6 = r1_6 & 0x12378 << r1_6;
        z16 = r1_6 == 0;
    }
    if (z16) {
        __asm__("mcreq p9, #0, r0, c9, c14, #0");
    }
    if (z16) {
        r0_2 = reinterpret_cast<uint32_t>(__return_address()) & r9_17 << 18;
        z16 = r0_2 == 0;
    }
    if (!z16) {
        r1_6 = r0_2 & reinterpret_cast<uint32_t>(__return_address()) << 2;
        z16 = r1_6 == 0;
    }
    if (z16) {
        r1_6 = reinterpret_cast<uint32_t>(__return_address()) & r0_2 << r1_6;
    }
    if (z16) {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(r9_18) - 20) = r1_6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r9_19) - 16) = r2_20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r9_21) - 12) = r3_22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r9_23) - 8) = r4_24;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r9_25) - 4) = r8_26;
        *r9_27 = r11_28;
    }
    if (z16) {
        r0_2 = reinterpret_cast<uint32_t>(__return_address()) & r9_29 << 18;
        z16 = r0_2 == 0;
    }
    if (!z16) {
        __asm__("svcne #0x10101f");
    }
    if (z16) {
        r1_6 = 0x12398 & r0_2 << r0_2;
        z16 = r1_6 == 0;
    }
    if (!z16) {
        __asm__("mrcne p0, #0, r1, c0, c15, #0");
    }
    if (z16) {
        r1_6 = r0_2 & r0_2 << r0_2;
        z16 = r1_6 == 0;
    }
    if (!z16) {
        z16 = (r0_2 & 0x80000003) == 0;
    }
    if (z16) {
        r1_6 = 0x123a8 & r1_6 << r1_6;
    }
    if (!z16) {
        __asm__("svcne #0x111111");
    }
    if (z16) {
        r1_6 = r1_6 & r1_6 << r1_6;
        z16 = r1_6 == 0;
    }
    if (z16) {
        *r4_30 = r0_2;
        r4_31 = reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(r4_32) - 0x40e);
    }
    if (z16) {
        r0_2 = reinterpret_cast<uint32_t>(__return_address()) & reinterpret_cast<uint32_t>(r4_31) << 8;
    }
    if (z16) {
        r0_2 = r2_33 & 0x70000000;
    }
    if (z16) {
        r1_6 = r12_34 & r2_35 << 4;
    }
    if (!z16) {
        __asm__("ldmdane r4, {r0, r4, sb, ip}");
    }
    if (z16) {
        r1_6 = r1_6 & reinterpret_cast<uint32_t>(r4_31) << r2_36;
        z16 = r1_6 == 0;
    }
    if (!z16) {
        r1_6 = r0_2 & r0_2 << r0_2;
        z16 = r1_6 == 0;
    }
    if (z16) {
        r1_6 = 0x123d0 & r0_2 << r0_2;
        z16 = r1_6 == 0;
    }
    if (!z16) {
        r1_6 = *reinterpret_cast<uint32_t*>(r5_37 - 0xb11);
    }
    if (z16) {
        r1_6 = r1_6 & r1_6 << r1_6;
        z16 = r1_6 == 0;
    }
    if (!z16) {
        r1_6 = *reinterpret_cast<uint32_t*>(r9_38 - 0x911);
    }
    if (z16) {
        r1_6 = r1_6 & r3_39 << r3_40;
        z16 = r1_6 == 0;
    }
    if (!z16) {
        z16 = (r1_6 & reinterpret_cast<uint32_t>(__return_address()) << 2) == 0;
    }
    if (z16) {
        r1_6 = reinterpret_cast<uint32_t>(__return_address()) & r1_6 << r1_6;
    }
    if (!z16) {
        __asm__("mrcne p1, #0, r1, c1, c14, #0");
    }
    if (z16) {
        r1_6 = r0_2 & r0_2 << r0_2;
        z16 = r1_6 == 0;
    }
    if (!z16) {
        z16 = (r1_6 & reinterpret_cast<uint32_t>(__return_address()) << 2) == 0;
    }
    if (z16) {
        r1_6 = reinterpret_cast<uint32_t>(__zero_stack_offset()) & r5_41 << r2_42;
        z16 = r1_6 == 0;
    }
    if (!z16) {
        __asm__("mrcne p1, #0, r1, c1, c14, #0");
    }
    if (z16) {
        r1_6 = r1_6 & reinterpret_cast<uint32_t>(r4_31) << r2_43;
        z16 = r1_6 == 0;
    }
    if (z16) {
        __asm__("cdpeq p1, #1, c1, c0, c14, #0");
    }
    if (z16) {
        r1_6 = reinterpret_cast<uint32_t>(__return_address()) & r1_6 << 2;
    }
    if (z16) {
        *r4_31 = r0_2;
        r4_31 = reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(r4_31) - 0x41f);
    }
    if (z16) {
        r0_2 = reinterpret_cast<uint32_t>(r4_31) & reinterpret_cast<uint32_t>(r4_31) << 8;
    }
    if (!z16) {
        z16 = (r1_6 & r1_6 << r1_6) == 0;
    }
    if (z16) {
        r1_6 = reinterpret_cast<uint32_t>(__return_address()) & r1_6 << r1_6;
    }
    if (!z16) {
        z16 = (r1_6 & r1_6 << r1_6) == 0;
    }
    if (z16) {
        r0_2 = reinterpret_cast<uint32_t>(r4_31) & r1_6 << r10_44;
    }
    if (!z16) {
        r1_6 = *reinterpret_cast<uint32_t*>(r1_6 - 0x111);
    }
    if (z16) {
        r1_6 = r1_6 & r5_45 << r11_46;
        z16 = r1_6 == 0;
    }
    if (z16) {
        *r10_47 = r1_6;
        r10_48 = reinterpret_cast<uint32_t>(r10_49 - 0x111);
    }
    if (z16) {
        r1_6 = r1_6 & r10_48 << 2;
        z16 = r1_6 == 0;
    }
    if (!z16) {
        if (z16) {
            r0_2 = reinterpret_cast<uint32_t>(r4_31) & reinterpret_cast<uint32_t>(r4_31) << 8;
        }
        if (z16) {
            *r2_50 = r0_2;
            r2_51 = reinterpret_cast<uint32_t>(r2_52 - 0x11f);
        }
        if (z16) {
            r1_6 = 0x12440 & r8_53;
            z16 = r1_6 == 0;
        }
        if (z16) {
            __asm__("stmdaeq r8, {r1, r2, r3, fp}");
        }
        if (z16) {
            r0_2 = reinterpret_cast<uint32_t>(__return_address()) & r8_54 << 16;
        }
        if (z16) {
            *r8_55 = r1_6;
        }
        if (z16) {
            r0_2 = r0_2 & r2_51 << 2;
        }
        if (z16) {
            r0_2 = r2_51 & 0xe0000000;
        }
        if (z16) {
            r0_2 = reinterpret_cast<uint32_t>(__return_address()) & r2_51 << 4;
        }
        if (z16) {
            r0_2 = r1_6 & reinterpret_cast<uint32_t>(r4_31) << 20;
            z16 = r0_2 == 0;
        }
        if (z16) {
            r0_2 = r0_2 & r0_2;
        }
        if (z16) {
            r0_2 = r0_2 & r0_2;
        }
        if (z16) {
            r0_2 = 0x12468 & r0_2;
            z16 = r0_2 == 0;
        }
        if (z16) {
        }
        if (z16) {
        }
    }
}

void fun_12470() {
    int1_t z1;
    int1_t z2;
    int1_t z3;

    if (z1) {
    }
    if (!z2) {
        __asm__("ldmdbne r6, {r4, ip}");
    }
    if (z3) {
    }
}

void fun_12480(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;
    int1_t z5;

    if (z3) {
    }
    if (!z4) {
    }
    if (z5) {
    }
}

void fun_12490(uint32_t r0) {
    int1_t z2;
    uint32_t r1_3;
    int1_t z4;
    int1_t z5;
    uint32_t r4_6;
    uint32_t r4_7;
    int1_t z8;
    int1_t z9;
    uint32_t* r12_10;
    uint32_t r12_11;
    int32_t r12_12;
    uint32_t r4_13;
    uint32_t r6_14;
    uint32_t r9_15;
    uint32_t* r4_16;

    if (z2) {
        r1_3 = reinterpret_cast<uint32_t>(__return_address()) & 0x12498 << r0;
    }
    if (z4) {
        __asm__("cdpeq p5, #0, c0, c4, c2, #0");
    }
    if (z5) {
        r0 = r4_6 & r4_7 << 8;
    }
    if (!z8) {
        z9 = 1;
    }
    if (1) {
        r0 = reinterpret_cast<uint32_t>(__return_address()) & reinterpret_cast<uint32_t>(__zero_stack_offset()) << 2;
    }
    if (0) {
        __asm__("ldmdbne r6, {r4, ip}");
    }
    if (1) {
        z9 = (r1_3 & r1_3 << r1_3) == 0;
    }
    if (z9) {
        *r12_10 = r0;
        r12_11 = reinterpret_cast<uint32_t>(r12_12 - 4);
    }
    if (z9) {
        r0 = reinterpret_cast<uint32_t>(__return_address()) & r4_13 << 8;
    }
    if (z9) {
        r0 = r6_14 & 2;
    }
    if (z9) {
    }
    if (!z9) {
        if (z9) {
            r0 = r9_15 & r12_11 << 20;
        }
        if (z9) {
            *r4_16 = r0;
        }
        if (z9) {
        }
        if (!z9) {
        }
        if (z9) {
        }
    }
}

void fun_124d8() {
    int1_t z1;

    if (z1) {
    }
}

void fun_124e0(uint32_t r0, uint32_t r1) {
    int1_t z3;
    int1_t z4;
    int1_t z5;
    int1_t z6;
    uint32_t r6_7;

    if (z3) {
    }
    if (!z4) {
        __asm__("ldmdbne sb, {sb, sl, ip}");
    }
    if (z5) {
        z6 = (r0 & r6_7 << r0) == 0;
    }
    if (!z6) {
        z6 = 1;
    }
    if (z6) {
    }
}

void fun_124f8(int16_t* r0) {
    int1_t z2;
    uint32_t r1_3;
    int1_t z4;
    uint32_t r6_5;
    uint32_t r8_6;
    uint32_t r2_7;
    uint32_t r2_8;
    uint32_t r4_9;
    uint32_t r10_10;
    uint32_t r10_11;
    uint32_t r5_12;
    uint32_t r5_13;
    uint32_t r4_14;
    uint32_t r4_15;
    uint32_t r2_16;
    uint32_t r4_17;
    uint32_t r4_18;
    uint32_t r4_19;
    uint32_t r4_20;
    uint32_t r4_21;
    uint32_t r4_22;
    uint32_t r8_23;
    uint32_t r4_24;
    int16_t v25;
    int32_t r4_26;

    if (z2) {
        r1_3 = reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(r0) << reinterpret_cast<uint32_t>(r0);
        z4 = r1_3 == 0;
    }
    if (!z4) {
        r0 = reinterpret_cast<int16_t*>(0x12504 & reinterpret_cast<uint32_t>(r0));
    }
    if (z4) {
        r0 = reinterpret_cast<int16_t*>(0x12508 & reinterpret_cast<uint32_t>(__return_address()) << r1_3);
        z4 = r0 == 0;
    }
    if (z4) {
        __asm__("ldmdaeq ip, {r3, fp}");
    }
    if (z4) {
        r0 = reinterpret_cast<int16_t*>(r6_5 & r8_6 << 18);
    }
    if (!z4) {
        r0 = reinterpret_cast<int16_t*>(0);
        z4 = 1;
    }
    if (z4) {
        r1_3 = reinterpret_cast<uint32_t>(__zero_stack_offset()) & r2_7 << r2_8;
    }
    if (!z4) {
        z4 = (r1_3 & reinterpret_cast<uint32_t>(r0)) == 0;
    }
    if (z4) {
        r0 = reinterpret_cast<int16_t*>(r4_9 & r1_3 << r10_10);
    }
    if (!z4) {
        z4 = (r1_3 & reinterpret_cast<uint32_t>(r0)) == 0;
    }
    if (z4) {
        r1_3 = r10_11 & r5_12 << r5_13;
    }
    if (!z4) {
        if (z4) {
            r0 = reinterpret_cast<int16_t*>(r1_3 & r4_14 << 20);
            z4 = r0 == 0;
        }
        if (!z4) {
            z4 = (r1_3 & reinterpret_cast<uint32_t>(r0)) == 0;
        }
        if (z4) {
            __asm__("mcreq p13, #0, r0, c1, c3, #0");
        }
        if (z4) {
            r0 = reinterpret_cast<int16_t*>(0);
            z4 = 1;
        }
        if (z4) {
            r0 = reinterpret_cast<int16_t*>(0x12540 & r4_15 << 16);
            z4 = r0 == 0;
        }
        if (z4) {
            __asm__("stmdaeq r4, {r1, sl}");
        }
        if (z4) {
            r0 = reinterpret_cast<int16_t*>(r2_16 & r4_17 << 8);
        }
        if (z4) {
            r0 = reinterpret_cast<int16_t*>(r4_18 & r4_19 << 8);
        }
        if (z4) {
            r0 = reinterpret_cast<int16_t*>(r4_20 & r4_21 << 8);
        }
        if (z4) {
            r0 = reinterpret_cast<int16_t*>(r4_22 & 0x8000000);
        }
        if (z4) {
            r0 = reinterpret_cast<int16_t*>(r8_23 & r4_24 << 8);
        }
        if (z4) {
        }
        if (z4) {
            r0 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(r0));
        }
        if (z4) {
            *r0 = v25;
            r0 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r0) - r4_26);
        }
        if (z4) {
            *r0 = static_cast<int16_t>(reinterpret_cast<uint32_t>(__return_address()));
        }
    }
}

void fun_3044(void** r0) {
    int1_t n2;
    uint32_t r12_3;
    int1_t n4;
    int1_t z5;
    int1_t n6;
    int1_t n7;
    uint32_t r12_8;
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
    int1_t z51;
    int1_t z52;

    if (n2) {
        r0 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r0) & r12_3 << 10);
    }
    if (n4) {
    }
    if (z5) {
    }
    if (n6) {
        r0 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(r0));
    }
    if (n7) {
        r0 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r0) & r12_8 << 10);
    }
    if (z9) {
        *r0 = reinterpret_cast<void*>(static_cast<int16_t>(reinterpret_cast<int32_t>(__zero_stack_offset())));
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
    if (z51) {
    }
    if (z52) {
    }
}

void fun_3130(int16_t* r0) {
    int1_t z2;
    int1_t z3;
    int1_t z4;
    int16_t v5;
    int1_t z6;
    uint32_t r8_7;
    int1_t z8;
    int1_t z9;
    uint32_t r8_10;
    int1_t z11;
    int1_t z12;
    uint32_t r8_13;
    uint32_t r8_14;
    int1_t z15;
    uint32_t r4_16;
    uint32_t r4_17;
    int1_t z18;
    uint32_t r12_19;
    uint32_t r12_20;
    int1_t z21;
    uint32_t r8_22;
    int1_t z23;
    int1_t z24;
    uint32_t r8_25;
    uint32_t r8_26;
    int1_t z27;
    int32_t r7_28;
    int1_t z29;
    uint32_t r8_30;
    int1_t z31;
    int32_t r4_32;
    int1_t z33;
    int32_t r12_34;
    int1_t z35;
    uint32_t r4_36;
    uint32_t r9_37;
    int1_t z38;
    uint32_t r12_39;
    int32_t r9_40;
    int1_t z41;
    uint32_t r4_42;
    int32_t r9_43;
    uint32_t r4_44;
    int32_t r9_45;
    int1_t z46;
    int32_t r12_47;
    int1_t z48;
    uint32_t r4_49;
    uint32_t r10_50;
    int1_t z51;
    int1_t z52;
    int32_t r12_53;
    int1_t z54;
    uint32_t r8_55;
    int1_t z56;
    uint32_t r8_57;
    int1_t z58;
    uint32_t r4_59;
    int32_t r12_60;
    int1_t z61;
    int32_t r12_62;
    int1_t z63;
    uint32_t r4_64;
    int32_t r12_65;
    uint32_t r4_66;
    int32_t r12_67;
    int1_t z68;
    int1_t z69;
    int1_t z70;
    int1_t z71;
    int1_t z72;
    int1_t z73;
    int1_t z74;
    int1_t z75;
    int1_t z76;
    int1_t z77;
    int1_t z78;
    int1_t z79;

    if (z2) {
        __asm__("ldrdeq r3, r4, [r0], -r4");
    }
    if (z3) {
        __asm__("ldrdeq r3, r4, [r0], -ip");
    }
    if (z4) {
        *reinterpret_cast<uint32_t*>(&v5) = reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(r0) << 4;
    }
    if (z6) {
        *reinterpret_cast<uint32_t*>(&v5) = reinterpret_cast<uint32_t>(r0) & r8_7 >> 4;
    }
    if (z8) {
        *reinterpret_cast<uint32_t*>(&v5) = reinterpret_cast<uint32_t>(r0) & (reinterpret_cast<uint32_t>(r0) >> 4 | reinterpret_cast<uint32_t>(r0) << 28);
    }
    if (z9) {
        *reinterpret_cast<uint32_t*>(&v5) = reinterpret_cast<uint32_t>(r0) & r8_10 >> 5;
    }
    if (z11) {
        *reinterpret_cast<uint32_t*>(&v5) = reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(r0) << 6;
    }
    if (z12) {
        *reinterpret_cast<uint32_t*>(&v5) = reinterpret_cast<uint32_t>(r0) & (r8_13 >> 6 | r8_14 << 26);
    }
    if (z15) {
        *reinterpret_cast<uint32_t*>(&v5) = reinterpret_cast<uint32_t>(r0) & (r4_16 >> 7 | r4_17 << 25);
    }
    if (z18) {
        *reinterpret_cast<uint32_t*>(&v5) = reinterpret_cast<uint32_t>(r0) & (r12_19 >> 8 | r12_20 << 24);
    }
    if (z21) {
        *reinterpret_cast<uint32_t*>(&v5) = reinterpret_cast<uint32_t>(r0) & r8_22 << 10;
    }
    if (z23) {
        *r0 = static_cast<int16_t>(*reinterpret_cast<uint32_t*>(&v5));
        r0 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r0) - reinterpret_cast<uint32_t>(r0));
    }
    if (z24) {
        *reinterpret_cast<uint32_t*>(&v5) = reinterpret_cast<uint32_t>(r0) & (r8_25 >> 12 | r8_26 << 20);
    }
    if (z27) {
        *reinterpret_cast<uint32_t*>(&v5) = reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(r0) >> r7_28;
    }
    if (z29) {
        *reinterpret_cast<uint32_t*>(&v5) = reinterpret_cast<uint32_t>(r0) & r8_30 << 16;
    }
    if (z31) {
        *r0 = v5;
        r0 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r0) - r4_32);
    }
    if (z33) {
        *r0 = v5;
        r0 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r0) - r12_34);
    }
    if (z35) {
        *reinterpret_cast<uint32_t*>(&v5) = reinterpret_cast<uint32_t>(r0) & r4_36 << r9_37;
    }
    if (z38) {
        *reinterpret_cast<uint32_t*>(&v5) = reinterpret_cast<uint32_t>(r0) & r12_39 >> r9_40;
    }
    if (z41) {
        *reinterpret_cast<uint32_t*>(&v5) = reinterpret_cast<uint32_t>(r0) & (r4_42 >> r9_43 | r4_44 << reinterpret_cast<uint32_t>(32 - r9_45));
    }
    if (z46) {
        *r0 = static_cast<int16_t>(*reinterpret_cast<uint32_t*>(&v5));
        r0 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r0) - r12_47);
    }
    if (z48) {
        *reinterpret_cast<uint32_t*>(&v5) = reinterpret_cast<uint32_t>(r0) & r4_49 << r10_50;
    }
    if (z51) {
        *reinterpret_cast<uint32_t*>(&v5) = reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(r0) << 21;
    }
    if (z52) {
        *r0 = v5;
        r0 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r0) - r12_53);
    }
    if (z54) {
        *reinterpret_cast<uint32_t*>(&v5) = reinterpret_cast<uint32_t>(r0) & r8_55 << 23;
    }
    if (z56) {
        *reinterpret_cast<uint32_t*>(&v5) = reinterpret_cast<uint32_t>(r0) & r8_57 >> 24;
    }
    if (z58) {
        *reinterpret_cast<uint32_t*>(&v5) = reinterpret_cast<uint32_t>(r0) & r4_59 >> r12_60;
    }
    if (z61) {
        *reinterpret_cast<uint32_t*>(&v5) = reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(r12_62 >> 24);
    }
    if (z63) {
        *reinterpret_cast<uint32_t*>(&v5) = reinterpret_cast<uint32_t>(r0) & (r4_64 >> r12_65 | r4_66 << reinterpret_cast<uint32_t>(32 - r12_67));
    }
    if (z68) {
        *r0 = static_cast<int16_t>(*reinterpret_cast<uint32_t*>(&v5));
        r0 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r0) - reinterpret_cast<uint32_t>(r0));
    }
    if (z69) {
        *r0 = v5;
    }
    if (z70) {
    }
    if (z71) {
    }
    if (z72) {
    }
    if (z73) {
    }
    if (z74) {
    }
    if (z75) {
    }
    if (z76) {
    }
    if (z77) {
    }
    if (z78) {
    }
    if (z79) {
    }
    goto fun_62e4;
}

void fun_31dc() {
    void** r3_1;

    fun_62e4(10, 2, 1, r3_1);
}

void fun_414c(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_41c8(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_4244(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_4414() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    fun_62e4(7, 7, 1, r3_4);
    fun_62e4(6, 7, 1, r3_5);
    fun_62e4(5, 7, 1, r3_6);
    goto 0x4938;
}

void fun_496c(int16_t* r0, int32_t r1) {
    int1_t z3;
    int16_t v4;
    uint32_t r8_5;
    int1_t z6;
    uint32_t r4_7;
    uint32_t r10_8;
    int1_t z9;
    int16_t v10;
    int1_t z11;
    uint32_t r12_12;
    int1_t z13;
    uint32_t r12_14;
    uint32_t r12_15;
    int1_t z16;
    uint32_t r3_17;
    int1_t z18;
    int32_t r10_19;
    int1_t z20;
    int32_t r8_21;
    uint32_t r10_22;
    int1_t z23;
    uint32_t r8_24;
    int1_t z25;
    uint32_t r8_26;
    int32_t r11_27;
    uint32_t r8_28;
    int32_t r11_29;
    int1_t z30;
    uint32_t r8_31;
    uint32_t r8_32;
    int1_t z33;
    uint32_t r12_34;
    int1_t z35;
    int32_t r8_36;
    int1_t z37;
    int1_t z38;
    uint32_t r8_39;
    uint32_t r8_40;
    int1_t z41;
    uint32_t r8_42;
    int1_t z43;
    uint32_t r10_44;
    int1_t z45;
    int1_t z46;
    int1_t z47;
    uint32_t r8_48;
    int1_t z49;
    int1_t z50;
    int32_t r8_51;
    int1_t z52;
    int1_t z53;
    uint32_t r8_54;
    uint32_t r8_55;
    int1_t z56;
    int1_t z57;
    int1_t z58;
    int32_t r8_59;
    int1_t z60;
    int1_t z61;
    uint32_t r8_62;
    int1_t z63;
    int1_t z64;
    uint32_t r8_65;
    int1_t z66;
    uint32_t r10_67;
    int1_t z68;
    int1_t z69;
    uint32_t r12_70;
    int1_t z71;
    uint32_t r12_72;
    uint32_t r12_73;
    int1_t z74;
    uint32_t r3_75;
    int1_t z76;
    uint32_t r12_77;
    int1_t z78;
    int1_t z79;
    int1_t z80;
    int1_t z81;
    void** r3_82;
    void** r3_83;

    if (z3) {
        *r0 = v4;
        r0 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r0) - r8_5);
    }
    if (z6) {
        r4_7 = reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(r0) << r10_8;
    }
    if (z9) {
        *reinterpret_cast<uint32_t*>(&v10) = reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(r0) << 6;
    }
    if (z11) {
        *reinterpret_cast<uint32_t*>(&v10) = reinterpret_cast<uint32_t>(r0) & r12_12 >> 6;
    }
    if (z13) {
        *reinterpret_cast<uint32_t*>(&v10) = reinterpret_cast<uint32_t>(r0) & (r12_14 >> 6 | r12_15 << 26);
    }
    if (z16) {
        r0 = reinterpret_cast<int16_t*>(r4_7 * r3_17);
    }
    if (z18) {
        r4_7 = reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(r0) >> r10_19;
    }
    if (z20) {
        r0 = reinterpret_cast<int16_t*>(r8_21 * r10_22);
    }
    if (z23) {
        r4_7 = reinterpret_cast<uint32_t>(r0) & r8_24 << 22;
    }
    if (z25) {
        r4_7 = reinterpret_cast<uint32_t>(r0) & (r8_26 >> r11_27 | r8_28 << reinterpret_cast<uint32_t>(32 - r11_29));
    }
    if (z30) {
        r4_7 = reinterpret_cast<uint32_t>(r0) & (r8_31 >> 23 | r8_32 << 9);
    }
    if (z33) {
        r0 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r0) * r12_34);
    }
    if (z35) {
        r4_7 = reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(r8_36 >> 26);
    }
    if (z37) {
        r4_7 = reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(r0) << reinterpret_cast<uint32_t>(__return_address());
    }
    if (z38) {
        r4_7 = reinterpret_cast<uint32_t>(r0) & (r8_39 >> 29 | r8_40 << 3);
    }
    if (z41) {
        *r0 = v10;
        r0 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r0) - r8_42);
    }
    if (z43) {
        r4_7 = reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(r0) << r10_44;
    }
    if (z45) {
        *reinterpret_cast<uint32_t*>(&v10) = reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(r0) << 6;
    }
    if (z46) {
        __asm__("ldrdeq r4, r5, [r0], -r0");
    }
    if (z47) {
        *reinterpret_cast<uint32_t*>(&v10) = reinterpret_cast<uint32_t>(r0) & r8_48;
    }
    if (z49) {
        *reinterpret_cast<uint32_t*>(&v10) = reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(r0) >> 32);
    }
    if (z50) {
        r0 = reinterpret_cast<int16_t*>(r8_51 * reinterpret_cast<uint32_t>(r0));
    }
    if (z52) {
        *reinterpret_cast<uint32_t*>(&v10) = reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(r0) << 2;
    }
    if (z53) {
        *reinterpret_cast<uint32_t*>(&v10) = reinterpret_cast<uint32_t>(r0) & (r8_54 >> r1 | r8_55 << reinterpret_cast<uint32_t>(32 - r1));
    }
    if (z56) {
        *r0 = static_cast<int16_t>(*reinterpret_cast<uint32_t*>(&v10));
        r0 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r0) - reinterpret_cast<uint32_t>(r0));
    }
    if (z57) {
        *reinterpret_cast<uint32_t*>(&v10) = reinterpret_cast<uint32_t>(r0) & r4_7 << 11;
    }
    if (z58) {
        *reinterpret_cast<uint32_t*>(&v10) = reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(r8_59 >> 4);
    }
    if (z60) {
        *reinterpret_cast<uint32_t*>(&v10) = reinterpret_cast<uint32_t>(r0) & (reinterpret_cast<uint32_t>(r0) >> 4 | reinterpret_cast<uint32_t>(r0) << 28);
    }
    if (z61) {
        *reinterpret_cast<uint32_t*>(&v10) = reinterpret_cast<uint32_t>(r0) & r8_62 << 5;
    }
    if (z63) {
        *r0 = static_cast<int16_t>(*reinterpret_cast<uint32_t*>(&v10));
        r0 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r0) - reinterpret_cast<uint32_t>(r0));
    }
    if (z64) {
        *r0 = v10;
        r0 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r0) - r8_65);
    }
    if (z66) {
        r4_7 = reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(r0) << r10_67;
    }
    if (z68) {
        *reinterpret_cast<uint32_t*>(&v10) = reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(r0) << 6;
    }
    if (z69) {
        *reinterpret_cast<uint32_t*>(&v10) = reinterpret_cast<uint32_t>(r0) & r12_70 >> 6;
    }
    if (z71) {
        *reinterpret_cast<uint32_t*>(&v10) = reinterpret_cast<uint32_t>(r0) & (r12_72 >> 6 | r12_73 << 26);
    }
    if (z74) {
        r0 = reinterpret_cast<int16_t*>(r4_7 * r3_75);
    }
    if (z76) {
        *r0 = static_cast<int16_t>(*reinterpret_cast<uint32_t*>(&v10));
        r0 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r0) - r12_77);
    }
    if (z78) {
        *reinterpret_cast<uint32_t*>(&v10) = reinterpret_cast<uint32_t>(r0) & (r4_7 >> 7 | r4_7 << 25);
    }
    if (z79) {
        *reinterpret_cast<uint32_t*>(&v10) = reinterpret_cast<uint32_t>(r0) & (r4_7 >> 8 | r4_7 << 24);
    }
    if (z80) {
        *r0 = v10;
    }
    if (z81) {
    }
    fun_62e4(8, 4, 1, r3_82);
    fun_62e4(8, 5, 1, r3_83);
    goto 0x57e4;
}

void fun_4a30() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    fun_62e4(7, 7, 1, r3_4);
    fun_62e4(6, 7, 1, r3_5);
    fun_62e4(5, 7, 1, r3_6);
    goto 0x5640;
}

void fun_536c() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    fun_62e4(7, 7, 1, r3_4);
    goto 0x5640;
}

void fun_57a8(int32_t r0) {
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
    int1_t z14;

    if (z2) {
    }
    if (z3) {
    }
    if (z4) {
    }
    if (z5) {
    }
    if (z6) {
        __asm__("ldrdeq r4, r5, [r0], -r4");
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
    if (!z14) 
        goto "???";
}

void fun_58cc() {
    int1_t z1;
    int1_t z2;
    int1_t z3;
    int1_t z4;

    if (z1) {
    }
    if (z2) {
    }
    if (z3) {
        __asm__("ldrdeq r1, r2, [r1], -ip");
    }
    if (!z4) 
        goto "???";
    __asm__("ldrdeq r1, r2, [r1], -r4");
}

int32_t* g5960 = reinterpret_cast<int32_t*>(0x40000510);

signed char** g5964 = reinterpret_cast<signed char**>(0x4000180c);

struct s56 {
    signed char f0;
    signed char f1;
};

signed char* fun_5904() {
    int32_t* r1_1;
    int32_t r2_2;
    int1_t z3;
    signed char** r3_4;
    int32_t r12_5;
    int32_t r0_6;
    signed char** r3_7;
    struct s56* r2_8;

    r1_1 = g5960;
    r2_2 = *r1_1;
    z3 = r2_2 == 0;
    if (!z3) {
    }
    if (!z3) {
        return 0;
    } else {
        *r1_1 = 1;
        r3_4 = g5964;
        *r3_4 = reinterpret_cast<signed char*>(0);
        r12_5 = r2_2;
        while (r0_6 = r12_5 * 0x144, r3_7 = g5964, ++r12_5, r2_8 = reinterpret_cast<struct s56*>(r0_6 + reinterpret_cast<int32_t>(*r3_7)), *reinterpret_cast<signed char*>(r0_6 + reinterpret_cast<int32_t>(*r3_7)) = -1, r2_8->f1 = -1, r12_5 != 21) {
        }
        return 1;
    }
}

void*** g5990 = reinterpret_cast<void***>(0x40000510);

void** g5994 = reinterpret_cast<void**>(0x4000180c);

void** fun_5960(int32_t r0) {
    int1_t n2;
    int1_t n3;
    void*** r1_4;
    void** r3_5;
    int1_t z6;
    void** r0_7;

    if (n2) {
    }
    if (n3) {
    }
    r1_4 = g5990;
    r3_5 = *r1_4;
    z6 = r3_5 == 0;
    r0_7 = r3_5;
    if (!z6) {
        r3_5 = g5994;
    }
    if (!z6) {
        r0_7 = reinterpret_cast<void**>(1);
    }
    if (!z6) {
        *reinterpret_cast<void***>(r3_5) = reinterpret_cast<void**>(0);
    }
    if (!z6) {
        *r1_4 = reinterpret_cast<void**>(0);
    }
    return r0_7;
}

void fun_5990(int32_t r0) {
    int1_t n2;
    int1_t n3;

    if (n2) {
    }
    if (!n3) 
        goto "???";
}

void fun_59a8(int32_t r0, int64_t* r1) {
    int64_t v2;
    int1_t z3;

    *reinterpret_cast<int64_t**>(&v2) = r1;
    if (!z3) 
        goto "???";
    **reinterpret_cast<int64_t**>(&v2) = v2;
}

void fun_5d20(int32_t r0, int64_t* r1) {
    int64_t v2;
    int1_t z3;

    *reinterpret_cast<int64_t**>(&v2) = r1;
    if (!z3) 
        goto "???";
    **reinterpret_cast<int64_t**>(&v2) = v2;
}

void fun_5e5c() {
    goto fun_ea84;
}

void fun_5eb4() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_6204() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_620c() {
    return;
}

void fun_623c(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_6278(int32_t r0) {
    int1_t n2;
    int1_t n3;

    if (n2) {
    }
    if (n3) {
    }
    goto fun_f0cc;
}

void fun_628c(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_62e0(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void* g6310 = reinterpret_cast<void*>(0x40001810);

uint32_t fun_62fc(void** r0) {
    int1_t n2;
    void** r1_3;
    uint32_t r8_4;
    void* r0_5;
    int32_t r0_6;
    int1_t z7;
    uint32_t r3_8;
    uint32_t r0_9;

    if (n2) {
        r1_3 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) & reinterpret_cast<unsigned char>(r0) << r8_4);
    }
    r0_5 = g6310;
    r0_6 = fun_effc(r0, r1_3);
    z7 = r0_6 == 0;
    if (!z7) {
        r3_8 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(r0_5) + reinterpret_cast<unsigned char>(r0) << 1);
    }
    if (!z7) {
        r3_8 = r3_8;
    }
    r0_9 = 0xffffffff;
    if (!z7) {
        r0_9 = r3_8 & 1;
    }
    return r0_9;
}

void fun_6310(int32_t r0) {
    int1_t n2;

    if (n2) {
    }
    goto fun_ee24;
}

void fun_6324(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_6330(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_636c(int32_t r0) {
    int1_t n2;

    if (n2) {
    }
    goto fun_f1dc;
}

void fun_6378(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_6384(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

int32_t* g63a4 = reinterpret_cast<int32_t*>(0x40000598);

void fun_6390(int32_t r0) {
    int1_t n2;
    int32_t* r3_3;

    if (n2) {
    }
    r3_3 = g63a4;
    *r3_3 = 0;
    return;
}

void fun_63a4() {
    int1_t n1;

    if (!n1) 
        goto "???";
}

int32_t* g6470 = reinterpret_cast<int32_t*>(0x40000598);

void fun_645c(int32_t r0) {
    int32_t* r3_2;

    r3_2 = g6470;
    *r3_2 = r0;
    goto fun_eadc;
}

void*** g6924 = reinterpret_cast<void***>(0x40000598);

struct s57 {
    signed char[1] pad1;
    void** f1;
};

void fun_669c(int32_t r0);

void fun_6638(uint32_t r0) {
    void* sp2;
    int1_t z3;
    uint32_t r6_4;
    int32_t r12_5;
    int1_t z6;
    uint32_t r12_7;
    int1_t z8;
    int32_t r12_9;
    int1_t z10;
    uint32_t r12_11;
    uint32_t r12_12;
    int1_t z13;
    uint32_t r12_14;
    uint32_t r12_15;
    void** r2_16;
    void* r1_17;
    int32_t r9_18;
    int32_t r11_19;
    uint32_t r7_20;
    uint32_t r3_21;
    uint32_t r5_22;
    void** r4_23;
    void** r0_24;
    void** r3_25;
    unsigned char v26;
    uint32_t r3_27;
    unsigned char v28;
    void** r1_29;
    void** r0_30;
    void** r2_31;
    unsigned char v32;
    uint32_t r3_33;
    unsigned char v34;
    void*** r3_35;
    void** r4_36;
    int32_t v37;
    void** r10_38;
    void** r6_39;
    int1_t z40;
    uint32_t r5_41;
    int32_t r11_42;
    void** r8_43;
    struct s0* r1_44;
    struct s0* r8_45;
    uint32_t r0_46;
    int1_t z47;
    int32_t r1_48;
    uint32_t r3_49;
    struct s57* r3_50;
    int32_t r11_51;
    int1_t below_or_equal52;
    int32_t r11_53;
    struct s0* r8_54;
    uint32_t r0_55;
    int1_t z56;
    int1_t z57;
    int32_t r11_58;
    void** r8_59;
    int32_t* v60;
    int32_t v61;

    sp2 = __zero_stack_offset();
    if (z3) {
        r6_4 = r0 & reinterpret_cast<uint32_t>(r12_5 >> 12);
    }
    if (z6) {
        r6_4 = r0 & r12_7 >> 14;
    }
    if (z8) {
        r6_4 = r0 & reinterpret_cast<uint32_t>(r12_9 >> r6_4);
    }
    if (z10) {
        r6_4 = r0 & (r12_11 >> 12 | r12_12 << 20);
    }
    if (z13) {
        r6_4 = r0 & (r12_14 >> r6_4 | r12_15 << 32 - r6_4);
    }
    r2_16 = reinterpret_cast<void**>(3);
    while (1) {
        r1_17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(sp2) + 0x174 + (reinterpret_cast<unsigned char>(r2_16 - 1) << 2));
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(r1_17) - 40) == 1) {
            if (reinterpret_cast<uint32_t>(r9_18 - 1) <= 2) 
                goto addr_6790_16;
        } else {
            *reinterpret_cast<void***>(r11_19 + r7_20 << 2) = r2_16;
            r7_20 = r7_20 + 1 & 0xff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(r1_17) - 40) = 1;
            goto addr_6790_16;
        }
        r9_18 = 3;
        while (1) {
            addr_6790_16:
            ++r6_4;
            r3_21 = r6_4 & 0xff;
            if (reinterpret_cast<int32_t>(r3_21) >= reinterpret_cast<int32_t>(r5_22)) 
                goto addr_67a0_20;
            r4_23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp2) + 0x16c + 2);
            r2_16 = reinterpret_cast<void**>(4);
            r0_24 = fun_7844(reinterpret_cast<int32_t>(sp2) + 12 + (r3_21 << 4), 0, 4, r4_23, 5);
            if (r0_24 != 1) {
                if (reinterpret_cast<uint32_t>(r9_18 - 1) > 1) {
                    r9_18 = 2;
                }
                continue;
            }
            r3_25 = reinterpret_cast<void**>(static_cast<uint32_t>(v26));
            r2_16 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp2) + 0x100);
            if (r3_25 != 15) 
                goto addr_65d0_28;
            r3_27 = v28;
            if (r3_27 <= 3) 
                goto label_31;
            addr_672c_33:
            r2_16 = reinterpret_cast<void**>(0);
            if (0) 
                break;
            if (reinterpret_cast<uint32_t>(r9_18 - 1) > 3) {
                r9_18 = 4;
            }
            continue;
            addr_65d0_28:
            if (reinterpret_cast<unsigned char>(r3_25) > reinterpret_cast<unsigned char>(15)) {
                if (r3_25 != 19) 
                    goto addr_65e8_39;
            } else {
                if (!reinterpret_cast<int1_t>(r3_25 == 14)) {
                    goto addr_671c_42;
                } else {
                    r1_29 = r4_23 + 2;
                    r0_30 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp2) + 0x170 + 2);
                    r2_31 = reinterpret_cast<void**>(1);
                    goto addr_6614_45;
                }
            }
            if (static_cast<uint32_t>(v32) == 5) 
                goto addr_6628_48;
            addr_671c_42:
            if (reinterpret_cast<uint32_t>(r9_18 - 1) > 4) {
                r9_18 = 5;
            }
            continue;
            addr_6628_48:
            r3_33 = v34;
            if (r3_33 <= 4) 
                goto label_52;
            goto addr_672c_33;
            addr_65e8_39:
            if (!reinterpret_cast<int1_t>(r3_25 == 96)) {
                goto addr_671c_42;
            } else {
                r1_29 = r4_23 + 2;
                r0_30 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp2) + 0x170 + 2);
                r2_31 = reinterpret_cast<void**>(2);
            }
            addr_6614_45:
            fun_e7e0(r0_30, r1_29, r2_31, r3_25, 5);
            goto addr_672c_33;
        }
    }
    addr_67a0_20:
    r3_35 = g6924;
    if (*r3_35) {
        r4_36 = *r3_35;
        v37 = 0;
        r10_38 = reinterpret_cast<void**>(1);
        r6_39 = r4_36;
        while (1) {
            z40 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r4_36))) == 0xff;
            if (z40) {
                r5_41 = 0;
            }
            if (z40) {
                while (r2_16 = reinterpret_cast<void**>(12), r5_41 != r7_20) {
                    if (*reinterpret_cast<void***>(r11_42 + r5_41 << 2) == r10_38) {
                        fun_e7e0(r4_36, r8_43, 12, *reinterpret_cast<void***>(r11_42 + r5_41 << 2), 5);
                        *reinterpret_cast<void***>(r4_36 + 12) = reinterpret_cast<void**>(0);
                    }
                    r5_41 = r5_41 + 1 & 0xff;
                }
            } else {
                r1_44 = r8_45;
                r0_46 = fun_63a8(r6_39, r1_44, r2_16);
                z47 = r0_46 == 1;
                if (z47) 
                    goto label_72; else 
                    goto addr_6824_73;
            }
            addr_68d8_74:
            r1_48 = v37 + 1;
            v37 = r1_48;
            r6_39 = r6_39 + 16;
            ++r10_38;
            r4_36 = r4_36 + 16;
            if (r1_48 == 8) 
                break;
            continue;
            label_72:
            r1_44 = reinterpret_cast<struct s0*>(0);
            addr_6824_73:
            if (z47) {
                while (r3_49 = reinterpret_cast<uint32_t>(r1_44) & 0xff, r3_49 >= r7_20) {
                    r3_50 = reinterpret_cast<struct s57*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r4_36 + 12))));
                    if (*reinterpret_cast<void***>(r11_51 + r3_49 << 2) == r10_38) 
                        goto addr_683c_80;
                    below_or_equal52 = reinterpret_cast<uint32_t>(r3_50) <= 14;
                    r2_16 = reinterpret_cast<void**>(&r3_50->f1);
                    if (!below_or_equal52) {
                        r3_50 = reinterpret_cast<struct s57*>(0xffffffff);
                    }
                    if (!below_or_equal52) {
                        *reinterpret_cast<void***>(r4_36) = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint32_t>(r3_50)));
                    }
                    if (!below_or_equal52) {
                        r3_50 = reinterpret_cast<struct s57*>(&r3_50->f1);
                    }
                    if (!below_or_equal52) {
                        *reinterpret_cast<void***>(r4_36 + 12) = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint32_t>(r3_50)));
                    }
                    if (below_or_equal52) {
                        *reinterpret_cast<void***>(r4_36 + 12) = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint32_t>(r2_16)));
                    }
                    r1_44 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(r1_44) + 1);
                    if (below_or_equal52) {
                        *reinterpret_cast<void***>(r11_53 + r7_20 << 2) = r10_38;
                    }
                    if (!below_or_equal52) 
                        continue;
                    r7_20 = r7_20 + 1 & 0xff;
                }
            } else {
                r0_55 = fun_63a8(r6_39, r8_54, r2_16);
                z56 = r0_55 == 0;
                if (z56) 
                    goto label_98; else 
                    goto addr_689c_99;
            }
            goto addr_68d8_74;
            addr_683c_80:
            z57 = r3_50 == 0;
            if (!z57) {
                r3_50 = reinterpret_cast<struct s57*>(0);
            }
            if (!z57) {
                *reinterpret_cast<void***>(r4_36 + 12) = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint32_t>(r3_50)));
            }
            goto addr_68d8_74;
            label_98:
            r5_41 = r0_55;
            addr_689c_99:
            if (z56) {
                while (r2_16 = reinterpret_cast<void**>(12), r5_41 != r7_20) {
                    if (*reinterpret_cast<void***>(r11_58 + r5_41 << 2) == r10_38) {
                        fun_e7e0(r4_36, r8_59, 12, *reinterpret_cast<void***>(r11_58 + r5_41 << 2), 5);
                        *reinterpret_cast<void***>(r4_36 + 12) = reinterpret_cast<void**>(0);
                    }
                    r5_41 = r5_41 + 1 & 0xff;
                }
                goto addr_68d8_74;
            } else {
                goto addr_68d8_74;
            }
        }
    }
    if (v60) {
        *v60 = r9_18;
    }
    goto v61;
    label_31:
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(fun_669c) + r3_27 << 2);
    label_52:
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(fun_6638) + r3_33 << 2);
}

void fun_665c() {
    goto 0x690c;
}

void fun_669c(int32_t r0) {
    int1_t z2;
    int1_t z3;
    int1_t z4;
    int1_t z5;
    int1_t z6;
    unsigned char v7;

    if (z2) {
    }
    if (z3) {
    }
    if (z4) {
    }
    if (z5) {
    }
    z6 = static_cast<uint32_t>(v7) == 0;
    if (z6) {
    }
    if (!z6) {
    }
    goto 0x672c;
}

void fun_66c8() {
    int1_t z1;
    unsigned char v2;

    z1 = static_cast<uint32_t>(v2) == 0;
    if (z1) {
    }
    if (!z1) {
    }
    goto 0x672c;
}

void fun_66e4() {
    int1_t z1;
    unsigned char v2;

    z1 = static_cast<uint32_t>(v2) == 0;
    if (z1) {
    }
    if (!z1) {
    }
    goto 0x672c;
}

void fun_6700() {
    int1_t z1;
    unsigned char v2;

    z1 = static_cast<uint32_t>(v2) == 0;
    if (z1) {
    }
    if (!z1) {
    }
    goto 0x672c;
}

void fun_6968(int32_t r0) {
    int1_t n2;
    int1_t n3;

    if (n2) {
    }
    if (!n3) 
        goto "???";
    __asm__("ldrdmi r0, r1, [r0], -ip");
}

void fun_697c(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_698c(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

int32_t* g6a5c = reinterpret_cast<int32_t*>(0x400005f0);

void fun_6a38(int64_t* r0) {
    int64_t v1;
    int1_t n2;
    int32_t r4_3;
    int1_t n4;
    int32_t* r3_5;

    *reinterpret_cast<int64_t**>(&v1) = r0;
    if (n2) {
        **reinterpret_cast<int64_t**>(&v1) = v1;
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<int64_t**>(&v1)) - r4_3);
    }
    if (n4) {
        **reinterpret_cast<int64_t**>(&v1) = v1;
    }
    r3_5 = g6a5c;
    *r3_5 = 0;
    goto fun_eadc;
}

void fun_6a5c(int64_t* r0) {
    int64_t v1;
    int1_t n2;
    int1_t n3;

    *reinterpret_cast<int64_t**>(&v1) = r0;
    if (n2) {
        **reinterpret_cast<int64_t**>(&v1) = v1;
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<int64_t**>(&v1)) - reinterpret_cast<int32_t>(*reinterpret_cast<int64_t**>(&v1)));
    }
    if (!n3) 
        goto "???";
    **reinterpret_cast<int64_t**>(&v1) = v1;
}

void fun_6a8c(int32_t r0) {
    int1_t n2;
    int1_t z3;

    if (n2) {
    }
    if (!z3) 
        goto "???";
}

void** g6d0c = reinterpret_cast<void**>(0x68);

void** g6d10 = reinterpret_cast<void**>(0x7c);

void** g6d14 = reinterpret_cast<void**>(0x84);

unsigned char* g6cf0 = reinterpret_cast<unsigned char*>(0x400006e0);

void** g6d04 = reinterpret_cast<void**>(88);

int32_t* g6cf4 = reinterpret_cast<int32_t*>(0x40000010);

void** g6cf8 = reinterpret_cast<void**>(0x70);

unsigned char* g89c4 = reinterpret_cast<unsigned char*>(0x400006e9);

void*** g89dc = reinterpret_cast<void***>(0x400006dc);

unsigned char* g89c8 = reinterpret_cast<unsigned char*>(0x400006e8);

void** g89cc = reinterpret_cast<void**>(0xe4);

void** g89d0 = reinterpret_cast<void**>(100);

void** g89d4 = reinterpret_cast<void**>(0x74);

void** g6d08 = reinterpret_cast<void**>(0xec);

void* g6cfc = reinterpret_cast<void*>(0x400005f4);

uint32_t* g6d00 = reinterpret_cast<uint32_t*>(0x400005f0);

void** fun_6b98(void** r0, void** r1, void** r2, void** r3, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34) {
    int1_t n35;
    int32_t r4_36;
    int1_t n37;
    uint32_t r8_38;
    int32_t r6_39;
    int1_t n40;
    uint32_t r4_41;
    int1_t n42;
    uint32_t r12_43;
    uint32_t r12_44;
    int1_t n45;
    uint32_t r4_46;
    int32_t r6_47;
    void** r5_48;
    void** r4_49;
    void** r5_50;
    void** r6_51;
    void** r0_52;
    void** r6_53;
    void** r0_54;
    void** r0_55;
    void** r0_56;
    unsigned char* r3_57;
    void** r0_58;
    int32_t* r3_59;
    int1_t z60;
    unsigned char* r3_61;
    unsigned char* r3_62;
    int1_t z63;
    void*** r3_64;
    void** r0_65;
    unsigned char* r3_66;
    int1_t z67;
    int1_t z68;
    unsigned char* r3_69;
    void** r2_70;
    void** r0_71;
    void** r0_72;
    void** r0_73;
    void** r0_74;
    void** r0_75;
    int1_t z76;
    int1_t z77;
    unsigned char* r3_78;
    void** r3_79;
    void** r3_80;
    unsigned char* r3_81;
    int1_t z82;
    void** r3_83;
    void* r2_84;
    uint32_t* r2_85;

    if (n35) {
        r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) & reinterpret_cast<uint32_t>(r4_36 >> 12));
    }
    if (n37) {
        r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) & r8_38 >> r6_39);
    }
    if (n40) {
        r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) & r4_41 << reinterpret_cast<unsigned char>(r0));
    }
    if (n42) {
        r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) & (r12_43 >> 11 | r12_44 << 21));
    }
    if (n45) {
        r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) & r4_46 >> r6_47);
    }
    r5_48 = r1;
    r0_52 = fun_1054(r0, r1, r2, r3, r4_49, r5_50, r6_51);
    r6_53 = r0_52;
    if (reinterpret_cast<unsigned char>(r0) > reinterpret_cast<unsigned char>(14)) {
        r0_54 = g6d0c;
        fun_6208(r0_54, r1, r2, r3, r4_49, r5_50, r6_51, __return_address(), a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31);
        r0_55 = g6d10;
        fun_6214(r0_55, r0, r2);
        r0_56 = g6d14;
        r0_52 = fun_6214(r0_56, r5_48, r2);
    } else {
        if (!reinterpret_cast<int1_t>(r5_48 == 1)) {
            if (!reinterpret_cast<int1_t>(r5_48 == 2)) 
                goto label_17; else 
                goto addr_6c64_18;
        } else {
            r3_57 = g6cf0;
            if (!*r3_57) {
                goto addr_6bf4_21;
            }
            r1 = r6_53;
            r0_52 = fun_6928(r0, r1, r2);
            if (!r0_52) {
                r0_58 = g6d04;
                r0_52 = fun_6214(r0_58, r0, r2);
                goto addr_6c38_25;
            } else {
                addr_6bf4_21:
                r3_59 = g6cf4;
                z60 = *r3_59 == 0;
                if (!z60) {
                    r0_52 = g6cf8;
                    goto addr_6c04_27;
                }
            }
        }
    }
    addr_6cd0_28:
    r3_61 = g6cf0;
    if (!*r3_61) {
        return r0_52;
    }
    addr_6ce0_30:
    if (r0 == 14) {
        r3_62 = g89c4;
        z63 = reinterpret_cast<int1_t>(r5_48 == 1);
        if (z63) 
            goto addr_8904_34;
    } else {
        if (r0 == 16) {
            r3_64 = g89dc;
            r0_65 = *r3_64;
            if (!r0_65) 
                goto label_38; else 
                goto addr_89b0_39;
        } else {
            if (!reinterpret_cast<int1_t>(r0 == 13)) {
                return r0;
            }
            r3_66 = g89c8;
            z67 = reinterpret_cast<int1_t>(r5_48 == 1);
            if (!z67) 
                goto label_44; else 
                goto addr_8974_45;
        }
    }
    r2 = reinterpret_cast<void**>(0);
    addr_8904_34:
    if (z63) {
        r2 = reinterpret_cast<void**>(1);
    }
    z68 = static_cast<uint32_t>(*r3_62) == 0;
    r3_69 = g89c8;
    *r3_69 = static_cast<unsigned char>(reinterpret_cast<uint32_t>(r2));
    if (z68) {
        return r0;
    } else {
        r2_70 = g89cc;
        *reinterpret_cast<void***>(r2_70) = reinterpret_cast<void**>(0);
        r0_71 = fun_fdac(r0, r5_48, r2_70);
        r0_72 = g89d0;
        r0_73 = fun_6214(r0_72, r0_71, r2_70);
        r0_74 = fun_fdac(r0_73, r0_71, r2_70);
        if (reinterpret_cast<signed char>(r0_74) <= reinterpret_cast<signed char>(50)) {
            r0_75 = g89d4;
            fun_6208(r0_75, r0_71, r2_70, 0, __return_address(), a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34);
            r0_74 = fun_85e0(4, r0_71, r2_70, 0);
        }
        fun_fdac(r0_74, r0_71, r2_70);
        goto fun_6214;
    }
    label_38:
    return r0_65;
    addr_89b0_39:
    z76 = reinterpret_cast<int1_t>(r5_48 == 1);
    if (!z76) {
        r3_64 = reinterpret_cast<void***>(0);
    }
    if (z76) {
        r3_64 = reinterpret_cast<void***>(1);
    }
    *reinterpret_cast<void***>(r0_65 + 4) = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<int32_t>(r3_64)));
    return r0_65;
    label_44:
    r2 = reinterpret_cast<void**>(0);
    addr_8974_45:
    if (z67) {
        r2 = reinterpret_cast<void**>(1);
    }
    z77 = static_cast<uint32_t>(*r3_66) == 0;
    r3_78 = g89c4;
    *r3_78 = static_cast<unsigned char>(reinterpret_cast<uint32_t>(r2));
    if (z77) {
        return r0;
    } else {
        r3_79 = g89cc;
        *reinterpret_cast<void***>(r3_79) = reinterpret_cast<void**>(0);
        goto fun_85e0;
    }
    label_17:
    goto addr_6cd0_28;
    addr_6c64_18:
    r3_80 = g6d08;
    r2 = *reinterpret_cast<void***>(r3_80);
    __asm__("bic r2, r2, r1, lsl r4");
    *reinterpret_cast<void***>(r3_80) = r2;
    if (reinterpret_cast<unsigned char>(r0) <= reinterpret_cast<unsigned char>(11)) {
        r0_52 = fun_6a94(r0_52, 1, r2, r3_80);
    }
    r3_81 = g6cf0;
    if (*r3_81) {
        goto addr_6ce0_30;
    } else {
        z82 = reinterpret_cast<int1_t>(r0 == 14);
        if (z82) {
            r0_52 = reinterpret_cast<void**>(4);
        }
        if (!z82) {
            if (!reinterpret_cast<int1_t>(r0 == 13)) {
                return r0_52;
            } else {
                r0_52 = reinterpret_cast<void**>(0xfffffffc);
            }
        }
        r0_52 = fun_fdb4(r0_52, 1, r2);
        goto addr_6cd0_28;
    }
    addr_6c38_25:
    r3_83 = g6d08;
    r2 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3_83)) | reinterpret_cast<unsigned char>(1) << reinterpret_cast<unsigned char>(r0));
    *reinterpret_cast<void***>(r3_83) = r2;
    if (reinterpret_cast<unsigned char>(r0) > reinterpret_cast<unsigned char>(11)) {
        goto addr_6cd0_28;
    } else {
        r0_52 = fun_6a94(r0_52, 1, r2, r3_83);
        goto addr_6cd0_28;
    }
    addr_6c04_27:
    if (!z60) {
        r0_52 = fun_10330(r0_52, r1, r2);
    }
    r2_84 = g6cfc;
    if (!*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r2_84) + reinterpret_cast<unsigned char>(r0) << 2)) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(r2_84) + reinterpret_cast<unsigned char>(r0) << 2) = r6_53;
    }
    r2_85 = g6d00;
    *r2_85 = *r2_85 | reinterpret_cast<unsigned char>(r5_48) << reinterpret_cast<unsigned char>(r0);
    goto addr_6c38_25;
}

void fun_6cf0(int64_t* r0, uint32_t r1) {
    int64_t v1;
    int1_t n2;
    int1_t n3;
    int1_t z4;
    int32_t r3_5;
    int32_t r3_6;
    int1_t n7;
    int32_t r4_8;
    int1_t n9;
    int1_t z10;
    int1_t n11;
    int1_t z12;
    int1_t z13;
    int1_t z14;

    *reinterpret_cast<int64_t**>(&v1) = r0;
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = r1;
    if (n2) {
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) & (reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) >> 13 | reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) << 19));
    }
    if (n3) {
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) & reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) << reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)));
    }
    if (z4) {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 4) & (reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) >> r3_5 | reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) << reinterpret_cast<uint32_t>(32 - r3_6));
    }
    if (n7) {
        **reinterpret_cast<int64_t**>(&v1) = v1;
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) - r4_8);
    }
    if (n9) {
        **reinterpret_cast<int64_t**>(&v1) = v1;
    }
    if (z10) {
    }
    if (n11) {
    }
    if (z12) {
    }
    if (z13) {
    }
    if (!z14) 
        goto "???";
}

void fun_6d50(int32_t r0) {
    int1_t n2;
    int1_t n3;

    if (n2) {
    }
    if (!n3) 
        goto "???";
}

void fun_6da0(int32_t r0) {
    int1_t n2;
    int1_t n3;

    if (n2) {
    }
    if (!n3) 
        goto "???";
}

void fun_6e78(int64_t* r0) {
    int64_t v1;
    int1_t n2;
    int1_t n3;
    int32_t r4_4;
    int1_t n5;
    int32_t r12_6;
    int32_t r5_7;
    int1_t n8;
    int1_t n9;

    *reinterpret_cast<int64_t**>(&v1) = r0;
    if (n2) {
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) & (reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) >> 13 | reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) << 19));
    }
    if (n3) {
        **reinterpret_cast<int64_t**>(&v1) = v1;
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) - r4_4);
    }
    if (n5) {
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(r12_6 * r5_7);
    }
    if (n8) {
        **reinterpret_cast<int64_t**>(&v1) = v1;
    }
    if (!n9) 
        goto "???";
}

void fun_6f68(int32_t r0) {
    int1_t n2;
    int1_t n3;

    if (n2) {
        __asm__("ldrdmi r0, r1, [r0], -ip");
    }
    if (!n3) 
        goto "???";
}

void fun_6fe0(int32_t r0) {
    int1_t n2;
    int1_t n3;

    if (n2) {
    }
    if (!n3) 
        goto "???";
}

void fun_7008(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_743c(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;

    if (z3) {
    }
    if (!z4) 
        goto "???";
}

void fun_7674(int32_t r0, int16_t* r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
    *r1 = static_cast<int16_t>(reinterpret_cast<int32_t>(r1));
}

void fun_77e4(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;

    if (z3) {
        __asm__("ldrdeq r1, r2, [r1], -r0");
    }
    if (!z4) 
        goto "???";
}

void fun_796c(uint32_t r0, uint32_t r1) {
    uint32_t r6_3;
    uint32_t r5_4;
    uint32_t r4_5;
    int32_t r0_6;

    r6_3 = r1;
    r5_4 = r0 & 0xff;
    r4_5 = 0;
    while (r0_6 = fun_1088(r5_4), r4_5 = r4_5 + 1 & 0xff, r0_6 < 0) {
        if (r4_5 > r6_3) 
            goto addr_799c_4;
    }
    return;
    addr_799c_4:
    return;
}

void fun_79a0(int32_t r0) {
    goto 0x1088;
}

struct s58 {
    signed char[8] pad8;
    int32_t f8;
};

struct s58* g7a38 = reinterpret_cast<struct s58*>(0x40000658);

uint32_t fun_7a24(uint32_t r0) {
    int1_t n2;
    int32_t r8_3;
    int32_t r6_4;
    struct s58* r3_5;

    if (n2) {
        r0 = r0 & reinterpret_cast<uint32_t>(r8_3 >> r6_4);
    }
    r3_5 = g7a38;
    r3_5->f8 = 0;
    return r0;
}

struct s59 {
    signed char[8] pad8;
    int32_t f8;
};

struct s59* g7a50 = reinterpret_cast<struct s59*>(0x40000658);

int32_t fun_7a38(int32_t r0) {
    int1_t n2;
    struct s59* r3_3;
    int32_t r0_4;

    if (n2) {
    }
    r3_3 = g7a50;
    r0_4 = r3_3->f8;
    if (r0_4) {
        r0_4 = 1;
    }
    return r0_4;
}

void fun_7a50(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void** g7c9c = reinterpret_cast<void**>(60);

void** fun_7be8(void** r0, void** r1, void** r2, void** r3, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    int1_t n13;
    int32_t r8_14;
    int32_t r6_15;
    void** sp16;
    void** r4_17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** r4_38;
    void** r5_39;
    void** r0_40;
    int1_t z41;
    void** r5_42;
    uint32_t r12_43;
    void** r0_44;
    int1_t less_or_equal45;
    void* r0_46;
    void** r1_47;
    void** v48;
    void** r0_49;

    if (n13) {
        r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) & reinterpret_cast<uint32_t>(r8_14 >> r6_15));
    }
    sp16 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 12 - 80);
    r4_17 = r0;
    if (r1) {
        r0_40 = fun_5eb8(0, r1 - 1, r2, r3, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, r4_38, r5_39, __return_address(), a5, a6, a7, a8, a9, a10, a11, a12);
        r1 = r0_40;
    }
    z41 = r4_17 == 0;
    if (z41) {
        r5_42 = r4_17;
    }
    if (!z41) {
        r2 = reinterpret_cast<void**>(0);
    }
    if (!z41) {
        while (r12_43 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r2) + reinterpret_cast<unsigned char>(r4_17)), r0_44 = r2 + 1, !!r12_43) {
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r2) + reinterpret_cast<unsigned char>(sp16)) = static_cast<signed char>(r12_43);
            r2 = r0_44;
        }
        r2 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(sp16 + 80) + reinterpret_cast<unsigned char>(r2));
        r3 = reinterpret_cast<void**>(47);
        *reinterpret_cast<signed char*>(r2 + 0xffffffb0) = 47;
        r5_42 = r0_44;
    }
    less_or_equal45 = reinterpret_cast<signed char>(r1) <= reinterpret_cast<signed char>(9);
    if (less_or_equal45) {
        r3 = sp16 + 80;
    }
    if (less_or_equal45) {
        r2 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r3) + reinterpret_cast<unsigned char>(r5_42));
    }
    if (less_or_equal45) {
        ++r5_42;
    }
    if (less_or_equal45) {
        r3 = reinterpret_cast<void**>(48);
    }
    if (less_or_equal45) {
        *reinterpret_cast<signed char*>(r2 + 0xffffffb0) = static_cast<signed char>(reinterpret_cast<uint32_t>(r3));
    }
    r0_46 = fun_5d24(r1, reinterpret_cast<unsigned char>(sp16) + reinterpret_cast<unsigned char>(r5_42), r2);
    r1_47 = g7c9c;
    fun_e7e0(reinterpret_cast<unsigned char>(sp16) + (reinterpret_cast<unsigned char>(r5_42) + reinterpret_cast<uint32_t>(r0_46)), r1_47, 4, r3, v48);
    r0_49 = fun_10464(sp16, r1_47, 4);
    return r0_49;
}

void** fun_7c9c(void** r0, void** r1) {
    int1_t z3;
    void** r2_4;
    uint32_t r12_5;
    void** v6;
    void** r4_7;
    void** v8;
    void** r5_9;
    void** v10;
    void** r6_11;
    void** r6_12;
    void** r7_13;
    void** r4_14;
    void** r9_15;
    void** r3_16;
    int1_t less_or_equal17;
    void** r3_18;
    void** r0_19;
    void** r3_20;
    int1_t less21;
    void** r8_22;
    void** r0_23;
    void** r5_24;
    int1_t z25;
    int1_t z26;
    void** r0_27;

    if (z3) {
        r2_4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) & r12_5 >> reinterpret_cast<unsigned char>(r1));
    }
    v6 = r4_7;
    v8 = r5_9;
    v10 = r6_11;
    r6_12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) | 0x80000000);
    r7_13 = r1;
    r4_14 = r0;
    r9_15 = r2_4;
    fun_6eac(r6_12, 1, r2_4, r3_16, v6);
    fun_69d0(reinterpret_cast<unsigned char>(r7_13) & 0xff, 0, r2_4);
    less_or_equal17 = reinterpret_cast<signed char>(r4_14) <= reinterpret_cast<signed char>(0);
    if (!less_or_equal17) {
    }
    if (less_or_equal17) {
        fun_6eac(r6_12, 0, r2_4, r3_18, v6);
        return 0xfffffffd;
    }
    while (1) {
        r0_19 = fun_6da8(r7_13, 0, r2_4);
        r3_20 = r0_19;
        less21 = reinterpret_cast<signed char>(r3_20) < reinterpret_cast<signed char>(0) != __intrinsic();
        r8_22 = reinterpret_cast<void**>(0);
        if (!less21) {
            r8_22 = r3_20 + 1;
        }
        if (less21) {
            fun_eb7c(1, 0, r2_4, r3_20, v6, v8, v10);
        }
        r0_23 = fun_f9f0(r4_14, 0, r2_4, r3_20, v6);
        r5_24 = r0_23;
        if (r5_24) {
            r5_24 = reinterpret_cast<void**>(1);
        }
        z25 = r9_15 == 0;
        if (!z25) {
            z25 = r0_23 == 0;
        }
        if (!z25) 
            break;
        z26 = r8_22 == 0;
        if (!z26) {
            r3_20 = reinterpret_cast<void**>(0);
        }
        if (z26) {
            r3_20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r5_24) & 1);
        }
        if (!r3_20) 
            goto label_23;
        if (!1) 
            goto addr_7d5c_25;
    }
    if (r8_22) {
        fun_fa88(r4_14, 5, r2_4, r3_20, v6);
        fun_6eac(r6_12, 0, r2_4, r3_20, v6);
        goto addr_7d7c_30;
    } else {
        goto r9_15;
    }
    label_23:
    addr_7d5c_25:
    fun_fa88(r4_14, 5, r2_4, r3_20, v6);
    r0_27 = fun_6eac(r6_12, 0, r2_4, r3_20, v6);
    if (!r8_22) {
        if (!1) 
            goto addr_7d8c_34;
    } else {
        addr_7d7c_30:
        return r8_22 - 1;
    }
    r0_27 = reinterpret_cast<void**>(0xffffffff);
    addr_7d8c_34:
    if (0) {
        r0_27 = reinterpret_cast<void**>(0xfffffffe);
    }
    return r0_27;
}

void fun_7d3c(int32_t r0) {
}

void** fun_8060(void** r0, void** r1, void** r2, void** r3) {
    void** v2;
    int1_t z4;
    uint32_t r8_5;
    int1_t z6;
    uint32_t r12_7;
    uint32_t r5_8;
    void** r0_9;

    v2 = r1;
    (&v2)[4] = r2;
    if (z4) {
        *reinterpret_cast<void***>(v2) = v2;
        v2 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v2) - r8_5);
    }
    if (z6) {
        v2 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v2) & r12_7 << r5_8);
    }
    r0_9 = fun_7de0(r0, v2, (&v2)[4], r3, 1, __return_address());
    return r0_9;
}

void** fun_8214(int32_t r0) {
    void** r0_2;

    r0_2 = fun_81a4(1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4);
    return r0_2;
}

unsigned char* g8328 = reinterpret_cast<unsigned char*>(0x400006e0);

void** g832c = reinterpret_cast<void**>(0xc8);

void*** g8330 = reinterpret_cast<void***>(0x40000664);

void fun_82ac(void** r0) {
    unsigned char* r3_2;
    void** r3_3;
    void** r4_4;
    void** r0_5;
    void** r2_6;
    void*** r2_7;
    uint32_t r1_8;
    void** r1_9;
    void*** r3_10;

    r3_2 = g8328;
    r3_3 = reinterpret_cast<void**>(static_cast<uint32_t>(*r3_2));
    r4_4 = r0;
    if (!r3_3) {
        goto fun_10a34;
    }
    r0_5 = g832c;
    fun_1118(r0_5, 0xffffffff, r2_6, r3_3);
    r2_7 = g8330;
    r1_8 = 0;
    while (r2_7 = r2_7 + 20, *r2_7 != r4_4) {
        ++r1_8;
        if (r1_8 == 5) 
            goto addr_82f4_7;
    }
    r1_9 = reinterpret_cast<void**>(20 * r1_8);
    r3_10 = g8330;
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r1_9) + reinterpret_cast<uint32_t>(r3_10)) = reinterpret_cast<void**>(0);
    fun_10a34(r4_4, r1_9, 0);
    addr_82f4_7:
    goto 0x1130;
}

void** g83fc = reinterpret_cast<void**>(0xe0);

void** g8400 = reinterpret_cast<void**>(0xc8);

struct s60 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t f12;
};

struct s60* g8404 = reinterpret_cast<struct s60*>(0x40000664);

struct s60* g8408 = reinterpret_cast<struct s60*>(0x400006c8);

void fun_8378(int32_t r0) {
    int1_t n2;
    int1_t n3;
    void** r3_4;
    void** r0_5;
    void** r2_6;
    struct s60* r4_7;
    struct s60* r3_8;

    if (n2) {
    }
    if (n3) {
    }
    r3_4 = g83fc;
    if (!*reinterpret_cast<void***>(r3_4)) {
        goto fun_f290;
    } else {
        r0_5 = g8400;
        fun_1118(r0_5, 0xffffffff, r2_6, r3_4);
        r4_7 = g8404;
        while (1) {
            if (r4_7->f0) {
                while (r4_7->f12 > 0) {
                    r4_7->f4(r4_7->f8, 0xffffffff);
                    r4_7->f12 = r4_7->f12 - 1;
                }
            }
            r3_8 = g8408;
            r4_7 = reinterpret_cast<struct s60*>(reinterpret_cast<int32_t>(r4_7) + 20);
            if (r4_7 == r3_8) 
                break;
        }
        goto 0x1130;
    }
}

void fun_851c(int32_t r0) {
    int1_t n2;
    int1_t n3;

    if (n2) {
    }
    if (!n3) 
        goto "???";
}

void fun_856c(int64_t* r0) {
    int64_t v1;
    int1_t n2;
    int32_t r4_3;
    int1_t n4;
    int1_t n5;
    int1_t n6;

    *reinterpret_cast<int64_t**>(&v1) = r0;
    if (n2) {
        **reinterpret_cast<int64_t**>(&v1) = v1;
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<int64_t**>(&v1)) - r4_3);
    }
    if (n4) {
        __asm__("ldrdmi r0, r1, [r0], -ip");
    }
    if (n5) {
        **reinterpret_cast<int64_t**>(&v1) = v1;
    }
    if (!n6) 
        goto "???";
}

void fun_85cc(int64_t* r0, uint32_t r1) {
    int64_t v1;
    int1_t n2;
    int1_t z3;
    uint32_t r8_4;
    int32_t r5_5;
    int1_t n6;
    int32_t r5_7;
    int1_t z8;
    int1_t n9;

    *reinterpret_cast<int64_t**>(&v1) = r0;
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = r1;
    if (n2) {
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) & (reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) >> 13 | reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) << 19));
    }
    if (z3) {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 4) & r8_4 >> r5_5;
    }
    if (n6) {
        **reinterpret_cast<int64_t**>(&v1) = v1;
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) - r5_7);
    }
    if (z8) {
    }
    if (!n9) 
        goto "???";
    **reinterpret_cast<int64_t**>(&v1) = v1;
}

void** g88b0 = reinterpret_cast<void**>(0xdc);

void** fun_1058(void* r0, void** r1, void** r2);

void** g88cc = reinterpret_cast<void**>(0xf4);

void** g88b4 = reinterpret_cast<void**>(0xe4);

unsigned char* g88b8 = reinterpret_cast<unsigned char*>(0x400006e8);

unsigned char* g88bc = reinterpret_cast<unsigned char*>(0x400006e9);

void** g88c0 = reinterpret_cast<void**>(80);

void** g88c4 = reinterpret_cast<void**>(20);

void** g88c8 = reinterpret_cast<void**>(16);

signed char* g88d0 = reinterpret_cast<signed char*>(0x400006f5);

void** fun_8668(void** r0, void** r1, void** r2, int32_t r3) {
    void** v1;
    int1_t n4;
    uint32_t r12_5;
    uint32_t r12_6;
    int1_t n7;
    int1_t z8;
    void** r4_9;
    void** sp10;
    void** r0_11;
    void** r3_12;
    void** r2_13;
    void** r3_14;
    void** r4_15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** r0_22;
    void** r3_23;
    void** r2_24;
    unsigned char* r3_25;
    unsigned char* r3_26;
    int1_t less_or_equal27;
    void** r3_28;
    void** r3_29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** r0_36;
    void** r0_37;
    void** r0_38;
    void** r3_39;
    void** r9_40;
    void** r1_41;
    void** r2_42;
    void** r7_43;
    void** r8_44;
    void** r6_45;
    void** r10_46;
    int1_t z47;
    void** r5_48;
    void** r4_49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** r0_56;
    void** v57;
    void** r0_58;
    void** r5_59;
    void** r0_60;
    void** r0_61;
    void** r3_62;
    void** r0_63;
    void** r3_64;
    void** v65;
    void** v66;
    void** v67;
    signed char* r3_68;

    v1 = r0;
    (&v1)[4] = r1;
    if (n4) {
        v1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v1) & (r12_5 >> 13 | r12_6 << 19));
    }
    if (n7) {
        *reinterpret_cast<void***>(v1) = v1;
        v1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v1) - reinterpret_cast<unsigned char>(v1));
    }
    if (z8) {
        (&v1)[4] = reinterpret_cast<void**>(reinterpret_cast<unsigned char>((&v1)[4]) & (reinterpret_cast<unsigned char>(v1) >> r3 | reinterpret_cast<unsigned char>(v1) << reinterpret_cast<uint32_t>(32 - r3)));
    }
    r4_9 = g88b0;
    sp10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 32 - 64);
    *reinterpret_cast<void***>(r4_9) = sp10 + 48;
    fun_6a64(v1, (&v1)[4]);
    r0_11 = fun_1058(sp10 + 60, (&v1)[4], r2);
    *reinterpret_cast<void***>(*reinterpret_cast<void***>(r4_9) + 4) = reinterpret_cast<void**>(0);
    r3_12 = g88b0;
    r2_13 = *reinterpret_cast<void***>(r3_12);
    *reinterpret_cast<void***>(r2_13) = reinterpret_cast<void**>(0);
    while (r3_14 = g88cc, r4_15 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3_14)))), r4_15 == 0) {
        fun_eb7c(5, (&v1)[4], r2_13, r3_14, v16, v17, v18);
        fun_f290(r4_15, (&v1)[4], r2_13);
        r0_22 = fun_1054(r4_15, (&v1)[4], r2_13, r3_14, v19, v20, v21);
        (&v1)[4] = g88b4;
        r3_23 = *reinterpret_cast<void***>((&v1)[4]) + 0xc8;
        r2_24 = r0_22;
        if (reinterpret_cast<unsigned char>(r3_23) >= reinterpret_cast<unsigned char>(r0_22)) {
            r3_25 = g88b8;
            r3_26 = g88bc;
            if (!*r3_25) {
                r3_23 = reinterpret_cast<void**>(static_cast<uint32_t>(*r3_26));
                if (!r3_23) 
                    goto label_15; else 
                    goto addr_872c_16;
            } else {
                r3_23 = reinterpret_cast<void**>(static_cast<uint32_t>(*r3_26));
                if (!r3_23) {
                    *reinterpret_cast<void***>((&v1)[4]) = r0_22;
                    r0_22 = fun_fdac(r0_22, (&v1)[4], r2_24);
                    if (reinterpret_cast<signed char>(r0_22) <= reinterpret_cast<signed char>(0xfe)) {
                        less_or_equal27 = reinterpret_cast<signed char>(r0_22) <= reinterpret_cast<signed char>(0xfb);
                        if (!less_or_equal27) {
                            r0_22 = reinterpret_cast<void**>(0xff - reinterpret_cast<unsigned char>(r0_22));
                        }
                        if (less_or_equal27) {
                            r0_22 = reinterpret_cast<void**>(4);
                        }
                        goto addr_8734_26;
                    }
                }
            }
        }
        addr_8738_27:
        r0_11 = fun_6a94(r0_22, (&v1)[4], r2_24, r3_23);
        r3_28 = g88b0;
        r2_13 = *reinterpret_cast<void***>(r3_28);
        if (!r2_13) {
            continue;
        } else {
            r3_29 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(r2_13 + 4))));
            if (!r3_29) {
                continue;
            } else {
                if (*reinterpret_cast<void***>(r2_13)) {
                    r0_11 = fun_1054(r0_11, (&v1)[4], r2_13, r3_29, v30, v31, v32);
                    r3_29 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(r2_13) + 0xea00) + 96);
                    if (reinterpret_cast<unsigned char>(r3_29) < reinterpret_cast<unsigned char>(r0_11)) {
                        continue;
                    }
                }
                r0_36 = fun_1054(r0_11, (&v1)[4], r2_13, r3_29, v33, v34, v35);
                r0_37 = g88c0;
                r0_38 = fun_10330(r0_37, (&v1)[4], r2_13);
                r3_39 = g88c4;
                r9_40 = r0_38;
                r1_41 = g88c8;
                r2_42 = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(r3_39) = sp10;
                fun_ef0c(sp10, r1_41, 0, r3_39);
                r7_43 = reinterpret_cast<void**>(0);
                r8_44 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r0_36 + 0x1380) + 8);
                r6_45 = r0_36;
                r10_46 = reinterpret_cast<void**>(0);
                while (1) {
                    if (reinterpret_cast<unsigned char>(r7_43) >= reinterpret_cast<unsigned char>(r6_45)) {
                        r10_46 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r10_46) ^ 1);
                        fun_edac(sp10 + 24, r1_41, r2_42);
                        z47 = r10_46 == 0;
                        if (!z47) {
                            r3_39 = reinterpret_cast<void**>(1);
                        }
                        if (!z47) {
                            while (1) {
                                addr_87ec_42:
                                r5_48 = r3_39;
                                while (r4_49 = sp10 + 24, fun_ee68(r4_49, 5, r5_48, 1), r2_42 = r5_48, r1_41 = reinterpret_cast<void**>(6), fun_ee68(r4_49, 6, r2_42, 1), r3_39 = r5_48 + 1, r5_48 = reinterpret_cast<void**>(9), reinterpret_cast<signed char>(r3_39) <= reinterpret_cast<signed char>(10)) {
                                    if (r3_39 != 8) 
                                        goto addr_87ec_42;
                                }
                                break;
                            }
                        }
                        r7_43 = r6_45 + 0x1f4;
                        fun_f214(sp10 + 24, r1_41, r2_42, r3_39);
                    }
                    fun_eb7c(5, r1_41, r2_42, r3_39, v50, v51, v52);
                    r0_56 = fun_1054(5, r1_41, r2_42, r3_39, v53, v54, v55);
                    if (reinterpret_cast<unsigned char>(r8_44) <= reinterpret_cast<unsigned char>(r0_56)) {
                        r0_58 = fun_f9f0(r9_40, r1_41, r2_42, r3_39, v57);
                        r5_59 = r0_58;
                        if (!r5_59) 
                            break;
                    }
                    r6_45 = r0_56;
                }
                (&v1)[4] = sp10;
                r2_13 = r5_59;
                r0_60 = g88c8;
                r0_61 = fun_ef0c(r0_60, (&v1)[4], r2_13, r3_39);
                r3_62 = g88c4;
                *reinterpret_cast<void***>(r3_62) = r5_59;
                r0_63 = fun_6334(r0_61, (&v1)[4], r2_13, r3_62);
                r3_64 = g88b0;
                r0_11 = fun_1054(r0_63, (&v1)[4], r2_13, r3_64, v65, v66, v67);
                *reinterpret_cast<void***>(*reinterpret_cast<void***>(r3_64)) = r0_11;
                continue;
            }
        }
        label_15:
        goto addr_8738_27;
        addr_872c_16:
        *reinterpret_cast<void***>((&v1)[4]) = r2_24;
        r0_22 = reinterpret_cast<void**>(0xfffffffc);
        addr_8734_26:
        r0_22 = fun_85e0(r0_22, (&v1)[4], r2_24, r3_23);
        goto addr_8738_27;
    }
    r3_68 = g88d0;
    *r3_68 = 1;
    return r0_11;
}

void fun_88b0(int64_t* r0, uint32_t r1) {
    int64_t v1;
    int1_t n2;
    int1_t n3;
    uint32_t r4_4;
    uint32_t r4_5;
    int1_t n6;
    uint32_t r8_7;
    uint32_t r8_8;
    int1_t n9;
    uint32_t r9_10;
    uint32_t r9_11;
    int1_t z12;
    int32_t r5_13;
    int1_t n14;
    uint32_t r4_15;
    uint32_t r5_16;
    int1_t n17;
    uint32_t r8_18;
    int1_t n19;
    uint32_t r4_20;
    int1_t n21;

    *reinterpret_cast<int64_t**>(&v1) = r0;
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = r1;
    if (n2) {
        __asm__("ldrdmi r0, r1, [r0], -ip");
    }
    if (n3) {
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) & (r4_4 >> 13 | r4_5 << 19));
    }
    if (n6) {
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) & (r8_7 >> 13 | r8_8 << 19));
    }
    if (n9) {
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) & (r9_10 >> 13 | r9_11 << 19));
    }
    if (z12) {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 4) & reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(*reinterpret_cast<int64_t**>(&v1)) >> r5_13);
    }
    if (n14) {
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) & r4_15 << r5_16);
    }
    if (n17) {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) & reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) << r8_18;
    }
    if (n19) {
        **reinterpret_cast<int64_t**>(&v1) = v1;
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) - r4_20);
    }
    if (!n21) 
        goto "???";
    **reinterpret_cast<int64_t**>(&v1) = v1;
}

void fun_89c4(int32_t r0, int32_t r1) {
    int1_t n3;
    int1_t n4;
    int1_t n5;
    int1_t z6;
    int1_t z7;
    int1_t z8;
    int1_t n9;

    if (n3) {
    }
    if (n4) {
    }
    if (n5) {
    }
    if (z6) {
    }
    if (z7) {
    }
    if (z8) {
    }
    if (!n9) 
        goto "???";
    __asm__("ldrdmi r0, r1, [r0], -ip");
}

void fun_8a28() {
    int1_t z1;
    int1_t z2;

    if (z1) {
    }
    if (!z2) 
        goto "???";
}

void** g94b8 = reinterpret_cast<void**>(0x6c);

int32_t fun_9484() {
    void** r0_1;

    r0_1 = g94b8;
    fun_1024(r0_1, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4, 0);
    return 0;
}

void*** g9548 = reinterpret_cast<void***>(0x40001844);

void** g954c = reinterpret_cast<void**>(0xbc);

uint32_t* g9550 = reinterpret_cast<uint32_t*>(0x40000168);

int32_t fun_94d8(int32_t r0, void** r1, void** r2) {
    int1_t n4;
    void*** r5_5;
    void** r4_6;
    void** r6_7;
    void** r1_8;
    void** r5_9;
    uint32_t* r3_10;
    void** r3_11;

    if (n4) {
    }
    r5_5 = g9548;
    fun_9a64(r1, *r5_5 + 3, r2, *r5_5, r4_6);
    *reinterpret_cast<void***>(r1 + 40) = reinterpret_cast<void**>(1);
    r6_7 = g954c;
    r1_8 = *r5_5;
    r5_9 = r1 + 64;
    *reinterpret_cast<void***>(r1 + 60) = r6_7;
    fun_9a64(r5_9, r1_8 + 43, r2, 1, r4_6);
    *reinterpret_cast<void***>(r5_9 + 40) = reinterpret_cast<void**>(0);
    r3_10 = g9550;
    r3_11 = reinterpret_cast<void**>(1 - *r3_10);
    if (!__intrinsic()) {
        r3_11 = reinterpret_cast<void**>(0);
    }
    *reinterpret_cast<void***>(r5_9 + 60) = r6_7;
    *reinterpret_cast<void***>(r2) = r3_11;
    return 2;
}

void*** g95bc = reinterpret_cast<void***>(0x40001844);

void** g95c0 = reinterpret_cast<void**>(0xc4);

int32_t fun_9548(int16_t* r0) {
    int1_t n2;
    void** r1_3;
    int32_t r4_4;
    int1_t z5;
    int32_t r9_6;
    int1_t n7;
    void*** r4_8;
    void** r2_9;
    void** r4_10;
    void** r6_11;
    void** r4_12;
    void** r1_13;
    void** r2_14;
    int32_t r0_15;
    int32_t r0_16;
    int32_t* r2_17;

    if (n2) {
        r1_3 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(r4_4 >> 16));
    }
    if (z5) {
        *r0 = static_cast<int16_t>(r9_6);
    }
    if (n7) {
    }
    r4_8 = g95bc;
    fun_9a64(r1_3, *r4_8 + 3, r2_9, *r4_8, r4_10);
    *reinterpret_cast<void***>(r1_3 + 40) = reinterpret_cast<void**>(1);
    r6_11 = g95c0;
    r4_12 = r1_3 + 64;
    r1_13 = *r4_8 + 43;
    *reinterpret_cast<void***>(r1_3 + 60) = r6_11;
    fun_9a64(r4_12, r1_13, r2_14, 1, r4_10);
    *reinterpret_cast<void***>(r4_12 + 60) = r6_11;
    *reinterpret_cast<void***>(r4_12 + 40) = reinterpret_cast<void**>(0);
    r0_15 = fun_6980();
    r0_16 = 1 - r0_15;
    if (!__intrinsic()) {
        r0_16 = 0;
    }
    *r2_17 = r0_16;
    return 2;
}

struct s61 {
    signed char[40] pad40;
    unsigned char f40;
};

int32_t fun_95bc(struct s61* r0) {
    int1_t n2;
    void** r1_3;
    int32_t r4_4;
    int1_t z5;
    int32_t* r2_6;

    if (n2) {
        r1_3 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(r4_4 >> 16));
    }
    if (z5) {
    }
    fun_6970(static_cast<uint32_t>(r0->f40), r1_3);
    *r2_6 = 5;
    return -1;
}

void** g96d8 = reinterpret_cast<void**>(0xe4);

void** g96e0 = reinterpret_cast<void**>(0x74);

void** g96dc = reinterpret_cast<void**>(68);

uint32_t fun_95e4() {
    void** r10_1;
    void** r1_2;
    uint32_t* r9_3;
    uint32_t* r2_4;
    void** r1_5;
    void** r2_6;
    uint32_t r0_7;
    void** r3_8;
    void** sp9;
    void** r2_10;
    uint32_t r0_11;
    void** r6_12;
    int1_t less13;
    uint32_t r7_14;
    void** r5_15;
    uint32_t r8_16;
    void** r4_17;
    void** r1_18;
    void** r2_19;
    void** r2_20;
    void** r0_21;
    void** r2_22;
    uint32_t r3_23;
    unsigned char v24;
    void** r3_25;
    void** r4_26;
    void** r2_27;
    void** r3_28;

    r10_1 = r1_2;
    r9_3 = r2_4;
    r0_7 = fun_f4c4(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 41, r1_5, r2_6);
    r3_8 = reinterpret_cast<void**>(r0_7 * 36 + 4);
    sp9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 44 - 8 - reinterpret_cast<unsigned char>(r3_8));
    r0_11 = fun_f578(sp9, r0_7 & 0xff, r2_10);
    r6_12 = sp9;
    less13 = reinterpret_cast<int32_t>(r0_11) < reinterpret_cast<int32_t>(14);
    if (less13) {
        r7_14 = r0_11;
    }
    if (!less13) {
        r7_14 = 14;
    }
    r5_15 = r10_1;
    r8_16 = 0;
    r4_17 = sp9 + 31;
    while (r1_18 = r6_12, r6_12 = r6_12 + 36, reinterpret_cast<int32_t>(r8_16) < reinterpret_cast<int32_t>(r7_14)) {
        fun_9a64(r5_15, r1_18, r2_19, r3_8, *reinterpret_cast<void***>(sp9));
        fun_eb30(r5_15 + 40, r4_17, r2_20, r3_8, *reinterpret_cast<void***>(sp9), *reinterpret_cast<void***>(sp9 + 4));
        r3_8 = g96d8;
        ++r8_16;
        *reinterpret_cast<void***>(r5_15 + 60) = r3_8;
        r4_17 = r4_17 + 36;
        r5_15 = r5_15 + 64;
    }
    if (reinterpret_cast<int32_t>(r7_14) <= reinterpret_cast<int32_t>(0)) {
        r0_21 = g96e0;
        fun_6208(r0_21, r1_18, r2_22, r3_8, *reinterpret_cast<void***>(sp9), *reinterpret_cast<void***>(sp9 + 4), *reinterpret_cast<void***>(sp9 + 8), *reinterpret_cast<void***>(sp9 + 12), *reinterpret_cast<void***>(sp9 + 16), *reinterpret_cast<void***>(sp9 + 20), *reinterpret_cast<void***>(sp9 + 24), *reinterpret_cast<void***>(sp9 + 28), *reinterpret_cast<void***>(sp9 + 32), *reinterpret_cast<void***>(sp9 + 36), *reinterpret_cast<void***>(sp9 + 40), *reinterpret_cast<void***>(sp9 + 44), *reinterpret_cast<void***>(sp9 + 48), *reinterpret_cast<void***>(sp9 + 52), *reinterpret_cast<void***>(sp9 + 56), *reinterpret_cast<void***>(sp9 + 60), *reinterpret_cast<void***>(sp9 + 64), *reinterpret_cast<void***>(sp9 + 68), *reinterpret_cast<void***>(sp9 + 72), *reinterpret_cast<void***>(sp9 + 76), *reinterpret_cast<void***>(sp9 + 80), *reinterpret_cast<void***>(sp9 + 84), *reinterpret_cast<void***>(sp9 + 88), *reinterpret_cast<void***>(sp9 + 92), *reinterpret_cast<void***>(sp9 + 96), *reinterpret_cast<void***>(sp9 + 100), *reinterpret_cast<void***>(sp9 + 0x68), *reinterpret_cast<void***>(sp9 + 0x6c), *reinterpret_cast<void***>(sp9 + 0x70), *reinterpret_cast<void***>(sp9 + 0x74), *reinterpret_cast<void***>(sp9 + 0x78));
    } else {
        r3_23 = v24;
        if (reinterpret_cast<int32_t>(r3_23) < reinterpret_cast<int32_t>(r7_14)) {
            *r9_3 = r3_23;
        }
        r3_25 = g96dc;
        r4_26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r10_1) + (r8_16 << 6));
        fun_9a64(r4_26, *reinterpret_cast<void***>(r3_25) + 83, r2_27, r3_25, *reinterpret_cast<void***>(sp9));
        *reinterpret_cast<void***>(r4_26 + 40) = reinterpret_cast<void**>(0);
        r3_28 = g96d8;
        ++r7_14;
        *reinterpret_cast<void***>(r4_26 + 60) = r3_28;
    }
    return r7_14;
}

void*** g9a24 = reinterpret_cast<void***>(0x40001844);

void** g9a28 = reinterpret_cast<void**>(0x98);

uint32_t* g9a2c = reinterpret_cast<uint32_t*>(0x4000016c);

int32_t fun_99b4(int32_t r0, void** r1, void** r2) {
    int1_t n4;
    void*** r5_5;
    void** r4_6;
    void** r6_7;
    void** r1_8;
    void** r5_9;
    uint32_t* r3_10;
    void** r3_11;

    if (n4) {
    }
    r5_5 = g9a24;
    fun_9a64(r1, *r5_5 + 3, r2, *r5_5, r4_6);
    *reinterpret_cast<void***>(r1 + 40) = reinterpret_cast<void**>(1);
    r6_7 = g9a28;
    r1_8 = *r5_5;
    r5_9 = r1 + 64;
    *reinterpret_cast<void***>(r1 + 60) = r6_7;
    fun_9a64(r5_9, r1_8 + 43, r2, 1, r4_6);
    *reinterpret_cast<void***>(r5_9 + 40) = reinterpret_cast<void**>(0);
    r3_10 = g9a2c;
    r3_11 = reinterpret_cast<void**>(1 - *r3_10);
    if (!__intrinsic()) {
        r3_11 = reinterpret_cast<void**>(0);
    }
    *reinterpret_cast<void***>(r5_9 + 60) = r6_7;
    *reinterpret_cast<void***>(r2) = r3_11;
    return 2;
}

uint32_t* g9a58 = reinterpret_cast<uint32_t*>(0x40000170);

uint32_t* g9a5c = reinterpret_cast<uint32_t*>(0x40000174);

uint32_t* g9a60 = reinterpret_cast<uint32_t*>(0x40000178);

void fun_9a24(uint32_t r0) {
    int1_t n2;
    uint32_t r1_3;
    int32_t r4_4;
    int1_t z5;
    int32_t r8_6;
    int32_t r9_7;
    int1_t n8;
    uint32_t r12_9;
    uint32_t r12_10;
    uint32_t* r3_11;
    uint32_t* r3_12;
    uint32_t* r3_13;
    uint32_t r2_14;

    if (n2) {
        r1_3 = r0 & reinterpret_cast<uint32_t>(r4_4 >> 16);
    }
    if (z5) {
        r0 = reinterpret_cast<uint32_t>(r8_6 * r9_7);
    }
    if (n8) {
        r0 = r0 & (r12_9 >> 2 | r12_10 << 30);
    }
    r3_11 = g9a58;
    *r3_11 = r0 | 0x1000;
    r3_12 = g9a5c;
    *r3_12 = r1_3 | 0x4000;
    r3_13 = g9a60;
    *r3_13 = r2_14 | 0x2000;
    return;
}

void fun_9a58(int32_t r0, int32_t r1) {
    int1_t n3;
    int1_t n4;
    int1_t n5;

    if (n3) {
    }
    if (n4) {
    }
    if (!n5) 
        goto "???";
}

void fun_9b94(int32_t r0) {
    int1_t n2;
    int1_t z3;
    int1_t n4;

    if (n2) {
    }
    if (z3) {
        __asm__("ldrdeq r1, r2, [r1], -r4");
    }
    if (!n4) 
        goto "???";
}

void fun_a540(int16_t* r0, int16_t* r1) {
    int1_t z3;
    int32_t r12_4;
    int32_t r10_5;
    int1_t z6;
    uint32_t r8_7;
    uint32_t r8_8;
    int1_t z9;
    int32_t r10_10;
    int1_t z11;
    int32_t r8_12;
    int1_t z13;
    int1_t z14;
    uint32_t r8_15;
    int1_t z16;
    uint32_t r11_17;
    int1_t z18;
    uint32_t r4_19;
    int1_t z20;
    int32_t r12_21;
    int1_t z22;
    int1_t z23;
    int32_t r4_24;
    int32_t r11_25;
    int1_t z26;
    uint32_t r12_27;
    int32_t r11_28;
    uint32_t r12_29;
    int32_t r11_30;
    int1_t z31;
    uint32_t r9_32;
    uint32_t r8_33;
    int1_t z34;
    uint32_t r4_35;
    int1_t z36;
    uint32_t r12_37;
    int1_t z38;
    int1_t z39;
    int1_t z40;
    int1_t z41;
    uint32_t r4_42;
    uint32_t r4_43;
    int1_t z44;
    int1_t z45;
    int1_t z46;
    int32_t r4_47;
    int32_t r5_48;
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
    int1_t n64;
    int1_t n65;
    int1_t n66;
    int1_t z67;
    int1_t n68;
    int1_t n69;
    int1_t n70;
    int1_t n71;
    int1_t n72;

    if (z3) {
        r1 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r1) & reinterpret_cast<uint32_t>(r12_4 >> r10_5));
    }
    if (z6) {
        r1 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r1) & (r8_7 >> 20 | r8_8 << 12));
    }
    if (z9) {
        r1 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r0) * r10_10);
    }
    if (z11) {
        *r1 = static_cast<int16_t>(reinterpret_cast<uint32_t>(r1));
        r1 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r1) - r8_12);
    }
    if (z13) {
        r1 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r1) & (reinterpret_cast<uint32_t>(r0) >> 21 | reinterpret_cast<uint32_t>(r0) << 11));
    }
    if (z14) {
        r1 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r1) & r8_15 << 22);
    }
    if (z16) {
        r1 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r1) & reinterpret_cast<uint32_t>(r0) << r11_17);
    }
    if (z18) {
        r1 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r1) & r4_19 >> 22);
    }
    if (z20) {
        r1 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r1) & reinterpret_cast<uint32_t>(r12_21 >> 22));
    }
    if (z22) {
    }
    if (z23) {
        r1 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r1) & reinterpret_cast<uint32_t>(r4_24 >> r11_25));
    }
    if (z26) {
        r1 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r1) & (r12_27 >> r11_28 | r12_29 << reinterpret_cast<uint32_t>(32 - r11_30)));
    }
    if (z31) {
        r9_32 = reinterpret_cast<uint32_t>(r0) & r8_33 << 15;
    }
    if (z34) {
        r1 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r1) & r4_35 << 23);
    }
    if (z36) {
        r1 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r1) & r12_37 >> 23);
    }
    if (z38) {
    }
    if (z39) {
        *r1 = static_cast<int16_t>(reinterpret_cast<uint32_t>(r1));
    }
    if (z40) {
        __asm__("ldrdeq r1, r2, [r1], -ip");
    }
    if (z41) {
        r9_32 = reinterpret_cast<uint32_t>(r0) & (r4_42 >> 11 | r4_43 << 21);
    }
    if (z44) {
    }
    if (z45) {
    }
    if (z46) {
        r9_32 = reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(r4_47 >> r5_48);
    }
    if (z49) {
    }
    if (z50) {
    }
    if (z51) {
        *r0 = static_cast<int16_t>(r9_32);
    }
    if (z52) {
    }
    if (z53) {
    }
    if (z54) {
        __asm__("ldrdeq sb, sl, [r0], -ip");
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
        __asm__("ldrdeq r1, r2, [r1], -r4");
    }
    if (z63) {
    }
    if (n64) {
    }
    if (n65) {
    }
    if (n66) {
    }
    if (z67) {
    }
    if (n68) {
    }
    if (n69) {
    }
    if (n70) {
    }
    if (n71) {
    }
    if (!n72) 
        goto "???";
}

int32_t fun_a600() {
    fun_9a94(0);
    return 0;
}

void fun_a6d4(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_a724(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

struct s62 {
    void** f0;
    signed char[3] pad4;
    int32_t f4;
    signed char[4] pad12;
    void** f12;
};

void** gac68 = reinterpret_cast<void**>(28);

void** gac6c = reinterpret_cast<void**>(72);

void** gac70 = reinterpret_cast<void**>(40);

void** gac74 = reinterpret_cast<void**>(44);

void*** gac78 = reinterpret_cast<void***>(0x40000730);

void** gac7c = reinterpret_cast<void**>(44);

struct s63 {
    void** f0;
    signed char[15] pad16;
    int32_t f16;
    void** f20;
    signed char[3] pad24;
    void** f24;
    signed char[19] pad44;
    int32_t f44;
    void** f48;
    signed char[3] pad52;
    void** f52;
    signed char[19] pad72;
    int32_t f72;
    void** f76;
    signed char[3] pad80;
    void** f80;
};

struct s63* gac88 = reinterpret_cast<struct s63*>(0x4000043c);

void** gac8c = reinterpret_cast<void**>(16);

void** gac84 = reinterpret_cast<void**>(0x7c);

void*** gac80 = reinterpret_cast<void***>(0x40000718);

void** gac98 = reinterpret_cast<void**>(24);

void** gac94 = reinterpret_cast<void**>(8);

void** gac90 = reinterpret_cast<void**>(0xfc);

int32_t fun_a778(struct s62* r0) {
    int1_t n2;
    uint32_t r8_3;
    void** r2_4;
    int1_t z5;
    void** r3_6;
    void** r3_7;
    void** r3_8;
    void*** r2_9;
    void** r1_10;
    void** v11;
    void** r4_12;
    void** v13;
    void** r5_14;
    void** v15;
    void** r6_16;
    void** v17;
    void** r7_18;
    void** v19;
    void** r8_20;
    void** v21;
    void** r10_22;
    void** v23;
    struct s62* r7_24;
    void** r0_25;
    void** r3_26;
    void** r2_27;
    int1_t z28;
    void** r3_29;
    void** r0_30;
    void** r0_31;
    void** r2_32;
    int1_t less_or_equal33;
    void** r8_34;
    void** r3_35;
    void*** r10_36;
    struct s63* r4_37;
    void** r0_38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** r0_63;
    void** r4_64;
    void** r6_65;
    void** r0_66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** r0_91;
    void** r3_92;
    void** r0_93;
    void** r3_94;
    void** r2_95;
    void** r0_96;
    void** r1_97;
    void** r0_98;
    void** r0_99;
    void*** r5_100;
    void** r3_101;
    void** r4_102;
    void** r0_103;
    void** r0_104;
    void** r3_105;
    void** r0_106;
    void** r5_107;
    void** r3_108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** r0_133;
    void** r4_134;
    void** r3_135;
    void** r0_136;
    void** r0_137;
    void** r3_138;
    int1_t z139;
    void** r3_140;
    void** lr141;
    void** r12_142;
    uint32_t r0_143;
    void** r3_144;
    void** v145;
    void** v146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    void** v153;
    void** v154;
    void** v155;
    void** v156;
    void** v157;
    void** v158;
    void** v159;
    void** v160;
    void** v161;
    void** v162;
    void** v163;
    void** v164;
    void** v165;
    void** v166;
    void** v167;
    void** v168;
    void** r0_169;
    int1_t below_or_equal170;
    void** r3_171;
    int1_t z172;
    void** r3_173;
    void** r3_174;
    void** r0_175;
    void** r1_176;
    void** r4_177;
    uint32_t r12_178;
    void*** r4_179;
    void** r0_180;
    void** r0_181;
    void*** r3_182;
    void** r0_183;
    void** r3_184;
    void** r0_185;
    void** v186;
    void** v187;
    void** v188;
    void** v189;
    void** v190;
    void** v191;
    void** v192;
    void** v193;
    void** v194;
    void** v195;
    void** v196;
    void** v197;
    void** v198;
    void** v199;
    void** v200;
    void** v201;
    void** v202;
    void** v203;
    void** v204;
    void** v205;
    void** v206;
    void** v207;
    void** v208;
    void** v209;
    void** r0_210;
    void** r0_211;
    void** v212;
    void** v213;
    void** v214;
    void** v215;
    void** v216;
    void** v217;
    void** v218;
    void** v219;
    void** v220;
    void** v221;
    void** v222;
    void** v223;
    void** v224;
    void** v225;
    void** v226;
    void** v227;
    void** v228;
    void** v229;
    void** v230;
    void** v231;
    void** v232;
    void** v233;
    void** v234;
    void** v235;
    void** r0_236;

    if (n2) {
        r0 = reinterpret_cast<struct s62*>(reinterpret_cast<uint32_t>(r0) & r8_3 >> 14);
    }
    r2_4 = gac68;
    __asm__("stmib r2, {r3, ip}");
    z5 = r0->f4 == 1;
    r3_6 = gac6c;
    *reinterpret_cast<void***>(r3_6) = reinterpret_cast<void**>(0);
    r3_7 = gac70;
    *reinterpret_cast<void***>(r3_7) = r2_4;
    r3_8 = gac74;
    r2_9 = gac78;
    *reinterpret_cast<void***>(r3_8) = reinterpret_cast<void**>(0);
    if (z5) {
        r3_8 = reinterpret_cast<void**>(9);
    }
    if (z5) {
        *r2_9 = r3_8;
    }
    if (!z5) {
        *r2_9 = reinterpret_cast<void**>(12);
    }
    r1_10 = gac7c;
    v11 = r4_12;
    v13 = r5_14;
    v15 = r6_16;
    v17 = r7_18;
    v19 = r8_20;
    v21 = r10_22;
    v23 = reinterpret_cast<void**>(__return_address());
    r7_24 = r0;
    r0_25 = reinterpret_cast<void**>(43);
    while (1) {
        r3_26 = gac6c;
        r2_27 = *reinterpret_cast<void***>(r3_26);
        z28 = r2_27 == 0;
        if (!z28) {
            r3_26 = *reinterpret_cast<void***>(r2_27 + 12);
        }
        if (z28) {
            *reinterpret_cast<void***>(r3_26) = r1_10;
        }
        if (!z28) {
            *reinterpret_cast<void***>(r3_26 + 8) = r1_10;
        }
        if (!z28) {
            *reinterpret_cast<void***>(r1_10 + 12) = r3_26;
        }
        r3_29 = r0_25 - 1;
        r0_25 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r3_29) & 0xff);
        if (z28) {
            *reinterpret_cast<void***>(r1_10 + 8) = r1_10;
        }
        if (z28) {
            *reinterpret_cast<void***>(r1_10 + 12) = r1_10;
        }
        if (!z28) {
            *reinterpret_cast<void***>(r1_10 + 8) = r2_27;
        }
        if (!z28) {
            *reinterpret_cast<void***>(r2_27 + 12) = r1_10;
        }
        r1_10 = r1_10 - 16;
        if (reinterpret_cast<int1_t>(r0_25 == 0xff)) 
            break;
    }
    fun_6388(r0_25, r1_10, r2_27, r3_29);
    fun_c504(0, 12, r2_27);
    r0_30 = fun_c4a0(0, 12, r2_27);
    r0_31 = fun_6334(r0_30, 12, r2_27, r3_29);
    r2_32 = r7_24->f0;
    less_or_equal33 = reinterpret_cast<signed char>(r2_32) <= reinterpret_cast<signed char>(11);
    if (less_or_equal33) {
        r3_29 = gac70;
    }
    if (less_or_equal33) {
        r3_29 = *reinterpret_cast<void***>(r3_29);
    }
    if (less_or_equal33) {
        *reinterpret_cast<void***>(r3_29 + 8) = r2_32;
    }
    while (r8_34 = gac70, r3_35 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(r8_34) + 8), reinterpret_cast<signed char>(r3_35) > reinterpret_cast<signed char>(0)) {
        r10_36 = gac78;
        r3_35 = *r10_36;
        if (reinterpret_cast<signed char>(r3_35) <= reinterpret_cast<signed char>(0)) 
            goto label_37;
        r3_35 = r7_24->f0;
        if (reinterpret_cast<signed char>(r3_35) <= reinterpret_cast<signed char>(0)) 
            goto label_39;
        r4_37 = gac88;
        r4_37->f80 = reinterpret_cast<void**>(6);
        r4_37->f24 = reinterpret_cast<void**>(6);
        r4_37->f52 = reinterpret_cast<void**>(6);
        r4_37->f76 = reinterpret_cast<void**>(5);
        r4_37->f20 = reinterpret_cast<void**>(5);
        r4_37->f48 = reinterpret_cast<void**>(5);
        r4_37->f16 = 0;
        r4_37->f44 = 0;
        r4_37->f72 = 0;
        r0_38 = gac8c;
        fun_edac(r0_38, 12, 6);
        r0_63 = fun_5eb8(0, 2, 6, 5, v11, v13, v15, v17, v19, v21, v23, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62);
        r4_64 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0_63) * reinterpret_cast<unsigned char>(28) + reinterpret_cast<uint32_t>(r4_37));
        r6_65 = gac74;
        *reinterpret_cast<void***>(r6_65) = r4_64;
        r0_66 = fun_1054(r0_63, 2, 6, 28, v11, v13, v15);
        *reinterpret_cast<void***>(r4_64 + 16) = r0_66;
        r0_91 = fun_5eb8(0, 43, 6, 28, v11, v13, v15, v17, v19, v21, v23, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87, v88, v89, v90);
        r3_92 = gac84;
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(r8_34)) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r3_92) + (reinterpret_cast<unsigned char>(r0_91) << 4));
        r0_93 = fun_a64c();
        r3_94 = *reinterpret_cast<void***>(r6_65);
        r2_95 = reinterpret_cast<void**>(1);
        *reinterpret_cast<void***>(r3_94 + 4) = r0_93;
        r0_96 = fun_62e4(*reinterpret_cast<void***>(r3_94 + 24), *reinterpret_cast<void***>(r3_94 + 20), 1, r3_94);
        fun_a728(r0_96, *reinterpret_cast<void***>(r3_94 + 20), 1);
        fun_c504(*reinterpret_cast<void***>(*reinterpret_cast<void***>(r8_34) + 8), 12, 1);
        r1_97 = reinterpret_cast<void**>(12);
        fun_c4a0(*r10_36, 12, 1);
        while (!r7_24->f12) {
            fun_6d58(7, r1_97, r2_95);
            r0_98 = fun_6d58(5, r1_97, r2_95);
            r0_99 = fun_1054(r0_98, r1_97, r2_95, r7_24->f12, v11, v13, v15);
            r5_100 = gac80;
            r3_101 = *r5_100 + 100;
            r4_102 = r0_99;
            if (reinterpret_cast<unsigned char>(r3_101) >= reinterpret_cast<unsigned char>(r0_99)) {
                r0_103 = fun_6d58(7, r1_97, r2_95);
                if (!r0_103) {
                    goto addr_a8b4_47;
                }
                r0_99 = fun_6d58(5, r1_97, r2_95);
                if (!r0_99) {
                    addr_a8b4_47:
                    r0_104 = fun_6d58(7, r1_97, r2_95);
                    if (!r0_104) {
                        r0_99 = fun_6d58(5, r1_97, r2_95);
                        if (!r0_99) 
                            goto label_52; else 
                            goto addr_a8ec_53;
                    } else {
                        r3_105 = gac70;
                        r2_95 = *reinterpret_cast<void***>(r3_105);
                        r1_97 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(r2_95) + 8);
                        r3_101 = reinterpret_cast<void**>(1);
                        goto addr_a900_55;
                    }
                }
            }
            addr_a90c_56:
            r0_106 = fun_1054(r0_99, r1_97, r2_95, r3_101, v11, v13, v15);
            r5_107 = gac74;
            r2_95 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(r5_107) + 8);
            r3_108 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(r5_107) + 16)) + reinterpret_cast<unsigned char>(r2_95));
            if (reinterpret_cast<unsigned char>(r3_108) >= reinterpret_cast<unsigned char>(r0_106)) {
                r0_133 = fun_5eb8(1, 100, r2_95, r3_108, v11, v13, v15, v17, v19, v21, v23, v109, v110, v111, v112, v113, v114, v115, v116, v117, v118, v119, v120, v121, v122, v123, v124, v125, v126, v127, v128, v129, v130, v131, v132);
                r4_134 = *reinterpret_cast<void***>(r5_107);
                r3_135 = *reinterpret_cast<void***>(r4_134 + 12);
                if (reinterpret_cast<unsigned char>(r0_133) <= reinterpret_cast<unsigned char>(r3_135)) {
                    r0_136 = fun_a64c();
                    *reinterpret_cast<void***>(r4_134 + 4) = r0_136;
                }
                fun_62e4(*reinterpret_cast<void***>(r4_134 + 24), *reinterpret_cast<void***>(r4_134 + 20), 0, r3_135);
                r0_137 = *reinterpret_cast<void***>(r5_107);
                r3_138 = *reinterpret_cast<void***>(r0_137 + 4);
                z139 = reinterpret_cast<int1_t>(r3_138 == 1);
                if (z139) {
                    r3_138 = *reinterpret_cast<void***>(r0_137 + 24);
                }
                if (z139) {
                    ++r3_138;
                }
                if (z139) 
                    goto label_66; else 
                    goto addr_a978_67;
            }
            addr_aa00_68:
            fun_a728(r0_106, r1_97, r2_95);
            r3_140 = gac74;
            lr141 = *reinterpret_cast<void***>(r3_140);
            r1_97 = gac84;
            r12_142 = *reinterpret_cast<void***>(lr141 + 20);
            r0_143 = 43;
            while (1) {
                r0_143 = r0_143 - 1 & 0xff;
                if (r12_142 == *reinterpret_cast<void***>(r1_97 + 0x2b0)) {
                    r2_95 = *reinterpret_cast<void***>(r1_97 + 0x2b4);
                    if (*reinterpret_cast<void***>(lr141 + 24) == r2_95) 
                        goto label_72;
                }
                r1_97 = r1_97 - 16;
                if (r0_143 == 0xff) 
                    break;
            }
            continue;
            label_66:
            addr_a988_76:
            *reinterpret_cast<void***>(r0_137 + 24) = r3_138;
            addr_a9b4_77:
            r3_144 = *reinterpret_cast<void***>(r0_137);
            r2_95 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r0_137 + 16)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r0_137 + 8)));
            *reinterpret_cast<void***>(r0_137 + 16) = r2_95;
            if (reinterpret_cast<int1_t>(r3_144 == 3)) {
                r0_169 = fun_5eb8(1, 100, r2_95, r3_144, v11, v13, v15, v17, v19, v21, v23, v145, v146, v147, v148, v149, v150, v151, v152, v153, v154, v155, v156, v157, v158, v159, v160, v161, v162, v163, v164, v165, v166, v167, v168);
                below_or_equal170 = reinterpret_cast<unsigned char>(r0_169) <= reinterpret_cast<unsigned char>(30);
                if (below_or_equal170) {
                    r2_95 = reinterpret_cast<void**>(0);
                }
                if (below_or_equal170) 
                    goto label_82;
            }
            r2_95 = reinterpret_cast<void**>(1);
            addr_a9ec_84:
            r3_171 = gac74;
            r1_97 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(r3_171) + 20);
            r0_106 = fun_62e4(*reinterpret_cast<void***>(*reinterpret_cast<void***>(r3_171) + 24), r1_97, r2_95, *reinterpret_cast<void***>(r3_171));
            goto addr_aa00_68;
            label_82:
            goto addr_a9ec_84;
            addr_a978_67:
            if (!reinterpret_cast<int1_t>(r3_138 == 2)) {
                z172 = reinterpret_cast<int1_t>(r3_138 == 3);
                if (!z172) 
                    goto addr_a998_87;
            } else {
                r3_138 = *reinterpret_cast<void***>(r0_137 + 24) - 1;
                goto addr_a988_76;
            }
            r3_138 = *reinterpret_cast<void***>(r0_137 + 20);
            addr_a998_87:
            if (z172) {
                --r3_138;
            }
            if (!z172) {
                if (!reinterpret_cast<int1_t>(r3_138 == 4)) {
                    goto addr_a9b4_77;
                } else {
                    r3_138 = *reinterpret_cast<void***>(r0_137 + 20) + 1;
                }
            }
            *reinterpret_cast<void***>(r0_137 + 20) = r3_138;
            goto addr_a9b4_77;
            label_52:
            goto addr_a90c_56;
            addr_a8ec_53:
            r3_173 = gac70;
            r2_95 = *reinterpret_cast<void***>(r3_173);
            r1_97 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(r2_95) + 12);
            r3_101 = reinterpret_cast<void**>(2);
            addr_a900_55:
            __asm__("stm r2, {r1, r3}");
            r0_99 = fun_a6d8();
            *r5_100 = r4_102;
            goto addr_a90c_56;
        }
        goto addr_a854_97;
        label_72:
        r3_174 = gac70;
        r0_175 = *reinterpret_cast<void***>(r3_174);
        r1_176 = *reinterpret_cast<void***>(r0_175);
        r4_177 = *reinterpret_cast<void***>(lr141 + 20);
        if (r4_177 != *reinterpret_cast<void***>(r1_176)) {
            goto addr_aa78_100;
        }
        r2_32 = *reinterpret_cast<void***>(lr141 + 24);
        if (r2_32 != *reinterpret_cast<void***>(r1_176 + 4)) {
            addr_aa78_100:
            r12_178 = 1;
            goto addr_aa7c_103;
        }
        addr_aab0_104:
        r4_179 = gac78;
        r0_180 = *reinterpret_cast<void***>(r0_175 + 8);
        *r4_179 = *r4_179 - 1;
        fun_c504(r0_180, 12, r2_32);
        r0_181 = *r4_179;
        addr_aad0_105:
        r0_31 = fun_c4a0(r0_181, 12, r2_32);
        continue;
        while (1) {
            addr_aa7c_103:
            r1_176 = *reinterpret_cast<void***>(r1_176 + 8);
            r2_32 = *reinterpret_cast<void***>(r1_176);
            r12_178 = r12_178 + 1 & 0xff;
            if (r4_177 == r2_32) {
                r2_32 = *reinterpret_cast<void***>(lr141 + 24);
                if (r2_32 == *reinterpret_cast<void***>(r1_176 + 4)) 
                    goto label_108;
            }
            if (r12_178 == 10) 
                break;
        }
        *reinterpret_cast<void***>(r0_175 + 8) = *reinterpret_cast<void***>(r0_175 + 8) - 1;
        r7_24->f0 = r7_24->f0 - 1;
        fun_c504(*reinterpret_cast<void***>(r0_175 + 8), 12, r2_32);
        r3_182 = gac78;
        r0_181 = *r3_182;
        goto addr_aad0_105;
        label_108:
        goto addr_aab0_104;
    }
    addr_abc4_114:
    fun_6388(r0_31, 12, r2_32, r3_35);
    fun_c504(0, 12, r2_32);
    r0_183 = fun_c4a0(0, 12, r2_32);
    fun_6334(r0_183, 12, r2_32, r3_35);
    r3_184 = gac70;
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(r3_184) + 8)) <= reinterpret_cast<signed char>(0)) {
        r0_185 = gac98;
        fun_6208(r0_185, 12, r2_32, *reinterpret_cast<void***>(*reinterpret_cast<void***>(r3_184) + 8), v11, v13, v15, v17, v19, v21, v23, v186, v187, v188, v189, v190, v191, v192, v193, v194, v195, v196, v197, v198, v199, v200, v201, v202, v203, v204, v205, v206, v207, v208, v209);
        r0_210 = gac94;
        fun_6214(r0_210, r7_24->f0, r2_32);
        return 0;
    } else {
        r0_211 = gac90;
        fun_6208(r0_211, 12, r2_32, *reinterpret_cast<void***>(*reinterpret_cast<void***>(r3_184) + 8), v11, v13, v15, v17, v19, v21, v23, v212, v213, v214, v215, v216, v217, v218, v219, v220, v221, v222, v223, v224, v225, v226, v227, v228, v229, v230, v231, v232, v233, v234, v235);
        r0_236 = gac94;
        fun_6214(r0_236, r7_24->f0, r2_32);
        return 1;
    }
    label_37:
    goto addr_abc4_114;
    label_39:
    goto addr_abc4_114;
    addr_a854_97:
    goto r7_24->f12;
}

void fun_a860(int32_t r0) {
    int32_t v2;

    if (!r0) 
        goto "???";
    goto v2;
}

void** gb134 = reinterpret_cast<void**>(52);

void** gb138 = reinterpret_cast<void**>(76);

void** gb13c = reinterpret_cast<void**>(84);

void** gb140 = reinterpret_cast<void**>(80);

void** gb144 = reinterpret_cast<void**>(84);

struct s64 {
    signed char[1] pad1;
    void** f1;
};

void*** gb148 = reinterpret_cast<void***>(0x40000738);

void** gb14c = reinterpret_cast<void**>(52);

void** gb150 = reinterpret_cast<void**>(0x90);

void** gb154 = reinterpret_cast<void**>(16);

void** gb15c = reinterpret_cast<void**>(60);

void** gb158 = reinterpret_cast<void**>(0xfc);

uint32_t fun_acb0() {
    void** r3_1;
    void** r2_2;
    void** v3;
    void** r4_4;
    void** v5;
    void** r5_6;
    void** v7;
    void** r6_8;
    void** v9;
    void** r7_10;
    void** v11;
    void** r8_12;
    void** v13;
    void** r3_14;
    void** r3_15;
    void** r3_16;
    void** r5_17;
    struct s64* r6_18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** r0_44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** r0_70;
    void** r3_71;
    int1_t z72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** r0_98;
    void** r0_99;
    void** r3_100;
    int1_t z101;
    void*** r4_102;
    void** r5_103;
    void** r0_104;
    void** r3_105;
    void** r4_106;
    void** r2_107;
    void** r3_108;
    void** r0_109;
    void** r4_110;
    void** r0_111;
    void** r5_112;
    void** r3_113;
    void** r3_114;
    void** r3_115;
    void** r0_116;
    void** r8_117;
    void** r7_118;
    void** r1_119;
    void** r0_120;
    void** r0_121;
    void** r0_122;
    void** r3_123;
    void** r4_124;
    void** r0_125;
    void** r6_126;
    void* r3_127;
    void** r1_128;
    void** r3_129;
    int1_t less130;
    void** r3_131;
    int1_t less_or_equal132;
    void** r3_133;
    int1_t less_or_equal134;
    void** r3_135;
    void** r3_136;
    void** r3_137;
    int1_t below_or_equal138;
    int1_t less139;
    void** r0_140;
    void** r0_141;
    void*** r6_142;
    void** r4_143;
    void** r4_144;
    void** r3_145;
    void** r3_146;
    void** r3_147;
    void** r0_148;
    void** r3_149;
    uint32_t r4_150;
    void** r0_151;
    void** v152;
    void** v153;
    void** v154;
    void** v155;
    void** v156;
    void** v157;
    void** v158;
    void** v159;
    void** v160;
    void** v161;
    void** v162;
    void** v163;
    void** v164;
    void** v165;
    void** v166;
    void** v167;
    void** v168;
    void** v169;
    void** v170;
    void** v171;
    void** v172;
    void** v173;
    void** v174;
    void** v175;
    void** v176;
    void** r0_177;
    void** v178;
    void** v179;
    void** v180;
    void** v181;
    void** v182;
    void** v183;
    void** v184;
    void** v185;
    void** v186;
    void** v187;
    void** v188;
    void** v189;
    void** v190;
    void** v191;
    void** v192;
    void** v193;
    void** v194;
    void** v195;
    void** v196;
    void** v197;
    void** v198;
    void** v199;
    void** v200;
    void** v201;
    void** v202;

    r3_1 = gb134;
    r2_2 = reinterpret_cast<void**>(0);
    v3 = r4_4;
    v5 = r5_6;
    v7 = r6_8;
    v9 = r7_10;
    v11 = r8_12;
    v13 = reinterpret_cast<void**>(__return_address());
    *reinterpret_cast<void***>(r3_1) = reinterpret_cast<void**>(0);
    r3_14 = gb138;
    *reinterpret_cast<void***>(r3_14) = reinterpret_cast<void**>(0);
    r3_15 = gb13c;
    *reinterpret_cast<void***>(r3_15) = reinterpret_cast<void**>(0);
    r3_16 = gb140;
    r5_17 = gb144;
    *reinterpret_cast<void***>(r3_16) = reinterpret_cast<void**>(0);
    r6_18 = reinterpret_cast<struct s64*>(2);
    while (1) {
        *reinterpret_cast<void***>(r5_17) = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint32_t>(r6_18)));
        *reinterpret_cast<void***>(r5_17 + 1) = reinterpret_cast<void**>(0);
        *reinterpret_cast<unsigned char*>(r5_17 + 2) = 0;
        r0_44 = fun_5eb8(0, 16, r2_2, r3_16, v3, v5, v7, v9, v11, v13, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43);
        __asm__("stmib r5, {r2, r3}");
        r0_70 = fun_5eb8(0, 1, r0_44, r0_44 + 3, v3, v5, v7, v9, v11, v13, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69);
        r3_71 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0_70) & 0xff);
        z72 = reinterpret_cast<int1_t>(r3_71 == 1);
        if (z72) {
            r3_71 = reinterpret_cast<void**>(1);
        }
        if (!z72) {
            r3_71 = reinterpret_cast<void**>(2);
        }
        *reinterpret_cast<void***>(r5_17 + 12) = r3_71;
        r0_98 = fun_5eb8(0xc8, 0x258, r0_44, r3_71, v3, v5, v7, v9, v11, v13, v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87, v88, v89, v90, v91, v92, v93, v94, v95, v96, v97);
        *reinterpret_cast<void***>(r5_17 + 16) = r0_98;
        r0_99 = fun_1054(r0_98, 0x258, r0_44, r3_71, v3, v5, v7);
        r3_100 = gb138;
        r2_2 = *reinterpret_cast<void***>(r3_100);
        z101 = r2_2 == 0;
        if (!z101) {
            r3_100 = *reinterpret_cast<void***>(r2_2 + 28);
        }
        if (z101) {
            *reinterpret_cast<void***>(r3_100) = r5_17;
        }
        if (!z101) {
            *reinterpret_cast<void***>(r5_17 + 28) = r3_100;
        }
        if (!z101) {
            *reinterpret_cast<void***>(r3_100 + 24) = r5_17;
        }
        r3_16 = reinterpret_cast<void**>(&r6_18->f1);
        r6_18 = reinterpret_cast<struct s64*>(reinterpret_cast<unsigned char>(r3_16) & 0xff);
        if (z101) {
            *reinterpret_cast<void***>(r5_17 + 24) = r5_17;
        }
        if (z101) {
            *reinterpret_cast<void***>(r5_17 + 28) = r5_17;
        }
        if (!z101) {
            *reinterpret_cast<void***>(r5_17 + 24) = r2_2;
        }
        if (!z101) {
            *reinterpret_cast<void***>(r2_2 + 28) = r5_17;
        }
        *reinterpret_cast<void***>(r5_17 + 20) = r0_99;
        r5_17 = r5_17 + 32;
        if (reinterpret_cast<int1_t>(r6_18 == 10)) 
            break;
    }
    r4_102 = gb148;
    r5_103 = reinterpret_cast<void**>(0);
    while (r0_104 = fun_6d58(r5_103, 0x258, r2_2), ++r5_103, *r4_102 = r0_104, r4_102 = r4_102 + 4, !reinterpret_cast<int1_t>(r5_103 == 12)) {
    }
    r3_105 = gb138;
    r4_106 = gb13c;
    r2_107 = *reinterpret_cast<void***>(r3_105);
    r3_108 = gb140;
    *reinterpret_cast<void***>(r4_106) = r2_107;
    *reinterpret_cast<void***>(r3_108) = r2_107;
    fun_6388(r0_104, 0x258, r2_107, r3_108);
    fun_c504(0, r5_103, r2_107);
    r0_109 = fun_c4a0(0, r5_103, r2_107);
    fun_6334(r0_109, r5_103, r2_107, r3_108);
    r4_110 = *reinterpret_cast<void***>(r4_106);
    while (1) {
        r0_111 = gb14c;
        fun_6214(r0_111, *reinterpret_cast<void***>(r4_110 + 16), r2_107);
        r5_112 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r4_110 + 8))));
        while (r3_113 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(r5_112) << 24) >> 24), r2_107 = reinterpret_cast<void**>(1), reinterpret_cast<signed char>(r3_113) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(r4_110 + 4))) {
            fun_ac9c(r3_113, static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r4_110))), 1);
            r5_112 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r5_112 - 1) & 0xff);
        }
        r3_114 = gb13c;
        r4_110 = *reinterpret_cast<void***>(r4_110 + 24);
        r3_115 = *reinterpret_cast<void***>(r3_114);
        if (r4_110 == r3_115) 
            break;
    }
    fun_6364(r3_113, *reinterpret_cast<void***>(r4_110 + 4), 1, r3_115);
    r0_116 = fun_1054(r3_113, *reinterpret_cast<void***>(r4_110 + 4), 1, r3_115, v3, v5, v7);
    r8_117 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r0_116 + 0x15c00) + 0x390);
    r7_118 = r0_116;
    r1_119 = gb150;
    r0_120 = fun_c504(reinterpret_cast<unsigned char>(r8_117) - reinterpret_cast<unsigned char>(r0_116), r1_119, 1);
    do {
        if (reinterpret_cast<unsigned char>(r8_117) >= reinterpret_cast<unsigned char>(r7_118)) 
            break;
        r0_121 = fun_1054(r0_120, r1_119, r2_107, r3_115, v3, v5, v7);
        r7_118 = r0_121;
        r1_119 = gb150;
        r0_122 = fun_c504(reinterpret_cast<unsigned char>(r8_117) - reinterpret_cast<unsigned char>(r0_121) + 0x1380 + 8, r1_119, r2_107);
        r3_123 = gb13c;
        r4_124 = *reinterpret_cast<void***>(r3_123);
        r0_125 = fun_1054(r0_122, r1_119, r2_107, r3_123, v3, v5, v7);
        r6_126 = r0_125;
        while (1) {
            r3_127 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r4_124 + 1))));
            if (r3_127 != 1) {
                r2_107 = r4_124 + 20;
                __asm__("ldmda r2, {r2, r3}");
                if (reinterpret_cast<unsigned char>(reinterpret_cast<uint32_t>(r3_127) + reinterpret_cast<unsigned char>(r2_107)) >= reinterpret_cast<unsigned char>(r6_126)) {
                    r1_128 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r4_124))));
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(r4_124 + 12) == 1)) {
                        fun_ac9c(*reinterpret_cast<void***>(r4_124 + 8), r1_128, 0);
                        r3_129 = *reinterpret_cast<void***>(r4_124 + 8) - 1;
                        less130 = reinterpret_cast<signed char>(r3_129) < reinterpret_cast<signed char>(0);
                        *reinterpret_cast<void***>(r4_124 + 8) = r3_129;
                        if (less130) 
                            goto label_45; else 
                            goto addr_af10_46;
                    } else {
                        fun_ac9c(*reinterpret_cast<void***>(r4_124 + 4), r1_128, 0);
                        r3_131 = *reinterpret_cast<void***>(r4_124 + 8) + 1;
                        less_or_equal132 = reinterpret_cast<signed char>(r3_131) <= reinterpret_cast<signed char>(19);
                        *reinterpret_cast<void***>(r4_124 + 8) = r3_131;
                        if (!less_or_equal132) {
                            r3_131 = reinterpret_cast<void**>(0);
                        }
                        if (!less_or_equal132) {
                            *reinterpret_cast<void***>(r4_124 + 8) = r3_131;
                        }
                        r3_133 = *reinterpret_cast<void***>(r4_124 + 4) + 1;
                        less_or_equal134 = reinterpret_cast<signed char>(r3_133) <= reinterpret_cast<signed char>(19);
                        *reinterpret_cast<void***>(r4_124 + 4) = r3_133;
                        if (!less_or_equal134) {
                            r3_133 = reinterpret_cast<void**>(0);
                        }
                        if (!less_or_equal134) 
                            goto label_54; else 
                            goto addr_aeec_55;
                    }
                }
            }
            addr_afa4_56:
            r3_135 = gb13c;
            r4_124 = *reinterpret_cast<void***>(r4_124 + 24);
            if (r4_124 == *reinterpret_cast<void***>(r3_135)) 
                break;
            continue;
            label_45:
            r3_129 = reinterpret_cast<void**>(19);
            addr_af10_46:
            if (less130) {
                *reinterpret_cast<void***>(r4_124 + 8) = r3_129;
            }
            r3_136 = *reinterpret_cast<void***>(r4_124 + 4) - 1;
            *reinterpret_cast<void***>(r4_124 + 4) = r3_136;
            if (reinterpret_cast<signed char>(r3_136) < reinterpret_cast<signed char>(0)) {
                r3_133 = reinterpret_cast<void**>(19);
                goto addr_af2c_62;
            }
            addr_af30_63:
            r3_137 = *reinterpret_cast<void***>(r4_124 + 8);
            below_or_equal138 = reinterpret_cast<unsigned char>(r3_137) <= reinterpret_cast<unsigned char>(2);
            if (below_or_equal138) {
                r5_112 = reinterpret_cast<void**>(19);
            }
            if (below_or_equal138) {
                while (r1_119 = *reinterpret_cast<void***>(r4_124 + 4), less139 = reinterpret_cast<signed char>(r5_112) < reinterpret_cast<signed char>(r1_119), r0_140 = r5_112, --r5_112, !less139) {
                    fun_ac9c(r0_140, static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r4_124))), 1);
                }
            } else {
                while (r5_112 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r3_137) & 0xff), r1_119 = *reinterpret_cast<void***>(r4_124 + 4), r3_137 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(r5_112) << 24) >> 24), reinterpret_cast<signed char>(r3_137) >= reinterpret_cast<signed char>(r1_119)) {
                    fun_ac9c(r3_137, static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r4_124))), 1);
                    r3_137 = r5_112 - 1;
                }
            }
            r2_107 = r4_124 + 20;
            __asm__("ldmda r2, {r2, r3}");
            *reinterpret_cast<void***>(r4_124 + 20) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r3_137) + reinterpret_cast<unsigned char>(r2_107));
            goto addr_afa4_56;
            addr_af2c_62:
            *reinterpret_cast<void***>(r4_124 + 4) = r3_133;
            goto addr_af30_63;
            label_54:
            goto addr_af2c_62;
            addr_aeec_55:
            goto addr_af30_63;
        }
        r0_141 = gb154;
        fun_f1d8(r0_141, r1_119, r2_107);
        r5_112 = reinterpret_cast<void**>(0);
        r6_142 = gb148;
        r4_143 = reinterpret_cast<void**>(0);
        while (1) {
            r0_120 = fun_6d58(r4_143, r1_119, r2_107);
            ++r4_143;
            if (r0_120) {
                if (r0_120 != *r6_142) {
                    r5_112 = reinterpret_cast<void**>(1);
                }
            }
            *r6_142 = r0_120;
            r6_142 = r6_142 + 4;
            if (reinterpret_cast<int1_t>(r4_143 == 12)) 
                break;
        }
        if (!r5_112) {
            continue;
        } else {
            r2_107 = gb140;
            r1_119 = reinterpret_cast<void**>(1);
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(r2_107) + 1) = reinterpret_cast<void**>(1);
            r4_144 = *reinterpret_cast<void***>(r2_107);
            if (static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r4_144))) <= 2) {
                if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r4_144 + 8)) <= reinterpret_cast<signed char>(14)) 
                    goto addr_b074_88;
            } else {
                r2_107 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(r4_144 + 28) + 4);
                if (*reinterpret_cast<void***>(r4_144 + 4) == r2_107) {
                    goto addr_b09c_91;
                } else {
                    while (*reinterpret_cast<void***>(r4_144 + 1) = reinterpret_cast<void**>(0), r0_120 = fun_1054(r0_120, 1, r2_107, 0, v3, v5, v7), r2_107 = gb140, *reinterpret_cast<void***>(r4_144 + 20) = r0_120, r4_144 = *reinterpret_cast<void***>(r4_144 + 24), r4_144 != *reinterpret_cast<void***>(r2_107)) {
                    }
                    r3_145 = gb138;
                    *reinterpret_cast<void***>(r2_107) = *reinterpret_cast<void***>(r3_145);
                    continue;
                }
            }
        }
        goto addr_b080_96;
        addr_b074_88:
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r4_144 + 4)) <= reinterpret_cast<signed char>(4)) {
            addr_b080_96:
            *reinterpret_cast<void***>(r4_144 + 1) = reinterpret_cast<void**>(0);
            r3_146 = gb140;
            r0_120 = fun_1054(r0_120, 1, r2_107, r3_146, v3, v5, v7);
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(r3_146) + 20) = r0_120;
            continue;
        }
        addr_b09c_91:
        *reinterpret_cast<unsigned char*>(r4_144 + 2) = 1;
        r1_119 = gb140;
        r2_107 = *reinterpret_cast<void***>(r1_119);
        if (static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r2_107))) == 9) 
            goto label_98;
        *reinterpret_cast<void***>(r1_119) = *reinterpret_cast<void***>(r2_107 + 24);
        r3_147 = gb134;
        r3_115 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3_147))));
    } while (r3_115 != 1);
    goto label_101;
    addr_b0d4_102:
    fun_6388(r0_120, r1_119, r2_107, r3_115);
    fun_c504(0, 12, r2_107);
    r0_148 = fun_c4a0(0, 12, r2_107);
    fun_6334(r0_148, 12, r2_107, r3_115);
    r3_149 = gb134;
    r4_150 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3_149));
    if (r4_150 != 1) {
        r0_151 = gb15c;
        fun_6208(r0_151, 12, r2_107, r3_149, v3, v5, v7, v9, v11, v13, v152, v153, v154, v155, v156, v157, v158, v159, v160, v161, v162, v163, v164, v165, v166, v167, v168, v169, v170, v171, v172, v173, v174, v175, v176);
        return 0;
    } else {
        r0_177 = gb158;
        fun_6208(r0_177, 12, r2_107, r3_149, v3, v5, v7, v9, v11, v13, v178, v179, v180, v181, v182, v183, v184, v185, v186, v187, v188, v189, v190, v191, v192, v193, v194, v195, v196, v197, v198, v199, v200, v201, v202);
        return r4_150;
    }
    label_101:
    goto addr_b0d4_102;
    label_98:
    r3_115 = gb134;
    r2_107 = reinterpret_cast<void**>(1);
    *reinterpret_cast<void***>(r3_115) = reinterpret_cast<void**>(1);
    goto addr_b0d4_102;
}

void fun_b174(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_b194(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_b1d4(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

struct s65 {
    void** f0;
    signed char[11] pad12;
    int32_t f12;
};

void*** gbafc = reinterpret_cast<void***>(0x40000768);

void** gbb00 = reinterpret_cast<void**>(80);

struct s66 {
    void** f0;
    signed char[63] pad64;
    int32_t f64;
    void** f68;
    signed char[3] pad72;
    void** f72;
    signed char[3] pad76;
    void** f76;
};

struct s67 {
    void** f0;
    signed char[63] pad64;
    int32_t f64;
    void** f68;
    signed char[3] pad72;
    void** f72;
    signed char[3] pad76;
    void** f76;
};

void** fun_b384(struct s65* r0) {
    int1_t n2;
    void** r1_3;
    uint32_t r8_4;
    int1_t n5;
    uint32_t r8_6;
    uint32_t r8_7;
    void*** r4_8;
    void** r3_9;
    struct s65* r10_10;
    void** r0_11;
    void** r2_12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** r0_44;
    void** r2_45;
    void** v46;
    void** v47;
    void** v48;
    void** r0_49;
    void** r3_50;
    void** r1_51;
    void** r2_52;
    void** r0_53;
    void** r0_54;
    void** v55;
    void** v56;
    void** r1_57;
    void** v58;
    void** r3_59;
    void*** r3_60;
    void** r0_61;
    void*** r3_62;
    void** r3_63;
    int1_t less_or_equal64;
    void** v65;
    void*** r3_66;
    void** r3_67;
    void*** r3_68;
    int1_t z69;
    void** v70;
    void** v71;
    void** r0_72;
    void*** r3_73;
    void** r1_74;
    void** r3_75;
    uint32_t r9_76;
    void** r3_77;
    void** v78;
    void** r0_79;
    void*** r3_80;
    void** r12_81;
    void** r2_82;
    void** r3_83;
    int1_t z84;
    int1_t z85;
    void** r1_86;
    void** r3_87;
    int1_t z88;
    struct s66* r3_89;
    void** r1_90;
    void** r3_91;
    struct s67* r3_92;
    void** v93;
    void** r0_94;
    void*** r3_95;
    void** lr96;
    void* r8_97;
    void** r1_98;
    void* r12_99;
    void** r3_100;
    int1_t less_or_equal101;
    void** r4_102;
    void** v103;
    void** r0_104;
    void*** r3_105;
    void** r1_106;
    void** r3_107;
    void** r3_108;
    int1_t z109;
    void** r3_110;
    int1_t z111;
    int1_t less112;
    int1_t less_or_equal113;
    uint32_t r11_114;
    void** v115;
    void** r0_116;
    uint32_t r7_117;
    void** r5_118;
    uint32_t r4_119;
    void*** r3_120;
    void** r1_121;
    void** r2_122;
    void** r0_123;
    void** r3_124;
    int1_t less125;
    void** r3_126;
    int1_t less_or_equal127;
    void** r2_128;
    void** r3_129;
    int1_t less_or_equal130;
    int1_t less_or_equal131;
    void*** r3_132;
    void** r2_133;
    int32_t r6_134;
    void** r4_135;
    void** lr136;
    void** r3_137;
    void** r0_138;
    void** r5_139;
    void** r12_140;
    int1_t z141;
    int1_t less_or_equal142;
    int1_t z143;
    int1_t z144;
    void** r3_145;
    void** v146;
    int1_t less_or_equal147;
    void** r3_148;
    int1_t z149;
    int1_t z150;
    void** r0_151;
    int1_t less_or_equal152;

    if (n2) {
        r1_3 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(r0) << r8_4);
    }
    if (n5) {
        r0 = reinterpret_cast<struct s65*>(reinterpret_cast<uint32_t>(r0) & (r8_6 >> 14 | r8_7 << 18));
    }
    r4_8 = gbafc;
    r3_9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 36 - 0xd8 + 8);
    *r4_8 = r3_9;
    r10_10 = r0;
    r0_11 = gbb00;
    r0_44 = fun_6208(r0_11, r1_3, r2_12, r3_9, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43);
    r0_49 = fun_1054(r0_44, r1_3, r2_45, r3_9, v46, v47, v48);
    r3_50 = *r4_8;
    r1_51 = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(r3_50 + 4) = reinterpret_cast<void**>(6);
    *reinterpret_cast<void***>(r3_50 + 40) = reinterpret_cast<void**>(0xc8);
    *reinterpret_cast<void***>(r3_50 + 0xc0) = r0_49;
    *reinterpret_cast<void***>(r3_50 + 56) = reinterpret_cast<void**>(1);
    *reinterpret_cast<void***>(r3_50 + 60) = reinterpret_cast<void**>(3);
    *reinterpret_cast<void***>(r3_50 + 0xc8) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(r3_50 + 0xcc) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(r3_50 + 8) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(r3_50 + 24) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(r3_50 + 0xc4) = r0_49;
    *reinterpret_cast<void***>(r3_50 + 48) = reinterpret_cast<void**>(1);
    *reinterpret_cast<void***>(r3_50 + 52) = reinterpret_cast<void**>(3);
    *reinterpret_cast<void***>(r3_50) = reinterpret_cast<void**>(4);
    r2_52 = r3_50;
    while (++r1_51, *reinterpret_cast<void***>(r2_52 + 64) = reinterpret_cast<void**>(0), r2_52 = r2_52 + 16, !reinterpret_cast<int1_t>(r1_51 == 8)) {
    }
    r0_53 = fun_b160();
    r0_54 = fun_b178(r0_53);
    fun_b1d8(r0_54, r1_51, r2_52);
    fun_6f70(5, 1, r2_52, 0, v55);
    fun_6f70(7, 1, r2_52, 0, v56);
    r1_57 = reinterpret_cast<void**>(1);
    fun_6f70(6, 1, r2_52, 0, v58);
    while (r3_59 = r10_10->f0, reinterpret_cast<signed char>(r3_59) > reinterpret_cast<signed char>(0)) {
        if (r10_10->f12) 
            goto addr_ba60_11;
        r3_60 = gbafc;
        r2_52 = *r3_60;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r2_52 + 52)) <= reinterpret_cast<signed char>(0)) {
            r3_59 = *reinterpret_cast<void***>(r2_52 + 60);
            if (reinterpret_cast<signed char>(r3_59) <= reinterpret_cast<signed char>(0)) 
                goto addr_ba94_16;
        }
        r0_61 = fun_6e8c(7, r1_57, r2_52);
        if (r0_61) {
            r3_62 = gbafc;
            r2_52 = *r3_62;
            r3_63 = *reinterpret_cast<void***>(r2_52 + 4);
            less_or_equal64 = reinterpret_cast<signed char>(r3_63) <= reinterpret_cast<signed char>(1);
            if (!less_or_equal64) {
                r0_61 = reinterpret_cast<void**>(1);
            }
            if (!less_or_equal64) {
                --r3_63;
            }
            if (!less_or_equal64) {
                v65 = r0_61;
            }
            if (!less_or_equal64) 
                goto label_27;
        }
        r0_61 = fun_6e8c(5, r1_57, r2_52);
        if (r0_61) {
            r3_66 = gbafc;
            r2_52 = *r3_66;
            r3_67 = *reinterpret_cast<void***>(r2_52 + 4);
            if (reinterpret_cast<signed char>(r3_67) <= reinterpret_cast<signed char>(9)) {
                r1_57 = reinterpret_cast<void**>(1);
                v65 = reinterpret_cast<void**>(1);
                r3_63 = r3_67 + 1;
                goto addr_b4b0_33;
            }
        }
        r0_61 = fun_6e8c(6, r1_57, r2_52);
        if (r0_61) {
            r3_68 = gbafc;
            r2_52 = *r3_68;
            z69 = *reinterpret_cast<void***>(r2_52 + 8) == 0;
            if (z69) {
                r0_61 = *reinterpret_cast<void***>(r2_52 + 8);
            }
            if (z69) 
                goto label_39; else 
                goto addr_b4e0_40;
        }
        addr_b51c_41:
        r3_63 = reinterpret_cast<void**>(0);
        v65 = reinterpret_cast<void**>(0);
        addr_b524_42:
        r0_72 = fun_1054(r0_61, r1_57, r2_52, r3_63, v65, v70, v71);
        r3_73 = gbafc;
        r1_74 = *r3_73;
        if (*reinterpret_cast<void***>(r1_74 + 8)) {
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r1_74 + 20) + 100) >= reinterpret_cast<unsigned char>(r0_72)) {
                r3_75 = *reinterpret_cast<void***>(r1_74 + 16) - 1;
                r2_52 = reinterpret_cast<void**>(~reinterpret_cast<unsigned char>(r3_75) >> 31);
                r9_76 = 1;
                *reinterpret_cast<void***>(r1_74 + 8) = r2_52;
                *reinterpret_cast<void***>(r1_74 + 16) = r3_75;
                *reinterpret_cast<void***>(r1_74 + 20) = r0_72;
                goto addr_b574_47;
            }
        }
        r9_76 = 0;
        addr_b574_47:
        r3_77 = *reinterpret_cast<void***>(r1_74 + 24);
        if (r3_77) {
            r3_77 = *reinterpret_cast<void***>(r1_74 + 36) + 100;
            if (reinterpret_cast<unsigned char>(r3_77) >= reinterpret_cast<unsigned char>(r0_72)) {
                r3_77 = *reinterpret_cast<void***>(r1_74 + 32) - 1;
                r2_52 = reinterpret_cast<void**>(~reinterpret_cast<unsigned char>(r3_77) >> 31);
                *reinterpret_cast<void***>(r1_74 + 24) = r2_52;
                *reinterpret_cast<void***>(r1_74 + 36) = r0_72;
                *reinterpret_cast<void***>(r1_74 + 32) = r3_77;
                r9_76 = 1;
            }
        }
        r0_79 = fun_1054(r0_72, r1_74, r2_52, r3_77, v65, v70, v78);
        r3_80 = gbafc;
        r12_81 = *r3_80;
        r2_82 = *reinterpret_cast<void***>(r12_81 + 48);
        if (reinterpret_cast<unsigned char>(r2_82) <= reinterpret_cast<unsigned char>(1)) {
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_81 + 56)) <= reinterpret_cast<unsigned char>(1)) {
                r3_83 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(r12_81 + 0xc0) + 0xbb0) + 8);
                if (reinterpret_cast<unsigned char>(r3_83) < reinterpret_cast<unsigned char>(r0_79)) {
                    goto addr_b738_59;
                } else {
                    z84 = r2_82 == 0;
                    if (!z84) {
                        r3_83 = reinterpret_cast<void**>(2);
                    }
                    if (!z84) {
                        *reinterpret_cast<void***>(r12_81 + 48) = r3_83;
                    }
                    r3_83 = *reinterpret_cast<void***>(r12_81 + 56);
                    z85 = r3_83 == 0;
                    if (!z85) {
                        r3_83 = reinterpret_cast<void**>(2);
                    }
                    if (!z85) 
                        goto label_67; else 
                        goto addr_b604_68;
                }
            }
        }
        if (r2_82 == 2) {
            goto addr_b61c_71;
        }
        r3_83 = *reinterpret_cast<void***>(r12_81 + 56);
        if (!reinterpret_cast<int1_t>(r3_83 == 2)) {
            if (r2_82 != 3) 
                goto addr_b684_75;
        } else {
            addr_b61c_71:
            r3_83 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(r12_81 + 0xc0) + 0x760) + 12);
            if (reinterpret_cast<unsigned char>(r3_83) < reinterpret_cast<unsigned char>(r0_79)) {
                goto addr_b738_59;
            } else {
                *reinterpret_cast<void***>(r12_81 + 44) = reinterpret_cast<void**>(0);
                r1_86 = reinterpret_cast<void**>(0);
                r2_82 = r12_81;
                while (++r1_86, *reinterpret_cast<void***>(r2_82 + 64) = reinterpret_cast<void**>(0), r2_82 = r2_82 + 16, !reinterpret_cast<int1_t>(r1_86 == 8)) {
                }
                r3_87 = *reinterpret_cast<void***>(r12_81 + 48);
                z88 = reinterpret_cast<int1_t>(r3_87 == 2);
                if (z88) 
                    goto label_81; else 
                    goto addr_b664_82;
            }
        }
        goto addr_b68c_84;
        addr_b684_75:
        if (reinterpret_cast<int1_t>(r3_83 == 3)) {
            addr_b68c_84:
            r3_83 = *reinterpret_cast<void***>(r12_81 + 0xc0) + 0xc8;
            if (reinterpret_cast<unsigned char>(r3_83) >= reinterpret_cast<unsigned char>(r0_79)) {
                if (reinterpret_cast<int1_t>(r2_82 == 3)) {
                    r3_89 = reinterpret_cast<struct s66*>(reinterpret_cast<unsigned char>(r12_81) + (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_81 + 44)) << 4));
                    r3_89->f72 = r2_82;
                    r1_90 = *reinterpret_cast<void***>(r12_81);
                    r3_89->f64 = 1;
                    r3_89->f68 = r1_90;
                    r3_89->f76 = r0_79;
                }
                r2_82 = *reinterpret_cast<void***>(r12_81 + 56);
                r3_91 = *reinterpret_cast<void***>(r12_81 + 44) + 1;
                *reinterpret_cast<void***>(r12_81 + 44) = r3_91;
                if (reinterpret_cast<int1_t>(r2_82 == 3)) {
                    r3_92 = reinterpret_cast<struct s67*>(reinterpret_cast<unsigned char>(r12_81) + (reinterpret_cast<unsigned char>(r3_91) << 4));
                    r3_92->f72 = r2_82;
                    r2_82 = *reinterpret_cast<void***>(r12_81) + 3;
                    r3_92->f64 = 1;
                    r3_92->f68 = r2_82;
                    r3_92->f76 = r0_79;
                }
                r3_83 = *reinterpret_cast<void***>(r12_81 + 44) + 1;
                *reinterpret_cast<void***>(r12_81 + 44) = r3_83;
                if (!reinterpret_cast<int1_t>(r3_83 == 8)) 
                    goto label_94; else 
                    goto addr_b710_95;
            }
        }
        addr_b738_59:
        r0_79 = reinterpret_cast<void**>(0);
        v70 = reinterpret_cast<void**>(0);
        addr_b740_96:
        r0_94 = fun_1054(r0_79, r1_74, r2_82, r3_83, v65, v70, v93);
        r3_95 = gbafc;
        lr96 = *r3_95;
        r8_97 = reinterpret_cast<void*>(0);
        r1_98 = lr96;
        r12_99 = reinterpret_cast<void*>(0);
        while (1) {
            r3_100 = *reinterpret_cast<void***>(r1_98 + 64);
            r12_99 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r12_99) + 1);
            if (r3_100) {
                r3_100 = *reinterpret_cast<void***>(r1_98 + 76) + 100;
                if (reinterpret_cast<unsigned char>(r3_100) >= reinterpret_cast<unsigned char>(r0_94)) {
                    r8_97 = reinterpret_cast<void*>(1);
                    r2_82 = *reinterpret_cast<void***>(r1_98 + 72) + 1;
                    less_or_equal101 = reinterpret_cast<signed char>(r2_82) <= reinterpret_cast<signed char>(11);
                    if (!less_or_equal101) {
                        r3_100 = reinterpret_cast<void**>(0);
                    }
                    if (less_or_equal101) {
                        r3_100 = reinterpret_cast<void**>(1);
                    }
                    *reinterpret_cast<void***>(r1_98 + 76) = r0_94;
                    *reinterpret_cast<void***>(r1_98 + 64) = r3_100;
                    *reinterpret_cast<void***>(r1_98 + 72) = r2_82;
                }
            }
            r1_98 = r1_98 + 16;
            if (reinterpret_cast<int1_t>(r12_99 == 8)) 
                break;
        }
        r4_102 = *reinterpret_cast<void***>(lr96);
        r0_104 = fun_1054(r0_94, r1_98, r2_82, r3_100, v65, v70, v103);
        r3_105 = gbafc;
        r1_106 = *r3_105;
        r3_107 = *reinterpret_cast<void***>(r1_106 + 0xc4) + 0x7d0;
        if (reinterpret_cast<unsigned char>(r3_107) >= reinterpret_cast<unsigned char>(r0_104)) {
            r3_108 = *reinterpret_cast<void***>(r1_106 + 48);
            z109 = r3_108 == 0;
            if (z109) {
                r3_108 = *reinterpret_cast<void***>(r1_106);
            }
            if (z109) {
                r2_82 = r3_108 + 3;
            }
            if (!z109) {
                r3_110 = *reinterpret_cast<void***>(r1_106 + 56);
                r2_82 = *reinterpret_cast<void***>(r1_106);
                z111 = r3_110 == 0;
                if (!z111) {
                    r3_110 = r2_82 + 3;
                }
                if (!z111) {
                    r3_110 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r2_82) + reinterpret_cast<unsigned char>(r3_110));
                }
                if (!z111) {
                    r3_110 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r3_110) + (reinterpret_cast<unsigned char>(r3_110) >> 31));
                }
                if (!z111) {
                    r2_82 = reinterpret_cast<void**>(reinterpret_cast<signed char>(r3_110) >> 1);
                }
            }
            less112 = reinterpret_cast<signed char>(r2_82) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(r1_106 + 4));
            if (less112) {
                ++r4_102;
            }
            if (!less112) {
                if (reinterpret_cast<signed char>(r2_82) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(r1_106 + 4))) {
                    --r4_102;
                }
            }
            r3_107 = *reinterpret_cast<void***>(r1_106);
            less_or_equal113 = reinterpret_cast<signed char>(r4_102) <= reinterpret_cast<signed char>(r3_107);
            if (r4_102 != r3_107) {
                less_or_equal113 = reinterpret_cast<signed char>(r4_102) <= reinterpret_cast<signed char>(1);
            }
            if (less_or_equal113) 
                goto label_133; else 
                goto addr_b81c_134;
        }
        addr_b830_135:
        r11_114 = 0;
        addr_b834_136:
        r0_116 = fun_1054(r0_104, r1_106, r2_82, r3_107, v65, v70, v115);
        r7_117 = 0;
        r5_118 = r0_116;
        r4_119 = 0;
        while (1) {
            r3_120 = gbafc;
            r1_121 = *r3_120;
            r2_122 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1_121) + (r4_119 << 4));
            if (*reinterpret_cast<void***>(r2_122 + 8)) {
                r0_123 = *reinterpret_cast<void***>(r2_122 + 12);
                if (*reinterpret_cast<void***>(r2_122 + 16)) {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(r2_122 + 16) == 1)) 
                        goto label_142; else 
                        goto addr_b88c_143;
                } else {
                    r2_122 = *reinterpret_cast<void***>(r1_121);
                    r3_124 = r2_122 - 1;
                    less125 = reinterpret_cast<signed char>(r0_123) < reinterpret_cast<signed char>(r3_124);
                    if (!less125) {
                        r3_124 = r2_122 + 4;
                    }
                    if (!less125) 
                        goto label_147; else 
                        goto addr_b880_148;
                }
            }
            addr_b958_149:
            ++r4_119;
            if (r4_119 == 2) 
                break;
            continue;
            label_142:
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(r2_122 + 16) == 2)) 
                goto addr_b8bc_152;
            goto addr_b958_149;
            addr_b8bc_152:
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r1_121 + 48) - 2) <= reinterpret_cast<unsigned char>(1)) {
                if (r0_123 == *reinterpret_cast<void***>(r1_121)) {
                    r0_123 = reinterpret_cast<void**>(0);
                    *reinterpret_cast<void***>(r2_122 + 8) = reinterpret_cast<void**>(0);
                    r3_126 = *reinterpret_cast<void***>(r1_121 + 52) - 1;
                    less_or_equal127 = reinterpret_cast<signed char>(r3_126) <= reinterpret_cast<signed char>(0);
                    *reinterpret_cast<void***>(r1_121 + 52) = r3_126;
                    if (!less_or_equal127) {
                        r3_126 = reinterpret_cast<void**>(1);
                    }
                    *reinterpret_cast<void***>(r1_121 + 0xc0) = r5_118;
                    if (!less_or_equal127) {
                        *reinterpret_cast<void***>(r1_121 + 48) = r3_126;
                    }
                    if (less_or_equal127) {
                        *reinterpret_cast<void***>(r1_121 + 48) = reinterpret_cast<void**>(0);
                    }
                    goto addr_b950_164;
                }
            }
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r1_121 + 56) - 2) > reinterpret_cast<unsigned char>(1)) {
                goto addr_b958_149;
            } else {
                if (r0_123 != *reinterpret_cast<void***>(r1_121) + 3) {
                    goto addr_b958_149;
                } else {
                    r2_128 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1_121) + (r4_119 << 4));
                    *reinterpret_cast<void***>(r2_128 + 8) = reinterpret_cast<void**>(0);
                    r3_129 = *reinterpret_cast<void***>(r1_121 + 60) - 1;
                    less_or_equal130 = reinterpret_cast<signed char>(r3_129) <= reinterpret_cast<signed char>(0);
                    if (less_or_equal130) {
                        r2_128 = reinterpret_cast<void**>(0);
                    }
                    if (!less_or_equal130) {
                        r2_128 = reinterpret_cast<void**>(1);
                    }
                    *reinterpret_cast<void***>(r1_121 + 56) = r2_128;
                    *reinterpret_cast<void***>(r1_121 + 0xc0) = r5_118;
                    *reinterpret_cast<void***>(r1_121 + 60) = r3_129;
                }
            }
            addr_b950_164:
            fun_b178(r0_123);
            r7_117 = 1;
            goto addr_b958_149;
            addr_b88c_143:
            if (reinterpret_cast<signed char>(r0_123) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(r1_121))) {
                goto addr_b958_149;
            } else {
                r3_124 = *reinterpret_cast<void***>(r1_121) + 3;
            }
            addr_b89c_176:
            less_or_equal131 = reinterpret_cast<signed char>(r0_123) <= reinterpret_cast<signed char>(r3_124);
            if (less_or_equal131) {
                r2_122 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1_121) + (r4_119 << 4));
            }
            if (less_or_equal131) {
                r3_124 = reinterpret_cast<void**>(0);
            }
            if (less_or_equal131) {
                r7_117 = 1;
            }
            if (less_or_equal131) {
                *reinterpret_cast<void***>(r2_122 + 8) = r3_124;
            }
            goto addr_b958_149;
            label_147:
            goto addr_b89c_176;
            addr_b880_148:
            goto addr_b958_149;
        }
        r3_132 = gbafc;
        r2_133 = *r3_132;
        r6_134 = 0;
        r4_135 = r2_133;
        lr136 = r2_133;
        while (1) {
            ++r6_134;
            if (*reinterpret_cast<void***>(r2_133 + 64)) {
                r3_137 = *reinterpret_cast<void***>(r4_135 + 4);
                r0_138 = *reinterpret_cast<void***>(r2_133 + 72);
                r5_139 = r3_137 + 1;
                r12_140 = r3_137 - 1;
                z141 = *reinterpret_cast<void***>(r2_133 + 68) == r3_137;
                if (!z141) {
                    r3_137 = reinterpret_cast<void**>(0);
                }
                if (z141) {
                    r3_137 = reinterpret_cast<void**>(1);
                }
                if (reinterpret_cast<signed char>(r0_138) <= reinterpret_cast<signed char>(8)) {
                    r3_137 = reinterpret_cast<void**>(0);
                }
                if (r3_137) 
                    goto label_195;
                less_or_equal142 = reinterpret_cast<signed char>(r0_138) <= reinterpret_cast<signed char>(9);
                if (less_or_equal142) {
                    r0_138 = reinterpret_cast<void**>(0);
                }
                if (!less_or_equal142) {
                    r0_138 = reinterpret_cast<void**>(1);
                }
                z143 = *reinterpret_cast<void***>(r2_133 + 68) == r12_140;
                if (!z143) {
                    r3_137 = reinterpret_cast<void**>(0);
                }
                if (z143) {
                    r3_137 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0_138) & 1);
                }
                if (r3_137) 
                    goto label_205;
                z144 = *reinterpret_cast<void***>(r2_133 + 68) == r5_139;
                if (!z144) {
                    r3_137 = reinterpret_cast<void**>(0);
                }
                if (z144) {
                    r3_137 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0_138) & 1);
                }
                if (r3_137) 
                    goto addr_b9ec_211;
            }
            lr136 = lr136 + 16;
            r2_133 = r2_133 + 16;
            if (r6_134 == 8) 
                break;
        }
        r1_57 = reinterpret_cast<void**>(0);
        addr_ba20_216:
        r2_52 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v70) | r9_76 | r11_114 | reinterpret_cast<unsigned char>(r1_57));
        r3_145 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v65) | reinterpret_cast<uint32_t>(r8_97) | r7_117 | reinterpret_cast<unsigned char>(r2_52));
        if (r3_145) {
            fun_b1d8(v65, r1_57, r2_52);
        }
        fun_eb7c(10, r1_57, r2_52, r3_145, v65, v70, v146);
        continue;
        label_195:
        addr_b9ec_211:
        *reinterpret_cast<void***>(lr136 + 64) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(r4_135 + 40) = *reinterpret_cast<void***>(r4_135 + 40) - 5;
        fun_b160();
        r1_57 = reinterpret_cast<void**>(1);
        goto addr_ba20_216;
        label_205:
        goto addr_b9ec_211;
        label_133:
        goto addr_b830_135;
        addr_b81c_134:
        less_or_equal147 = reinterpret_cast<signed char>(r4_102) <= reinterpret_cast<signed char>(6);
        if (less_or_equal147) {
            r11_114 = 1;
        }
        if (less_or_equal147) {
            *reinterpret_cast<void***>(r1_106 + 0xc4) = r0_104;
        }
        if (less_or_equal147) {
            *reinterpret_cast<void***>(r1_106) = r4_102;
        }
        if (!less_or_equal147) 
            goto addr_b830_135;
        goto addr_b834_136;
        label_94:
        addr_ba98_226:
        r1_74 = reinterpret_cast<void**>(1);
        v70 = reinterpret_cast<void**>(1);
        *reinterpret_cast<void***>(r12_81 + 0xc0) = r0_79;
        goto addr_b740_96;
        addr_b710_95:
        r3_148 = *reinterpret_cast<void***>(r12_81 + 48);
        z149 = r3_148 == 0;
        if (!z149) {
            r3_148 = reinterpret_cast<void**>(1);
        }
        if (!z149) {
            *reinterpret_cast<void***>(r12_81 + 48) = r3_148;
        }
        r3_83 = *reinterpret_cast<void***>(r12_81 + 56);
        if (r3_83) 
            goto addr_b72c_231;
        goto addr_ba98_226;
        addr_b72c_231:
        r3_83 = reinterpret_cast<void**>(1);
        addr_b730_233:
        *reinterpret_cast<void***>(r12_81 + 56) = r3_83;
        goto addr_ba98_226;
        label_81:
        ++r3_87;
        addr_b664_82:
        if (z88) {
            *reinterpret_cast<void***>(r12_81 + 48) = r3_87;
        }
        r3_83 = *reinterpret_cast<void***>(r12_81 + 56);
        z150 = reinterpret_cast<int1_t>(r3_83 == 2);
        if (z150) {
            ++r3_83;
        }
        if (z150) {
            goto addr_b730_233;
        } else {
            goto addr_ba98_226;
        }
        label_67:
        goto addr_b730_233;
        addr_b604_68:
        goto addr_ba98_226;
        label_39:
        addr_b4f0_240:
        r2_52 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r2_52) + (reinterpret_cast<unsigned char>(r0_61) << 4));
        *reinterpret_cast<void***>(r2_52 + 12) = *reinterpret_cast<void***>(r2_52 + 4);
        r1_57 = reinterpret_cast<void**>(1);
        *reinterpret_cast<void***>(r2_52 + 16) = reinterpret_cast<void**>(9);
        r3_63 = reinterpret_cast<void**>(0);
        v65 = reinterpret_cast<void**>(1);
        *reinterpret_cast<void***>(r2_52 + 20) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(r2_52 + 8) = reinterpret_cast<void**>(1);
        goto addr_b524_42;
        addr_b4e0_40:
        if (*reinterpret_cast<void***>(r2_52 + 24)) {
            goto addr_b51c_41;
        } else {
            r0_61 = reinterpret_cast<void**>(1);
            goto addr_b4f0_240;
        }
        addr_b4b0_33:
        *reinterpret_cast<void***>(r2_52 + 4) = r3_63;
        goto addr_b524_42;
        label_27:
        goto addr_b4b0_33;
    }
    addr_baa8_244:
    fun_6f70(5, 0, r2_52, r3_59, v65);
    fun_6f70(7, 0, r2_52, r3_59, v65);
    fun_6f70(6, 0, r2_52, r3_59, v65);
    fun_c504(0, 12, r2_52);
    fun_c4a0(0, 12, r2_52);
    r0_151 = r10_10->f0;
    less_or_equal152 = reinterpret_cast<signed char>(r0_151) <= reinterpret_cast<signed char>(0);
    if (less_or_equal152) {
        r0_151 = reinterpret_cast<void**>(0);
    }
    if (!less_or_equal152) {
        r0_151 = reinterpret_cast<void**>(1);
    }
    return r0_151;
    addr_ba60_11:
    goto r10_10->f12;
    addr_ba94_16:
    goto addr_baa8_244;
}

void fun_ba6c(int32_t r0) {
    if (!r0) 
        goto "???";
    goto 0xbaa8;
}

void fun_bafc(int32_t r0, int32_t r1) {
    int1_t n3;
    int1_t z4;

    if (n3) {
    }
    if (!z4) 
        goto "???";
}

struct s68 {
    signed char[16] pad16;
    void** f16;
};

int32_t* gbe58 = reinterpret_cast<int32_t*>(0x40000774);

void fun_bc80(int32_t r0) {
    int1_t z2;
    int1_t z3;
    int1_t z4;
    int1_t z5;
    void** r2_6;
    void* r1_7;
    struct s68* r12_8;
    void** r3_9;
    int32_t r4_10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** r0_42;
    int1_t z43;
    int32_t r5_44;
    int32_t* r2_45;

    if (z2) {
    }
    if (z3) {
    }
    if (z4) {
    }
    if (z5) {
    }
    while (1) {
        r2_6 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(r1_7) + reinterpret_cast<int32_t>(r12_8))));
        r3_9 = reinterpret_cast<void**>(&r12_8->f16);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(r1_7) + reinterpret_cast<unsigned char>(r3_9)) = static_cast<signed char>(reinterpret_cast<uint32_t>(r2_6));
        r1_7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(r1_7) + 1);
        if (reinterpret_cast<int1_t>(r1_7 == 16)) {
            --r0;
            r12_8 = reinterpret_cast<struct s68*>(reinterpret_cast<int32_t>(r12_8) - 16);
            if (!r0) 
                break;
            r1_7 = reinterpret_cast<void*>(0);
        }
    }
    r4_10 = r0;
    while (1) {
        r0_42 = fun_5eb8(0, 20, r2_6, r3_9, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41);
        z43 = r0_42 == 0;
        if (z43) {
            r3_9 = reinterpret_cast<void**>(1);
        }
        if (!z43) {
            r3_9 = reinterpret_cast<void**>(0);
        }
        *reinterpret_cast<signed char*>(r4_10 + r5_44) = static_cast<signed char>(reinterpret_cast<uint32_t>(r3_9));
        ++r4_10;
        if (r4_10 == 16) 
            break;
    }
    r2_45 = gbe58;
    *r2_45 = *r2_45 - 1;
}

void*** gc470 = reinterpret_cast<void***>(0x40000490);

void** gc474 = reinterpret_cast<void**>(0x8c);

void** gc478 = reinterpret_cast<void**>(0x90);

void** gc47c = reinterpret_cast<void**>(0x94);

void** gc480 = reinterpret_cast<void**>(0x7c);

void** gc484 = reinterpret_cast<void**>(0x98);

void** gc48c = reinterpret_cast<void**>(0x9c);

void** gc490 = reinterpret_cast<void**>(0x84);

void** gc494 = reinterpret_cast<void**>(0x88);

void** gc488 = reinterpret_cast<void**>(0x80);

void** gc49c = reinterpret_cast<void**>(24);

void** gc498 = reinterpret_cast<void**>(0xfc);

int32_t fun_c110(void** r0, void** r1, void** r2, void** r3, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32) {
    void** v33;
    void** r4_34;
    void** v35;
    void** r5_36;
    void** v37;
    void** r0_38;
    void*** r3_39;
    void** r2_40;
    void** r3_41;
    void** r5_42;
    void** r1_43;
    void** r4_44;
    void** r3_45;
    void** r3_46;
    void** r0_47;
    int1_t z48;
    void** r3_49;
    void** r0_50;
    void*** r3_51;
    void** r2_52;
    void** r3_53;
    void** r3_54;
    void** r12_55;
    void* r1_56;
    void** r0_57;
    void** r1_58;
    void** r2_59;
    void** r3_60;
    void** r3_61;
    void** r3_62;
    void** r3_63;
    void** r3_64;
    int1_t less65;
    void** r3_66;
    void** r3_67;
    void** r4_68;
    void** r3_69;
    void** r2_70;
    int1_t less71;
    void** r0_72;
    void** r4_73;
    void** r3_74;
    void** r1_75;
    void** r0_76;
    void** r3_77;
    int1_t less_or_equal78;
    void** r3_79;
    void** r3_80;
    void** r0_81;
    void** r0_82;
    void** r0_83;
    void** r0_84;

    v33 = r4_34;
    v35 = r5_36;
    v37 = reinterpret_cast<void**>(__return_address());
    fun_6388(r0, r1, r2, r3);
    fun_c504(0, 12, r2);
    r0_38 = fun_c4a0(0, 12, r2);
    fun_6334(r0_38, 12, r2, r3);
    r3_39 = gc470;
    r2_40 = reinterpret_cast<void**>(-2 * reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r0 + 8)) + 0x1f4);
    *r3_39 = r2_40;
    r3_41 = gc474;
    r5_42 = gc478;
    *reinterpret_cast<void***>(r3_41) = reinterpret_cast<void**>(12);
    *reinterpret_cast<void***>(r5_42) = reinterpret_cast<void**>(12);
    fun_c504(12, 12, r2_40);
    fun_c4a0(*reinterpret_cast<void***>(r5_42), 12, r2_40);
    fun_6f70(5, 1, r2_40, r3_41, v33);
    r1_43 = reinterpret_cast<void**>(1);
    fun_6f70(7, 1, r2_40, r3_41, v33);
    while (r4_44 = gc474, r3_45 = *reinterpret_cast<void***>(r4_44), reinterpret_cast<signed char>(r3_45) > reinterpret_cast<signed char>(0)) {
        r3_46 = gc478;
        r3_45 = *reinterpret_cast<void***>(r3_46);
        if (reinterpret_cast<signed char>(r3_45) <= reinterpret_cast<signed char>(0)) 
            goto addr_c40c_4;
        r0_47 = fun_6e8c(3, r1_43, r2_40);
        z48 = r0_47 == 0;
        if (!z48) {
            r3_45 = gc47c;
        }
        if (!z48) {
            r3_45 = *reinterpret_cast<void***>(r3_45);
        }
        if (!z48) {
            r2_40 = r3_45 + 1;
        }
        if (z48) {
            r0_47 = fun_6e8c(9, r1_43, r2_40);
            if (!r0_47) {
                goto addr_c1ec_16;
            } else {
                r3_49 = gc47c;
                r2_40 = *reinterpret_cast<void***>(r3_49) - 1;
            }
        }
        r1_43 = gc47c;
        r3_45 = *reinterpret_cast<void***>(r1_43);
        if (r2_40 != r3_45) {
            r3_45 = r2_40 - 1;
            if (reinterpret_cast<unsigned char>(r3_45) <= reinterpret_cast<unsigned char>(9)) {
                *reinterpret_cast<void***>(r1_43) = r2_40;
            }
        }
        addr_c1ec_16:
        r0_50 = fun_1054(r0_47, r1_43, r2_40, r3_45, v33, v35, v37);
        r3_51 = gc470;
        r2_52 = *r3_51;
        r3_53 = gc480;
        r3_54 = *reinterpret_cast<void***>(r3_53);
        r12_55 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r2_52) + reinterpret_cast<unsigned char>(r3_54));
        if (reinterpret_cast<unsigned char>(r12_55) >= reinterpret_cast<unsigned char>(r0_50)) {
            r1_56 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r12_55) + reinterpret_cast<unsigned char>(r2_52));
            while (r1_56 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r1_56) + reinterpret_cast<unsigned char>(r2_52)), r12_55 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r12_55) + reinterpret_cast<unsigned char>(r2_52)), reinterpret_cast<unsigned char>(reinterpret_cast<uint32_t>(r1_56) - reinterpret_cast<unsigned char>(r2_52)) >= reinterpret_cast<unsigned char>(r0_50)) {
            }
            r0_50 = gc484;
            r1_43 = *reinterpret_cast<void***>(r0_50);
            r3_54 = gc480;
            r2_52 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r12_55) - reinterpret_cast<unsigned char>(r2_52));
            *reinterpret_cast<void***>(r3_54) = r2_52;
            if (r1_43) 
                goto label_27; else 
                goto addr_c240_28;
        }
        addr_c284_29:
        r0_57 = fun_1054(r0_50, r1_43, r2_52, r3_54, v33, v35, v37);
        r1_58 = gc48c;
        r2_59 = *reinterpret_cast<void***>(r1_58);
        r3_60 = gc490;
        if (!reinterpret_cast<int1_t>(r2_59 == -1)) {
            r3_61 = *reinterpret_cast<void***>(r3_60) + 100;
            if (reinterpret_cast<unsigned char>(r3_61) < reinterpret_cast<unsigned char>(r0_57)) 
                goto addr_c2c4_32;
        } else {
            r3_61 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(r3_60) + 0xbb0) + 8);
            if (reinterpret_cast<unsigned char>(r3_61) >= reinterpret_cast<unsigned char>(r0_57)) {
                r3_62 = gc47c;
                r2_59 = *reinterpret_cast<void***>(r3_62);
                *reinterpret_cast<void***>(r1_58) = reinterpret_cast<void**>(8);
                r3_63 = gc494;
                *reinterpret_cast<void***>(r3_63) = r2_59;
                goto addr_c33c_36;
            } else {
                goto addr_c344_38;
            }
        }
        r3_64 = r2_59 - 1;
        less65 = reinterpret_cast<signed char>(r3_64) < reinterpret_cast<signed char>(0);
        *reinterpret_cast<void***>(r1_58) = r3_64;
        if (!less65) 
            goto addr_c2f4_41;
        r3_64 = gc478;
        addr_c2f4_41:
        if (!less65) {
            if (!reinterpret_cast<int1_t>(r3_64 == 3)) {
                goto addr_c33c_36;
            } else {
                r3_66 = gc494;
                r2_59 = *reinterpret_cast<void***>(r3_66);
                r3_67 = gc488;
                if (reinterpret_cast<signed char>(r2_59) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(r3_67))) {
                    goto addr_c324_48;
                }
                if (reinterpret_cast<signed char>(r2_59) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(r3_67) + 2)) {
                    goto addr_c33c_36;
                } else {
                    addr_c324_48:
                    r3_64 = gc474;
                }
            }
        }
        r2_59 = *reinterpret_cast<void***>(r3_64) - 2;
        *reinterpret_cast<void***>(r3_64) = r2_59;
        *reinterpret_cast<void***>(r1_58) = reinterpret_cast<void**>(0xffffffff);
        addr_c33c_36:
        r3_61 = gc490;
        *reinterpret_cast<void***>(r3_61) = r0_57;
        addr_c344_38:
        fun_6388(r0_57, r1_58, r2_59, r3_61);
        r4_68 = reinterpret_cast<void**>(1);
        while (1) {
            r3_69 = gc488;
            r2_70 = reinterpret_cast<void**>(1);
            if (reinterpret_cast<signed char>(r4_68) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(r3_69))) {
                less71 = reinterpret_cast<signed char>(r4_68) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(r3_69) + 3);
                if (less71) {
                    r2_70 = reinterpret_cast<void**>(0);
                }
                if (!less71) {
                    r2_70 = reinterpret_cast<void**>(1);
                }
            }
            r0_72 = r4_68;
            ++r4_68;
            fun_c108(r0_72, 3, r2_70);
            if (reinterpret_cast<int1_t>(r4_68 == 11)) 
                break;
        }
        r4_73 = reinterpret_cast<void**>(9);
        while (r3_74 = gc47c, r1_75 = r4_73, ++r4_73, r2_40 = reinterpret_cast<void**>(1), r0_76 = fun_c108(*reinterpret_cast<void***>(r3_74), r1_75, 1), !reinterpret_cast<int1_t>(r4_73 == 12)) {
        }
        r3_77 = gc48c;
        less_or_equal78 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(r3_77)) <= reinterpret_cast<signed char>(-1);
        if (!less_or_equal78) {
            r3_77 = gc494;
        }
        if (!less_or_equal78) {
            r2_40 = reinterpret_cast<void**>(1);
        }
        if (!less_or_equal78) {
            r0_76 = *reinterpret_cast<void***>(r3_77);
        }
        if (!less_or_equal78) {
            r0_76 = fun_c108(r0_76, *reinterpret_cast<void***>(r3_77), 1);
        }
        fun_6364(r0_76, *reinterpret_cast<void***>(r3_77), 1, r3_77);
        r3_79 = gc474;
        fun_c504(*reinterpret_cast<void***>(r3_79), r4_73, 1);
        r3_80 = gc478;
        r1_43 = r4_73;
        fun_c4a0(*reinterpret_cast<void***>(r3_80), r1_43, 1);
        continue;
        addr_c2c4_32:
        goto addr_c344_38;
        label_27:
        if (reinterpret_cast<int1_t>(r1_43 == 1)) 
            goto addr_c264_73;
        goto addr_c284_29;
        addr_c264_73:
        r2_52 = gc488;
        r3_54 = *reinterpret_cast<void***>(r2_52) + 1;
        *reinterpret_cast<void***>(r2_52) = r3_54;
        if (!reinterpret_cast<int1_t>(r3_54 == 8)) {
            goto addr_c284_29;
        } else {
            r3_54 = reinterpret_cast<void**>(0);
        }
        addr_c280_77:
        *reinterpret_cast<void***>(r0_50) = r3_54;
        goto addr_c284_29;
        addr_c240_28:
        r2_52 = gc488;
        r3_54 = *reinterpret_cast<void***>(r2_52) - 1;
        *reinterpret_cast<void***>(r2_52) = r3_54;
        if (!reinterpret_cast<int1_t>(r3_54 == 1)) {
            goto addr_c284_29;
        } else {
            goto addr_c280_77;
        }
    }
    addr_c40c_4:
    fun_6f70(5, 0, r2_40, r3_45, v33);
    r0_81 = fun_6f70(7, 0, r2_40, r3_45, v33);
    fun_6388(r0_81, 0, r2_40, r3_45);
    fun_c504(0, 12, r2_40);
    r0_82 = fun_c4a0(0, 12, r2_40);
    fun_6334(r0_82, 12, r2_40, r3_45);
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r4_44)) <= reinterpret_cast<signed char>(0)) {
        r0_83 = gc49c;
        fun_6208(r0_83, 12, r2_40, *reinterpret_cast<void***>(r4_44), v33, v35, v37, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32);
        return 0;
    } else {
        r0_84 = gc498;
        fun_6208(r0_84, 12, r2_40, *reinterpret_cast<void***>(r4_44), v33, v35, v37, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32);
        return 1;
    }
}

void fun_c4fc(int32_t r0) {
    int1_t n2;
    int1_t n3;

    if (n2) {
    }
    if (!n3) 
        goto "???";
}

void fun_c560(int32_t r0) {
    int1_t n2;
    int1_t n3;

    if (n2) {
    }
    if (!n3) 
        goto "???";
}

void** gd12c = reinterpret_cast<void**>(0xd8);

void fun_ccf0(int32_t r0);

void fun_cf04(int32_t r0);

void** gd128 = reinterpret_cast<void**>(0xa8);

void** gd130 = reinterpret_cast<void**>(0xb8);

void** gd134 = reinterpret_cast<void**>(0xb0);

void*** gd138 = reinterpret_cast<void***>(0x40000794);

void** gd13c = reinterpret_cast<void**>(0x90);

uint32_t fun_c9b0(void*** r0) {
    int1_t n2;
    int1_t n3;
    uint32_t r8_4;
    void*** sp5;
    void*** r9_6;
    void** r2_7;
    void** r3_8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** r0_40;
    void** r6_41;
    void** r7_42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** r4_71;
    void** r5_72;
    void** r2_73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** r0_80;
    void** r2_81;
    void** r3_82;
    void** v83;
    void** v84;
    void** v85;
    void** r8_86;
    void** r5_87;
    void** r7_88;
    void** r4_89;
    void** v90;
    void** v91;
    void** v92;
    int1_t z93;
    void** r1_94;
    void** r0_95;
    int1_t z96;
    void** r4_97;
    void** r1_98;
    int1_t z99;
    void** r0_100;
    uint32_t r3_101;
    void** r4_102;
    int1_t z103;
    int1_t z104;
    void** r4_105;
    int1_t z106;
    void** r0_107;
    int32_t r10_108;
    void** r0_109;
    void** r5_110;
    void** r0_111;
    void** r4_112;
    void** r0_113;
    int1_t z114;
    int1_t z115;
    void** r0_116;
    uint32_t r3_117;
    void** r2_118;
    void** r1_119;
    void** r3_120;
    void** r0_121;
    void*** r3_122;
    void** r0_123;
    uint32_t r7_124;
    void*** r3_125;
    void** r2_126;
    void** r3_127;
    int1_t less_or_equal128;
    void** r1_129;
    void** r0_130;
    void** r3_131;
    int1_t less_or_equal132;
    void** r0_133;
    void** r3_134;
    void** r0_135;
    void** r3_136;
    int1_t less_or_equal137;
    void** r0_138;
    void** r3_139;
    void** r4_140;
    void** r5_141;
    void** r1_142;
    void** r2_143;
    void** r0_144;
    void** r6_145;
    void** r0_146;
    int1_t z147;

    if (n2) {
    }
    if (n3) {
        r0 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(r0) & r8_4 >> 15);
    }
    sp5 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 36 - 0x10c);
    r9_6 = r0;
    r0_40 = fun_5eb8(1, 22, r2_7, r3_8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39);
    r6_41 = r0_40;
    r7_42 = reinterpret_cast<void**>(0);
    v43 = reinterpret_cast<void**>(0);
    v44 = reinterpret_cast<void**>(0);
    v45 = reinterpret_cast<void**>(0);
    v46 = reinterpret_cast<void**>(0);
    v47 = reinterpret_cast<void**>(0);
    v48 = reinterpret_cast<void**>(0);
    v49 = reinterpret_cast<void**>(0);
    v50 = reinterpret_cast<void**>(0);
    v51 = reinterpret_cast<void**>(0);
    v52 = reinterpret_cast<void**>(0);
    v53 = reinterpret_cast<void**>(0);
    v54 = reinterpret_cast<void**>(0);
    v55 = reinterpret_cast<void**>(0);
    v56 = reinterpret_cast<void**>(0);
    v57 = reinterpret_cast<void**>(0);
    v58 = reinterpret_cast<void**>(0);
    v59 = reinterpret_cast<void**>(0);
    v60 = reinterpret_cast<void**>(0);
    v61 = reinterpret_cast<void**>(0);
    v62 = reinterpret_cast<void**>(0);
    v63 = reinterpret_cast<void**>(0);
    v64 = reinterpret_cast<void**>(0);
    v65 = reinterpret_cast<void**>(0);
    v66 = reinterpret_cast<void**>(0);
    v67 = reinterpret_cast<void**>(0);
    v68 = reinterpret_cast<void**>(0);
    v69 = reinterpret_cast<void**>(0);
    v70 = reinterpret_cast<void**>(0);
    __asm__("stmib sp, {r0, r1}");
    __asm__("stm r2, {r3, r6}");
    while (1) {
        r4_71 = reinterpret_cast<void**>(0);
        while (r5_72 = reinterpret_cast<void**>(sp5 + 0x7c), r2_73 = r4_71, ++r4_71, fun_c568(r5_72, r7_42, r2_73, 1, v74, v75, v76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0), !reinterpret_cast<int1_t>(r4_71 == 24)) {
        }
        ++r7_42;
        if (reinterpret_cast<int1_t>(r7_42 == 24)) 
            break;
    }
    fun_c568(r5_72, 0, r6_41, 0, v77, v78, v79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    r0_80 = r5_72;
    r2_81 = r6_41;
    r3_82 = reinterpret_cast<void**>(0);
    fun_c568(r0_80, 1, r2_81, 0, v83, v84, v85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    r8_86 = reinterpret_cast<void**>(1);
    r5_87 = r6_41 - 1;
    r7_88 = reinterpret_cast<void**>(0);
    while (1) {
        if (reinterpret_cast<signed char>(r8_86) > reinterpret_cast<signed char>(1)) {
            r4_89 = r6_41 + 1;
            v62 = r4_89;
            v59 = r8_86 - 2;
            v61 = r7_88;
            v60 = r5_87;
            r2_81 = v61;
            r3_82 = v62;
            v90 = reinterpret_cast<void**>(sp5 + 0x7c);
            r0_80 = fun_c688(v59, v60, r2_81, r3_82, v90, v91, v92, v69, v70, v67, v68, v65, v66, v63, v64, v61, v62, v59, v60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            z93 = r0_80 == 0;
            if (!z93) {
                r4_89 = reinterpret_cast<void**>(1);
            }
            if (!z93) 
                goto label_17;
        }
        r4_89 = reinterpret_cast<void**>(0);
        addr_cb18_19:
        if (r8_86 == 22) {
            goto addr_cb68_21;
        }
        if (reinterpret_cast<signed char>(r8_86) <= reinterpret_cast<signed char>(21)) {
            v65 = r8_86 + 2;
            v63 = r8_86 + 1;
            v64 = r5_87;
            v66 = r6_41 + 1;
            r2_81 = v65;
            r3_82 = v66;
            v90 = reinterpret_cast<void**>(sp5 + 0x7c);
            r0_80 = fun_c688(v63, v64, r2_81, r3_82, v90, v91, v92, v69, v70, v67, v68, v65, v66, v63, v64, v61, v62, v59, v60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            if (r0_80) {
                addr_cb68_21:
                r4_89 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r4_89) | 2);
            }
        }
        if (reinterpret_cast<signed char>(r6_41) > reinterpret_cast<signed char>(1)) {
            v69 = r8_86 + 1;
            v68 = r6_41 - 2;
            v67 = r7_88;
            v70 = r5_87;
            r2_81 = v69;
            r3_82 = v70;
            v90 = reinterpret_cast<void**>(sp5 + 0x7c);
            r0_80 = fun_c688(v67, v68, r2_81, r3_82, v90, v91, v92, v69, v70, v67, v68, v65, v66, v63, v64, v61, v62, v59, v60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            if (r0_80) {
                r4_89 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r4_89) | 4);
            }
        }
        if (reinterpret_cast<signed char>(r6_41) <= reinterpret_cast<signed char>(21)) {
            r1_94 = r6_41 + 1;
            v91 = r7_88;
            v92 = r1_94;
            __asm__("ldmib sp, {r0, r1}");
            r2_81 = r8_86 + 1;
            r3_82 = r6_41 + 2;
            v90 = reinterpret_cast<void**>(sp5 + 0x7c);
            r0_95 = fun_c688(r0_80, r1_94, r2_81, r3_82, v90, v91, v92, v69, v70, v67, v68, v65, v66, v63, v64, v61, v62, v59, v60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            z96 = r0_95 == 0;
            if (!z96) {
                r4_89 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r4_89) | 8);
            }
            if (!z96) 
                goto label_35;
        }
        if (!r4_89) {
            r4_97 = reinterpret_cast<void**>(sp5 + 0x7c);
            r1_98 = r8_86;
            r2_81 = r6_41;
            r3_82 = reinterpret_cast<void**>(2);
            fun_c568(r4_97, r1_98, r2_81, 2, v90, v91, v92, v69, v70, v67, v68, v65, v66, v63, v64, v61, v62, v59, v60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            if (reinterpret_cast<signed char>(r8_86) <= reinterpret_cast<signed char>(0)) {
                goto addr_cc38_40;
            } else {
                r1_98 = r7_88;
                r2_81 = r6_41;
                r0_80 = fun_c60c(r4_97, r1_98, r2_81, 2, v90, v91, v92, v69, v70, v67, v68, v65, v66, v63, v64, v61, v62, v59, v60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
                z99 = r0_80 == 0;
                if (z99) {
                    r8_86 = r7_88;
                }
                if (z99) {
                    r7_88 = r8_86 - 1;
                }
                if (z99) 
                    goto label_46; else 
                    goto addr_cc38_40;
            }
        }
        addr_ccc4_47:
        while (r0_100 = fun_5eb8(0, 3, r2_81, r3_82, v90, v91, v92, v69, v70, v67, v68, v65, v66, v63, v64, v61, v62, v59, v60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0), r3_82 = r4_89, (reinterpret_cast<unsigned char>(r3_82) & 1) == 0) {
        }
        r3_101 = reinterpret_cast<uint32_t>(~(-1 << reinterpret_cast<unsigned char>(r0_100)));
        if (r3_101 <= 7) 
            break;
        r0_80 = reinterpret_cast<void**>(sp5 + 0x7c);
        r2_81 = r6_41;
        r3_82 = reinterpret_cast<void**>(0);
        fun_c568(r0_80, r8_86, r2_81, 0, v90, v91, v92, v69, v70, v67, v68, v65, v66, v63, v64, v61, v62, v59, v60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        addr_cd50_52:
        if (reinterpret_cast<signed char>(r8_86) > reinterpret_cast<signed char>(22)) 
            goto addr_cd58_53;
        continue;
        addr_cc38_40:
        if (reinterpret_cast<signed char>(r8_86) <= reinterpret_cast<signed char>(22)) {
            r4_102 = r8_86 + 1;
            r1_98 = r4_102;
            r2_81 = r6_41;
            r0_80 = fun_c60c(sp5 + 0x7c, r1_98, r2_81, 2, v90, v91, v92, v69, v70, v67, v68, v65, v66, v63, v64, v61, v62, v59, v60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            z103 = r0_80 == 0;
            if (z103) {
                r8_86 = r4_102;
            }
            if (z103) {
                ++r7_88;
            }
            if (z103) 
                goto label_61;
        }
        if (reinterpret_cast<signed char>(r6_41) > reinterpret_cast<signed char>(0)) {
            r2_81 = r5_87;
            r1_98 = r8_86;
            r0_80 = fun_c60c(sp5 + 0x7c, r1_98, r2_81, 2, v90, v91, v92, v69, v70, v67, v68, v65, v66, v63, v64, v61, v62, v59, v60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            z104 = r0_80 == 0;
            if (z104) {
                r6_41 = r5_87;
            }
            if (z104) {
                r5_87 = r6_41 - 1;
            }
            if (z104) 
                goto label_69;
        }
        if (reinterpret_cast<signed char>(r6_41) <= reinterpret_cast<signed char>(22)) {
            r4_105 = r6_41 + 1;
            r1_98 = r8_86;
            r2_81 = r4_105;
            r0_80 = fun_c60c(sp5 + 0x7c, r1_98, r2_81, 2, v90, v91, v92, v69, v70, v67, v68, v65, v66, v63, v64, v61, v62, v59, v60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            z106 = r0_80 == 0;
            if (z106) {
                r6_41 = r4_105;
            }
            if (z106) {
                ++r5_87;
            }
            if (z106) 
                goto label_77;
        }
        r0_107 = gd12c;
        r0_80 = fun_6208(r0_107, r1_98, r2_81, 2, v90, v91, v92, v69, v70, v67, v68, v65, v66, v63, v64, v61, v62, v59, v60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        goto addr_cd50_52;
        label_77:
        goto addr_cd50_52;
        label_69:
        goto addr_cd50_52;
        label_61:
        goto addr_cd50_52;
        label_46:
        goto addr_cd50_52;
        label_35:
        goto addr_ccc4_47;
        label_17:
        goto addr_cb18_19;
    }
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(fun_ccf0) + r3_101 << 2);
    addr_cd58_53:
    r10_108 = 0;
    while (1) {
        r0_109 = fun_5eb8(1, 22, r2_81, r3_82, v90, v91, v92, v69, v70, v67, v68, v65, v66, v63, v64, v61, v62, v59, v60, v57, v58, v55, v56, v53, v54, v51, v52, v49, v50, v47, v48, v45, v46, v43, v44);
        r5_110 = r0_109;
        r0_111 = fun_5eb8(1, 22, r2_81, r3_82, v90, v91, v92, v69, v70, v67, v68, v65, v66, v63, v64, v61, v62, v59, v60, v57, v58, v55, v56, v53, v54, v51, v52, v49, v50, v47, v48, v45, v46, v43, v44);
        r4_112 = r0_111;
        r2_81 = r4_112;
        r0_113 = fun_c670(sp5 + 0x7c, r5_110, r2_81, r3_82, v90, v91, v92, v69, v70, v67, v68, v65, v66, v63, v64, v61, v62, v59, v60, v57, v58, v55, v56, v53, v54, v51, v52, v49, v50, v47, v48, v45, v46, v43, v44);
        if (!r0_113) {
            while (1) {
                if (reinterpret_cast<signed char>(r5_110) > reinterpret_cast<signed char>(1)) {
                    v43 = r5_110 - 2;
                    v46 = r4_112 + 1;
                    v45 = r5_110 - 1;
                    v44 = r4_112 - 1;
                    r2_81 = v45;
                    r3_82 = v46;
                    v90 = reinterpret_cast<void**>(sp5 + 0x7c);
                    r0_113 = fun_c688(v43, v44, r2_81, r3_82, v90, v91, v92, v69, v70, v67, v68, v65, v66, v63, v64, v61, v62, v59, v60, v57, v58, v55, v56, v53, v54, v51, v52, v49, v50, v47, v48, v45, v46, v43, v44);
                    z114 = r0_113 == 0;
                    if (!z114) {
                        r7_88 = reinterpret_cast<void**>(1);
                    }
                    if (!z114) 
                        goto label_87;
                }
                r7_88 = reinterpret_cast<void**>(0);
                addr_cde8_89:
                if (reinterpret_cast<signed char>(r5_110) <= reinterpret_cast<signed char>(21)) {
                    v47 = r5_110 + 1;
                    v50 = r4_112 + 1;
                    v49 = r5_110 + 2;
                    v48 = r4_112 - 1;
                    r2_81 = v49;
                    r3_82 = v50;
                    v90 = reinterpret_cast<void**>(sp5 + 0x7c);
                    r0_113 = fun_c688(v47, v48, r2_81, r3_82, v90, v91, v92, v69, v70, v67, v68, v65, v66, v63, v64, v61, v62, v59, v60, v57, v58, v55, v56, v53, v54, v51, v52, v49, v50, v47, v48, v45, v46, v43, v44);
                    if (r0_113) {
                        r7_88 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r7_88) | 2);
                    }
                }
                if (reinterpret_cast<signed char>(r4_112) > reinterpret_cast<signed char>(1)) {
                    v51 = r5_110 - 1;
                    v54 = r4_112 - 1;
                    v53 = r5_110 + 1;
                    v52 = r4_112 - 2;
                    r2_81 = v53;
                    r3_82 = v54;
                    v90 = reinterpret_cast<void**>(sp5 + 0x7c);
                    r0_113 = fun_c688(v51, v52, r2_81, r3_82, v90, v91, v92, v69, v70, v67, v68, v65, v66, v63, v64, v61, v62, v59, v60, v57, v58, v55, v56, v53, v54, v51, v52, v49, v50, v47, v48, v45, v46, v43, v44);
                    if (r0_113) {
                        r7_88 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r7_88) | 4);
                    }
                }
                if (reinterpret_cast<signed char>(r4_112) <= reinterpret_cast<signed char>(21)) {
                    v55 = r5_110 - 1;
                    v58 = r4_112 + 2;
                    v57 = r5_110 + 1;
                    v56 = r4_112 + 1;
                    r2_81 = v57;
                    r3_82 = v58;
                    v90 = reinterpret_cast<void**>(sp5 + 0x7c);
                    r0_113 = fun_c688(v55, v56, r2_81, r3_82, v90, v91, v92, v69, v70, v67, v68, v65, v66, v63, v64, v61, v62, v59, v60, v57, v58, v55, v56, v53, v54, v51, v52, v49, v50, v47, v48, v45, v46, v43, v44);
                    z115 = r0_113 == 0;
                    if (!z115) {
                        r7_88 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r7_88) | 8);
                    }
                    if (!z115) 
                        goto label_102;
                }
                if (!r7_88) 
                    break;
                addr_ced8_104:
                while (r0_116 = fun_5eb8(0, 3, r2_81, r3_82, v90, v91, v92, v69, v70, v67, v68, v65, v66, v63, v64, v61, v62, v59, v60, v57, v58, v55, v56, v53, v54, v51, v52, v49, v50, v47, v48, v45, v46, v43, v44), r3_82 = r7_88, (reinterpret_cast<unsigned char>(r3_82) & 1) == 0) {
                }
                r3_117 = reinterpret_cast<uint32_t>(~(-1 << reinterpret_cast<unsigned char>(r0_116)));
                if (r3_117 <= 7) 
                    goto label_107;
                r0_113 = reinterpret_cast<void**>(sp5 + 0x7c);
                r2_81 = r4_112;
                r3_82 = reinterpret_cast<void**>(0);
                fun_c568(r0_113, r5_110, r2_81, 0, v90, v91, v92, v69, v70, v67, v68, v65, v66, v63, v64, v61, v62, v59, v60, v57, v58, v55, v56, v53, v54, v51, v52, v49, v50, v47, v48, v45, v46, v43, v44);
                continue;
                label_102:
                goto addr_ced8_104;
                label_87:
                goto addr_cde8_89;
            }
            ++r10_108;
            if (r10_108 >= 0x3e8) 
                goto addr_cf64_112;
        }
    }
    label_107:
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(fun_cf04) + r3_117 << 2);
    addr_cf64_112:
    r2_118 = gd128;
    r1_119 = gd130;
    r3_120 = gd134;
    *reinterpret_cast<void***>(r1_119) = r8_86;
    __asm__("stm r3, {r4, r5}");
    *reinterpret_cast<void***>(r1_119 + 4) = r6_41;
    r0_121 = fun_1054(r0_113, r1_119, r2_118, r3_120, v90, v91, v92, r0_113, r1_119, r2_118, r3_120, v90, v91, v92);
    fun_c8fc(sp5 + 0x7c, r1_119, r2_118, r3_120, v90, v91, v92, v69, v70, v67, v68, v65, v66, v63, v64, v61, v62, v59, v60, v57, v58, v55, v56, v53, v54, v51, v52, v49, v50, v47, v48, v45, v46, v43, v44);
    r3_122 = gd138;
    r0_123 = r0_121;
    r7_124 = 0;
    *r3_122 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r0_121 + 0x15c00) + 0x390);
    while (r3_125 = gd138, reinterpret_cast<unsigned char>(r0_123) >= reinterpret_cast<unsigned char>(*r3_125)) {
        r2_126 = *r9_6;
        r3_127 = reinterpret_cast<void**>(r7_124 ^ 1);
        less_or_equal128 = reinterpret_cast<signed char>(r2_126) <= reinterpret_cast<signed char>(0);
        if (less_or_equal128) {
            r3_127 = reinterpret_cast<void**>(0);
        }
        if (!less_or_equal128) {
            r3_127 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r3_127) & 1);
        }
        if (!r3_127) 
            goto addr_d110_120;
        r1_129 = gd13c;
        fun_c504(reinterpret_cast<unsigned char>(*r3_125) - reinterpret_cast<unsigned char>(r0_123), r1_129, r2_126);
        r0_130 = fun_6e8c(9, r1_129, r2_126);
        if (r0_130) {
            r3_131 = gd128;
            r3_127 = *reinterpret_cast<void***>(r3_131);
            less_or_equal132 = reinterpret_cast<signed char>(r3_127) <= reinterpret_cast<signed char>(0);
            if (!less_or_equal132) {
                r2_126 = gd134;
            }
            if (!less_or_equal132) {
                r3_127 = *reinterpret_cast<void***>(r2_126);
            }
            if (!less_or_equal132) {
                --r3_127;
            }
            if (!less_or_equal132) 
                goto label_131;
        }
        r0_133 = fun_6e8c(3, r1_129, r2_126);
        if (r0_133) {
            r3_134 = gd128;
            r3_127 = *reinterpret_cast<void***>(r3_134);
            if (reinterpret_cast<signed char>(r3_127) <= reinterpret_cast<signed char>(22)) {
                r2_126 = gd134;
                r3_127 = *reinterpret_cast<void***>(r2_126) + 1;
                goto addr_d010_137;
            }
        }
        r0_135 = fun_6e8c(0, r1_129, r2_126);
        if (r0_135) {
            r3_136 = gd128;
            r3_127 = *reinterpret_cast<void***>(r3_136 + 4);
            less_or_equal137 = reinterpret_cast<signed char>(r3_127) <= reinterpret_cast<signed char>(0);
            if (!less_or_equal137) {
                r2_126 = gd134;
            }
            if (!less_or_equal137) {
                r3_127 = *reinterpret_cast<void***>(r2_126 + 4);
            }
            if (!less_or_equal137) {
                --r3_127;
            }
            if (!less_or_equal137) 
                goto label_147;
        }
        r0_138 = fun_6e8c(6, r1_129, r2_126);
        if (r0_138) {
            r3_139 = gd128;
            r3_127 = *reinterpret_cast<void***>(r3_139 + 4);
            if (reinterpret_cast<signed char>(r3_127) <= reinterpret_cast<signed char>(22)) {
                r2_126 = gd134;
                r3_127 = *reinterpret_cast<void***>(r2_126 + 4) + 1;
                goto addr_d070_153;
            }
        }
        addr_d074_154:
        r4_140 = gd134;
        r5_141 = gd128;
        r1_142 = r5_141;
        r2_143 = reinterpret_cast<void**>(8);
        r0_144 = fun_ea94(r4_140, r1_142, 8, r3_127, v90, v91, v92, v69, v70, v67, v68, v65, v66, v63, v64, v61, v62, v59, v60, v57, v58, v55, v56, v53, v54, v51, v52, v49, v50, v47, v48, v45, v46, v43, v44);
        if (r0_144) {
            r6_145 = reinterpret_cast<void**>(sp5 + 0x7c);
            r1_142 = *reinterpret_cast<void***>(r4_140);
            r0_146 = fun_c670(r6_145, r1_142, *reinterpret_cast<void***>(r4_140 + 4), r3_127, v90, v91, v92, v69, v70, v67, v68, v65, v66, v63, v64, v61, v62, v59, v60, v57, v58, v55, v56, v53, v54, v51, v52, v49, v50, v47, v48, v45, v46, v43, v44);
            if (r0_146) {
                r2_143 = *reinterpret_cast<void***>(r5_141);
                r3_127 = *reinterpret_cast<void***>(r5_141 + 4);
                __asm__("stm r4, {r2, r3}");
            } else {
                r1_142 = *reinterpret_cast<void***>(r4_140);
                r2_143 = *reinterpret_cast<void***>(r4_140 + 4);
                __asm__("stm r5, {r1, r2}");
                fun_c8fc(r6_145, r1_142, r2_143, r3_127, v90, v91, v92, v69, v70, v67, v68, v65, v66, v63, v64, v61, v62, v59, v60, v57, v58, v55, v56, v53, v54, v51, v52, v49, v50, v47, v48, v45, v46, v43, v44);
                r3_127 = *reinterpret_cast<void***>(r5_141);
                z147 = reinterpret_cast<int1_t>(r3_127 == 23);
                if (!z147) {
                    r7_124 = 0;
                }
                if (z147) {
                    r7_124 = 1;
                }
            }
        }
        fun_c724(0, r1_142, r2_143, r3_127, v90, v91, v92, v69, v70, v67, v68, v65, v66, v63, v64, v61, v62, v59, v60, v57, v58, v55, v56, v53, v54, v51, v52, v49, v50, v47, v48, v45, v46, v43, v44);
        r0_123 = fun_1054(0, r1_142, r2_143, r3_127, v90, v91, v92, 0, r1_142, r2_143, r3_127, v90, v91, v92);
        continue;
        addr_d070_153:
        *reinterpret_cast<void***>(r2_126 + 4) = r3_127;
        goto addr_d074_154;
        label_147:
        goto addr_d070_153;
        addr_d010_137:
        *reinterpret_cast<void***>(r2_126) = r3_127;
        goto addr_d074_154;
        label_131:
        goto addr_d010_137;
    }
    addr_d11c_166:
    return r7_124;
    addr_d110_120:
    goto addr_d11c_166;
}

void fun_ccf0(int32_t r0) {
    int1_t z2;
    int1_t z3;
    int1_t z4;
    int1_t z5;
    int1_t z6;
    int1_t z7;
    int1_t z8;
    int1_t z9;

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
    goto "|";
}

void fun_cd1c() {
    goto "|";
}

void fun_cf04(int32_t r0) {
    int1_t z2;
    int1_t z3;
    int1_t z4;
    int1_t z5;
    int1_t z6;
    int1_t z7;
    int1_t z8;
    int1_t z9;

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
    goto "|";
}

void fun_cf2c() {
    goto "|";
}

void fun_d170(int32_t r0, int32_t r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
}

void*** gd514 = reinterpret_cast<void***>(0x400007c0);

void** gd518 = reinterpret_cast<void**>(0xc4);

void** gd51c = reinterpret_cast<void**>(0xc8);

void* gd520 = reinterpret_cast<void*>(0x11f60);

void*** gd524 = reinterpret_cast<void***>(0x400007cc);

struct s69 {
    signed char[8] pad8;
    void** f8;
    signed char[7] pad16;
    void** f16;
};

struct s69* gd53c = reinterpret_cast<struct s69*>(0x11f4c);

void** gd540 = reinterpret_cast<void**>(0xf0);

void fun_d2c8(int64_t* r0);

void** fun_d208(void** r0, void** r1, void** r2, void** r3, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25) {
    int1_t n26;
    int1_t z27;
    void** r7_28;
    int32_t r5_29;
    int1_t n30;
    int32_t r4_31;
    int1_t z32;
    uint32_t r12_33;
    uint32_t r12_34;
    void** v35;
    void** r4_36;
    void** v37;
    void** r5_38;
    void** v39;
    void** r6_40;
    void** v41;
    void** v42;
    void** sp43;
    void** v44;
    void** v45;
    void** v46;
    void** r0_47;
    void*** r3_48;
    void** r3_49;
    void** r2_50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** r0_56;
    void** r3_57;
    void** r6_58;
    void** r4_59;
    void** r5_60;
    int1_t less61;
    void** r0_62;
    void** r1_63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** r0_69;
    void* r3_70;
    void*** r5_71;
    void** r6_72;
    void** r3_73;
    void** v74;
    void** v75;
    void** v76;
    void** r0_77;
    void*** r3_78;
    void** r3_79;
    void** r0_80;
    struct s25* r0_81;
    void** r0_82;
    void** v83;
    void** v84;
    void** r0_85;
    void*** r3_86;
    void** r0_87;
    void** r0_88;
    void** v89;
    void** v90;
    void** r0_91;
    void** r3_92;
    void** r4_93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void*** r3_98;
    struct s69* lr99;
    void** r3_100;
    void** r0_101;
    void** r1_102;
    void** r0_103;
    void** r6_104;
    void** r4_105;
    void** r3_106;
    int1_t less107;
    void** v108;
    void** v109;
    void** r0_110;
    void*** r3_111;
    void** r7_112;
    void** r0_113;
    struct s25* r0_114;
    void** r3_115;
    struct s25* r4_116;
    void** r0_117;
    void** r5_118;
    void** r0_119;
    void** r0_120;
    void* r3_121;
    void** r3_122;
    int1_t z123;
    void** r0_124;
    void** r0_125;
    void** r3_126;
    int1_t z127;
    void** v128;
    void** v129;
    void** r0_130;
    void** r4_131;
    void** v132;
    void** v133;
    void** r0_134;
    void** v135;
    void** v136;
    void*** r3_137;

    if (n26) {
        r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) & reinterpret_cast<uint32_t>(reinterpret_cast<signed char>(r0) >> 15));
    }
    if (z27) {
        r7_28 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) & reinterpret_cast<unsigned char>(r0) >> r5_29);
    }
    if (n30) {
        r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) & reinterpret_cast<uint32_t>(r4_31 >> 15));
    }
    if (z32) {
        r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) & (r12_33 >> reinterpret_cast<uint32_t>(__zero_stack_offset()) | r12_34 << 32 - reinterpret_cast<uint32_t>(__zero_stack_offset())));
    }
    v35 = r4_36;
    v37 = r5_38;
    v39 = r6_40;
    v41 = r7_28;
    v42 = reinterpret_cast<void**>(__return_address());
    sp43 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(__zero_stack_offset()) - 20 - 20);
    r0_47 = fun_1054(r0, r1, r2, r3, v44, v45, v46);
    r3_48 = gd514;
    *r3_48 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r0_47 + 0x7500) + 48);
    r3_49 = gd518;
    r2_50 = reinterpret_cast<void**>(0xffffffff);
    *reinterpret_cast<void***>(r3_49) = reinterpret_cast<void**>(0xffffffff);
    r0_56 = fun_5eb8(4, 6, 0xffffffff, r3_49, v51, v52, v53, v54, v55, v35, v37, v39, v41, v42, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25);
    r3_57 = gd51c;
    r6_58 = r0_56;
    r4_59 = r3_57;
    r5_60 = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(r3_57 + 0xa0) = r0_56;
    while (less61 = reinterpret_cast<signed char>(r5_60) < reinterpret_cast<signed char>(r6_58), r0_62 = reinterpret_cast<void**>(0), r1_63 = reinterpret_cast<void**>(4), ++r5_60, r4_59 = r4_59 + 8, less61) {
        r0_69 = fun_5eb8(0, 4, 0xffffffff, r3_57, v64, v65, v66, v67, v68, v35, v37, v39, v41, v42, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25);
        r3_70 = gd520;
        *reinterpret_cast<int32_t*>(r4_59 + 0xfffffff8) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(r3_70) + reinterpret_cast<unsigned char>(r0_69) << 2);
        r3_57 = reinterpret_cast<void**>(0x1f4);
        *reinterpret_cast<void***>(r4_59 + 0xfffffffc) = reinterpret_cast<void**>(0x1f4);
    }
    while (1) {
        r5_71 = gd524;
        r6_72 = reinterpret_cast<void**>(0);
        while (r3_73 = gd51c, reinterpret_cast<signed char>(r6_72) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(r3_73 + 0xa0))) {
            r0_77 = fun_1054(r0_62, r1_63, r2_50, *reinterpret_cast<void***>(r3_73 + 0xa0), v74, v75, v76);
            r3_78 = gd514;
            r3_79 = *r3_78;
            if (reinterpret_cast<unsigned char>(r0_77) < reinterpret_cast<unsigned char>(r3_79)) 
                goto addr_d3b0_16;
            r0_80 = fun_6290(*(r5_71 - 4), 6, 1);
            fun_6328(r0_80, 6, 1);
            r0_81 = fun_d140(*(r5_71 - 4), 6, 1);
            if (reinterpret_cast<uint32_t>(r0_81) <= 4) 
                goto label_19;
            while (r0_82 = fun_f9f0(0, 6, 1, r3_79, v74), !!r0_82) {
                r0_85 = fun_1054(r0_82, 6, 1, r3_79, v74, v83, v84);
                r3_86 = gd514;
                r3_79 = *r3_86;
                if (reinterpret_cast<unsigned char>(r0_85) < reinterpret_cast<unsigned char>(r3_79)) 
                    goto addr_d33c_24;
                fun_d174(r0_85, 6, 1, r3_79, v74);
            }
            addr_d33c_24:
            r1_63 = reinterpret_cast<void**>(6);
            r2_50 = reinterpret_cast<void**>(0);
            r0_87 = fun_6290(*(r5_71 - 4), 6, 0);
            r0_88 = fun_6328(r0_87, 6, 0);
            r0_91 = fun_1054(r0_88, 6, 0, r3_79, v74, v89, v90);
            r3_92 = *r5_71;
            r4_93 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0_91) + reinterpret_cast<unsigned char>(r3_92));
            while (r0_62 = fun_1054(r0_91, 6, 0, r3_92, v74, v94, v95), reinterpret_cast<unsigned char>(r0_62) >= reinterpret_cast<unsigned char>(r4_93)) {
                r0_62 = fun_1054(r0_62, 6, 0, r3_92, v74, v96, v97);
                r3_98 = gd514;
                r3_92 = *r3_98;
                if (reinterpret_cast<unsigned char>(r0_62) < reinterpret_cast<unsigned char>(r3_92)) 
                    goto addr_d384_30;
                r0_91 = fun_d174(r0_62, 6, 0, r3_92, v74);
            }
            addr_d384_30:
            ++r6_72;
            r5_71 = r5_71 + 8;
        }
        addr_d3b0_16:
        lr99 = gd53c;
        r2_50 = lr99->f8;
        __asm__("stm ip!, {r0, r1, r2, r3}");
        r3_100 = lr99->f16;
        r0_101 = gd540;
        r1_102 = reinterpret_cast<void**>(1);
        v74 = r3_100;
        r0_103 = fun_6f70(r0_101, 1, r2_50, r3_100, v74);
        r6_104 = reinterpret_cast<void**>(0);
        while (1) {
            r4_105 = gd51c;
            r3_106 = *reinterpret_cast<void***>(r4_105 + 0xa0);
            less107 = reinterpret_cast<signed char>(r6_104) < reinterpret_cast<signed char>(r3_106);
            if (!less107) {
                r3_106 = reinterpret_cast<void**>(0);
            }
            if (less107) {
                r3_106 = reinterpret_cast<void**>(1);
            }
            if (reinterpret_cast<signed char>(r6_104) < reinterpret_cast<signed char>(0)) {
                r3_106 = reinterpret_cast<void**>(0);
            }
            if (!r3_106) 
                break;
            r0_110 = fun_1054(r0_103, r1_102, r2_50, r3_106, v74, v108, v109);
            r3_111 = gd514;
            r3_106 = *r3_111;
            if (reinterpret_cast<unsigned char>(r0_110) < reinterpret_cast<unsigned char>(r3_106)) 
                goto addr_d4bc_43;
            r0_103 = fun_6da8(0x1f0, r1_102, r2_50);
            r7_112 = r0_103;
            if (reinterpret_cast<signed char>(r7_112) < reinterpret_cast<signed char>(0) != __intrinsic()) {
                continue;
            }
            r0_113 = fun_6290(r0_103, 6, 1);
            fun_6328(r0_113, 6, 1);
            r0_114 = fun_d140(r7_112, 6, 1);
            r3_115 = reinterpret_cast<void**>(&r0_114->f49);
            r4_116 = r0_114;
            r0_117 = fun_10330(sp43, 6, 1);
            r5_118 = r0_117;
            while (r0_119 = fun_f9f0(r5_118, 6, 1, r3_115, v74), !!r0_119) {
                fun_d174(r0_119, 6, 1, r3_115, v74);
            }
            r2_50 = r0_119;
            r1_102 = reinterpret_cast<void**>(6);
            r0_120 = fun_6290(r7_112, 6, r2_50);
            fun_6328(r0_120, 6, r2_50);
            if (reinterpret_cast<int32_t>(r4_116) > -1) 
                goto addr_d454_52;
            goto addr_d470_54;
            addr_d454_52:
            r3_121 = gd520;
            r2_50 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(r3_121) + reinterpret_cast<uint32_t>(r4_116) << 2);
            r3_122 = gd51c;
            z123 = r2_50 == *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r3_122) + reinterpret_cast<unsigned char>(r6_104) << 3);
            if (z123) {
                ++r6_104;
            }
            if (!z123) {
                addr_d470_54:
                r6_104 = reinterpret_cast<void**>(0xffffffff);
            }
            while (r0_103 = fun_6da8(0x1f0, 6, r2_50), reinterpret_cast<signed char>(r0_103) >= reinterpret_cast<signed char>(0)) {
            }
        }
        addr_d4bc_43:
        r0_124 = gd540;
        r1_63 = reinterpret_cast<void**>(0);
        r0_125 = fun_6f70(r0_124, 0, r2_50, r3_106, v74);
        r3_126 = *reinterpret_cast<void***>(r4_105 + 0xa0);
        z127 = r6_104 == r3_126;
        if (z127) {
            r0_125 = reinterpret_cast<void**>(1);
        }
        if (z127) 
            goto label_63;
        r0_130 = fun_1054(r0_125, 0, r2_50, r3_126, v74, v128, v129);
        r4_131 = r0_130 + 0x3e8;
        while (r0_134 = fun_1054(r0_130, 0, r2_50, r3_126, v74, v132, v133), reinterpret_cast<unsigned char>(r0_134) >= reinterpret_cast<unsigned char>(r4_131)) {
            r0_130 = fun_d174(r0_134, 0, r2_50, r3_126, v74);
        }
        r0_62 = fun_1054(r0_134, 0, r2_50, r3_126, v74, v135, v136);
        r3_137 = gd514;
        if (reinterpret_cast<unsigned char>(r0_62) < reinterpret_cast<unsigned char>(*r3_137)) 
            goto addr_d508_69;
    }
    label_19:
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(fun_d2c8) + reinterpret_cast<uint32_t>(r0_81) << 2);
    label_63:
    addr_d50c_71:
    return r0_125;
    addr_d508_69:
    r0_125 = reinterpret_cast<void**>(0);
    goto addr_d50c_71;
}

void fun_d2c8(int64_t* r0) {
    int64_t v2;
    int1_t z3;
    uint32_t r4_4;
    uint32_t r4_5;
    int1_t z6;
    uint32_t r12_7;
    uint32_t r12_8;
    int1_t z9;
    int32_t r4_10;
    int1_t z11;
    int1_t z12;

    *reinterpret_cast<void**>(&v2) = __zero_stack_offset();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v2) + 4) = reinterpret_cast<int32_t>(__return_address());
    if (z3) {
        *reinterpret_cast<void**>(&v2) = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r0) & (r4_4 >> 5 | r4_5 << 27));
    }
    if (z6) {
        *reinterpret_cast<void**>(&v2) = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r0) & (r12_7 >> 5 | r12_8 << 27));
    }
    if (z9) {
        *r0 = v2;
        r0 = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(r0) - r4_10);
    }
    if (z11) {
        *r0 = v2;
    }
    if (!z12) 
        goto "???";
}

void** gd528 = reinterpret_cast<void**>(0xe8);

void fun_d2e4() {
    void** r0_1;
    void** r1_2;
    void** r2_3;

    r0_1 = gd528;
    fun_10330(r0_1, r1_2, r2_3);
    goto 0xd318;
}

void*** gd710 = reinterpret_cast<void***>(0x4000086c);

void** gd714 = reinterpret_cast<void**>(0x70);

void** gd6d4 = reinterpret_cast<void**>(0x6c);

struct s70 {
    signed char[2000] pad2000;
    void** f2000;
};

void** gd6cc = reinterpret_cast<void**>(0x78);

void** gd6d0 = reinterpret_cast<void**>(0x88);

void** gd6d8 = reinterpret_cast<void**>(48);

void** gd6dc = reinterpret_cast<void**>(0x70);

void** gd6e0 = reinterpret_cast<void**>(0x7c);

void** fun_d6cc(void** r0, void** r1, void** r2, void** r3, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23) {
    int1_t z24;
    int1_t z25;
    uint32_t r8_26;
    int1_t n27;
    uint32_t r12_28;
    uint32_t r12_29;
    int1_t z30;
    void** r7_31;
    int32_t r5_32;
    int1_t n33;
    int32_t r8_34;
    int32_t r8_35;
    int1_t z36;
    uint32_t r12_37;
    uint32_t r12_38;
    void** r0_39;
    void*** r3_40;
    void** r3_41;
    void** sp42;
    void** sp43;
    void** r4_44;
    void** r5_45;
    void** r6_46;
    void** r8_47;
    void** r9_48;
    void** r10_49;
    void** r11_50;
    void** r0_51;
    void** sp52;
    void** r10_53;
    void** r1_54;
    void** r0_55;
    void** r2_56;
    void** r8_57;
    void** r7_58;
    void** r9_59;
    void** r3_60;
    void** v61;
    void** v62;
    void** v63;
    void** r0_64;
    int1_t z65;
    void** r5_66;
    void** r6_67;
    void** r3_68;
    int1_t less_or_equal69;
    int1_t z70;
    void** v71;
    void** v72;
    void** v73;
    int1_t c74;
    void** v75;
    void** v76;
    void** v77;
    void** r0_78;
    void** r0_79;
    int1_t z80;
    void** v81;
    void** v82;
    void** v83;
    void** r3_84;
    int1_t below_or_equal85;
    void** r2_86;
    void** r3_87;
    void** r4_88;
    int1_t less_or_equal89;
    void** r0_90;
    int1_t z91;
    int1_t z92;

    if (z24) {
        r1 = reinterpret_cast<void**>(0);
    }
    if (z25) {
        r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) & r8_26 << 31);
    }
    if (n27) {
        r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) & (r12_28 >> 16 | r12_29 << 16));
    }
    if (z30) {
        r7_31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) & reinterpret_cast<unsigned char>(r0) >> r5_32);
    }
    if (n33) {
        r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) & (reinterpret_cast<unsigned char>(r0) >> r8_34 | reinterpret_cast<unsigned char>(r0) << reinterpret_cast<uint32_t>(32 - r8_35)));
    }
    if (z36) {
        r1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1) & (r12_37 >> reinterpret_cast<uint32_t>(__zero_stack_offset()) | r12_38 << 32 - reinterpret_cast<uint32_t>(__zero_stack_offset())));
    }
    r0_39 = fun_1054(r0, r1, r2, r3, __return_address(), a5, a6);
    r3_40 = gd710;
    *r3_40 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r0_39 + 0x7500) + 48);
    r3_41 = gd714;
    *reinterpret_cast<void***>(r3_41) = reinterpret_cast<void**>(0xffffffff);
    sp42 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(__zero_stack_offset()) + 0xfffffffc + 4);
    sp43 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(sp42 - 44) - 4);
    r0_51 = fun_5eb8(0, 11, 0xffffffff, r3_41, sp43, r4_44, r5_45, r6_46, r7_31, r8_47, r9_48, r10_49, r11_50, sp42, __return_address(), 0xd550, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23);
    sp52 = sp43 - 52;
    r10_53 = r0_51;
    r1_54 = reinterpret_cast<void**>(0);
    r0_55 = sp52;
    r2_56 = reinterpret_cast<void**>(48);
    fun_eadc(r0_55, 0, 48);
    r8_57 = sp52;
    r7_58 = reinterpret_cast<void**>(0xffffffff);
    r9_59 = reinterpret_cast<void**>(0);
    while (r3_60 = gd6d4, r0_64 = fun_1054(r0_55, r1_54, r2_56, r3_60, v61, v62, v63), reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3_60)) > reinterpret_cast<unsigned char>(r0_64)) {
        z65 = r7_58 == r10_53;
        if (!z65) {
            r5_66 = reinterpret_cast<void**>(0);
        }
        if (!z65) {
            r6_67 = r5_66;
        }
        if (z65) 
            goto addr_d6b4_21;
        while (1) {
            r3_68 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r7_58) >> 31);
            less_or_equal69 = reinterpret_cast<signed char>(r6_67) <= reinterpret_cast<signed char>(11);
            if (!less_or_equal69) {
                r3_68 = reinterpret_cast<void**>(0);
            }
            if (less_or_equal69) {
                r3_68 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r3_68) & 1);
            }
            if (!r3_68) 
                break;
            r0_64 = fun_6d58(reinterpret_cast<unsigned char>(r6_67) & 0xff, r1_54, r2_56);
            z70 = r0_64 == 0;
            if (z70) {
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r5_66) + reinterpret_cast<unsigned char>(r8_57)) = r0_64;
            }
            if (!z70) {
                if (!*reinterpret_cast<struct s70**>(reinterpret_cast<unsigned char>(r5_66) + reinterpret_cast<unsigned char>(r8_57))) {
                    goto addr_d5cc_35;
                }
                r0_64 = fun_1054(r0_64, r1_54, r2_56, r3_68, v71, v72, v73);
                c74 = reinterpret_cast<unsigned char>(&(*reinterpret_cast<struct s70**>(reinterpret_cast<unsigned char>(r5_66) + reinterpret_cast<unsigned char>(r8_57)))->f2000) < reinterpret_cast<unsigned char>(r0_64);
                if (!c74) {
                    r7_58 = r6_67;
                }
                if (!c74) 
                    goto label_39; else 
                    goto addr_d5c0_40;
            }
            addr_d5f0_41:
            ++r6_67;
            r5_66 = r5_66 + 4;
            continue;
            label_39:
            goto addr_d5f0_41;
            addr_d5c0_40:
            r3_68 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r5_66) + reinterpret_cast<unsigned char>(r8_57));
            if (r3_68) {
                goto addr_d5f0_41;
            } else {
                addr_d5cc_35:
                r0_78 = fun_1054(r0_64, r1_54, r2_56, r3_68, v75, v76, v77);
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r5_66) + reinterpret_cast<unsigned char>(r8_57)) = r0_78;
                r0_79 = r9_59;
                fun_fe98(r0_79, r1_54, r2_56, r3_68);
                z80 = r6_67 == r10_53;
                if (z80) {
                    r0_79 = gd6cc;
                }
            }
            if (!z80) {
                r0_79 = gd6d0;
            }
            r0_64 = fun_10330(r0_79, r1_54, r2_56);
            r9_59 = r0_64;
            goto addr_d5f0_41;
        }
        r0_55 = fun_1054(r0_64, r1_54, r2_56, r3_68, v81, v82, v83);
        r3_84 = gd6d4;
        below_or_equal85 = reinterpret_cast<unsigned char>(r0_55) <= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3_84));
        if (!below_or_equal85) {
            r6_67 = reinterpret_cast<void**>(43);
        }
        if (below_or_equal85) {
            r2_86 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3_84)) - reinterpret_cast<unsigned char>(r0_55));
            r1_54 = gd6d8;
            r0_55 = fun_10f6c(reinterpret_cast<unsigned char>(r2_86) * 43, r1_54, r2_86);
            r6_67 = r0_55;
        }
        r2_56 = gd6dc;
        r3_87 = *reinterpret_cast<void***>(r2_56);
        if (r6_67 != r3_87) {
            *reinterpret_cast<void***>(r2_56) = r6_67;
            r5_66 = gd6e0;
            r4_88 = reinterpret_cast<void**>(0);
            while (1) {
                less_or_equal89 = reinterpret_cast<signed char>(r4_88) <= reinterpret_cast<signed char>(r6_67);
                if (!less_or_equal89) {
                    r2_56 = reinterpret_cast<void**>(0);
                }
                if (less_or_equal89) {
                    r2_56 = reinterpret_cast<void**>(1);
                }
                ++r4_88;
                r1_54 = *reinterpret_cast<void***>(r5_66);
                r5_66 = r5_66 + 8;
                r0_90 = fun_62e4(*reinterpret_cast<void***>(r5_66 + 0xfffffffc), r1_54, r2_56, r3_87);
                if (reinterpret_cast<int1_t>(r4_88 == 44)) 
                    break;
            }
            r0_55 = fun_6334(r0_90, r1_54, r2_56, r3_87);
        }
        z91 = r7_58 == r10_53;
        if (!z91) {
            z91 = reinterpret_cast<int1_t>(r7_58 == -1);
        }
        if (z91) 
            continue;
        r7_58 = reinterpret_cast<void**>(0xffffffff);
    }
    addr_d6b4_21:
    z92 = r7_58 == r10_53;
    if (!z92) {
        r0_64 = reinterpret_cast<void**>(0);
    }
    if (z92) {
        r0_64 = reinterpret_cast<void**>(1);
    }
    return r0_64;
}

void fun_d710(int32_t r0) {
    int1_t n2;
    int1_t n3;

    if (n2) {
    }
    if (!n3) 
        goto "???";
}

void** gd98c = reinterpret_cast<void**>(0x98);

void** gd990 = reinterpret_cast<void**>(0x74);

void** gd994 = reinterpret_cast<void**>(96);

void** gd998 = reinterpret_cast<void**>(0xb0);

void** gd99c = reinterpret_cast<void**>(0xb8);

void** gd9a0 = reinterpret_cast<void**>(0xe8);

void** gd9a4 = reinterpret_cast<void**>(0x7c);

void** gd9a8 = reinterpret_cast<void**>(32);

void** gd9ac = reinterpret_cast<void**>(68);

void** gd9b0 = reinterpret_cast<void**>(0xb8);

void** fun_d7a0(uint32_t r0) {
    int1_t z2;
    int1_t n3;
    void** r1_4;
    uint32_t r8_5;
    void** v6;
    void** r4_7;
    void** v8;
    void** r5_9;
    void** v10;
    void** r6_11;
    void** v12;
    void** r7_13;
    void** v14;
    void** r8_15;
    void** v16;
    void** r0_17;
    void** sp18;
    void** r2_19;
    void** r3_20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** r3_46;
    void* r5_47;
    void** r3_48;
    void** r2_49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** r0_75;
    void** r0_76;
    void** r2_77;
    void** r0_78;
    void** r2_79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void* r4_105;
    void** r5_106;
    void** r2_107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** r0_133;
    int1_t z134;
    void** r1_135;
    void** r3_136;
    void** r2_137;
    void** r0_138;
    void** r2_139;
    void** v140;
    void** v141;
    void** r2_142;
    void** v143;
    void** v144;
    void** r0_145;
    void** r1_146;
    void** r2_147;
    void** r0_148;
    void** r2_149;
    void** v150;
    void** v151;
    void** v152;
    void** v153;
    void** v154;
    void** v155;
    void** v156;
    void** v157;
    void** v158;
    void** v159;
    void** v160;
    void** v161;
    void** v162;
    void** v163;
    void** v164;
    void** v165;
    void** v166;
    void** v167;
    void** v168;
    void** v169;
    void** v170;
    void** v171;
    void** v172;
    void** v173;
    void** v174;
    void** r5_175;
    void** r7_176;
    void** r0_177;
    void** r6_178;
    void** r8_179;
    void** r2_180;
    int1_t c181;
    void** r0_182;
    int1_t z183;
    void** v184;
    void** v185;
    int1_t z186;
    void** r3_187;
    int1_t z188;
    int1_t less_or_equal189;
    int1_t z190;
    void** v191;
    void** v192;
    void** v193;
    void** v194;
    void** v195;
    void** v196;
    void** v197;
    void** v198;
    void** v199;
    void** v200;
    void** v201;
    void** v202;
    void** v203;
    void** v204;
    void** v205;
    void** v206;
    void** v207;
    void** v208;
    void** v209;
    void** v210;
    void** v211;
    void** v212;
    void** v213;
    void** v214;
    void** v215;
    void** r0_216;
    void** v217;
    void** v218;
    void** v219;
    void** v220;
    void** v221;
    void** v222;
    void** v223;
    void** v224;
    void** v225;
    void** v226;
    void** v227;
    void** v228;
    void** v229;
    void** v230;
    void** v231;
    void** v232;
    void** v233;
    void** v234;
    void** v235;
    void** v236;
    void** v237;
    void** v238;
    void** v239;
    void** v240;
    void** v241;
    int1_t z242;
    void** v243;
    void** v244;
    void** v245;
    void** v246;
    void** v247;
    void** v248;
    void** v249;
    void** v250;
    void** v251;
    void** v252;
    void** v253;
    void** v254;
    void** v255;
    void** v256;
    void** v257;
    void** v258;
    void** v259;
    void** v260;
    void** v261;
    void** v262;
    void** v263;
    void** v264;
    void** v265;
    void** v266;
    void** v267;

    if (z2) {
        __asm__("ldrdeq r2, r3, [r1], -sl");
    }
    if (n3) {
        r1_4 = reinterpret_cast<void**>(r0 & r0 << r8_5);
    }
    v6 = r4_7;
    v8 = r5_9;
    v10 = r6_11;
    v12 = r7_13;
    v14 = r8_15;
    v16 = reinterpret_cast<void**>(__return_address());
    r0_17 = gd98c;
    sp18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 24 - 8);
    fun_6208(r0_17, r1_4, r2_19, r3_20, v21, v22, v6, v8, v10, v12, v14, v16, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45);
    r3_46 = gd990;
    *reinterpret_cast<void***>(r3_46) = sp18;
    r5_47 = reinterpret_cast<void*>(0);
    while (r3_48 = gd990, r0_75 = fun_5eb8(0, 3, r2_49, r3_48, v50, v51, v6, v8, v10, v12, v14, v16, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74), *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3_48)) + reinterpret_cast<uint32_t>(r5_47)) = static_cast<signed char>(reinterpret_cast<uint32_t>(r0_75)), r5_47 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r5_47) + 1), !reinterpret_cast<int1_t>(r5_47 == 3)) {
    }
    r0_76 = gd994;
    fun_c504(r0_76, r0_76, r2_77);
    r0_78 = gd998;
    fun_6208(r0_78, r0_76, r2_79, r3_48, v80, v81, v6, v8, v10, v12, v14, v16, v82, v83, v84, v85, v86, v87, v88, v89, v90, v91, v92, v93, v94, v95, v96, v97, v98, v99, v100, v101, v102, v103, v104);
    r4_105 = reinterpret_cast<void*>(0);
    r5_106 = reinterpret_cast<void**>(1);
    while (1) {
        r0_133 = fun_5eb8(0, 3, r2_107, r3_48, v108, v109, v6, v8, v10, v12, v14, v16, v110, v111, v112, v113, v114, v115, v116, v117, v118, v119, v120, v121, v122, v123, v124, v125, v126, v127, v128, v129, v130, v131, v132);
        r3_48 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0_133) * 90);
        z134 = r3_48 == r5_106;
        r1_135 = r3_48;
        r5_106 = r3_48;
        if (!z134) {
            r3_136 = gd990;
            r3_48 = *reinterpret_cast<void***>(r3_136);
            fun_d718(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r3_48) + reinterpret_cast<uint32_t>(r4_105))), r1_135, r2_137);
            r4_105 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r4_105) + 1);
            r0_138 = gd99c;
            fun_eb7c(r0_138, r1_135, r2_139, r3_48, v140, v141, v6);
            if (reinterpret_cast<int32_t>(r4_105) > reinterpret_cast<int32_t>(2)) 
                break;
        }
    }
    r0_145 = fun_1054(r0_138, r1_135, r2_142, r3_48, v143, v144, v6);
    r1_146 = reinterpret_cast<void**>(0);
    fun_d718(0, 0, r2_147);
    r0_148 = gd9a0;
    fun_6208(r0_148, 0, r2_149, r3_48, v150, v151, v6, v8, v10, v12, v14, v16, v152, v153, v154, v155, v156, v157, v158, v159, v160, v161, v162, v163, v164, v165, v166, v167, v168, v169, v170, v171, v172, v173, v174);
    r5_175 = reinterpret_cast<void**>(0);
    r7_176 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r0_145 + 0xea00) + 96);
    r0_177 = r0_145;
    r6_178 = reinterpret_cast<void**>(0);
    r8_179 = reinterpret_cast<void**>(0);
    while (1) {
        r2_180 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r8_179) ^ 1);
        c181 = reinterpret_cast<unsigned char>(r0_177) < reinterpret_cast<unsigned char>(r7_176);
        if (c181) {
            r3_48 = reinterpret_cast<void**>(0);
        }
        if (!c181) {
            r3_48 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r2_180) & 1);
        }
        if (!r3_48) 
            break;
        r1_146 = gd994;
        fun_c504(reinterpret_cast<unsigned char>(r7_176) - reinterpret_cast<unsigned char>(r0_177), r1_146, r2_180);
        r0_182 = fun_6da8(0x248, r1_146, r2_180);
        if (r0_182 == 3) {
            --r6_178;
            if (reinterpret_cast<signed char>(r6_178) >= reinterpret_cast<signed char>(0)) 
                goto addr_d8b4_23;
        } else {
            if (!reinterpret_cast<int1_t>(r0_182 == 9)) {
                if (!reinterpret_cast<int1_t>(r0_182 == 6)) 
                    goto label_27; else 
                    goto addr_d8dc_28;
            } else {
                z183 = reinterpret_cast<int1_t>(r6_178 == 3);
                if (!z183) 
                    goto label_31; else 
                    goto addr_d8c0_32;
            }
        }
        r6_178 = reinterpret_cast<void**>(3);
        addr_d8b4_23:
        addr_d8c4_34:
        r1_146 = reinterpret_cast<void**>(0);
        r0_182 = fun_d718(r6_178, 0, r2_180);
        addr_d958_35:
        r0_177 = fun_1054(r0_182, r1_146, r2_180, r3_48, v184, v185, v6);
        continue;
        label_27:
        goto addr_d958_35;
        addr_d8dc_28:
        r2_180 = sp18 + 8;
        r3_48 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r2_180) + reinterpret_cast<unsigned char>(r5_175));
        ++r5_175;
        z186 = reinterpret_cast<int1_t>(r5_175 == 3);
        *reinterpret_cast<signed char*>(r3_48 + 0xfffffffd) = static_cast<signed char>(reinterpret_cast<uint32_t>(r6_178));
        if (!z186) {
            r0_182 = gd9a4;
        }
        if (z186) {
            r3_187 = gd990;
            r0_182 = *reinterpret_cast<void***>(r3_187);
            r1_146 = reinterpret_cast<void**>(0);
            while (1) {
                r2_180 = reinterpret_cast<void**>(0);
                r3_48 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r1_146) + reinterpret_cast<unsigned char>(r0_182))));
                ++r1_146;
                z188 = 0 == r3_48;
                if (!z188) {
                    r8_179 = reinterpret_cast<void**>(0);
                }
                if (z188) {
                    r8_179 = reinterpret_cast<void**>(1);
                }
                less_or_equal189 = reinterpret_cast<signed char>(r1_146) <= reinterpret_cast<signed char>(2);
                if (!less_or_equal189) {
                    r5_175 = reinterpret_cast<void**>(0);
                }
                if (less_or_equal189) {
                    r5_175 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r8_179) & 1);
                }
                if (!r5_175) 
                    break;
            }
            z190 = r8_179 == 0;
            if (!z190) 
                goto label_51; else 
                goto addr_d940_52;
        }
        addr_d954_53:
        r0_182 = fun_6208(r0_182, r1_146, r2_180, r3_48, v191, v192, v6, v8, v10, v12, v14, v16, v193, v194, v195, v196, v197, v198, v199, v200, v201, v202, v203, v204, v205, v206, v207, v208, v209, v210, v211, v212, v213, v214, v215);
        goto addr_d958_35;
        label_51:
        r0_182 = gd9a8;
        addr_d940_52:
        if (!z190) {
            goto addr_d954_53;
        } else {
            r0_216 = gd9ac;
            r0_182 = fun_6208(r0_216, r1_146, 0, r3_48, v217, v218, v6, v8, v10, v12, v14, v16, v219, v220, v221, v222, v223, v224, v225, v226, v227, v228, v229, v230, v231, v232, v233, v234, v235, v236, v237, v238, v239, v240, v241);
            r5_175 = r8_179;
            goto addr_d958_35;
        }
        label_31:
        ++r6_178;
        addr_d8c0_32:
        if (z183) {
            r6_178 = reinterpret_cast<void**>(0);
            goto addr_d8c4_34;
        }
    }
    z242 = r2_180 == 0;
    if (!z242) {
        r0_177 = gd9b0;
    }
    if (!z242) {
        fun_6208(r0_177, r1_146, r2_180, r3_48, v243, v244, v6, v8, v10, v12, v14, v16, v245, v246, v247, v248, v249, v250, v251, v252, v253, v254, v255, v256, v257, v258, v259, v260, v261, v262, v263, v264, v265, v266, v267);
    }
    return r8_179;
}

void fun_d98c(int16_t* r0) {
    int1_t z2;
    int16_t* r1_3;
    int32_t r8_4;
    int1_t n5;
    uint32_t r4_6;
    int32_t r8_7;
    uint32_t r4_8;
    int32_t r8_9;
    int1_t z10;
    int1_t z11;
    int1_t z12;
    int32_t r8_13;
    int1_t z14;
    uint32_t r8_15;
    uint32_t r8_16;
    int1_t z17;
    uint32_t r2_18;
    uint32_t r12_19;
    uint32_t r12_20;
    int1_t z21;
    int1_t z22;
    int32_t r4_23;
    int1_t z24;

    if (z2) {
        r1_3 = reinterpret_cast<int16_t*>(r8_4 * 0xd994);
    }
    if (n5) {
        r0 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r0) & (r4_6 >> r8_7 | r4_8 << reinterpret_cast<uint32_t>(32 - r8_9)));
    }
    if (z10) {
    }
    if (z11) {
        *r1_3 = static_cast<int16_t>(reinterpret_cast<uint32_t>(r1_3));
        r1_3 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r1_3) - reinterpret_cast<uint32_t>(r0));
    }
    if (z12) {
        *r0 = static_cast<int16_t>(reinterpret_cast<uint32_t>(r0));
        r0 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r0) - r8_13);
    }
    if (z14) {
        r1_3 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r1_3) & (r8_15 >> 31 | r8_16 << 1));
    }
    if (z17) {
        r2_18 = reinterpret_cast<uint32_t>(r1_3) & (r12_19 >> reinterpret_cast<uint32_t>(r0) | r12_20 << 32 - reinterpret_cast<uint32_t>(r0));
    }
    if (z21) {
        r2_18 = 0;
    }
    if (z22) {
        r2_18 = reinterpret_cast<uint32_t>(r1_3) & reinterpret_cast<uint32_t>(r4_23 >> 32);
    }
    if (!z24) 
        goto "???";
    *r1_3 = static_cast<int16_t>(r2_18);
}

void fun_d9e4(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void** gdd78 = reinterpret_cast<void**>(0xfc);

void*** gdd7c = reinterpret_cast<void***>(0x40000878);

void** gdd80 = reinterpret_cast<void**>(16);

void** gdd84 = reinterpret_cast<void**>(0xa8);

int32_t gdd88 = 0x4000086c;

void** gdd8c = reinterpret_cast<void**>(0x8c);

void** gdd90 = reinterpret_cast<void**>(0x7c);

void** gdd94 = reinterpret_cast<void**>(60);

void** gdd98 = reinterpret_cast<void**>(0x90);

void*** gdd9c = reinterpret_cast<void***>(0x11d7c);

void** gdda0 = reinterpret_cast<void**>(4);

void** gdda4 = reinterpret_cast<void**>(28);

void** gdda8 = reinterpret_cast<void**>(16);

void** gddac = reinterpret_cast<void**>(44);

void** fun_da3c(int32_t r0, void** r1, void** r2, void** r3, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29) {
    int1_t n30;
    int1_t n31;
    int1_t n32;
    void** v33;
    void** r4_34;
    void** v35;
    void** r5_36;
    void** v37;
    void** r6_38;
    void** v39;
    void** r7_40;
    void** v41;
    void** r8_42;
    void** v43;
    void** r0_44;
    void** r0_45;
    void** r0_46;
    void** r1_47;
    void** r4_48;
    void** r0_49;
    void*** r3_50;
    void** r0_51;
    uint32_t r8_52;
    void*** r3_53;
    void** r0_54;
    void** r3_55;
    int32_t r0_56;
    void** r2_57;
    void** r12_58;
    void** r1_59;
    int1_t z60;
    void** r3_61;
    int1_t less_or_equal62;
    void** r3_63;
    void** r0_64;
    void** r6_65;
    void** r5_66;
    void** r0_67;
    void** r5_68;
    void** r0_69;
    void** r5_70;
    int32_t r7_71;
    void** r0_72;
    void** r4_73;
    void** r6_74;
    void** r3_75;
    void** r0_76;
    void** r0_77;
    void*** r5_78;
    void** r3_79;
    void** r0_80;
    void** r3_81;
    void** r5_82;
    void*** r6_83;
    void** r4_84;
    int1_t less_or_equal85;
    void** r0_86;
    void** r5_87;
    void** r4_88;
    void** r0_89;
    void** r3_90;
    void** r0_91;
    void** r0_92;
    void** r4_93;
    void** r3_94;
    void** r3_95;
    void** r0_96;
    int1_t z97;

    if (n30) {
    }
    if (n31) {
    }
    if (n32) {
    }
    v33 = r4_34;
    v35 = r5_36;
    v37 = r6_38;
    v39 = r7_40;
    v41 = r8_42;
    v43 = reinterpret_cast<void**>(__return_address());
    r0_44 = gdd78;
    r0_45 = fun_6208(r0_44, r1, r2, r3, v33, v35, v37, v39, v41, v43, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29);
    r0_46 = fun_1054(r0_45, r1, r2, r3, v33, v35, v37);
    r1_47 = reinterpret_cast<void**>(0);
    r4_48 = r0_46;
    fun_6f74(0xffffffff, 0, r2);
    r0_49 = fun_1054(0xffffffff, 0, r2, r3, v33, v35, v37);
    r3_50 = gdd7c;
    r0_51 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r0_49 + 0x15c00) + 0x390);
    r8_52 = 0;
    *r3_50 = r0_51;
    while (r3_53 = gdd7c, reinterpret_cast<unsigned char>(r4_48) >= reinterpret_cast<unsigned char>(*r3_53)) {
        fun_6388(r0_51, r1_47, r2, *r3_53);
        r0_54 = gdd80;
        fun_f0cc(r0_54, 4 - r8_52);
        r3_55 = gdd84;
        *reinterpret_cast<void***>(r3_55) = reinterpret_cast<void**>(0xffffffff);
        r0_56 = gdd88;
        r2_57 = gdd8c;
        r12_58 = reinterpret_cast<void**>(0);
        while (1) {
            r1_59 = gdd90;
            z60 = r12_58 == 0;
            if (z60) {
                *reinterpret_cast<void***>(r1_59) = r1_59 + 0xb0;
            }
            if (!z60) {
                r3_61 = gdd90;
                less_or_equal62 = reinterpret_cast<signed char>(r12_58) <= reinterpret_cast<signed char>(10);
                *reinterpret_cast<int32_t*>(r2_57 + 0xfffffff0) = r0_56;
                if (!less_or_equal62) {
                    *reinterpret_cast<void***>(r3_61 + 0xb4) = r3_61;
                }
                if (!less_or_equal62) 
                    goto label_18;
            }
            *reinterpret_cast<void***>(r2_57 + 0xfffffff4) = r2_57;
            addr_dad8_20:
            *reinterpret_cast<void***>(r2_57 + 0xfffffffc) = r12_58;
            ++r12_58;
            *reinterpret_cast<int32_t*>(r2_57 + 0xfffffff8) = 1;
            r0_56 = r0_56 + 16;
            r2_57 = r2_57 + 16;
            if (reinterpret_cast<int1_t>(r12_58 == 12)) 
                break;
            continue;
            label_18:
            goto addr_dad8_20;
        }
        r3_63 = gdd94;
        *reinterpret_cast<void***>(r3_63) = r12_58;
        r0_64 = fun_5eb8(0, 11, r2_57, r3_63, v33, v35, v37, v39, v41, v43, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29);
        r6_65 = gdd90;
        r5_66 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r6_65) + (reinterpret_cast<unsigned char>(r0_64) << 4));
        fun_d9b4(r5_66, 11, r2_57);
        fun_d9b4(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r6_65) + reinterpret_cast<unsigned char>(r0_64) << 4), 11, r2_57);
        fun_d9b4(*reinterpret_cast<void***>(r5_66 + 4), 11, r2_57);
        r0_67 = fun_5eb8(0, 11, r2_57, r3_63, v33, v35, v37, v39, v41, v43, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29);
        r5_68 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r6_65) + (reinterpret_cast<unsigned char>(r0_67) << 4));
        fun_d9b4(r5_68, 11, r2_57);
        fun_d9b4(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r6_65) + reinterpret_cast<unsigned char>(r0_67) << 4), 11, r2_57);
        fun_d9b4(*reinterpret_cast<void***>(r5_68 + 4), 11, r2_57);
        r0_69 = fun_5eb8(0, 11, r2_57, r3_63, v33, v35, v37, v39, v41, v43, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29);
        r5_70 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r6_65) + (reinterpret_cast<unsigned char>(r0_69) << 4));
        fun_d9b4(r5_70, 11, r2_57);
        fun_d9b4(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r6_65) + reinterpret_cast<unsigned char>(r0_69) << 4), 11, r2_57);
        fun_d9b4(*reinterpret_cast<void***>(r5_70 + 4), 11, r2_57);
        r7_71 = 7;
        while (1) {
            r1_47 = reinterpret_cast<void**>(11);
            r0_72 = fun_5eb8(0, 11, r2_57, r3_63, v33, v35, v37, v39, v41, v43, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29);
            r4_73 = gdd90;
            r6_74 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r4_73) + (reinterpret_cast<unsigned char>(r0_72) << 4));
            fun_d9b4(r6_74, 11, r2_57);
            fun_d9b4(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r4_73) + reinterpret_cast<unsigned char>(r0_72) << 4), 11, r2_57);
            --r7_71;
            fun_d9b4(*reinterpret_cast<void***>(r6_74 + 4), 11, r2_57);
            if (r7_71 <= 0) {
                r3_75 = gdd94;
                r3_63 = *reinterpret_cast<void***>(r3_75);
                if (r3_63 != 12) 
                    break;
            }
        }
        r0_76 = fun_d9e8();
        while (r0_77 = fun_1054(r0_76, r1_47, r2_57, r3_63, v33, v35, v37), r5_78 = gdd7c, r2 = *r5_78, reinterpret_cast<unsigned char>(r0_77) >= reinterpret_cast<unsigned char>(r2)) {
            r3_79 = gdd94;
            r3_63 = *reinterpret_cast<void***>(r3_79);
            if (reinterpret_cast<int1_t>(r3_63 == 12)) 
                goto addr_dcb8_30;
            r1_47 = gdd98;
            r0_80 = fun_1107c((reinterpret_cast<unsigned char>(r2) - reinterpret_cast<unsigned char>(r0_77)) * reinterpret_cast<unsigned char>(43), r1_47, 43);
            r2_57 = gdd84;
            r3_81 = *reinterpret_cast<void***>(r2_57);
            r5_82 = r0_80;
            if (r0_80 != r3_81) {
                *reinterpret_cast<void***>(r2_57) = r0_80;
                r6_83 = gdd9c;
                r4_84 = reinterpret_cast<void**>(0);
                while (1) {
                    less_or_equal85 = reinterpret_cast<signed char>(r4_84) <= reinterpret_cast<signed char>(r5_82);
                    if (!less_or_equal85) {
                        r2_57 = reinterpret_cast<void**>(0);
                    }
                    if (less_or_equal85) {
                        r2_57 = reinterpret_cast<void**>(1);
                    }
                    ++r4_84;
                    r1_47 = *r6_83;
                    r6_83 = r6_83 + 8;
                    r0_86 = fun_62e4(*(r6_83 - 4), r1_47, r2_57, r3_81);
                    if (reinterpret_cast<int1_t>(r4_84 == 44)) 
                        break;
                }
                fun_6334(r0_86, r1_47, r2_57, r3_81);
            }
            r5_87 = gdda0;
            r4_88 = gdd90;
            while (1) {
                r0_89 = fun_6e8c(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r5_87))), r1_47, r2_57);
                ++r5_87;
                r0_76 = r4_88;
                if (r0_89) {
                    fun_d9b4(r0_76, r1_47, r2_57);
                    fun_d9b4(*reinterpret_cast<void***>(r4_88), r1_47, r2_57);
                    fun_d9b4(*reinterpret_cast<void***>(r4_88 + 4), r1_47, r2_57);
                    fun_d9e8();
                    r3_90 = gdd94;
                    r0_91 = gdda4;
                    r1_47 = *reinterpret_cast<void***>(r3_90);
                    r0_76 = fun_6214(r0_91, r1_47, r2_57);
                }
                r3_63 = gdda8;
                r4_88 = r4_88 + 16;
                if (r5_87 == r3_63) 
                    break;
            }
        }
        addr_dcb8_30:
        r0_51 = fun_1054(r0_77, r1_47, r2, r3_63, v33, v35, v37);
        r4_48 = r0_51;
        if (reinterpret_cast<int32_t>(r8_52) <= reinterpret_cast<int32_t>(2)) {
            if (reinterpret_cast<unsigned char>(r0_51) >= reinterpret_cast<unsigned char>(*r5_78)) {
                r0_92 = gddac;
                fun_10464(r0_92, r1_47, r2);
                fun_eb7c(0xc8, r1_47, r2, *r5_78, v33, v35, v37);
                r0_51 = fun_1054(0xc8, r1_47, r2, *r5_78, v33, v35, v37);
                r2 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0_51) - reinterpret_cast<unsigned char>(r4_48));
                *r5_78 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*r5_78) + reinterpret_cast<unsigned char>(r2));
                r4_48 = r0_51;
            }
        }
        ++r8_52;
        if (r8_52 == 4) 
            goto addr_dd08_54;
    }
    addr_dd08_54:
    r4_93 = gdda0;
    while (fun_6290(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r4_93))), 2, 0), ++r4_93, fun_6290(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r4_93))), 4, 0), r3_94 = gdda8, r4_93 != r3_94) {
    }
    fun_6f74(0xffffffff, 1, 0);
    fun_6388(0xffffffff, 1, 0, r3_94);
    r3_95 = gdd94;
    r0_96 = *reinterpret_cast<void***>(r3_95);
    z97 = reinterpret_cast<int1_t>(r0_96 == 12);
    if (!z97) {
        r0_96 = reinterpret_cast<void**>(0);
    }
    if (z97) {
        r0_96 = reinterpret_cast<void**>(1);
    }
    return r0_96;
}

int32_t fun_1070(void* r0, void*** r1, void** r2);

void** fun_dd78(uint32_t r0, int64_t* r1) {
    int1_t z3;
    int64_t v4;
    int32_t r12_5;
    int1_t n6;
    uint32_t r8_7;
    int32_t r8_8;
    uint32_t r8_9;
    int32_t r8_10;
    int1_t n11;
    uint32_t r8_12;
    int1_t n13;
    uint32_t r8_14;
    int1_t n15;
    uint32_t r12_16;
    uint32_t r12_17;
    int1_t n18;
    uint32_t r12_19;
    int1_t n20;
    uint32_t r12_21;
    int32_t r8_22;
    uint32_t r12_23;
    int32_t r8_24;
    int1_t n25;
    uint32_t r12_26;
    int32_t r9_27;
    int1_t z28;
    int1_t z29;
    uint32_t r12_30;
    uint32_t r12_31;
    int1_t n32;
    uint32_t r4_33;
    int1_t z34;
    void** r2_35;
    uint32_t r12_36;
    int1_t n37;
    int1_t z38;
    uint32_t r12_39;
    void*** sp40;
    int32_t r0_41;
    int1_t z42;
    void** r0_43;
    void** r1_44;
    void** v45;
    void** v46;
    void** r3_47;
    void** r0_48;

    if (z3) {
        *r1 = v4;
        r1 = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(r1) - r12_5);
    }
    if (n6) {
        r0 = r0 & (r8_7 >> r8_8 | r8_9 << reinterpret_cast<uint32_t>(32 - r8_10));
    }
    if (n11) {
        r1 = reinterpret_cast<int64_t*>(r0 & r0 << r8_12);
    }
    if (n13) {
        r0 = r0 & r8_14 >> 9;
    }
    if (n15) {
        r0 = r0 & (r12_16 >> 16 | r12_17 << 16);
    }
    if (n18) {
        r0 = r0 & r12_19 << 17;
    }
    if (n20) {
        r0 = r0 & (r12_21 >> r8_22 | r12_23 << reinterpret_cast<uint32_t>(32 - r8_24));
    }
    if (n25) {
        r0 = r0 & r12_26 >> r9_27;
    }
    if (z28) {
        r1 = reinterpret_cast<int64_t*>(r0 * 0xdda0);
    }
    if (z29) {
        r1 = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(r1) & (r12_30 >> reinterpret_cast<int32_t>(__zero_stack_offset()) | r12_31 << reinterpret_cast<uint32_t>(32 - reinterpret_cast<int32_t>(__zero_stack_offset()))));
    }
    if (n32) {
        r0 = r0 & r4_33;
    }
    if (z34) {
        r2_35 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r1) & r12_36 << reinterpret_cast<uint32_t>(r1));
    }
    if (n37) {
        r0 = r0 & r0 << r0;
    }
    if (z38) {
        r2_35 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r1) & r12_39 >> 2);
    }
    sp40 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 - 8);
    fun_ea30(r0);
    r0_41 = fun_1070(sp40 + 4, sp40, r2_35);
    z42 = r0_41 == 0;
    r0_43 = reinterpret_cast<void**>(0);
    r1_44 = reinterpret_cast<void**>(0);
    if (z42) {
        r0_43 = v45;
    }
    if (z42) {
        r1_44 = v46;
    }
    r0_48 = fun_5808(r0_43, r1_44, r2_35, r3_47);
    fun_e9ec();
    return r0_48;
}

void fun_de74() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_de98(int32_t r0) {
    goto r0;
}

struct s71 {
    void** f0;
    signed char[3] pad4;
    int32_t f4;
};

struct s71* gebe8 = reinterpret_cast<struct s71*>(0x12160);

void** gebec = reinterpret_cast<void**>(4);

int32_t fun_df18() {
    void** v1;
    void** r4_2;
    struct s71* r4_3;
    int32_t* r5_4;
    void** r1_5;
    void** r2_6;
    void** r0_7;

    v1 = r4_2;
    r4_3 = gebe8;
    r5_4 = &r4_3->f4;
    while (r1_5 = gebec, ++r4_3, !!r4_3->f0) {
        r0_7 = fun_eafc(r4_3->f0, r1_5, r2_6, r4_3->f0, v1);
        if (!r0_7) 
            goto addr_ebbc_6;
        r5_4 = r5_4 + 2;
    }
    return -2;
    addr_ebbc_6:
    return *r5_4;
}

void** fun_107c(void** r0, void** r1, void** r2, uint32_t r3, void** a5);

void** fun_df60(void** r0, void** r1, void** r2, void** r3, void** a5) {
    void*** sp6;
    void** r9_7;
    void** r6_8;
    void** r5_9;
    void** r0_10;
    void** r8_11;
    void** r0_12;
    void** r3_13;
    void** v14;
    void** r0_15;
    void** r0_16;
    void** v17;
    void** r4_18;
    void** r0_19;
    void** v20;
    void** v21;
    void* v22;
    void** r0_23;
    void** r4_24;
    void** v25;

    sp6 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 32 - 52);
    r9_7 = r1;
    r6_8 = r2;
    r5_9 = r0;
    r0_10 = fun_df1c(r0, r1, r2, r3);
    r8_11 = r0_10;
    if (reinterpret_cast<signed char>(r8_11) < reinterpret_cast<signed char>(0) == __intrinsic()) {
        r0_12 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r5_9 + 12))));
        r2 = r3;
        r3_13 = reinterpret_cast<void**>(sp6 + 48);
        v14 = reinterpret_cast<void**>(sp6 + 44);
        r0_15 = fun_deb0(r0_12, r6_8, r2, r3_13, v14);
        r0_16 = fun_111bc(r6_8, static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r5_9 + 12))), r2, r3_13, v14);
        if (!r0_16) {
            goto addr_dfd0_5;
        }
        r1 = r5_9;
        r2 = v17;
        r0_10 = fun_1078(sp6 + 4, r1, r2, r3_13, v14);
        r8_11 = r0_10;
        if (reinterpret_cast<signed char>(r8_11) < reinterpret_cast<signed char>(0) == __intrinsic()) {
            addr_dfd0_5:
            r4_18 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r5_9 + 12))));
            r0_19 = fun_111bc(reinterpret_cast<unsigned char>(r6_8) + reinterpret_cast<unsigned char>(r3), r4_18, r2, r3_13, v14);
            if (!r0_19) {
                goto addr_e010_9;
            }
        }
    }
    addr_e06c_10:
    if (!(reinterpret_cast<unsigned char>(a5) & 2)) {
        fun_1080(r0_10, r1, r2, a5, v14, v20, v21);
    }
    return r8_11;
    r3_13 = reinterpret_cast<void**>(sp6 + 4);
    r2 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0_15) + reinterpret_cast<uint32_t>(v22) - 1);
    r1 = r5_9;
    r0_10 = fun_1078(reinterpret_cast<unsigned char>(r4_18) * reinterpret_cast<unsigned char>(r0_15 - 1) + reinterpret_cast<unsigned char>(r3_13), r1, r2, r3_13, v14);
    r8_11 = r0_10;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r8_11) < reinterpret_cast<signed char>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(r8_11 == 0)) {
        goto addr_e06c_10;
    } else {
        addr_e010_9:
        r0_23 = fun_111bc(r6_8, static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r5_9 + 12))), r2, r3_13, v14);
        r4_24 = reinterpret_cast<void**>(sp6 + 4);
        r2 = r3;
        fun_e7e0(reinterpret_cast<unsigned char>(r4_24) + reinterpret_cast<unsigned char>(r0_23), r9_7, r2, r3_13, v14);
    }
    while (r1 = r4_24, r0_10 = r5_9, __intrinsic()) {
        r2 = v25;
        r0_10 = fun_107c(r0_10, r1, r2, static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r5_9 + 12))), v14);
        r8_11 = r0_10;
        if (reinterpret_cast<signed char>(r8_11) < reinterpret_cast<signed char>(0) != __intrinsic()) 
            goto label_18;
        r2 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r5_9 + 12))));
        ++v25;
        r4_24 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r4_24) + reinterpret_cast<unsigned char>(r2));
    }
    goto addr_e06c_10;
    label_18:
    goto addr_e06c_10;
}

void fun_e3e0(int32_t r0) {
    int1_t n2;
    int1_t n3;

    if (n2) {
    }
    if (!n3) 
        goto "???";
}

void fun_e7d8(int32_t r0) {
    int1_t n2;
    int1_t n3;

    if (n2) {
    }
    if (!n3) 
        goto "???";
}

void fun_ea24(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;
    int1_t z5;

    if (z3) {
    }
    if (z4) {
    }
    if (!z5) 
        goto "???";
}

void fun_ea74(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;
    int1_t z5;
    int1_t n6;

    if (z3) {
    }
    if (z4) {
    }
    if (z5) {
    }
    if (!n6) 
        goto "???";
}

int32_t geb90 = 0xf00;

int32_t fun_eb88() {
    int32_t r0_1;

    r0_1 = geb90;
    return r0_1;
}

void fun_eb9c(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

int32_t fun_ebe8(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;

    if (z3) {
    }
    if (z4) {
    }
    return 0;
}

void* gecb0 = reinterpret_cast<void*>(0x400004b0);

void fun_ebf8(void* r0, void* r1) {
    void* lr3;
    int1_t z4;
    void* r2_5;
    void* r3_6;
    int1_t z7;
    void* r12_8;
    void* r3_9;
    void* r2_10;
    uint32_t r3_11;
    void* r2_12;
    uint32_t r3_13;
    int1_t z14;

    lr3 = __return_address();
    z4 = r0 == 0;
    if (!z4) {
        r2_5 = reinterpret_cast<void*>(0);
    }
    if (!z4) {
        lr3 = reinterpret_cast<void*>(0xffffffff);
    }
    if (!z4) {
        while (r3_6 = reinterpret_cast<void*>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r2_5) + reinterpret_cast<uint32_t>(r0)))), !!r3_6) {
            if (r3_6 == 47) {
                lr3 = r2_5;
            }
            r2_5 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r2_5) + 1);
        }
        z7 = reinterpret_cast<int1_t>(lr3 == -1);
        if (z7) 
            goto addr_ec30_13;
    } else {
        goto addr_ec64_15;
    }
    r2_5 = gecb0;
    addr_ec30_13:
    if (!z7) {
        r12_8 = r3_6;
    }
    if (!z7) {
        while (r2_5 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r2_5) + 1), reinterpret_cast<int32_t>(r12_8) <= reinterpret_cast<int32_t>(lr3)) {
            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r2_5) + 0xffffffff) = static_cast<signed char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r12_8) + reinterpret_cast<uint32_t>(r0))));
            r12_8 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r12_8) + 1);
        }
    } else {
        goto addr_ec64_15;
    }
    addr_eca0_25:
    r3_9 = gecb0;
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r3_9) + reinterpret_cast<uint32_t>(r12_8)) = 0;
    return;
    addr_ec64_15:
    r2_10 = gecb0;
    r12_8 = reinterpret_cast<void*>(0);
    while (r3_11 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r12_8) + reinterpret_cast<uint32_t>(r1)), r2_10 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r2_10) + 1), !!r3_11) {
        r12_8 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r12_8) + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r2_10) + 0xffffffff) = static_cast<signed char>(r3_11);
    }
    if (!r12_8) {
        goto addr_eca0_25;
    } else {
        r2_12 = gecb0;
        r3_13 = *reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(r12_8) + reinterpret_cast<uint32_t>(r2_12) + 0xffffffff);
        z14 = r3_13 == 47;
        if (!z14) {
            r3_13 = 47;
        }
        if (!z14) {
            *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(r2_12) + reinterpret_cast<uint32_t>(r12_8)) = static_cast<signed char>(r3_13);
        }
        if (!z14) {
            r12_8 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r12_8) + 1);
            goto addr_eca0_25;
        }
    }
}

void fun_ecb0(int16_t* r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
    *r0 = static_cast<int16_t>(reinterpret_cast<int32_t>(r0));
}

void fun_ece0(int16_t* r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
    *r0 = static_cast<int16_t>(reinterpret_cast<int32_t>(r0));
}

void fun_ed24(int16_t* r0, int32_t r1) {
    int1_t n3;
    int1_t z4;

    if (n3) {
        *r0 = static_cast<int16_t>(reinterpret_cast<int32_t>(r0));
    }
    if (!z4) 
        goto "???";
}

uint32_t* gf28c = reinterpret_cast<uint32_t*>(0x40000ec4);

int32_t fun_f278(uint32_t r0) {
    int1_t n2;
    int32_t r8_3;
    uint32_t* r3_4;

    if (n2) {
        r0 = r0 & reinterpret_cast<uint32_t>(r8_3 >> 29);
    }
    r3_4 = gf28c;
    *r3_4 = r0;
    return 0;
}

void fun_f28c(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_f2c4() {
    goto 0xf354;
}

void fun_f374(int32_t r0) {
    int1_t n2;
    int1_t n3;
    int1_t n4;
    int1_t n5;

    if (n2) {
    }
    if (n3) {
    }
    if (n4) {
    }
    if (!n5) 
        goto "???";
    __asm__("ldrdmi r0, r1, [r0], -r0");
}

void fun_f3b0(uint32_t r0) {
    int1_t z2;
    uint32_t r4_3;
    int1_t n4;
    int1_t n5;

    if (z2) {
        goto r0 & r0 << r4_3;
    } else {
        if (n4) {
            __asm__("ldrdmi r0, r1, [r0], -ip");
        }
        if (!n5) 
            goto "???";
        __asm__("ldrdmi r1, r2, [r0], -ip");
    }
}

void fun_f4c0(int32_t r0, int64_t* r1) {
    int1_t z3;
    int64_t v4;

    if (!z3) 
        goto "???";
    *r1 = v4;
}

void fun_f8d8(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_f93c(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void** gf9b0 = reinterpret_cast<void**>(0x68);

void fun_f970(void** r0) {
    int1_t n2;
    uint32_t r1_3;
    int32_t r8_4;
    int32_t r2_5;
    int1_t n6;
    uint32_t r8_7;
    uint32_t r8_8;
    void** r3_9;
    void** r0_10;
    void** r2_11;
    void** r0_12;
    void** r3_13;

    if (n2) {
        r1_3 = reinterpret_cast<unsigned char>(r0) & reinterpret_cast<uint32_t>(r8_4 >> r2_5);
    }
    if (n6) {
        r1_3 = reinterpret_cast<unsigned char>(r0) & (r8_7 >> 4 | r8_8 << 28);
    }
    r3_9 = reinterpret_cast<void**>(r1_3 << 16);
    r0_10 = gf9b0;
    fun_1118(r0_10, 0xffffffff, r2_11, r3_9);
    r0_12 = fun_f898(r0, 0xffffffff);
    r3_13 = r0_12;
    if (r3_13) {
        *reinterpret_cast<void***>(r3_13 + 12) = reinterpret_cast<void**>(static_cast<uint16_t>(reinterpret_cast<unsigned char>(r3_9) >> 16));
    }
    goto 0x1130;
}

void** gf9ec = reinterpret_cast<void**>(0x68);

void** fun_f9b0(void** r0) {
    int1_t n2;
    void** r0_3;
    void** r2_4;
    void** r3_5;
    void** r0_6;
    void** r4_7;
    void** r0_8;
    void** r2_9;
    void** r3_10;

    if (n2) {
    }
    r0_3 = gf9ec;
    fun_1118(r0_3, 0xffffffff, r2_4, r3_5);
    r0_6 = fun_f898(r0, 0xffffffff);
    r4_7 = r0_6;
    if (r0_6) {
        r4_7 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r0_6 + 12))));
    }
    r0_8 = gf9ec;
    fun_1130(r0_8, 0xffffffff, r2_9, r3_10);
    return r4_7;
}

void fun_f9ec(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_fa28(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_fa5c(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_fae0(int32_t r0) {
    int1_t z2;
    int1_t n3;

    if (z2) {
    }
    if (!n3) 
        goto "???";
}

void** gfd8c = reinterpret_cast<void**>(0x68);

void*** gfd90 = reinterpret_cast<void***>(0x4000125c);

void** gfd94 = reinterpret_cast<void**>(0x7c);

void** gfd98 = reinterpret_cast<void**>(1);

void** gfd9c = reinterpret_cast<void**>(0xff);

void fun_fc70() {
    int32_t r7_1;
    int32_t r1_2;
    void** r1_3;
    void** r2_4;
    void** r0_5;
    void** r2_6;
    void** r3_7;
    void*** r3_8;
    void** r5_9;
    void** r1_10;
    void** r2_11;
    void* r0_12;
    void* r9_13;
    void** r11_14;
    void* r10_15;
    void** r8_16;
    void* r6_17;
    void** r0_18;
    void** r4_19;
    uint32_t r0_20;
    void** r0_21;
    void** r3_22;
    int1_t less_or_equal23;

    r7_1 = r1_2;
    fun_eadc(r1_3, 0, r2_4);
    r0_5 = gfd8c;
    fun_1118(r0_5, 0xffffffff, r2_6, r3_7);
    r3_8 = gfd90;
    r5_9 = *r3_8;
    while (r5_9) {
        r1_10 = gfd94;
        r2_11 = *reinterpret_cast<void***>(r5_9 + 4);
        r0_12 = reinterpret_cast<void*>(*reinterpret_cast<void***>(r5_9)(0, r1_10, r2_11));
        r9_13 = r0_12;
        r11_14 = *reinterpret_cast<void***>(r5_9 + 28);
        if (reinterpret_cast<int32_t>(r9_13) < 0 == __intrinsic()) {
            r10_15 = reinterpret_cast<void*>(0);
            r8_16 = gfd94;
            r6_17 = reinterpret_cast<void*>(0);
            while (r10_15 != r9_13) {
                r1_10 = *reinterpret_cast<void***>(r5_9 + 16);
                if (r1_10) {
                    r0_18 = fun_1107c(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r5_9 + 20)) * static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(r8_16))), r1_10, r2_11);
                    r4_19 = *reinterpret_cast<void***>(r5_9 + 20) - 1;
                    *reinterpret_cast<void***>(r8_16) = reinterpret_cast<void**>(static_cast<uint16_t>(reinterpret_cast<uint32_t>(r0_18)));
                    *reinterpret_cast<void***>(r5_9 + 20) = r4_19;
                    if (!r4_19) 
                        goto addr_fcfc_12;
                }
                r0_20 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r5_9 + 12));
                if (r0_20 != 0xff) {
                    r0_21 = fun_1107c(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(r8_16)) * r0_20, 0xff, r2_11);
                    r2_11 = reinterpret_cast<void**>(*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(r6_17) - r7_1) + reinterpret_cast<unsigned char>(r0_21));
                } else {
                    r2_11 = reinterpret_cast<void**>(*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(r6_17) - r7_1) + reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(r8_16)))));
                }
                r3_22 = gfd98;
                if (reinterpret_cast<signed char>(r2_11) >= reinterpret_cast<signed char>(r3_22)) {
                    r3_22 = gfd9c;
                    less_or_equal23 = reinterpret_cast<signed char>(r2_11) <= reinterpret_cast<signed char>(r3_22);
                    if (less_or_equal23) {
                        *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(r6_17) - r7_1) = static_cast<int16_t>(reinterpret_cast<uint32_t>(r2_11));
                    }
                    if (less_or_equal23) 
                        goto label_24;
                }
                *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(r6_17) - r7_1) = static_cast<int16_t>(reinterpret_cast<uint32_t>(r3_22));
                addr_fd50_26:
                r10_15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(r10_15) + 1);
                r6_17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(r6_17) + 2);
                r8_16 = r8_16 + 2;
                continue;
                label_24:
                goto addr_fd50_26;
            }
            goto addr_fd64_27;
        }
        addr_fcfc_12:
        fun_f8dc(r5_9, r1_10, r2_11);
        addr_fd64_27:
        r5_9 = r11_14;
    }
    goto 0x1130;
}

void fun_fd8c(int32_t r0) {
    int1_t n2;
    int1_t n3;
    int1_t n4;

    if (n2) {
    }
    if (n3) {
    }
    if (n4) {
    }
}

void fun_fe54(int32_t r0) {
    int1_t n2;
    int1_t n3;
    int1_t n4;
    int1_t n5;
    int1_t n6;
    int1_t n7;

    if (n2) {
    }
    if (n3) {
    }
    if (n4) {
    }
    if (n5) {
    }
    if (n6) {
        __asm__("ldrdmi r1, r2, [r0], -r0");
    }
    if (!n7) 
        goto "???";
}

void fun_10038() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_1009c(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void** g105d4 = reinterpret_cast<void**>(40);

void** g105d8 = reinterpret_cast<void**>(0xd0);

uint32_t fun_1046c(int32_t r0, void** r1, void** r2, void** r3, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** v11;
    void** r4_12;
    void** v13;
    void** r5_14;
    void** v15;
    void** r6_16;
    void** v17;
    void** r7_18;
    void** v19;
    void** r8_20;
    void** v21;
    void** r9_22;
    void** v23;
    void** r10_24;
    void** v25;
    void** sp26;
    void** r0_27;
    void** r1_28;
    void** r8_29;
    void** r10_30;
    void** r0_31;
    int1_t less32;
    int1_t z33;
    uint32_t r6_34;
    void** r0_35;
    int1_t z36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** r0_43;
    void* r6_44;
    void** r5_45;
    void** v46;
    void** v47;
    int32_t v48;
    void** v49;
    void** v50;

    v11 = r4_12;
    v13 = r5_14;
    v15 = r6_16;
    v17 = r7_18;
    v19 = r8_20;
    v21 = r9_22;
    v23 = r10_24;
    v25 = reinterpret_cast<void**>(__return_address());
    sp26 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 32 - 24);
    r0_27 = g105d4;
    r1_28 = reinterpret_cast<void**>(0xffffffff);
    r8_29 = r2;
    fun_1118(r0_27, 0xffffffff, r2, r3);
    if (!r0) {
        r10_30 = r8_29 + 12;
        r1_28 = r1;
        r2 = reinterpret_cast<void**>(0x100);
        r0_31 = fun_105dc(r10_30, r1_28, 0x100);
        less32 = reinterpret_cast<signed char>(r0_31) < reinterpret_cast<signed char>(0);
        if (!r0_31) 
            goto addr_104bc_4;
    } else {
        if (r0 != 1) {
            goto addr_105b4_7;
        } else {
            r1_28 = g105d8;
            r2 = reinterpret_cast<void**>(0);
            while (1) {
                r3 = *reinterpret_cast<void***>(r8_29 + 8);
                z33 = (reinterpret_cast<unsigned char>(r3) & 1) == 0;
                if (!z33) {
                    r3 = reinterpret_cast<void**>(0);
                }
                ++r2;
                if (!z33) {
                    *reinterpret_cast<void***>(r1_28) = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint32_t>(r3)));
                }
                r1_28 = r1_28 + 30;
                if (reinterpret_cast<int1_t>(r2 == 32)) 
                    break;
            }
            fun_fe70(r8_29 + 12, r1_28, r2, r3);
            goto addr_105b4_7;
        }
    }
    if (less32) 
        goto addr_10578_19;
    r6_34 = reinterpret_cast<unsigned char>(r0_31) >> 1;
    addr_10578_19:
    if (less32) {
        goto addr_105bc_23;
    }
    addr_105c0_24:
    r0_35 = g105d4;
    fun_1130(r0_35, r1_28, r2, r3);
    return r6_34;
    addr_105bc_23:
    r6_34 = 0xffffffff;
    goto addr_105c0_24;
    addr_104bc_4:
    r2 = *reinterpret_cast<void***>(r8_29 + 8);
    z36 = r2 == 0;
    while (!z36) {
        if (reinterpret_cast<unsigned char>(r2) & 1) 
            goto addr_104d4_27;
        ++r0_31;
        z36 = reinterpret_cast<int1_t>(r0_31 == 32);
    }
    addr_10554_31:
    r3 = *reinterpret_cast<void***>(r8_29 + 4);
    if (!r3) {
        goto addr_105bc_23;
    } else {
        r0_43 = fun_fe6c(r10_30, r1_28, r2, r3, v37, v38, v39, v40, v41, v42, v11, v13, v15, v17, v19, v21, v23, v25, a5, a6, a7, a8, a9, a10);
        if (!r0_43) {
            goto addr_105bc_23;
        }
    }
    addr_105b4_7:
    r6_34 = 0;
    goto addr_105c0_24;
    addr_104d4_27:
    __asm__("bic r3, r2, r3, lsl r0");
    *reinterpret_cast<void***>(r8_29 + 8) = reinterpret_cast<void**>(1);
    if (reinterpret_cast<signed char>(r0_31) <= reinterpret_cast<signed char>(-1)) {
        goto addr_10554_31;
    } else {
        r3 = reinterpret_cast<void**>(30);
        r6_44 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r0_31) * reinterpret_cast<unsigned char>(30));
        r5_45 = g105d8;
        fun_ffa0(sp26, reinterpret_cast<uint32_t>(r6_44) + reinterpret_cast<unsigned char>(r5_45), 0);
        r1_28 = v46;
        r2 = v47;
        __asm__("stm r4, {r0, r1, r2}");
        *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(r6_44) + reinterpret_cast<unsigned char>(r5_45)) = reinterpret_cast<void**>(0);
        if (v48) 
            goto addr_10534_39;
    }
    goto addr_105bc_23;
    addr_10534_39:
    fun_fe70(r10_30, r1_28, r2, 30);
    r1_28 = v49;
    r2 = v50;
    r3 = r8_29 + 12;
    r6_34 = 0;
    __asm__("stm r3, {r0, r1, r2}");
    goto addr_105c0_24;
}

struct s72 {
    signed char[16] pad16;
    struct s72* f16;
};

struct s72** g10894 = reinterpret_cast<struct s72**>(0x40001750);

void fun_10868() {
    struct s72** r3_1;
    struct s72* r3_2;
    struct s72* r2_3;

    r3_1 = g10894;
    r3_2 = *r3_1;
    if (!r3_2) {
        return;
    }
    r2_3 = r3_2;
    while (r2_3 = r2_3->f16, !!r2_3) {
        if (r2_3 == r3_2) 
            goto addr_10890_6;
    }
    return;
    addr_10890_6:
    return;
}

void fun_10894(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_108ac() {
    int32_t v1;

    goto v1;
}

void fun_108c8(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_10ac8(int32_t r0) {
    int1_t n2;
    int1_t n3;

    if (n2) {
    }
    if (!n3) 
        goto "???";
}

void fun_10af0(int32_t r0) {
    int1_t n2;
    int1_t z3;

    if (n2) {
    }
    if (!z3) 
        goto "???";
}

uint32_t fun_10d0c(uint32_t r0) {
    __asm__("mrs r0, apsr");
    return (r0 >> 7 ^ 1) & 1;
}

void fun_10ee0(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_3508() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;
    void** r3_8;
    void** r3_9;
    void** r3_10;

    fun_62e4(10, 2, 1, r3_1);
    fun_62e4(10, 3, 1, r3_2);
    fun_62e4(10, 4, 1, r3_3);
    fun_62e4(9, 5, 1, r3_4);
    fun_62e4(8, 5, 1, r3_5);
    fun_62e4(7, 5, 1, r3_6);
    fun_62e4(6, 5, 1, r3_7);
    fun_62e4(6, 4, 1, r3_8);
    fun_62e4(6, 3, 1, r3_9);
    fun_62e4(6, 2, 1, r3_10);
    goto 0x31f4;
}

void fun_47ac() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    fun_62e4(7, 7, 1, r3_4);
    fun_62e4(6, 7, 1, r3_5);
    goto 0x4938;
}

void fun_447c() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;
    void** r3_8;
    void** r3_9;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    fun_62e4(7, 7, 1, r3_4);
    fun_62e4(6, 7, 1, r3_5);
    fun_62e4(5, 7, 1, r3_6);
    fun_62e4(4, 7, 1, r3_7);
    fun_62e4(4, 6, 1, r3_8);
    fun_62e4(4, 5, 1, r3_9);
    goto 0x47a0;
}

void fun_4a98() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    fun_62e4(7, 7, 1, r3_4);
    fun_62e4(6, 7, 1, r3_5);
    fun_62e4(5, 7, 1, r3_6);
    fun_62e4(4, 7, 1, r3_7);
    goto 0x5458;
}

void fun_5394() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    fun_62e4(7, 7, 1, r3_4);
    fun_62e4(6, 7, 1, r3_5);
    goto 0x5640;
}

void fun_5adc(int32_t r0) {
    int1_t n2;
    int1_t n3;

    if (n2) {
    }
    if (!n3) 
        goto "???";
}

void* g5eb4 = reinterpret_cast<void*>(0x11408);

void* fun_5e64(void* r0, void*** r1, void* r2) {
    uint32_t lr4;
    void* r4_5;
    uint32_t r12_6;
    int1_t less7;
    uint32_t r3_8;
    int1_t z9;
    int1_t z10;

    lr4 = reinterpret_cast<uint32_t>(__return_address());
    r4_5 = reinterpret_cast<void*>(0);
    while (1) {
        r12_6 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(r4_5) + reinterpret_cast<uint32_t>(r1));
        less7 = reinterpret_cast<int32_t>(r4_5) < reinterpret_cast<int32_t>(r2);
        if (!less7) {
            r3_8 = 0;
        }
        if (less7) {
            r3_8 = 1;
        }
        z9 = r12_6 == 0;
        if (z9) {
            lr4 = 0;
        }
        if (!z9) {
            lr4 = r3_8 & 1;
        }
        if (!lr4) 
            break;
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(r4_5) + reinterpret_cast<int32_t>(r0)) = static_cast<signed char>(r12_6);
        r4_5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(r4_5) + 1);
    }
    z10 = r3_8 == 0;
    if (!z10) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(r0) + reinterpret_cast<int32_t>(r4_5)) = static_cast<signed char>(lr4);
    }
    if (z10) {
        r0 = g5eb4;
    }
    if (z10) {
        fun_6210(r0, r1);
    }
    return r4_5;
}

void fun_618c() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_635c(int32_t r0) {
    int1_t n2;
    int1_t n3;

    if (n2) {
    }
    if (!n3) 
        goto "???";
}

uint32_t fun_6420(int32_t* r0, int32_t r1, uint32_t r2) {
    uint32_t r12_4;
    int32_t* r4_5;
    uint32_t lr6;
    uint32_t r0_7;

    r12_4 = 0;
    r4_5 = r0;
    lr6 = r2;
    do {
        r0_7 = r12_4 & 0xff;
        ++r12_4;
        if (r0_7 < lr6) 
            break;
    } while (*reinterpret_cast<int32_t*>(r1 + r0_7 << 2) != *r4_5);
    goto label_5;
    return 0xffffffff;
    label_5:
    return r0_7;
}

void fun_6470() {
    int1_t n1;
    struct s0* r0_2;
    int32_t r8_3;
    int32_t r5_4;
    void* sp5;
    void** r3_6;
    struct s0* r8_7;
    void*** v8;
    void*** r2_9;
    void** r2_10;
    void* r11_11;
    void* r1_12;
    void** r1_13;
    void** r0_14;
    void** r5_15;
    void*** r3_16;
    void** r3_17;
    int1_t z18;
    void** r7_19;
    void** r6_20;
    void** r4_21;
    void** r5_22;
    uint32_t r0_23;
    int1_t below_or_equal24;
    int1_t z25;
    int1_t z26;

    if (n1) {
        r0_2 = reinterpret_cast<struct s0*>(r8_3 * r5_4);
    }
    sp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 36 - 0x174);
    r3_6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp5) + 0x100);
    r8_7 = r0_2;
    v8 = r2_9;
    r2_10 = reinterpret_cast<void**>(32);
    r11_11 = r1_12;
    fun_eadc(reinterpret_cast<int32_t>(sp5) + 0x14c, 0, 32);
    r1_13 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp5) + 12);
    r0_14 = fun_5ae4(r8_7, r1_13, 32);
    r5_15 = r0_14;
    if (!r5_15) {
        r3_16 = g6924;
        r3_17 = *r3_16;
        z18 = r3_17 == 0;
        if (z18) {
        }
        if (!z18) {
            r7_19 = r5_15;
            r6_20 = r5_15;
            r4_21 = r3_17;
            r5_22 = r3_17;
            while (1) {
                r0_23 = fun_63a8(r5_22, r8_7, r2_10);
                if (r0_23 == 1) {
                    r3_17 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r4_21 + 12))));
                    below_or_equal24 = reinterpret_cast<unsigned char>(r3_17) <= reinterpret_cast<unsigned char>(14);
                    r2_10 = r3_17 + 1;
                    if (!below_or_equal24) {
                        r3_17 = reinterpret_cast<void**>(0xffffffff);
                    }
                    if (!below_or_equal24) {
                        *reinterpret_cast<void***>(r4_21) = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint32_t>(r3_17)));
                    }
                    if (!below_or_equal24) {
                        ++r3_17;
                    }
                    if (!below_or_equal24) {
                        *reinterpret_cast<void***>(r4_21 + 12) = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint32_t>(r3_17)));
                    }
                    if (below_or_equal24) {
                        *reinterpret_cast<void***>(r4_21 + 12) = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint32_t>(r2_10)));
                    }
                    if (below_or_equal24) {
                        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(r11_11) + reinterpret_cast<unsigned char>(r7_19) << 2) = r6_20 + 1;
                    }
                    if (below_or_equal24) {
                        r7_19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r7_19 + 1) & 0xff);
                    }
                }
                ++r6_20;
                r5_22 = r5_22 + 16;
                r4_21 = r4_21 + 16;
                if (reinterpret_cast<int1_t>(r6_20 == 8)) 
                    break;
            }
        }
        z25 = v8 == 0;
        if (!z25) {
            r3_17 = reinterpret_cast<void**>(0);
        }
        if (!z25) {
            *v8 = r3_17;
        }
        goto 0x6904;
    }
    if (reinterpret_cast<signed char>(r5_15) < reinterpret_cast<signed char>(0) != __intrinsic()) 
        goto addr_654c_34;
    fun_5998(r8_7, r1_13, 32);
    goto 0x6794;
    addr_654c_34:
    z26 = v8 == 0;
    if (!z26) {
        r3_6 = reinterpret_cast<void**>(1);
    }
    if (!z26) {
        *v8 = r3_6;
    }
    goto 0x6918;
}

void fun_6924() {
    int1_t n1;

    if (!n1) 
        goto "???";
}

void fun_666c() {
    goto 0x690c;
}

uint32_t fun_79a8(uint32_t r0, uint32_t r1, uint32_t r2) {
    return ((r2 & 0xff) - (r1 & 0xff) + 21) * (r0 & 0xff);
}

void fun_7b28(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_7db0() {
    goto 0x7ca0;
}

void** fun_10358(int32_t r0, int32_t r1, int32_t r2, int32_t r3) {
    int32_t v5;
    void** sp6;
    uint32_t r0_7;
    void** r2_8;
    int32_t v9;
    void** r0_10;

    v5 = r0;
    sp6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 16 - 4 - 88);
    r0_7 = *reinterpret_cast<unsigned char*>(&v5);
    r2_8 = reinterpret_cast<void**>(0);
    while (*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(r2_8) + reinterpret_cast<unsigned char>(sp6)) = v9, r2_8 = r2_8 + 4, !reinterpret_cast<int1_t>(r2_8 == 84)) {
    }
    r0_10 = fun_10344(r0_7, sp6, r2_8);
    return r0_10;
}

void** fun_80b8(int32_t r0, void** r1, void** r2) {
    void** r0_4;

    r0_4 = fun_7de0(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 8 + 8 + 0xfffffffc, 1, r1, r2, 1, r0);
    return r0_4;
}

void** fun_8238(uint32_t r0, void** r1, void** r2, void** r3) {
    void** sp5;
    void** r4_6;
    void** r6_7;
    uint32_t r5_8;
    void** r0_9;
    void** r3_10;
    void** r1_11;
    void** r0_12;

    sp5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 32 - 0x840 - 12);
    r4_6 = sp5;
    r6_7 = r1;
    r5_8 = r0 << 16 >> 16;
    r0_9 = fun_7dbc(r4_6, 21, r2, r3);
    r3_10 = sp5 - 88;
    r1_11 = reinterpret_cast<void**>(0);
    while (reinterpret_cast<signed char>(r1_11) < reinterpret_cast<signed char>(r0_9)) {
        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r3_10) + reinterpret_cast<unsigned char>(r1_11) << 2) = r4_6;
        ++r1_11;
        r4_6 = r4_6 + 0x65;
    }
    r0_12 = fun_102bc(r5_8, r6_7, reinterpret_cast<unsigned char>(r0_9) & 0xff, r3_10);
    return r0_12;
}

void** g8378 = reinterpret_cast<void**>(0xc8);

int32_t* g837c = reinterpret_cast<int32_t*>(0x40000664);

struct s73 {
    int32_t f0;
    signed char[8] pad12;
    int32_t f12;
};

void fun_8328(uint32_t r0) {
    int1_t n2;
    int1_t n3;
    int32_t r8_4;
    int1_t n5;
    uint32_t r4_6;
    uint32_t r4_7;
    void** r0_8;
    void** r2_9;
    void** r3_10;
    uint32_t r1_11;
    int32_t* r2_12;
    int32_t r3_13;
    struct s73* r1_14;
    int1_t z15;

    if (n2) {
        r0 = r0 & (r0 >> 13 | r0 << 19);
    }
    if (n3) {
        r0 = r0 & reinterpret_cast<uint32_t>(r8_4 >> 13);
    }
    if (n5) {
        r0 = r0 & (r4_6 >> 12 | r4_7 << 20);
    }
    r0_8 = g8378;
    fun_1118(r0_8, 0xffffffff, r2_9, r3_10);
    r1_11 = r0 * 20;
    r2_12 = g837c;
    r3_13 = *reinterpret_cast<int32_t*>(r1_11 + reinterpret_cast<int32_t>(r2_12));
    r1_14 = reinterpret_cast<struct s73*>(r1_11 + reinterpret_cast<int32_t>(r2_12));
    z15 = r3_13 == 0;
    if (!z15) {
        r3_13 = r1_14->f12;
    }
    if (!z15) {
        ++r3_13;
    }
    if (!z15) {
        r1_14->f12 = r3_13;
    }
    goto 0x1130;
}

unsigned char* g84e4 = reinterpret_cast<unsigned char*>(0x400006e0);

void** g84e8 = reinterpret_cast<void**>(0xc8);

void** g84ec = reinterpret_cast<void**>(100);

struct s74 {
    void** f0;
    signed char[3] pad4;
    int32_t f4;
    void** f8;
    signed char[3] pad12;
    int32_t f12;
    signed char f16;
};

void** g84f0 = reinterpret_cast<void**>(52);

void fun_83fc(void** r0, int32_t r1, void** r2, void** r3, unsigned char a5) {
    int1_t n6;
    int1_t n7;
    int32_t r8_8;
    int1_t n9;
    uint32_t r4_10;
    uint32_t r4_11;
    int1_t n12;
    int32_t r8_13;
    unsigned char* r12_14;
    void** r5_15;
    int32_t r10_16;
    void** r9_17;
    void** r8_18;
    uint32_t r7_19;
    void** r0_20;
    void** r2_21;
    void** r6_22;
    int1_t z23;
    void* r4_24;
    void** r12_25;
    struct s74* lr26;
    void** r1_27;
    uint32_t v28;

    if (n6) {
        r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) & (reinterpret_cast<unsigned char>(r0) >> 13 | reinterpret_cast<unsigned char>(r0) << 19));
    }
    if (n7) {
        r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) & reinterpret_cast<uint32_t>(r8_8 >> 13));
    }
    if (n9) {
        r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) & (r4_10 >> 12 | r4_11 << 20));
    }
    if (n12) {
        r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) & reinterpret_cast<uint32_t>(r8_13 >> 13));
    }
    r12_14 = g84e4;
    r5_15 = r0;
    r10_16 = r1;
    r9_17 = r2;
    r8_18 = r3;
    r7_19 = a5;
    if (!*r12_14) {
        goto fun_10960;
    }
    r0_20 = g84e8;
    fun_1118(r0_20, 0xffffffff, r2, r3);
    r2_21 = g84ec;
    r6_22 = reinterpret_cast<void**>(0);
    do {
        r2_21 = r2_21 + 20;
        if (*reinterpret_cast<void***>(r2_21) == r5_15) 
            break;
        if (!*reinterpret_cast<void***>(r2_21)) 
            goto addr_8474_15;
        ++r6_22;
    } while (r6_22 != 5);
    goto label_18;
    z23 = r5_15 == 0;
    if (!z23) {
        r0_20 = r5_15;
    }
    if (!z23) {
        fun_10a34(r0_20, 0xffffffff, r2_21);
    }
    addr_8484_24:
    r4_24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(r6_22) * 20);
    r12_25 = g84ec;
    lr26 = reinterpret_cast<struct s74*>(reinterpret_cast<uint32_t>(r4_24) + reinterpret_cast<unsigned char>(r12_25));
    *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(r4_24) + reinterpret_cast<unsigned char>(r12_25)) = r5_15;
    lr26->f4 = r10_16;
    lr26->f8 = r9_17;
    lr26->f12 = 0;
    lr26->f16 = static_cast<signed char>(r7_19);
    r1_27 = g84f0;
    v28 = r7_19;
    fun_10960(r5_15, r1_27, r6_22, r8_18, *reinterpret_cast<unsigned char*>(&v28));
    addr_84c4_25:
    goto 0x1130;
    addr_8474_15:
    goto addr_8484_24;
    label_18:
    goto addr_84c4_25;
}

void** g851c = reinterpret_cast<void**>(100);

void fun_84e4(int32_t r0) {
    int1_t n2;
    int1_t n3;
    int1_t n4;
    int1_t z5;
    void** r0_6;

    if (n2) {
    }
    if (n3) {
    }
    if (n4) {
    }
    if (z5) {
    }
    r0_6 = g851c;
    fun_eadc(r0_6, 0, 100);
    goto 0x111c;
}

void fun_f24c() {
    goto fun_eadc;
}

void fun_6218() {
    return;
}

void fun_622c(int32_t r0) {
    int1_t n2;
    int1_t n3;

    if (n2) {
    }
    if (!n3) 
        goto "???";
}

void** g93bc = reinterpret_cast<void**>(0x94);

void** g93c0 = reinterpret_cast<void**>(32);

void*** g93c4 = reinterpret_cast<void***>(0x400006fc);

void** g93c8 = reinterpret_cast<void**>(0xf8);

void** g93cc = reinterpret_cast<void**>(0xa0);

void** g93d0 = reinterpret_cast<void**>(0xa4);

void** g93d4 = reinterpret_cast<void**>(0xac);

void** g946c = reinterpret_cast<void**>(28);

void** g9470 = reinterpret_cast<void**>(64);

void** g9474 = reinterpret_cast<void**>(0x6c);

void** g9450 = reinterpret_cast<void**>(52);

void** g9458 = reinterpret_cast<void**>(0x70);

void** g9454 = reinterpret_cast<void**>(76);

void** g9464 = reinterpret_cast<void**>(0xf8);

void** g9460 = reinterpret_cast<void**>(0xb8);

void** g9468 = reinterpret_cast<void**>(0xd8);

void** g945c = reinterpret_cast<void**>(0x94);

void** g9430 = reinterpret_cast<void**>(0xa4);

void** g9434 = reinterpret_cast<void**>(0xd0);

void** g943c = reinterpret_cast<void**>(0xa0);

void** g9448 = reinterpret_cast<void**>(20);

void** g944c = reinterpret_cast<void**>(36);

void** g9440 = reinterpret_cast<void**>(0xf0);

void** g9444 = reinterpret_cast<void**>(4);

void** g9438 = reinterpret_cast<void**>(0xb0);

void** g9414 = reinterpret_cast<void**>(28);

void** g9418 = reinterpret_cast<void**>(40);

void** g941c = reinterpret_cast<void**>(68);

void** g93f8 = reinterpret_cast<void**>(0xa1);

void** g9428 = reinterpret_cast<void**>(0x84);

void** g942c = reinterpret_cast<void**>(0x94);

void** g9420 = reinterpret_cast<void**>(96);

void** g9424 = reinterpret_cast<void**>(0x74);

void** g9400 = reinterpret_cast<void**>(0xcc);

void** g9404 = reinterpret_cast<void**>(0xd4);

void** g9408 = reinterpret_cast<void**>(0xe8);

void** g9410 = reinterpret_cast<void**>(12);

void** g940c = reinterpret_cast<void**>(0xfc);

void** g93e4 = reinterpret_cast<void**>(88);

void** g93ec = reinterpret_cast<void**>(0x80);

void** g93e8 = reinterpret_cast<void**>(100);

void** g93f4 = reinterpret_cast<void**>(0xb0);

void** g93fc = reinterpret_cast<void**>(0x70);

void** g93f0 = reinterpret_cast<void**>(0x98);

void** g93dc = reinterpret_cast<void**>(0xec);

void** g93e0 = reinterpret_cast<void**>(12);

void** g93d8 = reinterpret_cast<void**>(0xc0);

void** fun_8a7c() {
    void* r11_1;
    void** r3_2;
    void** v3;
    void** r3_4;
    void** v5;
    uint32_t r0_6;
    void** r3_7;
    void** sp8;
    void** r1_9;
    void** r0_10;
    void** r2_11;
    void*** r0_12;
    void** r3_13;
    void** r1_14;
    int1_t z15;
    void** r3_16;
    void** r3_17;
    void** r3_18;
    void** r2_19;
    void** r0_20;
    void** r0_21;
    void** r7_22;
    void** r10_23;
    void** r3_24;
    void** r0_25;
    void** r5_26;
    void** r3_27;
    void** r6_28;
    void** r4_29;
    void** r4_30;
    void** r0_31;
    void** r3_32;
    void** r3_33;
    void** r3_34;
    void** r3_35;
    void** r4_36;
    void** r4_37;
    void** r0_38;
    void** r0_39;
    void** r3_40;
    void** r4_41;
    void** r2_42;
    void** r3_43;
    void** r0_44;
    void** r0_45;
    void** r0_46;
    void** r0_47;
    void** r2_48;
    void** r0_49;
    void** r6_50;
    void** r5_51;
    void** r0_52;
    void** r0_53;
    void** r0_54;
    void** r0_55;
    void** r0_56;
    void** r0_57;
    void** r0_58;
    int1_t below_or_equal59;
    void** r4_60;
    void** r3_61;
    int1_t z62;
    void** r4_63;
    void** r2_64;
    void** r0_65;
    void** r0_66;
    void** r0_67;
    void** r0_68;
    void** r3_69;
    int32_t r3_70;
    void** r4_71;
    int1_t z72;
    void** r3_73;
    void** r4_74;
    void** r2_75;
    void** r0_76;
    void** r0_77;
    void** r0_78;
    void** r0_79;
    void** r4_80;
    int1_t z81;
    int1_t z82;
    int1_t z83;
    void** r4_84;
    void** r4_85;
    void** r0_86;
    void** r0_87;
    void** r0_88;
    void** r0_89;
    void** r0_90;
    void** r2_91;
    void** r8_92;
    void** r0_93;
    void** r0_94;
    void** r0_95;
    void** r3_96;
    int1_t z97;
    void** r0_98;
    void** r0_99;
    void** r0_100;
    void** r4_101;
    int1_t z102;
    void** r0_103;
    void** r3_104;
    void** r0_105;
    void** r0_106;
    void** r3_107;

    r11_1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    fun_eadc(reinterpret_cast<int32_t>(r11_1) - 42, 0, 2);
    fun_eadc(reinterpret_cast<int32_t>(r11_1) - 45, 0, 3);
    fun_6eac(13, 1, 3, r3_2, v3);
    fun_6eac(14, 1, 3, r3_4, v5);
    r0_6 = fun_f4c4(0, 1, 3);
    r3_7 = reinterpret_cast<void**>(r0_6 * 36 + 4);
    sp8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 44 - 8 - reinterpret_cast<unsigned char>(r3_7));
    r1_9 = reinterpret_cast<void**>(r0_6 & 0xff);
    fun_f578(sp8, r1_9, 3);
    r0_10 = g93bc;
    fun_6208(r0_10, r1_9, 3, r3_7, *reinterpret_cast<void***>(sp8), *reinterpret_cast<void***>(sp8 + 4), *reinterpret_cast<void***>(sp8 + 8), *reinterpret_cast<void***>(sp8 + 12), *reinterpret_cast<void***>(sp8 + 16), *reinterpret_cast<void***>(sp8 + 20), *reinterpret_cast<void***>(sp8 + 24), *reinterpret_cast<void***>(sp8 + 28), *reinterpret_cast<void***>(sp8 + 32), *reinterpret_cast<void***>(sp8 + 36), *reinterpret_cast<void***>(sp8 + 40), *reinterpret_cast<void***>(sp8 + 44), *reinterpret_cast<void***>(sp8 + 48), *reinterpret_cast<void***>(sp8 + 52), *reinterpret_cast<void***>(sp8 + 56), *reinterpret_cast<void***>(sp8 + 60), *reinterpret_cast<void***>(sp8 + 64), *reinterpret_cast<void***>(sp8 + 68), *reinterpret_cast<void***>(sp8 + 72), *reinterpret_cast<void***>(sp8 + 76), *reinterpret_cast<void***>(sp8 + 80), *reinterpret_cast<void***>(sp8 + 84), *reinterpret_cast<void***>(sp8 + 88), *reinterpret_cast<void***>(sp8 + 92), *reinterpret_cast<void***>(sp8 + 96), *reinterpret_cast<void***>(sp8 + 100), *reinterpret_cast<void***>(sp8 + 0x68), *reinterpret_cast<void***>(sp8 + 0x6c), *reinterpret_cast<void***>(sp8 + 0x70), *reinterpret_cast<void***>(sp8 + 0x74), *reinterpret_cast<void***>(sp8 + 0x78));
    r2_11 = g93c0;
    while (1) {
        r0_12 = g93c4;
        r3_13 = g93c8;
        r1_14 = *r0_12;
        *reinterpret_cast<void***>(r3_13) = r2_11;
        z15 = r1_14 == 0;
        r3_16 = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(r2_11 + 4) = reinterpret_cast<void**>(0);
        if (!z15) {
            r3_16 = *reinterpret_cast<void***>(r1_14 + 12);
        }
        if (!z15) {
            *reinterpret_cast<void***>(r3_16 + 8) = r2_11;
        }
        if (!z15) {
            *reinterpret_cast<void***>(r2_11 + 12) = r3_16;
        }
        r3_17 = g93cc;
        if (z15) {
            *r0_12 = r2_11;
        }
        if (!z15) {
            *reinterpret_cast<void***>(r2_11 + 8) = r1_14;
        }
        if (z15) {
            *reinterpret_cast<void***>(r2_11 + 8) = r2_11;
        }
        if (z15) {
            *reinterpret_cast<void***>(r2_11 + 12) = r2_11;
        }
        if (!z15) {
            *reinterpret_cast<void***>(r1_14 + 12) = r2_11;
        }
        r2_11 = r2_11 + 16;
        if (r2_11 == r3_17) 
            break;
    }
    r3_18 = g93c0;
    r2_19 = g93c8;
    *reinterpret_cast<void***>(r2_19) = r3_18;
    *reinterpret_cast<void***>(r3_18 + 4) = reinterpret_cast<void**>(1);
    r0_20 = fun_8a50();
    r0_21 = fun_1054(r0_20, r1_14, r2_19, r3_18, *reinterpret_cast<void***>(sp8), *reinterpret_cast<void***>(sp8 + 4), *reinterpret_cast<void***>(sp8 + 8));
    r7_22 = reinterpret_cast<void**>(1);
    r10_23 = r0_21;
    while (1) {
        r3_24 = g93d0;
        r0_21 = fun_1054(r0_21, r1_14, r2_19, r3_24, *reinterpret_cast<void***>(sp8), *reinterpret_cast<void***>(sp8 + 4), *reinterpret_cast<void***>(sp8 + 8));
        if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(r10_23) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3_24))) >= reinterpret_cast<unsigned char>(r0_21)) {
            r0_25 = fun_8a30(r0_21, r1_14, r2_19, r3_24);
            r0_21 = fun_1054(r0_25, r1_14, r2_19, r3_24, *reinterpret_cast<void***>(sp8), *reinterpret_cast<void***>(sp8 + 4), *reinterpret_cast<void***>(sp8 + 8));
            r10_23 = r0_21;
        }
        r5_26 = g93c8;
        r3_27 = *reinterpret_cast<void***>(r5_26);
        r6_28 = *reinterpret_cast<void***>(r3_27);
        if (!reinterpret_cast<int1_t>(r6_28 == 1)) {
            if (reinterpret_cast<int1_t>(r6_28 == 7)) 
                goto addr_8c60_27;
        } else {
            if (reinterpret_cast<int1_t>(r7_22 == 1)) {
                fun_6388(r0_21, r1_14, r2_19, r3_27);
                fun_6334(r0_21, r1_14, r2_19, r3_27);
                r1_14 = reinterpret_cast<void**>(0xffffffff);
                r2_19 = g93d4;
                fun_6240(r7_22, 0xffffffff, r2_19);
                r0_21 = fun_8a30(r7_22, 0xffffffff, r2_19, r3_27);
                r7_22 = reinterpret_cast<void**>(0);
            }
            r0_21 = fun_8a48(r0_21, r1_14, r2_19);
            r4_29 = r0_21;
            if (reinterpret_cast<signed char>(r4_29) < reinterpret_cast<signed char>(0) == __intrinsic()) {
                r0_21 = fun_8a50();
            }
            if (reinterpret_cast<int1_t>(r4_29 == 12)) 
                goto addr_8bdc_34;
            if (!reinterpret_cast<int1_t>(r4_29 == 13)) 
                goto label_37; else 
                goto addr_8c18_38;
        }
        if (reinterpret_cast<int1_t>(r6_28 == 2)) 
            goto addr_8d14_41;
        if (reinterpret_cast<int1_t>(r6_28 == 3)) 
            goto addr_8e7c_44;
        if (reinterpret_cast<int1_t>(r6_28 == 4)) 
            goto addr_8f28_47;
        if (reinterpret_cast<int1_t>(r6_28 == 5)) 
            goto addr_9028_50;
        if (reinterpret_cast<int1_t>(r6_28 == 6)) 
            goto addr_9140_53;
        if (reinterpret_cast<int1_t>(r6_28 == 8)) 
            goto addr_92e0_56;
        continue;
        addr_92e0_56:
        if (reinterpret_cast<int1_t>(r7_22 == 1)) {
            fun_6388(r0_21, r1_14, r2_19, r3_27);
            fun_6334(r0_21, r1_14, r2_19, r3_27);
            r1_14 = reinterpret_cast<void**>(0xffffffff);
            r2_19 = g946c;
            fun_6240(r7_22, 0xffffffff, r2_19);
            r0_21 = fun_8a30(r7_22, 0xffffffff, r2_19, r3_27);
            r7_22 = reinterpret_cast<void**>(0);
        }
        r0_21 = fun_8a48(r0_21, r1_14, r2_19);
        r4_30 = r0_21;
        if (reinterpret_cast<signed char>(r4_30) < reinterpret_cast<signed char>(0) == __intrinsic()) {
            r0_21 = fun_8a50();
        }
        if (reinterpret_cast<int1_t>(r4_30 == 12)) {
            r0_31 = g9470;
            fun_6208(r0_31, r1_14, r2_19, r3_27, *reinterpret_cast<void***>(sp8), *reinterpret_cast<void***>(sp8 + 4), *reinterpret_cast<void***>(sp8 + 8), *reinterpret_cast<void***>(sp8 + 12), *reinterpret_cast<void***>(sp8 + 16), *reinterpret_cast<void***>(sp8 + 20), *reinterpret_cast<void***>(sp8 + 24), *reinterpret_cast<void***>(sp8 + 28), *reinterpret_cast<void***>(sp8 + 32), *reinterpret_cast<void***>(sp8 + 36), *reinterpret_cast<void***>(sp8 + 40), *reinterpret_cast<void***>(sp8 + 44), *reinterpret_cast<void***>(sp8 + 48), *reinterpret_cast<void***>(sp8 + 52), *reinterpret_cast<void***>(sp8 + 56), *reinterpret_cast<void***>(sp8 + 60), *reinterpret_cast<void***>(sp8 + 64), *reinterpret_cast<void***>(sp8 + 68), *reinterpret_cast<void***>(sp8 + 72), *reinterpret_cast<void***>(sp8 + 76), *reinterpret_cast<void***>(sp8 + 80), *reinterpret_cast<void***>(sp8 + 84), *reinterpret_cast<void***>(sp8 + 88), *reinterpret_cast<void***>(sp8 + 92), *reinterpret_cast<void***>(sp8 + 96), *reinterpret_cast<void***>(sp8 + 100), *reinterpret_cast<void***>(sp8 + 0x68), *reinterpret_cast<void***>(sp8 + 0x6c), *reinterpret_cast<void***>(sp8 + 0x70), *reinterpret_cast<void***>(sp8 + 0x74), *reinterpret_cast<void***>(sp8 + 0x78));
            r3_32 = *reinterpret_cast<void***>(r5_26);
            *reinterpret_cast<void***>(r3_32 + 4) = reinterpret_cast<void**>(0);
            fun_6eac(13, 0, r2_19, r3_32, *reinterpret_cast<void***>(sp8));
            fun_6eac(14, 0, r2_19, r3_32, *reinterpret_cast<void***>(sp8));
            r1_14 = reinterpret_cast<void**>(0);
            r0_21 = g9474;
            r2_19 = reinterpret_cast<void**>(0);
            fun_1024(r0_21, 0, 0);
            r7_22 = reinterpret_cast<void**>(1);
            continue;
        }
        if (reinterpret_cast<int1_t>(r4_30 == 13)) 
            goto addr_9368_66;
        if (reinterpret_cast<int1_t>(r4_30 == 14)) 
            goto addr_938c_69;
        continue;
        addr_938c_69:
        r2_19 = g93c8;
        r1_14 = *reinterpret_cast<void***>(r2_19);
        *reinterpret_cast<void***>(r1_14 + 4) = reinterpret_cast<void**>(0);
        r3_33 = *reinterpret_cast<void***>(r2_19);
        addr_93a0_71:
        r3_34 = *reinterpret_cast<void***>(r3_33 + 8);
        addr_93a4_72:
        r7_22 = reinterpret_cast<void**>(1);
        *reinterpret_cast<void***>(r2_19) = r3_34;
        continue;
        addr_9368_66:
        r2_19 = g93c8;
        r1_14 = *reinterpret_cast<void***>(r2_19);
        *reinterpret_cast<void***>(r1_14 + 4) = reinterpret_cast<void**>(0);
        r3_35 = *reinterpret_cast<void***>(r2_19);
        addr_937c_73:
        r3_34 = *reinterpret_cast<void***>(r3_35 + 12);
        goto addr_93a4_72;
        addr_9140_53:
        if (reinterpret_cast<int1_t>(r7_22 == 1)) {
            fun_6388(r0_21, r1_14, r2_19, r3_27);
            fun_6334(r0_21, r1_14, r2_19, r3_27);
            r1_14 = reinterpret_cast<void**>(0xffffffff);
            r2_19 = g9450;
            fun_6240(r7_22, 0xffffffff, r2_19);
            r0_21 = fun_8a30(r7_22, 0xffffffff, r2_19, r3_27);
            r7_22 = reinterpret_cast<void**>(0);
        }
        r0_21 = fun_8a48(r0_21, r1_14, r2_19);
        r4_36 = r0_21;
        if (reinterpret_cast<signed char>(r4_36) < reinterpret_cast<signed char>(0) == __intrinsic()) {
            r0_21 = fun_8a50();
        }
        if (!reinterpret_cast<int1_t>(r4_36 == 12)) {
            if (reinterpret_cast<int1_t>(r4_36 == 13)) 
                goto addr_9208_81;
        } else {
            r4_37 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(r5_26) + 4))));
            if (!reinterpret_cast<int1_t>(r4_37 == 1)) {
                r0_38 = g9458;
                r0_39 = fun_6208(r0_38, r1_14, r2_19, *reinterpret_cast<void***>(r5_26), *reinterpret_cast<void***>(sp8), *reinterpret_cast<void***>(sp8 + 4), *reinterpret_cast<void***>(sp8 + 8), *reinterpret_cast<void***>(sp8 + 12), *reinterpret_cast<void***>(sp8 + 16), *reinterpret_cast<void***>(sp8 + 20), *reinterpret_cast<void***>(sp8 + 24), *reinterpret_cast<void***>(sp8 + 28), *reinterpret_cast<void***>(sp8 + 32), *reinterpret_cast<void***>(sp8 + 36), *reinterpret_cast<void***>(sp8 + 40), *reinterpret_cast<void***>(sp8 + 44), *reinterpret_cast<void***>(sp8 + 48), *reinterpret_cast<void***>(sp8 + 52), *reinterpret_cast<void***>(sp8 + 56), *reinterpret_cast<void***>(sp8 + 60), *reinterpret_cast<void***>(sp8 + 64), *reinterpret_cast<void***>(sp8 + 68), *reinterpret_cast<void***>(sp8 + 72), *reinterpret_cast<void***>(sp8 + 76), *reinterpret_cast<void***>(sp8 + 80), *reinterpret_cast<void***>(sp8 + 84), *reinterpret_cast<void***>(sp8 + 88), *reinterpret_cast<void***>(sp8 + 92), *reinterpret_cast<void***>(sp8 + 96), *reinterpret_cast<void***>(sp8 + 100), *reinterpret_cast<void***>(sp8 + 0x68), *reinterpret_cast<void***>(sp8 + 0x6c), *reinterpret_cast<void***>(sp8 + 0x70), *reinterpret_cast<void***>(sp8 + 0x74), *reinterpret_cast<void***>(sp8 + 0x78));
                r3_40 = *reinterpret_cast<void***>(r5_26);
                *reinterpret_cast<void***>(r3_40 + 4) = reinterpret_cast<void**>(1);
                r4_41 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(r11_1) - 42);
                fun_6388(r0_39, r1_14, r2_19, r3_40);
                fun_6334(r0_39, r1_14, r2_19, r3_40);
                r2_42 = reinterpret_cast<void**>(2);
                fun_eadc(r4_41, 0, 2);
                r3_43 = g93d0;
                r0_44 = fun_10f6c(*reinterpret_cast<void***>(r3_43), 20, 2);
                r0_45 = reinterpret_cast<void**>(8 - reinterpret_cast<unsigned char>(r0_44));
                goto addr_8dc0_85;
            } else {
                r0_46 = g9454;
                r0_47 = fun_6208(r0_46, r1_14, r2_19, *reinterpret_cast<void***>(r5_26), *reinterpret_cast<void***>(sp8), *reinterpret_cast<void***>(sp8 + 4), *reinterpret_cast<void***>(sp8 + 8), *reinterpret_cast<void***>(sp8 + 12), *reinterpret_cast<void***>(sp8 + 16), *reinterpret_cast<void***>(sp8 + 20), *reinterpret_cast<void***>(sp8 + 24), *reinterpret_cast<void***>(sp8 + 28), *reinterpret_cast<void***>(sp8 + 32), *reinterpret_cast<void***>(sp8 + 36), *reinterpret_cast<void***>(sp8 + 40), *reinterpret_cast<void***>(sp8 + 44), *reinterpret_cast<void***>(sp8 + 48), *reinterpret_cast<void***>(sp8 + 52), *reinterpret_cast<void***>(sp8 + 56), *reinterpret_cast<void***>(sp8 + 60), *reinterpret_cast<void***>(sp8 + 64), *reinterpret_cast<void***>(sp8 + 68), *reinterpret_cast<void***>(sp8 + 72), *reinterpret_cast<void***>(sp8 + 76), *reinterpret_cast<void***>(sp8 + 80), *reinterpret_cast<void***>(sp8 + 84), *reinterpret_cast<void***>(sp8 + 88), *reinterpret_cast<void***>(sp8 + 92), *reinterpret_cast<void***>(sp8 + 96), *reinterpret_cast<void***>(sp8 + 100), *reinterpret_cast<void***>(sp8 + 0x68), *reinterpret_cast<void***>(sp8 + 0x6c), *reinterpret_cast<void***>(sp8 + 0x70), *reinterpret_cast<void***>(sp8 + 0x74), *reinterpret_cast<void***>(sp8 + 0x78));
                r2_48 = *reinterpret_cast<void***>(r5_26);
                r3_43 = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(r2_48 + 4) = reinterpret_cast<void**>(0);
                fun_6388(r0_47, r1_14, r2_48, 0);
                fun_6334(r0_47, r1_14, r2_48, 0);
                r2_19 = g9450;
                r0_49 = r4_37;
                r1_14 = reinterpret_cast<void**>(0xffffffff);
                goto addr_8dd4_87;
            }
        }
        if (reinterpret_cast<int1_t>(r4_36 == 14)) 
            goto addr_9250_90;
        continue;
        addr_9250_90:
        r2_19 = g93c8;
        r3_33 = *reinterpret_cast<void***>(r2_19);
        r6_50 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3_33 + 4))));
        if (!reinterpret_cast<int1_t>(r6_50 == 1)) {
            goto addr_93a0_71;
        } else {
            r5_51 = g93d0;
            r0_52 = g9464;
            fun_6208(r0_52, r1_14, r2_19, r3_33, *reinterpret_cast<void***>(sp8), *reinterpret_cast<void***>(sp8 + 4), *reinterpret_cast<void***>(sp8 + 8), *reinterpret_cast<void***>(sp8 + 12), *reinterpret_cast<void***>(sp8 + 16), *reinterpret_cast<void***>(sp8 + 20), *reinterpret_cast<void***>(sp8 + 24), *reinterpret_cast<void***>(sp8 + 28), *reinterpret_cast<void***>(sp8 + 32), *reinterpret_cast<void***>(sp8 + 36), *reinterpret_cast<void***>(sp8 + 40), *reinterpret_cast<void***>(sp8 + 44), *reinterpret_cast<void***>(sp8 + 48), *reinterpret_cast<void***>(sp8 + 52), *reinterpret_cast<void***>(sp8 + 56), *reinterpret_cast<void***>(sp8 + 60), *reinterpret_cast<void***>(sp8 + 64), *reinterpret_cast<void***>(sp8 + 68), *reinterpret_cast<void***>(sp8 + 72), *reinterpret_cast<void***>(sp8 + 76), *reinterpret_cast<void***>(sp8 + 80), *reinterpret_cast<void***>(sp8 + 84), *reinterpret_cast<void***>(sp8 + 88), *reinterpret_cast<void***>(sp8 + 92), *reinterpret_cast<void***>(sp8 + 96), *reinterpret_cast<void***>(sp8 + 100), *reinterpret_cast<void***>(sp8 + 0x68), *reinterpret_cast<void***>(sp8 + 0x6c), *reinterpret_cast<void***>(sp8 + 0x70), *reinterpret_cast<void***>(sp8 + 0x74), *reinterpret_cast<void***>(sp8 + 0x78));
            r0_53 = g9460;
            fun_6214(r0_53, *reinterpret_cast<void***>(r5_51), r2_19);
            r3_43 = *reinterpret_cast<void***>(r5_51);
            if (reinterpret_cast<unsigned char>(r3_43) > reinterpret_cast<unsigned char>(40)) {
                r3_43 = r3_43 - 20;
                goto addr_928c_96;
            }
        }
        addr_9290_97:
        r0_54 = g9468;
        r4_41 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(r11_1) - 42);
        r0_55 = fun_6214(r0_54, *reinterpret_cast<void***>(r5_51), r2_19);
        fun_6388(r0_55, *reinterpret_cast<void***>(r5_51), r2_19, r3_43);
        fun_6334(r0_55, *reinterpret_cast<void***>(r5_51), r2_19, r3_43);
        fun_eadc(r4_41, 0, 2);
        r0_56 = fun_10f6c(*reinterpret_cast<void***>(r5_51), 20, 2);
        fun_5d24(8 - reinterpret_cast<unsigned char>(r0_56), r4_41, 2);
        r0_49 = r6_50;
        addr_8dcc_98:
        r2_19 = r4_41;
        r1_14 = reinterpret_cast<void**>(0xffffffff);
        addr_8dd4_87:
        fun_6240(r0_49, 0xffffffff, r2_19);
        r0_21 = fun_8a30(r0_49, 0xffffffff, r2_19, r3_43);
        continue;
        addr_928c_96:
        *reinterpret_cast<void***>(r5_51) = r3_43;
        goto addr_9290_97;
        addr_9208_81:
        r2_19 = g93c8;
        r3_35 = *reinterpret_cast<void***>(r2_19);
        r6_50 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3_35 + 4))));
        if (!reinterpret_cast<int1_t>(r6_50 == 1)) {
            goto addr_937c_73;
        } else {
            r5_51 = g93d0;
            r0_57 = g945c;
            fun_6208(r0_57, r1_14, r2_19, r3_35, *reinterpret_cast<void***>(sp8), *reinterpret_cast<void***>(sp8 + 4), *reinterpret_cast<void***>(sp8 + 8), *reinterpret_cast<void***>(sp8 + 12), *reinterpret_cast<void***>(sp8 + 16), *reinterpret_cast<void***>(sp8 + 20), *reinterpret_cast<void***>(sp8 + 24), *reinterpret_cast<void***>(sp8 + 28), *reinterpret_cast<void***>(sp8 + 32), *reinterpret_cast<void***>(sp8 + 36), *reinterpret_cast<void***>(sp8 + 40), *reinterpret_cast<void***>(sp8 + 44), *reinterpret_cast<void***>(sp8 + 48), *reinterpret_cast<void***>(sp8 + 52), *reinterpret_cast<void***>(sp8 + 56), *reinterpret_cast<void***>(sp8 + 60), *reinterpret_cast<void***>(sp8 + 64), *reinterpret_cast<void***>(sp8 + 68), *reinterpret_cast<void***>(sp8 + 72), *reinterpret_cast<void***>(sp8 + 76), *reinterpret_cast<void***>(sp8 + 80), *reinterpret_cast<void***>(sp8 + 84), *reinterpret_cast<void***>(sp8 + 88), *reinterpret_cast<void***>(sp8 + 92), *reinterpret_cast<void***>(sp8 + 96), *reinterpret_cast<void***>(sp8 + 100), *reinterpret_cast<void***>(sp8 + 0x68), *reinterpret_cast<void***>(sp8 + 0x6c), *reinterpret_cast<void***>(sp8 + 0x70), *reinterpret_cast<void***>(sp8 + 0x74), *reinterpret_cast<void***>(sp8 + 0x78));
            r0_58 = g9460;
            fun_6214(r0_58, *reinterpret_cast<void***>(r5_51), r2_19);
            r3_43 = *reinterpret_cast<void***>(r5_51);
            below_or_equal59 = reinterpret_cast<unsigned char>(r3_43) <= reinterpret_cast<unsigned char>(0x8b);
            if (below_or_equal59) {
                r3_43 = r3_43 + 20;
            }
            if (!below_or_equal59) 
                goto addr_9244_103;
        }
        goto addr_928c_96;
        addr_9244_103:
        goto addr_9290_97;
        addr_8dc0_85:
        fun_5d24(r0_45, r4_41, r2_42);
        r0_49 = reinterpret_cast<void**>(1);
        goto addr_8dcc_98;
        addr_9028_50:
        if (reinterpret_cast<int1_t>(r7_22 == 1)) {
            fun_6388(r0_21, r1_14, r2_19, r3_27);
            fun_6334(r0_21, r1_14, r2_19, r3_27);
            r1_14 = reinterpret_cast<void**>(0xffffffff);
            r2_19 = g9430;
            fun_6240(r7_22, 0xffffffff, r2_19);
            r0_21 = fun_8a30(r7_22, 0xffffffff, r2_19, r3_27);
            r7_22 = reinterpret_cast<void**>(0);
        }
        r0_21 = fun_8a48(r0_21, r1_14, r2_19);
        r4_60 = r0_21;
        if (reinterpret_cast<signed char>(r4_60) < reinterpret_cast<signed char>(0) == __intrinsic()) {
            r0_21 = fun_8a50();
        }
        if (!reinterpret_cast<int1_t>(r4_60 == 12)) {
            if (reinterpret_cast<int1_t>(r4_60 == 13)) 
                goto addr_90a8_112;
        } else {
            r3_61 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(r5_26) + 4))));
            z62 = reinterpret_cast<int1_t>(r3_61 == 1);
            if (!z62) {
                r0_21 = g9434;
            }
            if (!z62) 
                goto label_116; else 
                goto addr_9078_117;
        }
        if (reinterpret_cast<int1_t>(r4_60 == 14)) 
            goto addr_90c8_120;
        continue;
        addr_90c8_120:
        r2_19 = g93c8;
        r3_33 = *reinterpret_cast<void***>(r2_19);
        r4_63 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3_33 + 4))));
        if (!reinterpret_cast<int1_t>(r4_63 == 1)) {
            goto addr_93a0_71;
        } else {
            addr_90dc_123:
            r2_64 = g943c;
            r3_43 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r2_64))));
            if (!reinterpret_cast<int1_t>(r3_43 == 1)) {
                r0_65 = g9448;
                *reinterpret_cast<void***>(r2_64) = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint32_t>(r4_63)));
                r0_66 = fun_6208(r0_65, r1_14, r2_64, r3_43, *reinterpret_cast<void***>(sp8), *reinterpret_cast<void***>(sp8 + 4), *reinterpret_cast<void***>(sp8 + 8), *reinterpret_cast<void***>(sp8 + 12), *reinterpret_cast<void***>(sp8 + 16), *reinterpret_cast<void***>(sp8 + 20), *reinterpret_cast<void***>(sp8 + 24), *reinterpret_cast<void***>(sp8 + 28), *reinterpret_cast<void***>(sp8 + 32), *reinterpret_cast<void***>(sp8 + 36), *reinterpret_cast<void***>(sp8 + 40), *reinterpret_cast<void***>(sp8 + 44), *reinterpret_cast<void***>(sp8 + 48), *reinterpret_cast<void***>(sp8 + 52), *reinterpret_cast<void***>(sp8 + 56), *reinterpret_cast<void***>(sp8 + 60), *reinterpret_cast<void***>(sp8 + 64), *reinterpret_cast<void***>(sp8 + 68), *reinterpret_cast<void***>(sp8 + 72), *reinterpret_cast<void***>(sp8 + 76), *reinterpret_cast<void***>(sp8 + 80), *reinterpret_cast<void***>(sp8 + 84), *reinterpret_cast<void***>(sp8 + 88), *reinterpret_cast<void***>(sp8 + 92), *reinterpret_cast<void***>(sp8 + 96), *reinterpret_cast<void***>(sp8 + 100), *reinterpret_cast<void***>(sp8 + 0x68), *reinterpret_cast<void***>(sp8 + 0x6c), *reinterpret_cast<void***>(sp8 + 0x70), *reinterpret_cast<void***>(sp8 + 0x74), *reinterpret_cast<void***>(sp8 + 0x78));
                fun_6388(r0_66, r1_14, r2_64, r3_43);
                fun_6334(r0_66, r1_14, r2_64, r3_43);
                r2_19 = g944c;
                r0_49 = r4_63;
                r1_14 = reinterpret_cast<void**>(0xffffffff);
                goto addr_8dd4_87;
            } else {
                r3_43 = reinterpret_cast<void**>(0);
                r0_67 = g9440;
                *reinterpret_cast<void***>(r2_64) = reinterpret_cast<void**>(0);
                r0_68 = fun_6208(r0_67, r1_14, r2_64, 0, *reinterpret_cast<void***>(sp8), *reinterpret_cast<void***>(sp8 + 4), *reinterpret_cast<void***>(sp8 + 8), *reinterpret_cast<void***>(sp8 + 12), *reinterpret_cast<void***>(sp8 + 16), *reinterpret_cast<void***>(sp8 + 20), *reinterpret_cast<void***>(sp8 + 24), *reinterpret_cast<void***>(sp8 + 28), *reinterpret_cast<void***>(sp8 + 32), *reinterpret_cast<void***>(sp8 + 36), *reinterpret_cast<void***>(sp8 + 40), *reinterpret_cast<void***>(sp8 + 44), *reinterpret_cast<void***>(sp8 + 48), *reinterpret_cast<void***>(sp8 + 52), *reinterpret_cast<void***>(sp8 + 56), *reinterpret_cast<void***>(sp8 + 60), *reinterpret_cast<void***>(sp8 + 64), *reinterpret_cast<void***>(sp8 + 68), *reinterpret_cast<void***>(sp8 + 72), *reinterpret_cast<void***>(sp8 + 76), *reinterpret_cast<void***>(sp8 + 80), *reinterpret_cast<void***>(sp8 + 84), *reinterpret_cast<void***>(sp8 + 88), *reinterpret_cast<void***>(sp8 + 92), *reinterpret_cast<void***>(sp8 + 96), *reinterpret_cast<void***>(sp8 + 100), *reinterpret_cast<void***>(sp8 + 0x68), *reinterpret_cast<void***>(sp8 + 0x6c), *reinterpret_cast<void***>(sp8 + 0x70), *reinterpret_cast<void***>(sp8 + 0x74), *reinterpret_cast<void***>(sp8 + 0x78));
                fun_6388(r0_68, r1_14, r2_64, 0);
                fun_6334(r0_68, r1_14, r2_64, 0);
                r2_19 = g9444;
                r0_49 = r4_63;
                r1_14 = reinterpret_cast<void**>(0xffffffff);
                goto addr_8dd4_87;
            }
        }
        addr_90a8_112:
        r3_27 = *reinterpret_cast<void***>(r5_26);
        r4_63 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3_27 + 4))));
        if (r4_63 == 1) {
            goto addr_90dc_123;
        }
        addr_90b8_128:
        r3_69 = *reinterpret_cast<void***>(r3_27 + 12);
        addr_8d04_129:
        r7_22 = reinterpret_cast<void**>(1);
        addr_8c50_130:
        *reinterpret_cast<void***>(r5_26) = r3_69;
        continue;
        label_116:
        addr_908c_131:
        r0_21 = fun_6208(r0_21, r1_14, r2_19, r3_61, *reinterpret_cast<void***>(sp8), *reinterpret_cast<void***>(sp8 + 4), *reinterpret_cast<void***>(sp8 + 8), *reinterpret_cast<void***>(sp8 + 12), *reinterpret_cast<void***>(sp8 + 16), *reinterpret_cast<void***>(sp8 + 20), *reinterpret_cast<void***>(sp8 + 24), *reinterpret_cast<void***>(sp8 + 28), *reinterpret_cast<void***>(sp8 + 32), *reinterpret_cast<void***>(sp8 + 36), *reinterpret_cast<void***>(sp8 + 40), *reinterpret_cast<void***>(sp8 + 44), *reinterpret_cast<void***>(sp8 + 48), *reinterpret_cast<void***>(sp8 + 52), *reinterpret_cast<void***>(sp8 + 56), *reinterpret_cast<void***>(sp8 + 60), *reinterpret_cast<void***>(sp8 + 64), *reinterpret_cast<void***>(sp8 + 68), *reinterpret_cast<void***>(sp8 + 72), *reinterpret_cast<void***>(sp8 + 76), *reinterpret_cast<void***>(sp8 + 80), *reinterpret_cast<void***>(sp8 + 84), *reinterpret_cast<void***>(sp8 + 88), *reinterpret_cast<void***>(sp8 + 92), *reinterpret_cast<void***>(sp8 + 96), *reinterpret_cast<void***>(sp8 + 100), *reinterpret_cast<void***>(sp8 + 0x68), *reinterpret_cast<void***>(sp8 + 0x6c), *reinterpret_cast<void***>(sp8 + 0x70), *reinterpret_cast<void***>(sp8 + 0x74), *reinterpret_cast<void***>(sp8 + 0x78));
        r2_19 = *reinterpret_cast<void***>(r5_26);
        r3_70 = 1;
        addr_9098_132:
        *reinterpret_cast<void***>(r2_19 + 4) = reinterpret_cast<void**>(static_cast<unsigned char>(r3_70));
        continue;
        addr_9078_117:
        r0_21 = g9438;
        addr_907c_133:
        r0_21 = fun_6208(r0_21, r1_14, r2_19, r3_61, *reinterpret_cast<void***>(sp8), *reinterpret_cast<void***>(sp8 + 4), *reinterpret_cast<void***>(sp8 + 8), *reinterpret_cast<void***>(sp8 + 12), *reinterpret_cast<void***>(sp8 + 16), *reinterpret_cast<void***>(sp8 + 20), *reinterpret_cast<void***>(sp8 + 24), *reinterpret_cast<void***>(sp8 + 28), *reinterpret_cast<void***>(sp8 + 32), *reinterpret_cast<void***>(sp8 + 36), *reinterpret_cast<void***>(sp8 + 40), *reinterpret_cast<void***>(sp8 + 44), *reinterpret_cast<void***>(sp8 + 48), *reinterpret_cast<void***>(sp8 + 52), *reinterpret_cast<void***>(sp8 + 56), *reinterpret_cast<void***>(sp8 + 60), *reinterpret_cast<void***>(sp8 + 64), *reinterpret_cast<void***>(sp8 + 68), *reinterpret_cast<void***>(sp8 + 72), *reinterpret_cast<void***>(sp8 + 76), *reinterpret_cast<void***>(sp8 + 80), *reinterpret_cast<void***>(sp8 + 84), *reinterpret_cast<void***>(sp8 + 88), *reinterpret_cast<void***>(sp8 + 92), *reinterpret_cast<void***>(sp8 + 96), *reinterpret_cast<void***>(sp8 + 100), *reinterpret_cast<void***>(sp8 + 0x68), *reinterpret_cast<void***>(sp8 + 0x6c), *reinterpret_cast<void***>(sp8 + 0x70), *reinterpret_cast<void***>(sp8 + 0x74), *reinterpret_cast<void***>(sp8 + 0x78));
        r2_19 = *reinterpret_cast<void***>(r5_26);
        r3_70 = 0;
        goto addr_9098_132;
        addr_8f28_47:
        if (reinterpret_cast<int1_t>(r7_22 == 1)) {
            fun_6388(r0_21, r1_14, r2_19, r3_27);
            fun_6334(r0_21, r1_14, r2_19, r3_27);
            r1_14 = reinterpret_cast<void**>(0xffffffff);
            r2_19 = g9414;
            fun_6240(r7_22, 0xffffffff, r2_19);
            r0_21 = fun_8a30(r7_22, 0xffffffff, r2_19, r3_27);
            r7_22 = reinterpret_cast<void**>(0);
        }
        r0_21 = fun_8a48(r0_21, r1_14, r2_19);
        r4_71 = r0_21;
        if (reinterpret_cast<signed char>(r4_71) < reinterpret_cast<signed char>(0) == __intrinsic()) {
            r0_21 = fun_8a50();
        }
        if (!reinterpret_cast<int1_t>(r4_71 == 12)) {
            if (reinterpret_cast<int1_t>(r4_71 == 13)) 
                goto addr_8f88_141;
        } else {
            r3_61 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(r5_26) + 4))));
            z72 = reinterpret_cast<int1_t>(r3_61 == 1);
            if (z72) {
                r0_21 = g9418;
            }
            if (!z72) {
                r0_21 = g941c;
            }
            if (!z72) 
                goto label_147; else 
                goto addr_8f7c_148;
        }
        if (reinterpret_cast<int1_t>(r4_71 == 14)) 
            goto addr_8fa4_151;
        continue;
        addr_8fa4_151:
        r3_73 = *reinterpret_cast<void***>(r5_26);
        r4_74 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3_73 + 4))));
        if (reinterpret_cast<int1_t>(r4_74 == 1)) {
            addr_8fb4_154:
            r2_75 = g93f8;
            r3_43 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r2_75))));
            if (!reinterpret_cast<int1_t>(r3_43 == 1)) {
                *reinterpret_cast<void***>(r2_75) = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint32_t>(r4_74)));
                fun_6970(r4_74, r1_14);
                r0_76 = g9428;
                r0_77 = fun_6208(r0_76, r1_14, r2_75, r3_43, *reinterpret_cast<void***>(sp8), *reinterpret_cast<void***>(sp8 + 4), *reinterpret_cast<void***>(sp8 + 8), *reinterpret_cast<void***>(sp8 + 12), *reinterpret_cast<void***>(sp8 + 16), *reinterpret_cast<void***>(sp8 + 20), *reinterpret_cast<void***>(sp8 + 24), *reinterpret_cast<void***>(sp8 + 28), *reinterpret_cast<void***>(sp8 + 32), *reinterpret_cast<void***>(sp8 + 36), *reinterpret_cast<void***>(sp8 + 40), *reinterpret_cast<void***>(sp8 + 44), *reinterpret_cast<void***>(sp8 + 48), *reinterpret_cast<void***>(sp8 + 52), *reinterpret_cast<void***>(sp8 + 56), *reinterpret_cast<void***>(sp8 + 60), *reinterpret_cast<void***>(sp8 + 64), *reinterpret_cast<void***>(sp8 + 68), *reinterpret_cast<void***>(sp8 + 72), *reinterpret_cast<void***>(sp8 + 76), *reinterpret_cast<void***>(sp8 + 80), *reinterpret_cast<void***>(sp8 + 84), *reinterpret_cast<void***>(sp8 + 88), *reinterpret_cast<void***>(sp8 + 92), *reinterpret_cast<void***>(sp8 + 96), *reinterpret_cast<void***>(sp8 + 100), *reinterpret_cast<void***>(sp8 + 0x68), *reinterpret_cast<void***>(sp8 + 0x6c), *reinterpret_cast<void***>(sp8 + 0x70), *reinterpret_cast<void***>(sp8 + 0x74), *reinterpret_cast<void***>(sp8 + 0x78));
                fun_6388(r0_77, r1_14, r2_75, r3_43);
                fun_6334(r0_77, r1_14, r2_75, r3_43);
                r2_19 = g942c;
                r0_49 = r4_74;
                r1_14 = reinterpret_cast<void**>(0xffffffff);
                goto addr_8dd4_87;
            } else {
                r3_43 = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(r2_75) = reinterpret_cast<void**>(0);
                fun_6970(0, r1_14);
                r0_78 = g9420;
                r0_79 = fun_6208(r0_78, r1_14, r2_75, 0, *reinterpret_cast<void***>(sp8), *reinterpret_cast<void***>(sp8 + 4), *reinterpret_cast<void***>(sp8 + 8), *reinterpret_cast<void***>(sp8 + 12), *reinterpret_cast<void***>(sp8 + 16), *reinterpret_cast<void***>(sp8 + 20), *reinterpret_cast<void***>(sp8 + 24), *reinterpret_cast<void***>(sp8 + 28), *reinterpret_cast<void***>(sp8 + 32), *reinterpret_cast<void***>(sp8 + 36), *reinterpret_cast<void***>(sp8 + 40), *reinterpret_cast<void***>(sp8 + 44), *reinterpret_cast<void***>(sp8 + 48), *reinterpret_cast<void***>(sp8 + 52), *reinterpret_cast<void***>(sp8 + 56), *reinterpret_cast<void***>(sp8 + 60), *reinterpret_cast<void***>(sp8 + 64), *reinterpret_cast<void***>(sp8 + 68), *reinterpret_cast<void***>(sp8 + 72), *reinterpret_cast<void***>(sp8 + 76), *reinterpret_cast<void***>(sp8 + 80), *reinterpret_cast<void***>(sp8 + 84), *reinterpret_cast<void***>(sp8 + 88), *reinterpret_cast<void***>(sp8 + 92), *reinterpret_cast<void***>(sp8 + 96), *reinterpret_cast<void***>(sp8 + 100), *reinterpret_cast<void***>(sp8 + 0x68), *reinterpret_cast<void***>(sp8 + 0x6c), *reinterpret_cast<void***>(sp8 + 0x70), *reinterpret_cast<void***>(sp8 + 0x74), *reinterpret_cast<void***>(sp8 + 0x78));
                fun_6388(r0_79, r1_14, r2_75, 0);
                fun_6334(r0_79, r1_14, r2_75, 0);
                r2_19 = g9424;
                r0_49 = r4_74;
                r1_14 = reinterpret_cast<void**>(0xffffffff);
                goto addr_8dd4_87;
            }
        }
        addr_8d00_158:
        r3_69 = *reinterpret_cast<void***>(r3_73 + 8);
        goto addr_8d04_129;
        addr_8f88_141:
        r3_27 = *reinterpret_cast<void***>(r5_26);
        r4_74 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3_27 + 4))));
        if (!reinterpret_cast<int1_t>(r4_74 == 1)) {
            goto addr_90b8_128;
        } else {
            goto addr_8fb4_154;
        }
        label_147:
        goto addr_908c_131;
        addr_8f7c_148:
        goto addr_907c_133;
        addr_8e7c_44:
        if (reinterpret_cast<int1_t>(r7_22 == 1)) {
            fun_6388(r0_21, r1_14, r2_19, r3_27);
            fun_6334(r0_21, r1_14, r2_19, r3_27);
            r1_14 = reinterpret_cast<void**>(0xffffffff);
            r2_19 = g9400;
            fun_6240(r7_22, 0xffffffff, r2_19);
            r0_21 = fun_8a30(r7_22, 0xffffffff, r2_19, r3_27);
            r7_22 = reinterpret_cast<void**>(0);
        }
        r0_21 = fun_8a48(r0_21, r1_14, r2_19);
        r4_80 = r0_21;
        if (reinterpret_cast<signed char>(r4_80) < reinterpret_cast<signed char>(0) == __intrinsic()) {
            r0_21 = fun_8a50();
        }
        if (!reinterpret_cast<int1_t>(r4_80 == 12)) {
            if (reinterpret_cast<int1_t>(r4_80 == 13)) 
                goto addr_8edc_168;
        } else {
            r3_61 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(r5_26) + 4))));
            z81 = reinterpret_cast<int1_t>(r3_61 == 1);
            if (z81) {
                r0_21 = g9404;
            }
            if (!z81) {
                r0_21 = g9408;
            }
            if (!z81) 
                goto label_174; else 
                goto addr_8ed0_175;
        }
        if (reinterpret_cast<int1_t>(r4_80 == 14)) 
            goto addr_8f00_178;
        continue;
        addr_8f00_178:
        r2_19 = *reinterpret_cast<void***>(r5_26);
        r3_69 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r2_19 + 4))));
        z82 = reinterpret_cast<int1_t>(r3_69 == 1);
        if (!z82) {
            r3_69 = *reinterpret_cast<void***>(r2_19 + 8);
        }
        if (!z82) {
            goto addr_8d04_129;
        } else {
            r0_21 = g9410;
        }
        addr_8f18_184:
        r0_21 = fun_6208(r0_21, r1_14, r2_19, r3_69, *reinterpret_cast<void***>(sp8), *reinterpret_cast<void***>(sp8 + 4), *reinterpret_cast<void***>(sp8 + 8), *reinterpret_cast<void***>(sp8 + 12), *reinterpret_cast<void***>(sp8 + 16), *reinterpret_cast<void***>(sp8 + 20), *reinterpret_cast<void***>(sp8 + 24), *reinterpret_cast<void***>(sp8 + 28), *reinterpret_cast<void***>(sp8 + 32), *reinterpret_cast<void***>(sp8 + 36), *reinterpret_cast<void***>(sp8 + 40), *reinterpret_cast<void***>(sp8 + 44), *reinterpret_cast<void***>(sp8 + 48), *reinterpret_cast<void***>(sp8 + 52), *reinterpret_cast<void***>(sp8 + 56), *reinterpret_cast<void***>(sp8 + 60), *reinterpret_cast<void***>(sp8 + 64), *reinterpret_cast<void***>(sp8 + 68), *reinterpret_cast<void***>(sp8 + 72), *reinterpret_cast<void***>(sp8 + 76), *reinterpret_cast<void***>(sp8 + 80), *reinterpret_cast<void***>(sp8 + 84), *reinterpret_cast<void***>(sp8 + 88), *reinterpret_cast<void***>(sp8 + 92), *reinterpret_cast<void***>(sp8 + 96), *reinterpret_cast<void***>(sp8 + 100), *reinterpret_cast<void***>(sp8 + 0x68), *reinterpret_cast<void***>(sp8 + 0x6c), *reinterpret_cast<void***>(sp8 + 0x70), *reinterpret_cast<void***>(sp8 + 0x74), *reinterpret_cast<void***>(sp8 + 0x78));
        continue;
        addr_8edc_168:
        r2_19 = *reinterpret_cast<void***>(r5_26);
        r3_69 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r2_19 + 4))));
        z83 = reinterpret_cast<int1_t>(r3_69 == 1);
        if (z83) {
            r0_21 = g940c;
        }
        if (!z83) {
            r3_69 = *reinterpret_cast<void***>(r2_19 + 12);
        }
        if (!z83) {
            goto addr_8d04_129;
        } else {
            goto addr_8f18_184;
        }
        label_174:
        goto addr_908c_131;
        addr_8ed0_175:
        goto addr_907c_133;
        addr_8d14_41:
        if (reinterpret_cast<int1_t>(r7_22 == 1)) {
            fun_6388(r0_21, r1_14, r2_19, r3_27);
            fun_6334(r0_21, r1_14, r2_19, r3_27);
            r1_14 = reinterpret_cast<void**>(0xffffffff);
            r2_19 = g93e4;
            fun_6240(r7_22, 0xffffffff, r2_19);
            r0_21 = fun_8a30(r7_22, 0xffffffff, r2_19, r3_27);
            r7_22 = reinterpret_cast<void**>(0);
        }
        r0_21 = fun_8a48(r0_21, r1_14, r2_19);
        r4_84 = r0_21;
        if (reinterpret_cast<signed char>(r4_84) < reinterpret_cast<signed char>(0) == __intrinsic()) {
            r0_21 = fun_8a50();
        }
        if (!reinterpret_cast<int1_t>(r4_84 == 12)) {
            if (reinterpret_cast<int1_t>(r4_84 == 13)) 
                goto addr_8de8_198;
        } else {
            r4_85 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(r5_26) + 4))));
            if (!reinterpret_cast<int1_t>(r4_85 == 1)) {
                r0_86 = g93ec;
                r0_87 = fun_6208(r0_86, r1_14, r2_19, *reinterpret_cast<void***>(r5_26), *reinterpret_cast<void***>(sp8), *reinterpret_cast<void***>(sp8 + 4), *reinterpret_cast<void***>(sp8 + 8), *reinterpret_cast<void***>(sp8 + 12), *reinterpret_cast<void***>(sp8 + 16), *reinterpret_cast<void***>(sp8 + 20), *reinterpret_cast<void***>(sp8 + 24), *reinterpret_cast<void***>(sp8 + 28), *reinterpret_cast<void***>(sp8 + 32), *reinterpret_cast<void***>(sp8 + 36), *reinterpret_cast<void***>(sp8 + 40), *reinterpret_cast<void***>(sp8 + 44), *reinterpret_cast<void***>(sp8 + 48), *reinterpret_cast<void***>(sp8 + 52), *reinterpret_cast<void***>(sp8 + 56), *reinterpret_cast<void***>(sp8 + 60), *reinterpret_cast<void***>(sp8 + 64), *reinterpret_cast<void***>(sp8 + 68), *reinterpret_cast<void***>(sp8 + 72), *reinterpret_cast<void***>(sp8 + 76), *reinterpret_cast<void***>(sp8 + 80), *reinterpret_cast<void***>(sp8 + 84), *reinterpret_cast<void***>(sp8 + 88), *reinterpret_cast<void***>(sp8 + 92), *reinterpret_cast<void***>(sp8 + 96), *reinterpret_cast<void***>(sp8 + 100), *reinterpret_cast<void***>(sp8 + 0x68), *reinterpret_cast<void***>(sp8 + 0x6c), *reinterpret_cast<void***>(sp8 + 0x70), *reinterpret_cast<void***>(sp8 + 0x74), *reinterpret_cast<void***>(sp8 + 0x78));
                r3_43 = *reinterpret_cast<void***>(r5_26);
                *reinterpret_cast<void***>(r3_43 + 4) = reinterpret_cast<void**>(1);
                fun_6388(r0_87, r1_14, r2_19, r3_43);
                fun_6334(r0_87, r1_14, r2_19, r3_43);
                r2_42 = r6_28;
                r0_88 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(r11_1) - 42);
                r4_41 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(r11_1) - 45);
                fun_eadc(r0_88, 0, r2_42);
                r0_45 = fun_fdac(r0_88, 0, r2_42);
                goto addr_8dc0_85;
            } else {
                r0_89 = g93e8;
                r0_90 = fun_6208(r0_89, r1_14, r2_19, *reinterpret_cast<void***>(r5_26), *reinterpret_cast<void***>(sp8), *reinterpret_cast<void***>(sp8 + 4), *reinterpret_cast<void***>(sp8 + 8), *reinterpret_cast<void***>(sp8 + 12), *reinterpret_cast<void***>(sp8 + 16), *reinterpret_cast<void***>(sp8 + 20), *reinterpret_cast<void***>(sp8 + 24), *reinterpret_cast<void***>(sp8 + 28), *reinterpret_cast<void***>(sp8 + 32), *reinterpret_cast<void***>(sp8 + 36), *reinterpret_cast<void***>(sp8 + 40), *reinterpret_cast<void***>(sp8 + 44), *reinterpret_cast<void***>(sp8 + 48), *reinterpret_cast<void***>(sp8 + 52), *reinterpret_cast<void***>(sp8 + 56), *reinterpret_cast<void***>(sp8 + 60), *reinterpret_cast<void***>(sp8 + 64), *reinterpret_cast<void***>(sp8 + 68), *reinterpret_cast<void***>(sp8 + 72), *reinterpret_cast<void***>(sp8 + 76), *reinterpret_cast<void***>(sp8 + 80), *reinterpret_cast<void***>(sp8 + 84), *reinterpret_cast<void***>(sp8 + 88), *reinterpret_cast<void***>(sp8 + 92), *reinterpret_cast<void***>(sp8 + 96), *reinterpret_cast<void***>(sp8 + 100), *reinterpret_cast<void***>(sp8 + 0x68), *reinterpret_cast<void***>(sp8 + 0x6c), *reinterpret_cast<void***>(sp8 + 0x70), *reinterpret_cast<void***>(sp8 + 0x74), *reinterpret_cast<void***>(sp8 + 0x78));
                r2_91 = *reinterpret_cast<void***>(r5_26);
                r3_43 = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(r2_91 + 4) = reinterpret_cast<void**>(0);
                fun_6388(r0_90, r1_14, r2_91, 0);
                fun_6334(r0_90, r1_14, r2_91, 0);
                r2_19 = g93e4;
                r0_49 = r4_85;
                r1_14 = reinterpret_cast<void**>(0xffffffff);
                goto addr_8dd4_87;
            }
        }
        if (reinterpret_cast<int1_t>(r4_84 == 14)) 
            goto addr_8e10_205;
        continue;
        addr_8e10_205:
        r3_73 = *reinterpret_cast<void***>(r5_26);
        r8_92 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3_73 + 4))));
        if (!reinterpret_cast<int1_t>(r8_92 == 1)) {
            goto addr_8d00_158;
        } else {
            r0_93 = g93f4;
            fun_6208(r0_93, r1_14, r2_19, r3_73, *reinterpret_cast<void***>(sp8), *reinterpret_cast<void***>(sp8 + 4), *reinterpret_cast<void***>(sp8 + 8), *reinterpret_cast<void***>(sp8 + 12), *reinterpret_cast<void***>(sp8 + 16), *reinterpret_cast<void***>(sp8 + 20), *reinterpret_cast<void***>(sp8 + 24), *reinterpret_cast<void***>(sp8 + 28), *reinterpret_cast<void***>(sp8 + 32), *reinterpret_cast<void***>(sp8 + 36), *reinterpret_cast<void***>(sp8 + 40), *reinterpret_cast<void***>(sp8 + 44), *reinterpret_cast<void***>(sp8 + 48), *reinterpret_cast<void***>(sp8 + 52), *reinterpret_cast<void***>(sp8 + 56), *reinterpret_cast<void***>(sp8 + 60), *reinterpret_cast<void***>(sp8 + 64), *reinterpret_cast<void***>(sp8 + 68), *reinterpret_cast<void***>(sp8 + 72), *reinterpret_cast<void***>(sp8 + 76), *reinterpret_cast<void***>(sp8 + 80), *reinterpret_cast<void***>(sp8 + 84), *reinterpret_cast<void***>(sp8 + 88), *reinterpret_cast<void***>(sp8 + 92), *reinterpret_cast<void***>(sp8 + 96), *reinterpret_cast<void***>(sp8 + 100), *reinterpret_cast<void***>(sp8 + 0x68), *reinterpret_cast<void***>(sp8 + 0x6c), *reinterpret_cast<void***>(sp8 + 0x70), *reinterpret_cast<void***>(sp8 + 0x74), *reinterpret_cast<void***>(sp8 + 0x78));
            r0_94 = reinterpret_cast<void**>(4);
        }
        addr_8e2c_209:
        r0_95 = fun_89e0(r0_94, r1_14, r2_19);
        r3_96 = g93f8;
        r3_43 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3_96))));
        z97 = r3_43 == 0;
        if (z97) {
            r0_95 = g93fc;
        }
        if (z97) {
            r0_95 = fun_10330(r0_95, r1_14, r2_19);
        }
        fun_6388(r0_95, r1_14, r2_19, r3_43);
        r4_41 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(r11_1) - 45);
        fun_6334(r0_95, r1_14, r2_19, r3_43);
        r0_98 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(r11_1) - 42);
        fun_eadc(r0_98, 0, r6_28);
        r0_99 = fun_fdac(r0_98, 0, r6_28);
        fun_5d24(r0_99, r4_41, r6_28);
        r0_49 = r8_92;
        goto addr_8dcc_98;
        addr_8de8_198:
        r3_27 = *reinterpret_cast<void***>(r5_26);
        r8_92 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r3_27 + 4))));
        if (!reinterpret_cast<int1_t>(r8_92 == 1)) {
            goto addr_90b8_128;
        } else {
            r0_100 = g93f0;
            fun_6208(r0_100, r1_14, r2_19, r3_27, *reinterpret_cast<void***>(sp8), *reinterpret_cast<void***>(sp8 + 4), *reinterpret_cast<void***>(sp8 + 8), *reinterpret_cast<void***>(sp8 + 12), *reinterpret_cast<void***>(sp8 + 16), *reinterpret_cast<void***>(sp8 + 20), *reinterpret_cast<void***>(sp8 + 24), *reinterpret_cast<void***>(sp8 + 28), *reinterpret_cast<void***>(sp8 + 32), *reinterpret_cast<void***>(sp8 + 36), *reinterpret_cast<void***>(sp8 + 40), *reinterpret_cast<void***>(sp8 + 44), *reinterpret_cast<void***>(sp8 + 48), *reinterpret_cast<void***>(sp8 + 52), *reinterpret_cast<void***>(sp8 + 56), *reinterpret_cast<void***>(sp8 + 60), *reinterpret_cast<void***>(sp8 + 64), *reinterpret_cast<void***>(sp8 + 68), *reinterpret_cast<void***>(sp8 + 72), *reinterpret_cast<void***>(sp8 + 76), *reinterpret_cast<void***>(sp8 + 80), *reinterpret_cast<void***>(sp8 + 84), *reinterpret_cast<void***>(sp8 + 88), *reinterpret_cast<void***>(sp8 + 92), *reinterpret_cast<void***>(sp8 + 96), *reinterpret_cast<void***>(sp8 + 100), *reinterpret_cast<void***>(sp8 + 0x68), *reinterpret_cast<void***>(sp8 + 0x6c), *reinterpret_cast<void***>(sp8 + 0x70), *reinterpret_cast<void***>(sp8 + 0x74), *reinterpret_cast<void***>(sp8 + 0x78));
            r0_94 = reinterpret_cast<void**>(0xfffffffc);
            goto addr_8e2c_209;
        }
        addr_8c60_27:
        if (reinterpret_cast<int1_t>(r7_22 == 1)) {
            fun_6388(r0_21, r1_14, r2_19, r3_27);
            fun_6334(r0_21, r1_14, r2_19, r3_27);
            r1_14 = reinterpret_cast<void**>(0xffffffff);
            r2_19 = g93dc;
            fun_6240(r7_22, 0xffffffff, r2_19);
            r0_21 = fun_8a30(r7_22, 0xffffffff, r2_19, r3_27);
            r7_22 = reinterpret_cast<void**>(0);
        }
        r0_21 = fun_8a48(r0_21, r1_14, r2_19);
        r4_101 = r0_21;
        if (reinterpret_cast<signed char>(r4_101) < reinterpret_cast<signed char>(0) == __intrinsic()) {
            r0_21 = fun_8a50();
        }
        if (reinterpret_cast<int1_t>(r4_101 == 12)) 
            break;
        z102 = reinterpret_cast<int1_t>(r4_101 == 13);
        if (z102) {
            r2_19 = *reinterpret_cast<void***>(r5_26);
        }
        if (z102) {
            r3_27 = reinterpret_cast<void**>(0);
        }
        if (z102) {
            *reinterpret_cast<void***>(r2_19 + 4) = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint32_t>(r3_27)));
        }
        if (z102) {
            r3_27 = *reinterpret_cast<void***>(r5_26);
        }
        if (z102) {
            goto addr_90b8_128;
        } else {
            if (!reinterpret_cast<int1_t>(r4_101 == 14)) {
                continue;
            } else {
                r2_19 = *reinterpret_cast<void***>(r5_26);
                *reinterpret_cast<void***>(r2_19 + 4) = reinterpret_cast<void**>(0);
                r3_73 = *reinterpret_cast<void***>(r5_26);
                goto addr_8d00_158;
            }
        }
        label_37:
        if (reinterpret_cast<int1_t>(r4_29 == 14)) 
            goto addr_8c38_236;
        continue;
        addr_8c38_236:
        r2_19 = *reinterpret_cast<void***>(r5_26);
        *reinterpret_cast<void***>(r2_19 + 4) = reinterpret_cast<void**>(0);
        r3_69 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(r5_26) + 8);
        addr_8c4c_238:
        r7_22 = r6_28;
        goto addr_8c50_130;
        addr_8c18_38:
        r2_19 = *reinterpret_cast<void***>(r5_26);
        *reinterpret_cast<void***>(r2_19 + 4) = reinterpret_cast<void**>(0);
        r3_69 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(r5_26) + 12);
        goto addr_8c4c_238;
    }
    r0_103 = g93e0;
    fun_6208(r0_103, r1_14, r2_19, r3_27, *reinterpret_cast<void***>(sp8), *reinterpret_cast<void***>(sp8 + 4), *reinterpret_cast<void***>(sp8 + 8), *reinterpret_cast<void***>(sp8 + 12), *reinterpret_cast<void***>(sp8 + 16), *reinterpret_cast<void***>(sp8 + 20), *reinterpret_cast<void***>(sp8 + 24), *reinterpret_cast<void***>(sp8 + 28), *reinterpret_cast<void***>(sp8 + 32), *reinterpret_cast<void***>(sp8 + 36), *reinterpret_cast<void***>(sp8 + 40), *reinterpret_cast<void***>(sp8 + 44), *reinterpret_cast<void***>(sp8 + 48), *reinterpret_cast<void***>(sp8 + 52), *reinterpret_cast<void***>(sp8 + 56), *reinterpret_cast<void***>(sp8 + 60), *reinterpret_cast<void***>(sp8 + 64), *reinterpret_cast<void***>(sp8 + 68), *reinterpret_cast<void***>(sp8 + 72), *reinterpret_cast<void***>(sp8 + 76), *reinterpret_cast<void***>(sp8 + 80), *reinterpret_cast<void***>(sp8 + 84), *reinterpret_cast<void***>(sp8 + 88), *reinterpret_cast<void***>(sp8 + 92), *reinterpret_cast<void***>(sp8 + 96), *reinterpret_cast<void***>(sp8 + 100), *reinterpret_cast<void***>(sp8 + 0x68), *reinterpret_cast<void***>(sp8 + 0x6c), *reinterpret_cast<void***>(sp8 + 0x70), *reinterpret_cast<void***>(sp8 + 0x74), *reinterpret_cast<void***>(sp8 + 0x78));
    r3_104 = *reinterpret_cast<void***>(r5_26);
    *reinterpret_cast<void***>(r3_104 + 4) = reinterpret_cast<void**>(0);
    fun_6eac(13, 0, r2_19, r3_104, *reinterpret_cast<void***>(sp8));
    fun_6eac(14, 0, r2_19, r3_104, *reinterpret_cast<void***>(sp8));
    r0_105 = reinterpret_cast<void**>(0);
    addr_93b0_240:
    return r0_105;
    addr_8bdc_34:
    r0_106 = g93d8;
    fun_6208(r0_106, r1_14, r2_19, r3_27, *reinterpret_cast<void***>(sp8), *reinterpret_cast<void***>(sp8 + 4), *reinterpret_cast<void***>(sp8 + 8), *reinterpret_cast<void***>(sp8 + 12), *reinterpret_cast<void***>(sp8 + 16), *reinterpret_cast<void***>(sp8 + 20), *reinterpret_cast<void***>(sp8 + 24), *reinterpret_cast<void***>(sp8 + 28), *reinterpret_cast<void***>(sp8 + 32), *reinterpret_cast<void***>(sp8 + 36), *reinterpret_cast<void***>(sp8 + 40), *reinterpret_cast<void***>(sp8 + 44), *reinterpret_cast<void***>(sp8 + 48), *reinterpret_cast<void***>(sp8 + 52), *reinterpret_cast<void***>(sp8 + 56), *reinterpret_cast<void***>(sp8 + 60), *reinterpret_cast<void***>(sp8 + 64), *reinterpret_cast<void***>(sp8 + 68), *reinterpret_cast<void***>(sp8 + 72), *reinterpret_cast<void***>(sp8 + 76), *reinterpret_cast<void***>(sp8 + 80), *reinterpret_cast<void***>(sp8 + 84), *reinterpret_cast<void***>(sp8 + 88), *reinterpret_cast<void***>(sp8 + 92), *reinterpret_cast<void***>(sp8 + 96), *reinterpret_cast<void***>(sp8 + 100), *reinterpret_cast<void***>(sp8 + 0x68), *reinterpret_cast<void***>(sp8 + 0x6c), *reinterpret_cast<void***>(sp8 + 0x70), *reinterpret_cast<void***>(sp8 + 0x74), *reinterpret_cast<void***>(sp8 + 0x78));
    r3_107 = *reinterpret_cast<void***>(r5_26);
    *reinterpret_cast<void***>(r3_107 + 4) = reinterpret_cast<void**>(0);
    fun_6eac(13, 0, r2_19, r3_107, *reinterpret_cast<void***>(sp8));
    fun_6eac(14, 0, r2_19, r3_107, *reinterpret_cast<void***>(sp8));
    r0_105 = r6_28;
    goto addr_93b0_240;
}

void** fun_93bc(void** r0) {
    uint96_t v1;
    int1_t z2;
    int32_t r4_3;
    uint32_t r5_4;
    int1_t n5;
    int1_t n6;
    uint32_t r12_7;
    int1_t n8;
    uint32_t r8_9;
    int1_t n10;
    int1_t n11;
    uint32_t r4_12;
    int1_t z13;
    uint32_t r12_14;
    int1_t z15;
    int1_t z16;
    uint32_t r12_17;
    uint32_t r12_18;
    int1_t z19;
    uint32_t r12_20;
    int1_t z21;
    int32_t r8_22;
    int32_t r6_23;
    int1_t z24;
    uint32_t r4_25;
    uint32_t r4_26;
    int1_t z27;
    int1_t z28;
    int32_t r8_29;
    uint32_t r6_30;
    int1_t z31;
    int1_t n32;
    int1_t z33;
    int32_t r3_34;
    int32_t r3_35;
    int1_t z36;
    int32_t r12_37;
    int1_t z38;
    int1_t z39;
    uint32_t r8_40;
    uint32_t r8_41;
    int1_t z42;
    uint32_t r12_43;
    int1_t z44;
    uint32_t r12_45;
    int1_t z46;
    uint32_t r12_47;
    uint32_t r7_48;
    int1_t z49;
    uint32_t r8_50;
    int1_t z51;
    int32_t r4_52;
    int1_t z53;
    int1_t z54;
    uint32_t r4_55;
    int32_t r7_56;
    uint32_t r4_57;
    int32_t r7_58;
    int1_t z59;
    uint32_t r4_60;
    int1_t z61;
    int32_t r4_62;
    uint32_t r7_63;
    int1_t z64;
    uint32_t r4_65;
    int1_t z66;
    int1_t z67;
    int1_t n68;
    int1_t z69;
    int1_t z70;
    uint32_t r4_71;
    int1_t z72;
    uint32_t r4_73;
    uint32_t r8_74;
    int1_t z75;
    uint32_t r4_76;
    int1_t z77;
    uint32_t r4_78;
    int32_t r8_79;
    int1_t z80;
    int32_t r12_81;
    int1_t z82;
    int32_t r8_83;
    int32_t r8_84;
    int1_t z85;
    int32_t r4_86;
    uint32_t r8_87;
    int1_t z88;
    uint32_t r8_89;
    int1_t z90;
    uint32_t r8_91;
    int1_t z92;
    int1_t z93;
    uint32_t r12_94;
    uint32_t r9_95;
    int1_t z96;
    int1_t z97;
    uint32_t r12_98;
    uint32_t r12_99;
    void** r2_100;
    void** r0_101;

    *reinterpret_cast<void***>(&v1) = r0;
    if (z2) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(r4_3 * r5_4);
    }
    if (n5) {
        *reinterpret_cast<void***>(&v1) = reinterpret_cast<void**>(0);
    }
    if (n6) {
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(&v1)) = *reinterpret_cast<void***>(&v1);
        *reinterpret_cast<void***>(&v1) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&v1)) - r12_7);
    }
    if (n8) {
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(&v1)) = *reinterpret_cast<void***>(&v1);
        *reinterpret_cast<void***>(&v1) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&v1)) - r8_9);
    }
    if (n10) {
        *reinterpret_cast<void***>(&v1) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&v1)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&v1)) >> 1);
    }
    if (n11) {
        *reinterpret_cast<void***>(&v1) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&v1)) & r4_12 >> 1);
    }
    if (z13) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) & r12_14 >> 11);
    }
    if (z15) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) & reinterpret_cast<uint32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&v1)) >> 11));
    }
    if (z16) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) & (r12_17 >> 11 | r12_18 << 21));
    }
    if (z19) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) & r12_20 << 12);
    }
    if (z21) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) & reinterpret_cast<uint32_t>(r8_22 >> r6_23));
    }
    if (z24) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) & (r4_25 >> 12 | r4_26 << 20));
    }
    if (z27) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&v1)) << 13);
    }
    if (z28) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(r8_29 * r6_30);
    }
    if (z31) {
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) = reinterpret_cast<void**>(static_cast<uint16_t>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4))));
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&v1)));
    }
    if (n32) {
        *reinterpret_cast<void***>(&v1) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&v1)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) >> 1);
    }
    if (z33) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) & (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&v1)) >> r3_34 | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&v1)) << reinterpret_cast<uint32_t>(32 - r3_35)));
    }
    if (z36) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) & reinterpret_cast<uint32_t>(r12_37 >> 13));
    }
    if (z38) {
        __asm__("ldrdeq r1, r2, [r1], -r4");
    }
    if (z39) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) & (r8_40 >> 13 | r8_41 << 19));
    }
    if (z42) {
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4);
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) - r12_43);
    }
    if (z44) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) & r12_45 << 14);
    }
    if (z46) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) & r12_47 << r7_48);
    }
    if (z49) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) & r8_50 >> 14);
    }
    if (z51) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) & reinterpret_cast<uint32_t>(r4_52 >> 14));
    }
    if (z53) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) & (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&v1)) >> 14 | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&v1)) << 18));
    }
    if (z54) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) & (r4_55 >> r7_56 | r4_57 << reinterpret_cast<uint32_t>(32 - r7_58)));
    }
    if (z59) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) & r4_60 << 15);
    }
    if (z61) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(r4_62 * r7_63);
    }
    if (z64) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) & r4_65 >> 15);
    }
    if (z66) {
        __asm__("ldrdeq r1, r2, [r1], -r0");
    }
    if (z67) {
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) = reinterpret_cast<void**>(static_cast<uint16_t>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4))));
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&v1)));
    }
    if (n68) {
        *reinterpret_cast<void***>(&v1) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&v1)) & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&v1)) >> 1);
    }
    if (z69) {
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4);
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&v1)));
    }
    if (z70) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) & r4_71 << 16);
    }
    if (z72) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) & r4_73 << r8_74);
    }
    if (z75) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) & r4_76 >> 16);
    }
    if (z77) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) & r4_78 >> r8_79);
    }
    if (z80) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) & reinterpret_cast<uint32_t>(r12_81 >> 16));
    }
    if (z82) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) & (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&v1)) >> r8_83 | reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&v1)) << reinterpret_cast<uint32_t>(32 - r8_84)));
    }
    if (z85) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(r4_86 * r8_87);
    }
    if (z88) {
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) = reinterpret_cast<void**>(static_cast<uint16_t>(reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4))));
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) - r8_89);
    }
    if (z90) {
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4);
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) - r8_91);
    }
    if (z92) {
        __asm__("ldrdeq r1, r2, [r1], -r8");
    }
    if (z93) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) & r12_94 << r9_95);
    }
    if (z96) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) & reinterpret_cast<uint32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&v1)) >> 18));
    }
    if (z97) {
        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4)) & (r12_98 >> 18 | r12_99 << 14));
    }
    r0_101 = fun_a5f8(*reinterpret_cast<void***>(&v1), *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&v1) + 4), r2_100);
    return r0_101;
}

struct s75 {
    signed char[40] pad40;
    unsigned char f40;
};

uint32_t* g94d8 = reinterpret_cast<uint32_t*>(0x40000168);

int32_t fun_94b4(struct s75* r0, int32_t r1, int32_t* r2) {
    int1_t z4;
    int1_t z5;
    uint32_t* r1_6;

    if (z4) {
        __asm__("ldrdeq r1, r2, [r1], -r4");
    }
    if (z5) {
    }
    r1_6 = g94d8;
    *r1_6 = r0->f40;
    *r2 = 7;
    return -1;
}

struct s76 {
    signed char[40] pad40;
    void** f40;
};

int32_t fun_96d8(struct s76* r0) {
    int1_t z2;
    uint32_t r9_3;
    uint32_t r4_4;
    uint32_t r4_5;
    int1_t n6;
    void** r1_7;
    int32_t r4_8;
    int1_t z9;
    uint32_t r4_10;
    uint32_t r4_11;
    void** r3_12;
    void** r2_13;
    void** r0_14;
    int32_t* r2_15;

    if (z2) {
        r9_3 = reinterpret_cast<uint32_t>(r0) & (r4_4 >> 13 | r4_5 << 19);
    }
    if (n6) {
        r1_7 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(r0) & reinterpret_cast<uint32_t>(r4_8 >> 16));
    }
    if (z9) {
        r1_7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r1_7) & (r4_10 >> r9_3 | r4_11 << 32 - r9_3));
    }
    r3_12 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&r0->f40))));
    if (r3_12) {
        r0_14 = fun_f6a4(&r0->f40, r1_7, r2_13, r3_12);
        fun_9bd4(r0_14, r1_7);
    }
    *r2_15 = 4;
    return -1;
}

int32_t g997c = 0x119b8;

uint32_t fun_1040(int32_t r0);

void** fun_1044(uint32_t r0, void** r1);

void** g9980 = reinterpret_cast<void**>(0xac);

void** g9984 = reinterpret_cast<void**>(84);

void fun_103c(uint32_t r0, void** r1);

void** g9988 = reinterpret_cast<void**>(0xbc);

void** g998c = reinterpret_cast<void**>(0xc8);

void** g9990 = reinterpret_cast<void**>(20);

void** g9994 = reinterpret_cast<void**>(68);

uint32_t fun_9784() {
    int1_t z1;
    void** r1_2;
    uint32_t r1_3;
    uint32_t r12_4;
    int32_t r0_5;
    void* sp6;
    void** r10_7;
    void** r11_8;
    void** r2_9;
    uint32_t r0_10;
    uint32_t r5_11;
    int1_t z12;
    uint32_t r9_13;
    void** r0_14;
    void** r6_15;
    int1_t z16;
    void** r2_17;
    void** r3_18;
    void** r4_19;
    void** r1_20;
    void** v21;
    void** v22;
    void** r0_23;
    void** r4_24;
    int1_t less_or_equal25;
    void** v26;
    void** v27;
    void** r5_28;
    uint32_t r8_29;
    void** r6_30;
    void** v31;
    void** r3_32;
    void** r4_33;
    void** r1_34;
    void** v35;
    void** r0_36;
    void** r4_37;
    void** r7_38;
    void** r0_39;
    void** r1_40;
    void** r0_41;
    void** v42;
    void** v43;
    void** r3_44;
    void** r4_45;
    void** r3_46;

    if (z1) {
        r1_2 = reinterpret_cast<void**>(r1_3 & r12_4 >> 19);
    }
    r0_5 = g997c;
    sp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 36 - 0x1a0);
    r10_7 = r1_2;
    r11_8 = r2_9;
    r0_10 = fun_1040(r0_5);
    r5_11 = r0_10;
    z12 = r5_11 == 0;
    if (z12) {
        r9_13 = r5_11;
    }
    if (!z12) {
        r9_13 = 0;
    }
    if (!z12) {
        while (1) {
            r0_14 = fun_1044(r5_11, r1_2);
            r6_15 = r0_14;
            z16 = r6_15 == 0;
            if (!z16) {
                r2_17 = reinterpret_cast<void**>(0);
            }
            if (z16) 
                break;
            do {
                r3_18 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r2_17) + reinterpret_cast<unsigned char>(r6_15))));
                r4_19 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp6) + 0x180 + 2);
                if (!r3_18) 
                    break;
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r2_17) + reinterpret_cast<unsigned char>(r4_19)) = static_cast<signed char>(reinterpret_cast<uint32_t>(r3_18));
                ++r2_17;
            } while (r3_18 != 46);
            goto label_16;
            r1_20 = g9980;
            fun_eb30(reinterpret_cast<unsigned char>(r4_19) + reinterpret_cast<unsigned char>(r2_17), r1_20, r2_17, r3_18, v21, v22);
            r1_2 = g9984;
            r0_23 = fun_102c(r4_19, r1_2, r2_17);
            r4_24 = r0_23;
            if (!r4_24) {
                continue;
            } else {
                less_or_equal25 = reinterpret_cast<int32_t>(r9_13) <= reinterpret_cast<int32_t>(4);
                if (less_or_equal25) {
                    r2_17 = reinterpret_cast<void**>(13);
                }
                if (less_or_equal25) {
                    r3_18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp6) + 0xdb);
                }
                if (less_or_equal25) {
                    r0_23 = reinterpret_cast<void**>(r9_13 * reinterpret_cast<unsigned char>(r2_17) + reinterpret_cast<unsigned char>(r3_18));
                }
                if (less_or_equal25) {
                    r1_2 = r6_15;
                }
                if (less_or_equal25) {
                    fun_eb30(r0_23, r1_2, r2_17, r3_18, v26, v27);
                }
                ++r9_13;
                fun_1028(r4_24, r1_2, r2_17, r3_18);
                continue;
            }
            label_16:
        }
        fun_103c(r5_11, r1_2);
    }
    r5_28 = r10_7;
    r8_29 = 0;
    r6_30 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp6) + 0xdb);
    while (reinterpret_cast<int32_t>(r8_29) < reinterpret_cast<int32_t>(r9_13)) {
        fun_eb30(reinterpret_cast<int32_t>(sp6) + 0x144, r6_30, r2_17, r3_18, 40, v31);
        r2_17 = reinterpret_cast<void**>(0);
        while (r3_32 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r2_17) + reinterpret_cast<unsigned char>(r6_30)))), r4_33 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp6) + 0x16c), !!r3_32) {
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r2_17) + reinterpret_cast<unsigned char>(r4_33)) = static_cast<signed char>(reinterpret_cast<uint32_t>(r3_32));
            ++r2_17;
        }
        r1_34 = g9988;
        fun_eb30(reinterpret_cast<unsigned char>(r4_33) + reinterpret_cast<unsigned char>(r2_17), r1_34, r2_17, r3_32, 40, v35);
        r0_36 = fun_6198(r4_33, reinterpret_cast<int32_t>(sp6) + 4, r2_17);
        if (r0_36) {
            do {
                r4_37 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp6) + 0x190 + 3);
                r7_38 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(sp6) + 0x11c);
                r2_17 = r7_38;
                r3_32 = reinterpret_cast<void**>(13);
                r0_39 = fun_5fe8(reinterpret_cast<int32_t>(sp6) + 4, r4_37, r2_17, 13, 40);
                r1_40 = g998c;
                if (!r0_39) 
                    break;
                r0_41 = fun_eafc(r4_37, r1_40, r2_17, 13, 40);
            } while (r0_41);
            goto label_44;
        } else {
            goto addr_98f4_46;
        }
        addr_98ec_47:
        fun_6190(reinterpret_cast<int32_t>(sp6) + 4, r1_40, r2_17, 13, 40);
        addr_98f4_46:
        fun_9a64(r5_28, reinterpret_cast<int32_t>(sp6) + 0x144, r2_17, r3_32, 40);
        fun_eb30(r5_28 + 40, r6_30, r2_17, r3_32, 40, v42);
        r3_18 = g9990;
        ++r8_29;
        *reinterpret_cast<void***>(r5_28 + 60) = r3_18;
        r6_30 = r6_30 + 13;
        r5_28 = r5_28 + 64;
        continue;
        label_44:
        r1_40 = r7_38;
        fun_eb30(reinterpret_cast<int32_t>(sp6) + 0x144, r1_40, r2_17, 13, 40, v43);
        goto addr_98ec_47;
    }
    if (r9_13 != 1) {
        r3_44 = g9994;
        r4_45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r10_7) + (r8_29 << 6));
        fun_9a64(r4_45, *reinterpret_cast<void***>(r3_44) + 83, r2_17, r3_44, 40);
        *reinterpret_cast<void***>(r4_45 + 40) = reinterpret_cast<void**>(0);
        r3_46 = g9990;
        *reinterpret_cast<void***>(r4_45 + 60) = r3_46;
        ++r9_13;
    } else {
        fun_9714(r10_7, r10_7, r11_8);
    }
    return r9_13;
}

struct s77 {
    signed char[40] pad40;
    unsigned char f40;
};

uint32_t* g99b4 = reinterpret_cast<uint32_t*>(0x4000016c);

int32_t fun_997c(struct s77* r0, int16_t* r1, int32_t* r2) {
    int1_t z4;
    int32_t r8_5;
    int1_t z6;
    uint32_t r12_7;
    int1_t z8;
    int32_t r4_9;
    int32_t r4_10;
    int1_t z11;
    int1_t z12;
    int1_t z13;
    int1_t n14;
    uint32_t* r1_15;

    if (z4) {
        *r1 = static_cast<int16_t>(reinterpret_cast<uint32_t>(r1));
        r1 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r1) - r8_5);
    }
    if (z6) {
        r1 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r1) & r12_7 >> 19);
    }
    if (z8) {
        r1 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r1) & reinterpret_cast<uint32_t>(r4_9 >> r4_10));
    }
    if (z11) {
        *r1 = static_cast<int16_t>(reinterpret_cast<uint32_t>(r1));
    }
    if (z12) {
    }
    if (z13) {
    }
    if (n14) {
    }
    r1_15 = g99b4;
    *r1_15 = r0->f40;
    *r2 = 6;
    return -1;
}

void fun_9aac(int32_t r0) {
    int1_t n2;
    int1_t n3;

    if (n2) {
    }
    if (!n3) 
        goto "???";
}

void fun_9d54(int32_t r0) {
    int1_t n2;
    int1_t z3;
    int1_t n4;
    int1_t n5;
    int1_t z6;
    int1_t z7;
    int1_t z8;
    int1_t z9;

    if (n2) {
    }
    if (z3) {
    }
    if (n4) {
    }
    if (n5) {
    }
    if (z6) {
    }
    if (z7) {
    }
    if (z8) {
    }
    if (!z9) 
        goto "???";
}

int32_t fun_a614() {
    fun_9a94(1);
    return 0;
}

void fun_ac68(uint32_t r0) {
    int1_t n2;
    uint32_t r12_3;
    uint32_t r7_4;
    int1_t n5;
    int64_t v6;
    int32_t r8_7;
    int1_t n8;
    uint32_t r8_9;
    int1_t n10;
    uint32_t r12_11;
    int1_t n12;
    int32_t r7_13;
    int1_t n14;
    uint32_t r12_15;
    int1_t n16;
    uint32_t r8_17;
    uint32_t r7_18;
    int1_t n19;
    uint32_t r12_20;
    uint32_t r12_21;
    int1_t n22;
    uint32_t r12_23;
    int32_t r4_24;
    int1_t n25;
    uint32_t r8_26;
    int1_t z27;
    int1_t z28;
    int1_t z29;

    if (n2) {
        r0 = r0 & r12_3 << r7_4;
    }
    if (n5) {
        *reinterpret_cast<int64_t**>(&v6) = reinterpret_cast<int64_t*>(r0 & reinterpret_cast<uint32_t>(r8_7 >> 16));
    }
    if (n8) {
        r0 = r0 & r8_9 >> 14;
    }
    if (n10) {
        r0 = r0 & r12_11 >> 14;
    }
    if (n12) {
        r0 = r0 & r0 >> r7_13;
    }
    if (n14) {
        r0 = r0 & r12_15 >> 8;
    }
    if (n16) {
        r0 = r0 & r8_17 << r7_18;
    }
    if (n19) {
        r0 = r0 & (r12_20 >> reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v6)) | r12_21 << 32 - reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v6)));
    }
    if (n22) {
        r0 = r0 & r12_23 >> r4_24;
    }
    if (n25) {
        *reinterpret_cast<int64_t**>(&v6) = reinterpret_cast<int64_t*>(r0 & r0 << r8_26);
    }
    if (z27) {
        **reinterpret_cast<int64_t**>(&v6) = v6;
    }
    if (z28) {
    }
    if (!z29) 
        goto "???";
}

void fun_b134(uint32_t r0) {
    int1_t n2;
    uint32_t r4_3;
    int32_t r7_4;
    int1_t n5;
    int64_t v6;
    int32_t r12_7;
    int1_t n8;
    int32_t r4_9;
    int32_t r9_10;
    int1_t n11;
    int32_t r8_12;
    int1_t n13;
    int32_t r4_14;
    int32_t r8_15;
    int1_t n16;
    uint32_t r8_17;
    int32_t r7_18;
    int1_t z19;
    uint32_t r4_20;
    int1_t z21;
    int1_t n22;
    uint32_t r8_23;
    int1_t z24;
    int1_t z25;

    if (n2) {
        r0 = r0 & r4_3 >> r7_4;
    }
    if (n5) {
        *reinterpret_cast<int64_t**>(&v6) = reinterpret_cast<int64_t*>(r0 & reinterpret_cast<uint32_t>(r12_7 >> 16));
    }
    if (n8) {
        *reinterpret_cast<int64_t**>(&v6) = reinterpret_cast<int64_t*>(r0 & reinterpret_cast<uint32_t>(r4_9 >> r9_10));
    }
    if (n11) {
        *reinterpret_cast<int64_t**>(&v6) = reinterpret_cast<int64_t*>(r0 & reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(r0) >> r8_12));
    }
    if (n13) {
        *reinterpret_cast<int64_t**>(&v6) = reinterpret_cast<int64_t*>(r0 & reinterpret_cast<uint32_t>(r4_14 >> r8_15));
    }
    if (n16) {
        r0 = r0 & r8_17 >> r7_18;
    }
    if (z19) {
        *reinterpret_cast<int64_t**>(&v6) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v6)) & r4_20 >> reinterpret_cast<int32_t>(__zero_stack_offset()));
    }
    if (z21) {
        *reinterpret_cast<int64_t**>(&v6) = reinterpret_cast<int64_t*>(r0 * 0xb158);
    }
    if (n22) {
        *reinterpret_cast<int64_t**>(&v6) = reinterpret_cast<int64_t*>(r0 & r0 << r8_23);
    }
    if (z24) {
        **reinterpret_cast<int64_t**>(&v6) = v6;
    }
    if (!z25) 
        goto "???";
}

void fun_bc5c(int32_t r0) {
    int1_t n2;
    int1_t n3;
    int1_t n4;
    int1_t n5;

    if (n2) {
    }
    if (n3) {
    }
    if (n4) {
    }
    if (!n5) 
        goto "???";
}

void fun_be18(int32_t r0) {
}

struct s78 {
    signed char[16] pad16;
    void** f16;
};

void fun_be28(void* r0) {
    void* r1_2;
    int32_t r0_3;
    void** r2_4;
    void* r12_5;
    void** r3_6;
    void** r4_7;
    void** r5_8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** r0_40;
    int1_t z41;
    struct s78* r5_42;

    r1_2 = r0;
    r0_3 = 0;
    while (1) {
        r2_4 = reinterpret_cast<void**>(0);
        while (r12_5 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r1_2) + 16), r3_6 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r2_4) + reinterpret_cast<uint32_t>(r12_5)))), *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r2_4) + reinterpret_cast<uint32_t>(r1_2)) = static_cast<signed char>(reinterpret_cast<uint32_t>(r3_6)), ++r2_4, !reinterpret_cast<int1_t>(r2_4 == 16)) {
        }
        ++r0_3;
        r1_2 = r12_5;
        if (r0_3 == 15) 
            break;
    }
    r4_7 = r5_8;
    while (1) {
        r0_40 = fun_5eb8(0, 20, r2_4, r3_6, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39);
        z41 = r0_40 == 0;
        if (z41) {
            r3_6 = reinterpret_cast<void**>(1);
        }
        if (!z41) {
            r3_6 = reinterpret_cast<void**>(0);
        }
        *reinterpret_cast<signed char*>(r4_7 + 0xf0) = static_cast<signed char>(reinterpret_cast<uint32_t>(r3_6));
        ++r4_7;
        r3_6 = reinterpret_cast<void**>(&r5_42->f16);
        if (r4_7 == r3_6) 
            break;
    }
}

void fun_be38() {
    void* r0_1;
    void** r2_2;
    void* r5_3;
    int32_t r1_4;
    void** r3_5;
    int32_t r4_6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** r0_38;
    int1_t z39;
    int32_t r5_40;

    r0_1 = reinterpret_cast<void*>(14);
    while (1) {
        r2_2 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(r5_3) + reinterpret_cast<uint32_t>(r0_1));
        r1_4 = 0;
        while (r3_5 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r2_2)))), ++r1_4, *reinterpret_cast<void***>(r2_2 + 1) = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint32_t>(r3_5))), r2_2 = r2_2 + 16, r1_4 != 16) {
        }
        r0_1 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r0_1) - 1);
        if (!__intrinsic()) 
            break;
    }
    r4_6 = 0;
    while (1) {
        r0_38 = fun_5eb8(0, 20, r2_2, r3_5, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37);
        z39 = r0_38 == 0;
        if (z39) {
            r3_5 = reinterpret_cast<void**>(1);
        }
        if (!z39) {
            r3_5 = reinterpret_cast<void**>(0);
        }
        *reinterpret_cast<signed char*>(r4_6 + r5_40) = static_cast<signed char>(reinterpret_cast<uint32_t>(r3_5));
        r4_6 = r4_6 + 16;
        if (r4_6 == 0x100) 
            break;
    }
}

struct s79 {
    signed char[15] pad15;
    signed char f15;
};

void fun_be48() {
    void* r0_1;
    void** r2_2;
    void* r5_3;
    int32_t r1_4;
    void** r3_5;
    struct s79* r4_6;
    struct s79* r5_7;
    int32_t r6_8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** r0_40;
    int1_t z41;

    r0_1 = reinterpret_cast<void*>(1);
    while (1) {
        r2_2 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(r5_3) + reinterpret_cast<uint32_t>(r0_1));
        r1_4 = 0;
        while (r3_5 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r2_2)))), ++r1_4, *reinterpret_cast<void***>(r2_2 + 0xffffffff) = reinterpret_cast<void**>(static_cast<unsigned char>(reinterpret_cast<uint32_t>(r3_5))), r2_2 = r2_2 + 16, r1_4 != 16) {
        }
        r0_1 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r0_1) + 1);
        if (reinterpret_cast<int1_t>(r0_1 == 16)) 
            break;
    }
    r4_6 = r5_7;
    r6_8 = 0;
    while (1) {
        r0_40 = fun_5eb8(0, 20, r2_2, r3_5, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39);
        ++r6_8;
        z41 = r0_40 == 0;
        if (z41) {
            r3_5 = reinterpret_cast<void**>(1);
        }
        if (!z41) {
            r3_5 = reinterpret_cast<void**>(0);
        }
        r4_6->f15 = static_cast<signed char>(reinterpret_cast<uint32_t>(r3_5));
        ++r4_6;
        if (r6_8 == 16) 
            break;
    }
}

void*** gc0f8 = reinterpret_cast<void***>(0x40000774);

void** gc0fc = reinterpret_cast<void**>(0x78);

void** gc104 = reinterpret_cast<void**>(96);

void** gc100 = reinterpret_cast<void**>(24);

int32_t fun_be58(void** r0, void** r1, void** r2) {
    int1_t n4;
    uint32_t r4_5;
    int32_t r7_6;
    uint32_t r4_7;
    int32_t r7_8;
    int1_t n9;
    uint32_t r8_10;
    int32_t r7_11;
    uint32_t r8_12;
    int32_t r7_13;
    void*** r3_14;
    void** r3_15;
    void** sp16;
    void** v17;
    void** v18;
    void** v19;
    void** r0_20;
    void** r0_21;
    void** v22;
    void** v23;
    void** v24;
    void** r1_25;
    void** v26;
    void** r10_27;
    void** r5_28;
    void** r7_29;
    void** r6_30;
    void** r8_31;
    void** r9_32;
    void*** r3_33;
    void** r2_34;
    void** r3_35;
    void** r3_36;
    void** r2_37;
    void** r0_38;
    int1_t z39;
    int1_t z40;
    int1_t z41;
    void** v42;
    void** v43;
    void** v44;
    void** r0_45;
    void** r3_46;
    void** r0_47;
    int1_t z48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** r0_53;
    void** r0_54;
    void** r0_55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    int32_t r0_87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** r0_92;
    void** r0_93;
    void** r0_94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;

    if (n4) {
        r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) & (r4_5 >> r7_6 | r4_7 << reinterpret_cast<uint32_t>(32 - r7_8)));
    }
    if (n9) {
        r0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r0) & (r8_10 >> r7_11 | r8_12 << reinterpret_cast<uint32_t>(32 - r7_13)));
    }
    r3_14 = gc0f8;
    *r3_14 = reinterpret_cast<void**>(0);
    r3_15 = gc0fc;
    sp16 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 32 - 0x100);
    *reinterpret_cast<void***>(r3_15) = reinterpret_cast<void**>(0);
    r0_20 = fun_1054(r0, r1, r2, r3_15, v17, v18, v19);
    fun_6388(r0_20, r1, r2, r3_15);
    fun_c504(0, 12, r2);
    r0_21 = fun_c4a0(0, 12, r2);
    fun_6334(r0_21, 12, r2, r3_15);
    fun_eadc(sp16, 0, 0x100);
    fun_c504(12, 12, 0x100);
    fun_bb5c(sp16, 12, 0x100, r3_15);
    fun_6f70(9, 1, 0x100, r3_15, v22);
    fun_6f70(3, 1, 0x100, r3_15, v23);
    fun_6f70(0, 1, 0x100, r3_15, v24);
    r1_25 = reinterpret_cast<void**>(1);
    fun_6f70(6, 1, 0x100, r3_15, v26);
    r10_27 = reinterpret_cast<void**>(2);
    r5_28 = r0_20;
    r7_29 = reinterpret_cast<void**>(0);
    r6_30 = reinterpret_cast<void**>(2);
    r8_31 = reinterpret_cast<void**>(0);
    r9_32 = reinterpret_cast<void**>(12);
    do {
        r3_33 = gc0f8;
        r2_34 = *r3_33;
        r3_35 = gc0fc;
        r3_36 = *reinterpret_cast<void***>(r3_35);
        if (reinterpret_cast<signed char>(r2_34) < reinterpret_cast<signed char>(0)) {
            r2_34 = reinterpret_cast<void**>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(r2_34)));
        }
        if (reinterpret_cast<signed char>(r3_36) < reinterpret_cast<signed char>(0)) {
            r3_36 = reinterpret_cast<void**>(-static_cast<uint32_t>(reinterpret_cast<unsigned char>(r3_36)));
        }
        r2_37 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r2_34) + reinterpret_cast<unsigned char>(r3_36));
        if (reinterpret_cast<signed char>(r2_37) > reinterpret_cast<signed char>(99)) 
            break;
        r0_38 = fun_6e8c(9, r1_25, r2_37);
        z39 = r0_38 == 0;
        if (!z39) {
            r6_30 = reinterpret_cast<void**>(0);
        }
        if (z39) {
            r0_38 = fun_6e8c(3, r1_25, r2_37);
            z40 = r0_38 == 0;
            if (!z40) {
                r6_30 = reinterpret_cast<void**>(1);
            }
            if (z40) {
                r0_38 = fun_6e8c(r0_38, r1_25, r2_37);
                z41 = r0_38 == 0;
                if (!z41) {
                    r6_30 = reinterpret_cast<void**>(2);
                }
                if (z41) {
                    r0_38 = fun_6e8c(6, r1_25, r2_37);
                    if (r0_38) {
                        r6_30 = reinterpret_cast<void**>(3);
                    }
                }
            }
        }
        if (r10_27 != r6_30) {
            r1_25 = r6_30;
            fun_bc6c(sp16, r1_25, r2_37, r3_36);
            r0_38 = fun_bb04(sp16, r1_25);
            r8_31 = r0_38;
            if (reinterpret_cast<signed char>(r7_29) > reinterpret_cast<signed char>(0)) {
                --r7_29;
            }
            r10_27 = r6_30;
        }
        r0_45 = fun_1054(r0_38, r1_25, r2_37, r3_36, v42, v43, v44);
        r3_46 = r5_28 + 0xc8;
        if (reinterpret_cast<unsigned char>(r3_46) >= reinterpret_cast<unsigned char>(r0_45)) {
            r1_25 = r10_27;
            fun_bc6c(sp16, r1_25, r2_37, r3_46);
            if (r8_31) {
                goto addr_bfc0_35;
            } else {
                r0_47 = fun_bb04(sp16, r1_25);
                if (r0_47) {
                    addr_bfc0_35:
                    r8_31 = reinterpret_cast<void**>(1);
                }
                if (reinterpret_cast<signed char>(r7_29) > reinterpret_cast<signed char>(0)) {
                    --r7_29;
                }
                r5_28 = r0_45;
            }
        }
        if (r8_31) {
            z48 = r7_29 == 0;
            if (!z48) {
                r8_31 = reinterpret_cast<void**>(0);
            }
            if (z48) {
                --r9_32;
                r1_25 = reinterpret_cast<void**>(12);
                fun_c504(r9_32, 12, r2_37);
                r8_31 = r7_29;
                r7_29 = reinterpret_cast<void**>(5);
            }
        }
    } while (reinterpret_cast<signed char>(r9_32) > reinterpret_cast<signed char>(0));
    goto label_49;
    fun_6f70(9, 0, r2_37, r3_36, v49);
    fun_6f70(3, 0, r2_37, r3_36, v50);
    fun_6f70(0, 0, r2_37, r3_36, v51);
    r0_53 = fun_6f70(6, 0, r2_37, r3_36, v52);
    fun_6388(r0_53, 0, r2_37, r3_36);
    fun_c504(0, 12, r2_37);
    r0_54 = fun_c4a0(0, 12, r2_37);
    fun_6334(r0_54, 12, r2_37, r3_36);
    r0_55 = gc104;
    fun_6208(r0_55, 12, r2_37, r3_36, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86);
    r0_87 = 1;
    addr_c0f0_52:
    return r0_87;
    label_49:
    fun_6f70(9, 0, r2_37, r3_46, v88);
    fun_6f70(3, 0, r2_37, r3_46, v89);
    fun_6f70(0, 0, r2_37, r3_46, v90);
    r0_92 = fun_6f70(6, 0, r2_37, r3_46, v91);
    fun_6388(r0_92, 0, r2_37, r3_46);
    fun_c504(0, 12, r2_37);
    r0_93 = fun_c4a0(0, 12, r2_37);
    fun_6334(r0_93, 12, r2_37, r3_46);
    r0_94 = gc100;
    fun_6208(r0_94, 12, r2_37, r3_46, v95, v96, v97, v98, v99, v100, v101, v102, v103, v104, v105, v106, v107, v108, v109, v110, v111, v112, v113, v114, v115, v116, v117, v118, v119, v120, v121, v122, v123, v124, v125);
    r0_87 = 0;
    goto addr_c0f0_52;
}

void fun_c470(int32_t r0, int64_t* r1) {
    int64_t v2;
    int1_t n3;
    int1_t n4;
    int1_t n5;
    int1_t n6;
    int1_t n7;
    int1_t n8;
    int1_t n9;
    int1_t n10;
    int1_t n11;
    int1_t n12;
    int1_t z13;
    int1_t z14;

    *reinterpret_cast<int64_t**>(&v2) = r1;
    if (n3) {
    }
    if (n4) {
    }
    if (n5) {
    }
    if (n6) {
    }
    if (n7) {
    }
    if (n8) {
    }
    if (n9) {
    }
    if (n10) {
    }
    if (n11) {
    }
    if (n12) {
    }
    if (z13) {
        **reinterpret_cast<int64_t**>(&v2) = v2;
    }
    if (!z14) 
        goto "???";
}

void fun_c720(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_c8e0() {
    int1_t n1;
    int16_t* r0_2;
    int32_t r8_3;
    int32_t r7_4;
    int1_t n5;
    int32_t r12_6;
    int32_t r7_7;
    int1_t n8;
    int1_t n9;
    int1_t n10;
    int1_t n11;
    int1_t n12;

    if (n1) {
        r0_2 = reinterpret_cast<int16_t*>(r8_3 * r7_4);
    }
    if (n5) {
        r0_2 = reinterpret_cast<int16_t*>(r12_6 * r7_7);
    }
    if (n8) {
        *r0_2 = static_cast<int16_t>(reinterpret_cast<int32_t>(r0_2));
    }
    if (n9) {
    }
    if (n10) {
    }
    if (n11) {
    }
    if (!n12) 
        goto "???";
}

void fun_cd28() {
    goto "|";
}

void fun_cf34() {
    goto "|";
}

void fun_d128(int16_t* r0) {
    int1_t n2;
    uint32_t r8_3;
    int1_t z4;
    int1_t n5;
    int32_t r8_6;
    int1_t n7;
    int1_t n8;
    int1_t z9;

    if (n2) {
        r0 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r0) & r8_3 >> 15);
    }
    if (z4) {
        __asm__("ldrdeq r1, r2, [r1], -r8");
    }
    if (n5) {
        *r0 = static_cast<int16_t>(reinterpret_cast<uint32_t>(r0));
        r0 = reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(r0) - r8_6);
    }
    if (n7) {
        *r0 = static_cast<int16_t>(reinterpret_cast<uint32_t>(r0));
    }
    if (n8) {
    }
    if (!z9) 
        goto "???";
}

void fun_d2ec() {
    goto 0xd308;
}

void fun_d514(int64_t* r0, int64_t* r1) {
    uint96_t v1;
    int1_t n2;
    int1_t n3;
    int32_t r4_4;
    int1_t n5;
    int32_t r8_6;
    int1_t z7;
    int1_t n8;
    int32_t r12_9;
    int1_t z10;
    uint32_t r8_11;
    uint32_t r8_12;
    int1_t z13;
    int32_t r12_14;
    int1_t z15;
    int1_t z16;
    uint32_t r4_17;
    int1_t z18;
    int1_t z19;
    int32_t r12_20;
    int1_t below_or_equal21;

    *reinterpret_cast<int64_t**>(&v1) = r0;
    *reinterpret_cast<int64_t**>(reinterpret_cast<int32_t>(&v1) + 4) = r1;
    if (n2) {
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) & reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(*reinterpret_cast<int64_t**>(&v1)) >> 15));
    }
    if (n3) {
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) & reinterpret_cast<uint32_t>(r4_4 >> 15));
    }
    if (n5) {
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) & reinterpret_cast<uint32_t>(r8_6 >> 15));
    }
    if (z7) {
        *reinterpret_cast<int64_t**>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(reinterpret_cast<int32_t>(&v1) + 4)) & (reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) >> 30 | reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) << 2));
    }
    if (n8) {
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) & reinterpret_cast<uint32_t>(r12_9 >> 15));
    }
    if (z10) {
        *reinterpret_cast<int64_t**>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(reinterpret_cast<int32_t>(&v1) + 4)) & (r8_11 >> 29 | r8_12 << 3));
    }
    if (z13) {
        **reinterpret_cast<int64_t**>(reinterpret_cast<int32_t>(&v1) + 4) = *reinterpret_cast<int64_t*>(reinterpret_cast<int32_t>(&v1) + 4);
        *reinterpret_cast<int64_t**>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(reinterpret_cast<int32_t>(&v1) + 4)) - r12_14);
    }
    if (z15) {
        *reinterpret_cast<int64_t**>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int64_t*>(0);
    }
    if (z16) {
        *reinterpret_cast<int64_t**>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(reinterpret_cast<int32_t>(&v1) + 4)) & r4_17 >> 30);
    }
    if (z18) {
        *reinterpret_cast<int64_t**>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int64_t*>(0);
    }
    if (z19) {
        *reinterpret_cast<int64_t**>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(reinterpret_cast<int32_t>(&v1) + 4)) & reinterpret_cast<uint32_t>(r12_20 >> 30));
    }
    if (below_or_equal21) 
        goto "???";
    **reinterpret_cast<int64_t**>(&v1) = *reinterpret_cast<int64_t*>(&v1);
}

void** fun_fe9c(int32_t r0, void** r1, void** r2) {
    void** r3_4;
    void** r0_5;
    uint1_t less_or_equal6;

    r3_4 = reinterpret_cast<void**>(0);
    if (!r0) {
        r0_5 = fun_105dc(r2, r1, 0x100);
        r3_4 = r0_5;
        less_or_equal6 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r3_4) < reinterpret_cast<signed char>(0) != __intrinsic()) | reinterpret_cast<uint1_t>(r3_4 == 0));
        if (!less_or_equal6) {
            r3_4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r3_4) >> 1);
        }
        if (less_or_equal6) {
            fun_1130(r2 + 12, r1, 0x100, r3_4);
            r3_4 = reinterpret_cast<void**>(0xffffffff);
        }
    }
    return r3_4;
}

void fun_dea4() {
}

void fun_e4e8(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_e758(int32_t r0) {
    int1_t n2;
    int1_t n3;

    if (n2) {
    }
    if (!n3) 
        goto "???";
}

struct s80 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s80* ge7d8 = reinterpret_cast<struct s80*>(0x40000d3c);

int32_t* ge7dc = reinterpret_cast<int32_t*>(0x40000d2c);

void fun_e798() {
    struct s80* r2_1;
    int32_t r1_2;
    int32_t* r3_3;

    r2_1 = ge7d8;
    r1_2 = 0;
    while (r2_1->f1 = static_cast<unsigned char>(static_cast<uint32_t>(r2_1->f1) & 0x7f), ++r1_2, r2_1->f1 = static_cast<unsigned char>(static_cast<uint32_t>(r2_1->f1)), r2_1 = r2_1 + 10, r1_2 != 20) {
    }
    r3_3 = ge7dc;
    *r3_3 = 0;
    goto 0xe3bc;
}

int32_t geb9c = 0x1fe0;

int32_t fun_eb90(int32_t r0) {
    int1_t z2;
    int32_t r0_3;

    if (z2) {
    }
    r0_3 = geb9c;
    return r0_3;
}

void fun_eff8(int32_t r0) {
    int1_t z2;

    if (!z2) 
        goto "???";
}

void fun_f264() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_f1d4() {
    int1_t z1;

    if (!z1) 
        goto "???";
    __asm__("ldrdeq r2, r3, [r1], -r8");
}

void fun_10d40(int32_t* r0) {
    int32_t r12_2;

    __asm__("mrs ip, apsr");
    __asm__("bic r1, r1, r3");
    __asm__("msr cpsr_fc, r1");
    *r0 = r12_2;
    return;
}

void fun_10d80(int32_t* r0) {
    int32_t r12_2;

    __asm__("mrs ip, apsr");
    __asm__("bic r1, r1, r3");
    __asm__("msr cpsr_fc, r1");
    *r0 = r12_2;
    return;
}

void*** gf484 = reinterpret_cast<void***>(0x40000ed8);

void*** gf488 = reinterpret_cast<void***>(0x40000ecc);

void fun_f40c() {
    int1_t n1;
    void** v2;
    void** r4_3;
    void** v4;
    void* sp5;
    void** r3_6;
    void** r0_7;
    void*** lr8;
    void*** r4_9;

    if (n1) {
        __asm__("ldrdmi r0, r1, [r0], -r4");
    }
    v2 = r4_3;
    v4 = reinterpret_cast<void**>(__return_address());
    sp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 - 4);
    while (1) {
        r3_6 = reinterpret_cast<void**>(0);
        r0_7 = fun_1058(reinterpret_cast<int32_t>(sp5) + 4 - 4, 0, 1);
        lr8 = gf484;
        if (reinterpret_cast<signed char>(r0_7) >= reinterpret_cast<signed char>(0)) {
            r3_6 = *lr8;
            r4_9 = gf488;
            if (r3_6) {
                r3_6 = *r4_9;
                *lr8 = reinterpret_cast<void**>(0);
                if (!r3_6) {
                    if (0) {
                        r3_6 = reinterpret_cast<void**>(1);
                    }
                    if (0) {
                        *r4_9 = r3_6;
                    }
                }
                fun_10ee4(1, 0, 1, r3_6);
            }
        }
        fun_eb7c(15, 0, 1, r3_6, 0, v2, v4);
        fun_108cc();
    }
}

void fun_f484(int32_t r0) {
    int1_t n2;
    int1_t n3;

    if (n2) {
        __asm__("ldrdmi r0, r1, [r0], -r8");
    }
    if (!n3) 
        goto "???";
}

void fun_f570(int32_t r0, int32_t r1) {
    int1_t n3;
    int1_t z4;

    if (n3) {
    }
    if (!z4) 
        goto "???";
}

void fun_f6a0() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_f7d0(int32_t r0, int64_t* r1) {
    int1_t n3;
    int1_t z4;
    int64_t v5;

    if (n3) {
    }
    if (!z4) 
        goto "???";
    *r1 = v5;
}

void fun_f890(int32_t r0, int32_t r1) {
    int1_t n3;
    int1_t z4;

    if (n3) {
    }
    if (!z4) 
        goto "???";
}

void fun_fc4c(int64_t* r0) {
    int64_t v1;
    int1_t n2;
    uint32_t r8_3;
    uint32_t r8_4;
    int1_t n5;
    int32_t r12_6;
    int32_t r2_7;
    int1_t n8;
    uint32_t r12_9;
    uint32_t r12_10;
    int1_t n11;
    int1_t n12;
    int1_t n13;

    *reinterpret_cast<int64_t**>(&v1) = r0;
    if (n2) {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) & (r8_3 >> 4 | r8_4 << 28);
    }
    if (n5) {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) & reinterpret_cast<uint32_t>(r12_6 >> r2_7);
    }
    if (n8) {
        *reinterpret_cast<int64_t**>(&v1) = reinterpret_cast<int64_t*>(reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) & (r12_9 >> 9 | r12_10 << 23));
    }
    if (n11) {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(&v1) + 4) = reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) & (reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) >> 4 | reinterpret_cast<uint32_t>(*reinterpret_cast<int64_t**>(&v1)) << 28);
    }
    if (n12) {
        **reinterpret_cast<int64_t**>(&v1) = v1;
    }
    if (n13) {
    }
    goto fun_fae8;
}

void fun_102a8(int32_t r0) {
    int1_t n2;
    int1_t n3;
    int1_t n4;
    int1_t n5;
    int1_t z6;

    if (n2) {
    }
    if (n3) {
    }
    if (n4) {
    }
    if (n5) {
        __asm__("ldrdmi r1, r2, [r0], -r0");
    }
    if (!z6) 
        goto "???";
}

void fun_10460() {
    int1_t z1;

    if (!z1) 
        goto "???";
}

void fun_105d4(int32_t r0) {
    int1_t n2;
    int1_t n3;

    if (n2) {
    }
    if (!n3) 
        goto "???";
    __asm__("ldrdmi r1, r2, [r0], -r0");
}

void fun_107c8() {
    int1_t z1;
    int1_t z2;
    int1_t z3;
    int1_t z4;
    int1_t z5;
    int1_t z6;

    if (z1) {
    }
    if (z2) {
    }
    if (z3) {
    }
    if (z4) {
    }
    if (z5) {
    }
    if (!z6) 
        goto "???";
}

void fun_108bc(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_1095c(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_10a30(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_10a98(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

void fun_10f64(int64_t* r0) {
    int1_t n2;
    int64_t v3;
    int1_t n4;

    if (n2) {
        *r0 = v3;
    }
    if (!n4) 
        goto "???";
}

void** fun_11064(void** r0, void** r1, void** r2) {
    void** r0_4;

    r0_4 = fun_10f6c(r0, r1, r2);
    return r0_4;
}

void** fun_111a4(void** r0, void** r1, void** r2) {
    void** r0_4;

    r0_4 = fun_1107c(r0, r1, r2);
    return r0_4;
}

void fun_3200() {
    void** r3_1;
    void** r3_2;

    fun_62e4(10, 2, 1, r3_1);
    fun_62e4(10, 3, 1, r3_2);
    goto 0x31f4;
}

void fun_35b0() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;
    void** r3_8;
    void** r3_9;
    void** r3_10;
    void** r3_11;

    fun_62e4(10, 2, 1, r3_1);
    fun_62e4(10, 3, 1, r3_2);
    fun_62e4(10, 4, 1, r3_3);
    fun_62e4(9, 5, 1, r3_4);
    fun_62e4(8, 5, 1, r3_5);
    fun_62e4(7, 5, 1, r3_6);
    fun_62e4(6, 5, 1, r3_7);
    fun_62e4(6, 4, 1, r3_8);
    fun_62e4(6, 3, 1, r3_9);
    fun_62e4(6, 2, 1, r3_10);
    fun_62e4(6, 6, 1, r3_11);
    goto 0x31f4;
}

void fun_480c() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    fun_62e4(7, 7, 1, r3_4);
    fun_62e4(6, 7, 1, r3_5);
    fun_62e4(5, 7, 1, r3_6);
    fun_62e4(4, 6, 1, r3_7);
}

void fun_488c() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;
    void** r3_8;
    void** r3_9;
    void** r3_10;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    fun_62e4(7, 7, 1, r3_4);
    fun_62e4(6, 7, 1, r3_5);
    fun_62e4(5, 7, 1, r3_6);
    fun_62e4(4, 6, 1, r3_7);
    fun_62e4(4, 5, 1, r3_8);
    fun_62e4(5, 4, 1, r3_9);
    fun_62e4(6, 4, 1, r3_10);
}

void fun_44ec() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;
    void** r3_8;
    void** r3_9;
    void** r3_10;
    void** r3_11;
    void** r3_12;
    void** r3_13;
    void** r3_14;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    fun_62e4(7, 7, 1, r3_4);
    fun_62e4(6, 7, 1, r3_5);
    fun_62e4(5, 7, 1, r3_6);
    fun_62e4(4, 7, 1, r3_7);
    fun_62e4(4, 6, 1, r3_8);
    fun_62e4(4, 5, 1, r3_9);
    fun_62e4(4, 4, 1, r3_10);
    fun_62e4(4, 8, 1, r3_11);
    fun_62e4(5, 8, 1, r3_12);
    fun_62e4(6, 8, 1, r3_13);
    fun_62e4(7, 8, 1, r3_14);
    goto 0x47a0;
}

void fun_5464() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;
    void** r3_8;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    fun_62e4(7, 7, 1, r3_4);
    fun_62e4(6, 7, 1, r3_5);
    fun_62e4(5, 7, 1, r3_6);
    fun_62e4(4, 6, 1, r3_7);
    fun_62e4(4, 5, 1, r3_8);
}

void fun_4b08() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;
    void** r3_8;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    fun_62e4(7, 7, 1, r3_4);
    fun_62e4(6, 7, 1, r3_5);
    fun_62e4(5, 7, 1, r3_6);
    fun_62e4(4, 7, 1, r3_7);
    fun_62e4(4, 6, 1, r3_8);
}

void fun_5098() {
    void** r3_1;
    void** r3_2;
    void** r3_3;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
}

void fun_53bc() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    fun_62e4(7, 7, 1, r3_4);
    fun_62e4(6, 7, 1, r3_5);
}

void fun_667c() {
    goto 0x690c;
}

struct s81 {
    signed char f0;
    signed char f1;
    signed char f2;
    signed char[1] pad4;
    uint32_t f4;
    int32_t* f8;
};

struct s81* g7a24 = reinterpret_cast<struct s81*>(0x40000658);

void fun_79c4(uint32_t r0, uint32_t r1, uint32_t r2, int32_t* r3) {
    uint32_t r5_5;
    uint32_t r1_6;
    uint32_t r3_7;
    struct s81* r2_8;
    uint32_t r0_9;
    int32_t* r12_10;
    uint32_t lr11;
    int1_t z12;

    r5_5 = r0 & 0xff;
    r1_6 = r1 & 0xff;
    if (!r5_5) {
        return;
    } else {
        r3_7 = (r2 & 0xff) - r1_6;
        r2_8 = g7a24;
        r0_9 = r3_7 + 18;
        r12_10 = r3;
        lr11 = 0;
        r2_8->f1 = static_cast<signed char>(r3_7 + 1);
        r2_8->f4 = r0_9;
        r2_8->f0 = static_cast<signed char>(r1_6);
        r2_8->f2 = static_cast<signed char>(r5_5);
        r2_8->f8 = r3;
        while (z12 = lr11 == r5_5, ++lr11, !z12) {
            *r12_10 = 0;
            r12_10 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(r12_10) + r0_9);
        }
        return;
    }
}

void fun_80c0() {
    goto 0x8084;
}

void fun_8198(int32_t r0, int32_t r1) {
    fun_814c(r0);
    goto 0x7ca0;
}

void fun_621c() {
    return;
}

int32_t fun_a628() {
    fun_ea84(0);
    return 0;
}

void fun_c0f8(int32_t r0, int32_t r1) {
    int1_t n3;
    int1_t n4;
    int1_t z5;
    int1_t z6;

    if (n3) {
    }
    if (n4) {
    }
    if (z5) {
    }
    if (!z6) 
        goto "???";
}

void fun_cd34() {
}

void fun_cf3c() {
}

void fun_d2f4() {
    goto 0xd308;
}

int32_t* ge9e8 = reinterpret_cast<int32_t*>(0x400004ac);

void fun_e9dc(int32_t r0) {
    int32_t* r3_2;

    r3_2 = ge9e8;
    *r3_2 = r0;
    return;
}

uint32_t fun_10da0(int32_t r0) {
    __asm__("mrs r2, apsr");
    __asm__("bic r1, r1, r0");
    __asm__("msr cpsr_fc, r1");
    return reinterpret_cast<uint32_t>(~r0) & 0xc0;
}

void fun_10e50(int64_t* r0) {
    int1_t n2;
    int64_t v3;
    uint32_t r4_4;
    int1_t n5;
    uint32_t r8_6;
    int1_t n7;

    if (n2) {
        *reinterpret_cast<uint32_t*>(&v3) = reinterpret_cast<uint32_t>(r0) & r4_4 << 15;
    }
    if (n5) {
        *reinterpret_cast<uint32_t*>(&v3) = reinterpret_cast<uint32_t>(r0) & r8_6 >> 15;
    }
    if (!n7) 
        goto "???";
    *r0 = v3;
}

void fun_bec910();

void fun_11370() {
    int1_t v1;
    int1_t v2;
    int1_t v3;
    int1_t c4;
    int1_t z5;

    if (!v1) {
        __asm__("ldrbtvc r7, [r3], #-0x973");
    }
    if (v2) {
        fun_bec910();
    }
    if (v3) {
    }
    if (c4) {
        __asm__("cdphs p7, #6, c7, c14, c15, #3");
    }
    if (z5) {
    }
}

void fun_3228() {
    void** r3_1;
    void** r3_2;
    void** r3_3;

    fun_62e4(10, 2, 1, r3_1);
    fun_62e4(10, 3, 1, r3_2);
    fun_62e4(10, 4, 1, r3_3);
    goto 0x31f4;
}

void fun_3c34() {
    void** r3_1;

    fun_62e4(8, 8, 1, r3_1);
    goto 0x31f4;
}

void fun_3668() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;
    void** r3_8;
    void** r3_9;
    void** r3_10;
    void** r3_11;
    void** r3_12;

    fun_62e4(10, 2, 1, r3_1);
    fun_62e4(10, 3, 1, r3_2);
    fun_62e4(10, 4, 1, r3_3);
    fun_62e4(9, 5, 1, r3_4);
    fun_62e4(8, 5, 1, r3_5);
    fun_62e4(7, 5, 1, r3_6);
    fun_62e4(6, 5, 1, r3_7);
    fun_62e4(6, 4, 1, r3_8);
    fun_62e4(6, 3, 1, r3_9);
    fun_62e4(6, 2, 1, r3_10);
    fun_62e4(6, 6, 1, r3_11);
    fun_62e4(7, 6, 1, r3_12);
    goto 0x38ec;
}

void fun_46e4() {
    void** r3_1;
    void** r3_2;
    void** r3_3;

    fun_62e4(6, 4, 1, r3_1);
    fun_62e4(6, 5, 1, r3_2);
    fun_62e4(6, 6, 1, r3_3);
    goto 0x4938;
}

void fun_45d4() {
    void** r3_1;
    void** r3_2;
    void** r3_3;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    goto 0x4938;
}

void fun_54f4() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;
    void** r3_8;
    void** r3_9;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    fun_62e4(7, 7, 1, r3_4);
    fun_62e4(6, 7, 1, r3_5);
    fun_62e4(5, 7, 1, r3_6);
    fun_62e4(4, 6, 1, r3_7);
    fun_62e4(4, 5, 1, r3_8);
    fun_62e4(5, 4, 1, r3_9);
}

void fun_5178() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    fun_62e4(8, 7, 1, r3_4);
    fun_62e4(7, 7, 1, r3_5);
    fun_62e4(6, 7, 1, r3_6);
}

void fun_4b78() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;
    void** r3_8;
    void** r3_9;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    fun_62e4(7, 7, 1, r3_4);
    fun_62e4(6, 7, 1, r3_5);
    fun_62e4(5, 7, 1, r3_6);
    fun_62e4(4, 7, 1, r3_7);
    fun_62e4(4, 6, 1, r3_8);
    fun_62e4(4, 5, 1, r3_9);
    goto 0x5640;
}

void fun_5594() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;
    void** r3_8;
    void** r3_9;
    void** r3_10;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    fun_62e4(7, 7, 1, r3_4);
    fun_62e4(6, 7, 1, r3_5);
    fun_62e4(5, 7, 1, r3_6);
    fun_62e4(4, 6, 1, r3_7);
    fun_62e4(4, 5, 1, r3_8);
    fun_62e4(5, 4, 1, r3_9);
    fun_62e4(6, 4, 1, r3_10);
}

void fun_5100() {
    void** r3_1;
    void** r3_2;
    void** r3_3;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
}

void fun_53e4() {
    void** r3_1;
    void** r3_2;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
}

void** fun_80c8(void** r0, void** r1, void** r2, void** r3) {
    void** r0_5;

    r0_5 = fun_7de0(r0, r1, r2, r3, 0, __return_address());
    return r0_5;
}

int32_t fun_a63c() {
    return 0;
}

void fun_d2fc() {
    goto 0xd308;
}

void fun_e9e8(int32_t r0) {
    int1_t n2;

    if (!n2) 
        goto "???";
}

uint32_t fun_10dc0(int32_t r0) {
    __asm__("mrs r2, apsr");
    __asm__("bic r1, r1, r0");
    __asm__("msr cpsr_fc, r1");
    return reinterpret_cast<uint32_t>(~r0) & 64;
}

void fun_33e4() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;
    void** r3_8;

    fun_62e4(10, 2, 1, r3_1);
    fun_62e4(10, 3, 1, r3_2);
    fun_62e4(10, 4, 1, r3_3);
    fun_62e4(9, 5, 1, r3_4);
    fun_62e4(8, 5, 1, r3_5);
    fun_62e4(7, 5, 1, r3_6);
    fun_62e4(6, 5, 1, r3_7);
    fun_62e4(6, 4, 1, r3_8);
    goto 0x31f0;
}

void fun_3260() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;

    fun_62e4(10, 2, 1, r3_1);
    fun_62e4(10, 3, 1, r3_2);
    fun_62e4(10, 4, 1, r3_3);
    fun_62e4(9, 5, 1, r3_4);
    goto 0x3a78;
}

void fun_3c4c() {
    void** r3_1;
    void** r3_2;

    fun_62e4(8, 8, 1, r3_1);
    fun_62e4(8, 9, 1, r3_2);
    goto 0x31f4;
}

void fun_38f4() {
    goto 0x3500;
}

void fun_3730() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;
    void** r3_8;
    void** r3_9;
    void** r3_10;
    void** r3_11;
    void** r3_12;
    void** r3_13;

    fun_62e4(10, 2, 1, r3_1);
    fun_62e4(10, 3, 1, r3_2);
    fun_62e4(10, 4, 1, r3_3);
    fun_62e4(9, 5, 1, r3_4);
    fun_62e4(8, 5, 1, r3_5);
    fun_62e4(7, 5, 1, r3_6);
    fun_62e4(6, 5, 1, r3_7);
    fun_62e4(6, 4, 1, r3_8);
    fun_62e4(6, 3, 1, r3_9);
    fun_62e4(6, 2, 1, r3_10);
    fun_62e4(6, 6, 1, r3_11);
    fun_62e4(7, 6, 1, r3_12);
    fun_62e4(8, 6, 1, r3_13);
    goto 0x38ec;
}

void fun_471c() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;

    fun_62e4(6, 4, 1, r3_1);
    fun_62e4(6, 5, 1, r3_2);
    fun_62e4(6, 6, 1, r3_3);
    fun_62e4(6, 7, 1, r3_4);
}

void fun_4614() {
    void** r3_1;
    void** r3_2;
    void** r3_3;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    goto 0x47d0;
}

void fun_51b0() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    fun_62e4(8, 7, 1, r3_4);
    fun_62e4(7, 7, 1, r3_5);
    fun_62e4(6, 7, 1, r3_6);
}

void fun_4be8() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;
    void** r3_8;
    void** r3_9;
    void** r3_10;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    fun_62e4(7, 7, 1, r3_4);
    fun_62e4(6, 7, 1, r3_5);
    fun_62e4(5, 7, 1, r3_6);
    fun_62e4(4, 7, 1, r3_7);
    fun_62e4(4, 6, 1, r3_8);
    fun_62e4(4, 5, 1, r3_9);
    fun_62e4(4, 4, 1, r3_10);
    goto 0x5458;
}

int32_t fun_a644() {
    return 0;
}

void fun_d304() {
}

void fun_10de0(int32_t r0) {
    __asm__("mrs r0, apsr");
    __asm__("bic r1, r1, r2");
    __asm__("msr cpsr_fc, r1");
    return;
}

void fun_346c() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;
    void** r3_8;
    void** r3_9;

    fun_62e4(10, 2, 1, r3_1);
    fun_62e4(10, 3, 1, r3_2);
    fun_62e4(10, 4, 1, r3_3);
    fun_62e4(9, 5, 1, r3_4);
    fun_62e4(8, 5, 1, r3_5);
    fun_62e4(7, 5, 1, r3_6);
    fun_62e4(6, 5, 1, r3_7);
    fun_62e4(6, 4, 1, r3_8);
    fun_62e4(6, 3, 1, r3_9);
}

void fun_3a80() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;

    fun_62e4(5, 2, 1, r3_1);
    fun_62e4(5, 3, 1, r3_2);
    fun_62e4(5, 4, 1, r3_3);
    fun_62e4(5, 5, 1, r3_4);
    fun_62e4(4, 5, 1, r3_5);
    fun_62e4(3, 5, 1, r3_6);
    fun_62e4(2, 5, 1, r3_7);
    goto 0x31f8;
}

void fun_32a8() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;

    fun_62e4(10, 2, 1, r3_1);
    fun_62e4(10, 3, 1, r3_2);
    fun_62e4(10, 4, 1, r3_3);
    fun_62e4(9, 5, 1, r3_4);
    fun_62e4(8, 5, 1, r3_5);
    goto 0x3a78;
}

void fun_3e88() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;

    fun_62e4(6, 7, 1, r3_1);
    fun_62e4(6, 8, 1, r3_2);
    fun_62e4(6, 9, 1, r3_3);
    fun_62e4(5, 10, 1, r3_4);
    fun_62e4(4, 10, 1, r3_5);
    fun_62e4(3, 10, 1, r3_6);
    fun_62e4(2, 9, 1, r3_7);
    goto 0x31f4;
}

void fun_3c74() {
    void** r3_1;
    void** r3_2;
    void** r3_3;

    fun_62e4(8, 8, 1, r3_1);
    fun_62e4(8, 9, 1, r3_2);
    fun_62e4(8, 10, 1, r3_3);
    goto 0x31f4;
}

void fun_38fc() {
    void** r3_1;

    fun_62e4(5, 2, 1, r3_1);
    goto 0x31f0;
}

void fun_3808() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;
    void** r3_8;
    void** r3_9;
    void** r3_10;
    void** r3_11;
    void** r3_12;
    void** r3_13;
    void** r3_14;

    fun_62e4(10, 2, 1, r3_1);
    fun_62e4(10, 3, 1, r3_2);
    fun_62e4(10, 4, 1, r3_3);
    fun_62e4(9, 5, 1, r3_4);
    fun_62e4(8, 5, 1, r3_5);
    fun_62e4(7, 5, 1, r3_6);
    fun_62e4(6, 5, 1, r3_7);
    fun_62e4(6, 4, 1, r3_8);
    fun_62e4(6, 3, 1, r3_9);
    fun_62e4(6, 2, 1, r3_10);
    fun_62e4(6, 6, 1, r3_11);
    fun_62e4(7, 6, 1, r3_12);
    fun_62e4(8, 6, 1, r3_13);
    fun_62e4(9, 6, 1, r3_14);
}

void fun_464c() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    fun_62e4(8, 7, 1, r3_4);
    fun_62e4(7, 7, 1, r3_5);
    fun_62e4(6, 7, 1, r3_6);
}

void fun_5248() {
    void** r3_1;

    fun_62e4(6, 4, 1, r3_1);
    goto 0x5588;
}

void fun_4c90() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;
    void** r3_8;
    void** r3_9;
    void** r3_10;
    void** r3_11;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    fun_62e4(7, 7, 1, r3_4);
    fun_62e4(6, 7, 1, r3_5);
    fun_62e4(5, 7, 1, r3_6);
    fun_62e4(4, 7, 1, r3_7);
    fun_62e4(4, 6, 1, r3_8);
    fun_62e4(4, 5, 1, r3_9);
    fun_62e4(4, 4, 1, r3_10);
    fun_62e4(4, 8, 1, r3_11);
    goto 0x54e8;
}

void fun_10dfc(int32_t r0) {
    __asm__("mrs r0, apsr");
    __asm__("bic r1, r1, r2");
    __asm__("msr cpsr_fc, r1");
    return;
}

void fun_3afc() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;
    void** r3_8;

    fun_62e4(5, 2, 1, r3_1);
    fun_62e4(5, 3, 1, r3_2);
    fun_62e4(5, 4, 1, r3_3);
    fun_62e4(5, 5, 1, r3_4);
    fun_62e4(4, 5, 1, r3_5);
    fun_62e4(3, 5, 1, r3_6);
    fun_62e4(2, 5, 1, r3_7);
    fun_62e4(1, 4, 1, r3_8);
    goto 0x3c20;
}

void fun_3300() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;

    fun_62e4(10, 2, 1, r3_1);
    fun_62e4(10, 3, 1, r3_2);
    fun_62e4(10, 4, 1, r3_3);
    fun_62e4(9, 5, 1, r3_4);
    fun_62e4(8, 5, 1, r3_5);
    fun_62e4(7, 5, 1, r3_6);
    goto 0x3a78;
}

void fun_3f04() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;
    void** r3_8;

    fun_62e4(6, 7, 1, r3_1);
    fun_62e4(6, 8, 1, r3_2);
    fun_62e4(6, 9, 1, r3_3);
    fun_62e4(5, 10, 1, r3_4);
    fun_62e4(4, 10, 1, r3_5);
    fun_62e4(3, 10, 1, r3_6);
    fun_62e4(2, 9, 1, r3_7);
    fun_62e4(2, 8, 1, r3_8);
    goto 0x31f4;
}

void fun_3e1c() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;

    fun_62e4(6, 7, 1, r3_1);
    fun_62e4(6, 8, 1, r3_2);
    fun_62e4(6, 9, 1, r3_3);
    fun_62e4(5, 10, 1, r3_4);
    fun_62e4(4, 10, 1, r3_5);
    fun_62e4(3, 10, 1, r3_6);
}

void fun_3cb0() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;

    fun_62e4(8, 8, 1, r3_1);
    fun_62e4(8, 9, 1, r3_2);
    fun_62e4(8, 10, 1, r3_3);
    fun_62e4(8, 11, 1, r3_4);
    goto 0x40c8;
}

void fun_3914() {
    void** r3_1;
    void** r3_2;

    fun_62e4(5, 2, 1, r3_1);
    fun_62e4(5, 3, 1, r3_2);
    goto 0x33dc;
}

void fun_5260() {
    void** r3_1;
    void** r3_2;

    fun_62e4(6, 4, 1, r3_1);
    fun_62e4(6, 5, 1, r3_2);
    goto 0x5360;
}

void fun_4d48() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;
    void** r3_8;
    void** r3_9;
    void** r3_10;
    void** r3_11;
    void** r3_12;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    fun_62e4(7, 7, 1, r3_4);
    fun_62e4(6, 7, 1, r3_5);
    fun_62e4(5, 7, 1, r3_6);
    fun_62e4(4, 7, 1, r3_7);
    fun_62e4(4, 6, 1, r3_8);
    fun_62e4(4, 5, 1, r3_9);
    fun_62e4(4, 4, 1, r3_10);
    fun_62e4(4, 8, 1, r3_11);
    fun_62e4(5, 8, 1, r3_12);
    goto 0x5588;
}

void fun_3c28() {
}

void fun_3b88() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;
    void** r3_8;
    void** r3_9;

    fun_62e4(5, 2, 1, r3_1);
    fun_62e4(5, 3, 1, r3_2);
    fun_62e4(5, 4, 1, r3_3);
    fun_62e4(5, 5, 1, r3_4);
    fun_62e4(4, 5, 1, r3_5);
    fun_62e4(3, 5, 1, r3_6);
    fun_62e4(2, 5, 1, r3_7);
    fun_62e4(1, 4, 1, r3_8);
    fun_62e4(1, 3, 1, r3_9);
}

void fun_3368() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;

    fun_62e4(10, 2, 1, r3_1);
    fun_62e4(10, 3, 1, r3_2);
    fun_62e4(10, 4, 1, r3_3);
    fun_62e4(9, 5, 1, r3_4);
    fun_62e4(8, 5, 1, r3_5);
    fun_62e4(7, 5, 1, r3_6);
    fun_62e4(6, 5, 1, r3_7);
}

void fun_3f8c() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;
    void** r3_8;
    void** r3_9;

    fun_62e4(6, 7, 1, r3_1);
    fun_62e4(6, 8, 1, r3_2);
    fun_62e4(6, 9, 1, r3_3);
    fun_62e4(5, 10, 1, r3_4);
    fun_62e4(4, 10, 1, r3_5);
    fun_62e4(3, 10, 1, r3_6);
    fun_62e4(2, 9, 1, r3_7);
    fun_62e4(2, 8, 1, r3_8);
    fun_62e4(3, 7, 1, r3_9);
    goto 0x40c8;
}

void fun_3cf8() {
    goto 0x40c8;
}

void fun_393c() {
    void** r3_1;
    void** r3_2;
    void** r3_3;

    fun_62e4(5, 2, 1, r3_1);
    fun_62e4(5, 3, 1, r3_2);
    fun_62e4(5, 4, 1, r3_3);
    goto 0x3c2c;
}

void fun_5288() {
    void** r3_1;
    void** r3_2;

    fun_62e4(6, 4, 1, r3_1);
    fun_62e4(6, 5, 1, r3_2);
    goto 0x5084;
}

void fun_4e10() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;
    void** r3_8;
    void** r3_9;
    void** r3_10;
    void** r3_11;
    void** r3_12;
    void** r3_13;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    fun_62e4(7, 7, 1, r3_4);
    fun_62e4(6, 7, 1, r3_5);
    fun_62e4(5, 7, 1, r3_6);
    fun_62e4(4, 7, 1, r3_7);
    fun_62e4(4, 6, 1, r3_8);
    fun_62e4(4, 5, 1, r3_9);
    fun_62e4(4, 4, 1, r3_10);
    fun_62e4(4, 8, 1, r3_11);
    fun_62e4(5, 8, 1, r3_12);
    fun_62e4(6, 8, 1, r3_13);
    goto 0x5638;
}

void fun_4024() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;
    void** r3_8;
    void** r3_9;
    void** r3_10;

    fun_62e4(6, 7, 1, r3_1);
    fun_62e4(6, 8, 1, r3_2);
    fun_62e4(6, 9, 1, r3_3);
    fun_62e4(5, 10, 1, r3_4);
    fun_62e4(4, 10, 1, r3_5);
    fun_62e4(3, 10, 1, r3_6);
    fun_62e4(2, 9, 1, r3_7);
    fun_62e4(2, 8, 1, r3_8);
    fun_62e4(3, 7, 1, r3_9);
    fun_62e4(4, 7, 1, r3_10);
}

void fun_3d00() {
    void** r3_1;

    fun_62e4(6, 7, 1, r3_1);
    goto 0x3efc;
}

void fun_3974() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;

    fun_62e4(5, 2, 1, r3_1);
    fun_62e4(5, 3, 1, r3_2);
    fun_62e4(5, 4, 1, r3_3);
    fun_62e4(5, 5, 1, r3_4);
    goto 0x3a78;
}

void fun_52b0() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;

    fun_62e4(6, 4, 1, r3_1);
    fun_62e4(6, 5, 1, r3_2);
    fun_62e4(6, 6, 1, r3_3);
    fun_62e4(6, 7, 1, r3_4);
    goto 0x5588;
}

void fun_4ee8() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;
    void** r3_7;
    void** r3_8;
    void** r3_9;
    void** r3_10;
    void** r3_11;
    void** r3_12;
    void** r3_13;
    void** r3_14;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    fun_62e4(7, 7, 1, r3_4);
    fun_62e4(6, 7, 1, r3_5);
    fun_62e4(5, 7, 1, r3_6);
    fun_62e4(4, 7, 1, r3_7);
    fun_62e4(4, 6, 1, r3_8);
    fun_62e4(4, 5, 1, r3_9);
    fun_62e4(4, 4, 1, r3_10);
    fun_62e4(4, 8, 1, r3_11);
    fun_62e4(5, 8, 1, r3_12);
    fun_62e4(6, 8, 1, r3_13);
    fun_62e4(7, 8, 1, r3_14);
    goto 0x5360;
}

void fun_3d18() {
    void** r3_1;
    void** r3_2;

    fun_62e4(6, 7, 1, r3_1);
    fun_62e4(6, 8, 1, r3_2);
    goto 0x3e80;
}

void fun_39bc() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;

    fun_62e4(5, 2, 1, r3_1);
    fun_62e4(5, 3, 1, r3_2);
    fun_62e4(5, 4, 1, r3_3);
    fun_62e4(5, 5, 1, r3_4);
    fun_62e4(4, 5, 1, r3_5);
    goto 0x3a78;
}

void fun_52f8() {
    goto 0x4a24;
}

void fun_4fd0() {
    void** r3_1;
    void** r3_2;
    void** r3_3;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    goto 0x4a24;
}

void fun_3d40() {
    void** r3_1;
    void** r3_2;
    void** r3_3;

    fun_62e4(6, 7, 1, r3_1);
    fun_62e4(6, 8, 1, r3_2);
    fun_62e4(6, 9, 1, r3_3);
    goto 0x3e14;
}

void fun_3a14() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;
    void** r3_6;

    fun_62e4(5, 2, 1, r3_1);
    fun_62e4(5, 3, 1, r3_2);
    fun_62e4(5, 4, 1, r3_3);
    fun_62e4(5, 5, 1, r3_4);
    fun_62e4(4, 5, 1, r3_5);
    fun_62e4(3, 5, 1, r3_6);
}

void fun_5300() {
    void** r3_1;
    void** r3_2;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    goto 0x4a24;
}

void fun_5008() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
    fun_62e4(8, 7, 1, r3_4);
}

void fun_3d78() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;

    fun_62e4(6, 7, 1, r3_1);
    fun_62e4(6, 8, 1, r3_2);
    fun_62e4(6, 9, 1, r3_3);
    fun_62e4(5, 10, 1, r3_4);
    goto 0x3e14;
}

void fun_5328(int32_t r0, int32_t r1) {
    int1_t z3;
    void** r3_4;
    void** r3_5;

    if (z3) {
    }
    fun_62e4(8, 4, 1, r3_4);
    fun_62e4(8, 5, 1, r3_5);
}

void fun_5040() {
    void** r3_1;
    void** r3_2;
    void** r3_3;

    fun_62e4(8, 4, 1, r3_1);
    fun_62e4(8, 5, 1, r3_2);
    fun_62e4(8, 6, 1, r3_3);
}

void fun_3dc0() {
    void** r3_1;
    void** r3_2;
    void** r3_3;
    void** r3_4;
    void** r3_5;

    fun_62e4(6, 7, 1, r3_1);
    fun_62e4(6, 8, 1, r3_2);
    fun_62e4(6, 9, 1, r3_3);
    fun_62e4(5, 10, 1, r3_4);
    fun_62e4(4, 10, 1, r3_5);
}

void fun_e9d8() {
    while (1) {
    }
}
