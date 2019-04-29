/***************************************************************************
 *
 * Copyright © 2017 LT. All Rights Reserved.
 *
 ***************************************************************************/

/**
 *
 * @file: stack.cpp
 *
 * @breaf: 
 *
 * @author: Lei Yunfei(towardstheway@gmail.com)
 *
 * @create: 2017/04/04 00时10分29秒
 *
 **/


#include "base/lt_stack.h"

#include <stdio.h>
#include <string>
#include <cassert>

int main(int argc, char *argv[])
{
    lt::Stack<std::string> st;
    assert(st.empty() == true);
    assert(st.size() == 0);
    st.Push("hello");
    assert(st.size() == 1);
    st.Push("world");
    assert(st.size() == 2);
    assert(st.Top() == "world");
    std::string s = st.Pop();
    assert(s == "world");
    assert(st.size() == 1);

    return 0;
}
