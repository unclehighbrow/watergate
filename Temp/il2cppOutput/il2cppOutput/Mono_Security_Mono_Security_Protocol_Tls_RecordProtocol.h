﻿#pragma once
#include <stdint.h>
// System.Threading.ManualResetEvent
struct ManualResetEvent_t1294;
// System.IO.Stream
struct Stream_t1295;
// Mono.Security.Protocol.Tls.Context
struct Context_t1272;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.Protocol.Tls.RecordProtocol
struct  RecordProtocol_t1280  : public Object_t
{
	// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol::innerStream
	Stream_t1295 * ___innerStream_1;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::context
	Context_t1272 * ___context_2;
};
struct RecordProtocol_t1280_StaticFields{
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol::record_processing
	ManualResetEvent_t1294 * ___record_processing_0;
};