// Copyright 2013-2022 NTESS. Under the terms
// of Contract DE-NA0003525 with NTESS, the U.S.
// Government retains certain rights in this software.
//
// Copyright (c) 2013-2022, NTESS
// All rights reserved.
//
// Portions are copyright of other developers:
// See the file CONTRIBUTORS.TXT in the top level directory
// the distribution for more information.
//
// This file is part of the SST software package. For license
// information, see the LICENSE file in the top level directory of the
// distribution.



#ifndef _H_SST_JUNO_INST_MGR
#define _H_SST_JUNO_INST_MGR

#include "junocpuinst.h"

namespace SST {
    namespace Juno {

        class JunoInstructionMgr {

        public:
            JunoInstructionMgr() {}
            ~JunoInstructionMgr() {}

            virtual JunoCPUInstruction* getInstruction( const uint64_t addr ) = 0;
            virtual bool instReady( const uint64_t addr ) = 0;

        };

    }
}

#endif
