// libcua: header-only library for interfacing with CUDA array-type objects
// Author: True Price <jtprice at cs.unc.edu>
//
// BSD License
// Copyright (C) 2017-2019  The University of North Carolina at Chapel Hill
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// * Redistributions of source code must retain the above copyright notice, this
//   list of conditions and the following disclaimer.
// * Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the following disclaimer in the documentation
//   and/or other materials provided with the distribution.
// * Neither the name of the original author nor the names of contributors may
//   be used to endorse or promote products derived from this software without
//   specific prior written permission.
//
// NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE GRANTED BY
// THIS LICENSE. THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
// CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT
// NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
// PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
// OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
// WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
// OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
// ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef LIBCUA_CUDA_ARRAY_FWD_H_
#define LIBCUA_CUDA_ARRAY_FWD_H_

/**
 * @namespace cua
 * @brief cudaArray namespace
 */
namespace cua {

template <typename T>
class CudaArray2D;

template <typename T>
class CudaArray3D;

class CudaRandomStateArray2D;

class CudaRandomStateArray3D;

template <typename T>
class CudaSurface2D;

template <typename T>
class CudaSurface2DArray;

template <typename T>
class CudaSurface3D;

template <typename T>
class CudaTexture2D;

}  // namespace cua

#endif  // LIBCUA_CUDA_ARRAY_FWD_H_
