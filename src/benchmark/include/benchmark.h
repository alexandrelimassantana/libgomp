/*
 * Copyright(C) 2015 Pedro H. Penna <pedrohenriquepenna@gmail.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */

#ifndef BENCHMARK_H_
#define BENCHMARK_H_

	/**
	 * @brief Number of iterations.
	 */
	#define NITERATIONS 10

	/**
	 * @brief Number of supported kernels.
	 */
	#define NR_KERNELS 4

	/**
	 * @brief Name of supported kernel types.
	 */
	/**@{*/
	#define KERNEL_LINEAR    1
	#define KERNEL_LOGARITHM 2
	#define KERNEL_QUADRATIC 3
	#define KERNEL_CUBIC     4
	/**@}*/

	/* Forward definitions. */
	extern void benchmark(const unsigned *, unsigned, unsigned, unsigned);

#endif /* BENCHMARK_H_ */
