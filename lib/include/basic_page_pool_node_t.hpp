/// @copyright
/// Copyright (C) 2020 Assured Information Security, Inc.
///
/// @copyright
/// Permission is hereby granted, free of charge, to any person obtaining a copy
/// of this software and associated documentation files (the "Software"), to deal
/// in the Software without restriction, including without limitation the rights
/// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
/// copies of the Software, and to permit persons to whom the Software is
/// furnished to do so, subject to the following conditions:
///
/// @copyright
/// The above copyright notice and this permission notice shall be included in
/// all copies or substantial portions of the Software.
///
/// @copyright
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
/// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
/// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
/// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
/// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
/// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
/// SOFTWARE.

#ifndef BASIC_PAGE_POOL_NODE_T_HPP
#define BASIC_PAGE_POOL_NODE_T_HPP

#include <bsl/array.hpp>
#include <bsl/convert.hpp>
#include <bsl/safe_integral.hpp>

#pragma pack(push, 1)

namespace lib
{
    /// @brief stores the size of the data portion of basic_page_pool_node_t
    constexpr auto BASIC_PAGE_POOL_NODE_DATA_SIZE{0xFF8_umx};

    /// <!-- description -->
    ///   @brief Defines the node type used by the basic_page_pool_t
    ///
    struct basic_page_pool_node_t final
    {
        /// @brief a pointer to the next page in the basic_page_pool_t
        basic_page_pool_node_t *next;
        /// @brief stores the rest of the page's memory
        bsl::array<bsl::uint8, BASIC_PAGE_POOL_NODE_DATA_SIZE.get()> data;
    };

    /// @brief make sure that a page pool node is the size of a page.
    static_assert(sizeof(basic_page_pool_node_t) == HYPERVISOR_PAGE_SIZE);
}

#pragma pack(pop)

#endif
