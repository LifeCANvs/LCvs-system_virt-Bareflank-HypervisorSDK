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

#include "../../../../src/x64/dispatch_esr.hpp"

#include <errc_types.hpp>
#include <ext_t.hpp>
#include <intrinsic_t.hpp>
#include <tls_t.hpp>

#include <bsl/convert.hpp>
#include <bsl/errc_type.hpp>
#include <bsl/safe_integral.hpp>
#include <bsl/ut.hpp>

namespace mk
{
    /// <!-- description -->
    ///   @brief Used to execute the actual checks. We put the checks in this
    ///     function so that we can validate the tests both at compile-time
    ///     and at run-time. If a bsl::ut_check fails, the tests will either
    ///     fail fast at run-time, or will produce a compile-time error.
    ///
    /// <!-- inputs/outputs -->
    ///   @return Always returns bsl::exit_success.
    ///
    [[nodiscard]] constexpr auto
    tests() noexcept -> bsl::exit_code
    {
        bsl::ut_scenario{"dispatch_esr"} = [&]() noexcept {
            bsl::ut_given{} = [&]() noexcept {
                tls_t mut_tls{};
                intrinsic_t mut_intrinsic{};
                bsl::ut_when{} = [&]() noexcept {
                    mut_tls.esr_pf_addr = HYPERVISOR_PAGE_SIZE.get();

                    mut_tls.esr_vector = EXCEPTION_VECTOR_0.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_1.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_2.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_3.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_4.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_5.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_6.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_7.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_8.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_10.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_11.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_12.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_13.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_14.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_16.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_17.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_18.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_19.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = bsl::safe_u64::max_value().get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };
                };
            };
        };

        bsl::ut_scenario{"dispatch_esr mk"} = [&]() noexcept {
            bsl::ut_given{} = [&]() noexcept {
                tls_t mut_tls{};
                intrinsic_t mut_intrinsic{};
                constexpr auto mk_cs{0x10_u64};
                bsl::ut_when{} = [&]() noexcept {
                    mut_tls.esr_pf_addr = HYPERVISOR_PAGE_SIZE.get();
                    mut_tls.esr_cs = mk_cs.get();

                    mut_tls.esr_vector = EXCEPTION_VECTOR_0.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_1.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_2.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_3.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_4.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_5.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_6.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_7.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_8.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_10.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_11.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_12.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_13.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_14.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_16.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_17.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_18.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_19.get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = bsl::safe_u64::max_value().get();
                    mut_tls.mk_handling_esr = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };
                };
            };
        };

        bsl::ut_scenario{"dispatch_esr with fast fail handler"} = [&]() noexcept {
            bsl::ut_given{} = [&]() noexcept {
                tls_t mut_tls{};
                intrinsic_t mut_intrinsic{};
                ext_t mut_ext{};
                bsl::ut_when{} = [&]() noexcept {
                    bsl::ut_required_step(mut_ext.initialize({}, {}, {}, {}, {}));
                    mut_tls.ext_fail = &mut_ext;

                    mut_tls.esr_vector = EXCEPTION_VECTOR_0.get();
                    mut_tls.mk_handling_esr = {};
                    mut_tls.test_ret = {};
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(dispatch_esr(mut_tls, mut_intrinsic));
                    };

                    mut_tls.esr_vector = EXCEPTION_VECTOR_0.get();
                    mut_tls.mk_handling_esr = {};
                    mut_tls.test_ret = vmexit_success;
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(dispatch_esr(mut_tls, mut_intrinsic));
                    };
                };
            };
        };

        bsl::ut_scenario{"return too root on error"} = [&]() noexcept {
            bsl::ut_given{} = [&]() noexcept {
                tls_t mut_tls{};
                intrinsic_t mut_intrinsic{};
                bsl::ut_when{} = [&]() noexcept {
                    mut_tls.esr_vector = EXCEPTION_VECTOR_0.get();
                    mut_tls.mk_handling_esr = {};
                    mut_tls.first_launch_succeeded = bsl::safe_u64::magic_1().get();
                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };
                };
            };
        };

        bsl::ut_scenario{"trigger esr twice"} = [&]() noexcept {
            bsl::ut_given{} = [&]() noexcept {
                tls_t mut_tls{};
                intrinsic_t mut_intrinsic{};
                ext_t mut_ext{};
                bsl::ut_when{} = [&]() noexcept {
                    bsl::ut_required_step(mut_ext.initialize({}, {}, {}, {}, {}));
                    mut_tls.ext_fail = &mut_ext;
                    mut_tls.esr_vector = EXCEPTION_VECTOR_2.get();

                    bsl::ut_then{} = [&]() noexcept {
                        bsl::ut_check(dispatch_esr(mut_tls, mut_intrinsic));
                        bsl::ut_check(!dispatch_esr(mut_tls, mut_intrinsic));
                    };
                };
            };
        };

        return bsl::ut_success();
    }
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
    bsl::enable_color();

    static_assert(mk::tests() == bsl::ut_success());
    return mk::tests();
}
