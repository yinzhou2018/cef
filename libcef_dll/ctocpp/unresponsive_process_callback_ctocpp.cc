// Copyright (c) 2024 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=c8f9d6f148a367be5eef1b3512ba023da0f9ac84$
//

#include "libcef_dll/ctocpp/unresponsive_process_callback_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall") void CefUnresponsiveProcessCallbackCToCpp::Wait() {
  shutdown_checker::AssertNotShutdown();

  cef_unresponsive_process_callback_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, wait)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->wait(_struct);
}

NO_SANITIZE("cfi-icall")
void CefUnresponsiveProcessCallbackCToCpp::Terminate() {
  shutdown_checker::AssertNotShutdown();

  cef_unresponsive_process_callback_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, terminate)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->terminate(_struct);
}

// CONSTRUCTOR - Do not edit by hand.

CefUnresponsiveProcessCallbackCToCpp::CefUnresponsiveProcessCallbackCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefUnresponsiveProcessCallbackCToCpp::~CefUnresponsiveProcessCallbackCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_unresponsive_process_callback_t*
CefCToCppRefCounted<CefUnresponsiveProcessCallbackCToCpp,
                    CefUnresponsiveProcessCallback,
                    cef_unresponsive_process_callback_t>::
    UnwrapDerived(CefWrapperType type, CefUnresponsiveProcessCallback* c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType
    CefCToCppRefCounted<CefUnresponsiveProcessCallbackCToCpp,
                        CefUnresponsiveProcessCallback,
                        cef_unresponsive_process_callback_t>::kWrapperType =
        WT_UNRESPONSIVE_PROCESS_CALLBACK;