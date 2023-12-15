// Datei: gip_mini_catch_heap_delete.h
// Autor: Andreas Claßen
// Version: 1.0

#pragma once

#include "gip_mini_catch_v_2_3.h"

inline void operator delete(void* ptr)
{
    Catch::Session::get_delete_count()++;
}

inline void operator delete[](void* ptr)
{
    Catch::Session::get_array_delete_count()++;
}

