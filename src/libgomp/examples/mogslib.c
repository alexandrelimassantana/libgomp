/**
 *  This file is only inserted here to maintain compability with the examples of the native BinLPT developers.
 *  Since MOGSLib requires the definition of the following functions, the examples would not be able to compile.
 *  This will work due to the fact that MOGSLib will not be called in those tests.
 */

/**
 *  @brief A function to interface with MOGSLib to register the amount of chunks in OpenMP.
 *  @details A C function to interface with OpenMP and direct the execution flow back to C++.
 */
void mogslib_set_chunksize(unsigned chunksize) {}

/**
 *  @brief A function to interface with MOGSLib to register the amount of PEs in OpenMP.
 *  @details A C function to interface with OpenMP and direct the execution flow back to C++.
 */
void mogslib_set_npus(unsigned npus) {}

/**
 *  @brief A function to interface with MOGSLib to call the scheduler task mapping.
 *  @details A C function to interface with OpenMP and direct the execution flow back to C++.
 */
unsigned *mogslib_strategy_map() {
  return 0;
}