//===- LLHDOps.h - Declare LLHD dialect operations --------------*- C++ -*-===//
//
// This file declares the operation class for the LLHD IR.
//
//===----------------------------------------------------------------------===//

#ifndef CIRCT_DIALECT_LLHD_IR_LLHDOPS_H
#define CIRCT_DIALECT_LLHD_IR_LLHDOPS_H

#include "circt/Dialect/LLHD/IR/LLHDDialect.h"
#include "circt/Dialect/LLHD/IR/LLHDEnums.h.inc"
#include "mlir/IR/StandardTypes.h"
#include "mlir/Interfaces/ControlFlowInterfaces.h"
#include "mlir/Interfaces/SideEffectInterfaces.h"

namespace mlir {
namespace llhd {

unsigned getLLHDTypeWidth(Type type);

} // namespace llhd
} // namespace mlir

/// Retrieve the class declarations generated by TableGen
#define GET_OP_CLASSES
#include "circt/Dialect/LLHD/IR/LLHD.h.inc"

#endif // CIRCT_DIALECT_LLHD_IR_LLHDOPS_H
