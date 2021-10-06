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

#include "../../../../../mocks/x64/intel/intrinsic_t.hpp"

#include <bsl/discard.hpp>
#include <bsl/ut.hpp>

namespace
{
    /// @brief verify constinit it supported
    constinit mk::intrinsic_t const g_verify_constinit{};
}

/// <!-- description -->
///   @brief Main function for this unit test. If a call to bsl::ut_check() fails
///     the application will fast fail. If all calls to bsl::ut_check() pass, this
///     function will successfully return with bsl::exit_success.
///
/// <!-- inputs/outputs -->
///   @return Always returns bsl::exit_success.
///
[[nodiscard]] auto
main() noexcept -> bsl::exit_code
{
    bsl::ut_scenario{"verify supports constinit/constexpr"} = []() noexcept {
        bsl::discard(g_verify_constinit);
    };

    bsl::ut_scenario{"verify noexcept"} = []() noexcept {
        bsl::ut_given{} = []() noexcept {
            mk::intrinsic_t mut_intrinsic{};
            mk::intrinsic_t const intrinsic{};
            bsl::ut_then{} = []() noexcept {
                static_assert(noexcept(mk::intrinsic_t{}));

                static_assert(noexcept(mut_intrinsic.tlb_flush({}, {})));
                static_assert(noexcept(mut_intrinsic.es_selector()));
                static_assert(noexcept(mut_intrinsic.cs_selector()));
                static_assert(noexcept(mut_intrinsic.ss_selector()));
                static_assert(noexcept(mut_intrinsic.ds_selector()));
                static_assert(noexcept(mut_intrinsic.fs_selector()));
                static_assert(noexcept(mut_intrinsic.gs_selector()));
                static_assert(noexcept(mut_intrinsic.tr_selector()));
                static_assert(noexcept(mut_intrinsic.cr0()));
                static_assert(noexcept(mut_intrinsic.cr3()));
                static_assert(noexcept(mut_intrinsic.cr4()));
                static_assert(noexcept(mut_intrinsic.set_rpt({})));
                static_assert(noexcept(mut_intrinsic.set_tp({})));
                static_assert(noexcept(mut_intrinsic.tls_reg({})));
                static_assert(noexcept(mut_intrinsic.set_tls_reg({}, {})));
                static_assert(noexcept(mut_intrinsic.rdmsr({})));
                static_assert(noexcept(mut_intrinsic.wrmsr({}, {})));
                static_assert(noexcept(mut_intrinsic.vmld({})));
                static_assert(noexcept(mut_intrinsic.vmcl({})));
                static_assert(noexcept(mut_intrinsic.vmrd16({}, {})));
                static_assert(noexcept(mut_intrinsic.vmrd16({})));
                static_assert(noexcept(mut_intrinsic.vmrd32({}, {})));
                static_assert(noexcept(mut_intrinsic.vmrd32({})));
                static_assert(noexcept(mut_intrinsic.vmrd64({}, {})));
                static_assert(noexcept(mut_intrinsic.vmrd64({})));
                static_assert(noexcept(mut_intrinsic.vmwr16({}, {})));
                static_assert(noexcept(mut_intrinsic.vmwr32({}, {})));
                static_assert(noexcept(mut_intrinsic.vmwr64({}, {})));
                static_assert(noexcept(mut_intrinsic.vmwrfunc({}, {})));
                static_assert(noexcept(mut_intrinsic.vmrun({})));

                static_assert(noexcept(intrinsic.es_selector()));
                static_assert(noexcept(intrinsic.cs_selector()));
                static_assert(noexcept(intrinsic.ss_selector()));
                static_assert(noexcept(intrinsic.ds_selector()));
                static_assert(noexcept(intrinsic.fs_selector()));
                static_assert(noexcept(intrinsic.gs_selector()));
                static_assert(noexcept(intrinsic.tr_selector()));
                static_assert(noexcept(intrinsic.cr0()));
                static_assert(noexcept(intrinsic.cr3()));
                static_assert(noexcept(intrinsic.cr4()));
                static_assert(noexcept(intrinsic.tls_reg({})));
                static_assert(noexcept(intrinsic.rdmsr({})));
            };
        };
    };

    return bsl::ut_success();
}
