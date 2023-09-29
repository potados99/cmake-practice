//
// Created by Administrator on 2023-09-29.
//

#include "performer.h"

#include <stdio.h>

// 옆 라이브러리!
#include "adder.h"


int perform_addition(int one, int another) {
    int result = compute_add_two(one, another);

    return printf("%d + %d = %d\n", one, another, result);
}
