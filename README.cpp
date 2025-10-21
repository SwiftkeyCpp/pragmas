
//pragmas for olimpiad programming
#pragma <directive>   // Gives special instructions to the compiler

#pragma once  // Ensures this header file is included only once during compilation (prevents multiple inclusion errors)


#pragma pack(push, 1)   // Aligns structure members to 1-byte boundaries (no padding)
#pragma pack(pop)       // Restores previous packing alignment
#pragma pack(4)         // Sets structure member alignment to 4 bytes


#pragma region MySection   // Marks start of a collapsible code section in IDEs (no effect on compiled output)
#pragma endregion           // Marks end of collapsible region



#pragma inline_depth(2)   // MSVC: sets how aggressively the compiler inlines functions
#pragma inline_recursion(on)  // MSVC: allows recursive inlining




#pragma optimize("", off)   // MSVC: disables all optimizations
#pragma optimize("gt", on)  // Enables global optimizations and fast code generation



#pragma code_seg("INIT")  // MSVC: places code in a specific named segment of the binary
#pragma data_seg("SHARED")  // Places global data in a named section (can be shared between modules)



#pragma message("Compiling module X...")  // Prints a custom message during compilation



#pragma clang diagnostic push            // Save current diagnostic state
#pragma clang diagnostic ignored "-Wdeprecated-declarations"  // Suppress a specific warning
#pragma clang diagnostic pop             // Restore previous warning state



#pragma GCC target("sse4.2")  // Use specific CPU instructions for optimization
#pragma GCC optimize("O3")    // Force optimization level O3 for this section


#pragma hdrstop     // Borland C++: stops processing headers for precompiled headers
#pragma startup init_function   // Borland: calls init_function at program startup
#pragma exit cleanup_function   // Borland: calls cleanup_function at program exit
#include <bits.stdc++.h>

using namespace stdl;

int main(){

  for(int i = 0; i < 1e5 + 7; ++i){
    cout << i << " ";
  }
  cout << "\n";
  return 0;
}


