// Class: EASquaredCheatLogging


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquaredCheatLogging::ClearFlowLog() */

void EASquaredCheatLogging::ClearFlowLog(void)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_10);
  FUN_05462980(g_ea2FlowLog,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EASquaredCheatLogging::CommitEa2BasicInfo(std::string const&, bool, bool, int, int, bool, bool,
   bool) */

void EASquaredCheatLogging::CommitEa2BasicInfo
               (string *param_1,bool param_2,bool param_3,int param_4,int param_5,bool param_6,
               bool param_7,bool param_8)

{
  undefined8 uVar1;
  
  uVar1 = FUN_054603b8(0x6b8c4f8,"===============================================");
  FUN_0545f9e8(uVar1,FUN_0545fdc8);
  uVar1 = FUN_054603b8(0x6b8c4f8,"EA^2 FLOW LOG");
  FUN_0545f9e8(uVar1,FUN_0545fdc8);
  uVar1 = FUN_054603b8(0x6b8c4f8,"-----------------------------------------------");
  FUN_0545f9e8(uVar1,FUN_0545fdc8);
  uVar1 = FUN_054603b8(0x6b8c4f8,"Is Initialized: ");
  uVar1 = thunk_FUN_054608e4(uVar1,param_2);
  FUN_0545f9e8(uVar1,FUN_0545fdc8);
  uVar1 = FUN_054603b8(0x6b8c4f8,"Show Ad Next Frame: ");
  uVar1 = thunk_FUN_054608e4(uVar1,param_3);
  FUN_0545f9e8(uVar1,FUN_0545fdc8);
  uVar1 = FUN_054603b8(0x6b8c4f8,"Placement: ");
  uVar1 = FUN_0545ec84(uVar1,param_1);
  FUN_0545f9e8(uVar1,FUN_0545fdc8);
  uVar1 = FUN_054603b8(0x6b8c4f8,"-Showing Ads: ");
  uVar1 = thunk_FUN_054608e4(uVar1,param_7);
  FUN_0545f9e8(uVar1,FUN_0545fdc8);
  uVar1 = FUN_054603b8(0x6b8c4f8,"-Suppressing Award Screen: ");
  uVar1 = thunk_FUN_054608e4(uVar1,param_6);
  FUN_0545f9e8(uVar1,FUN_0545fdc8);
  uVar1 = FUN_054603b8(0x6b8c4f8,"-Awarding Ads: ");
  uVar1 = thunk_FUN_054608e4(uVar1,param_8);
  FUN_0545f9e8(uVar1,FUN_0545fdc8);
  uVar1 = FUN_054603b8(0x6b8c4f8,"-Number of Rewards Earned: ");
  uVar1 = FUN_0546065c(uVar1,param_4);
  FUN_0545f9e8(uVar1,FUN_0545fdc8);
  uVar1 = FUN_054603b8(0x6b8c4f8,"-Number of Videos Watched: ");
  uVar1 = FUN_0546065c(uVar1,param_5);
  FUN_0545f9e8(uVar1,FUN_0545fdc8);
  return;
}


/* EASquaredCheatLogging::CommitEa2FlowEndReason(EASquaredAdFinishedReason::EASquaredAdFinishedReason)
    */

void EASquaredCheatLogging::CommitEa2FlowEndReason(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_054603b8(0x6b8c4f8,"-----------------------------------------------");
  FUN_0545f9e8(uVar1,FUN_0545fdc8);
  if (param_1 != 0) {
    uVar1 = FUN_054603b8(0x6b8c4f8,"Flow Ended: Canceled");
    FUN_0545f9e8(uVar1,FUN_0545fdc8);
    return;
  }
  uVar1 = FUN_054603b8(0x6b8c4f8,"Flow Ended: Completed");
  FUN_0545f9e8(uVar1,FUN_0545fdc8);
  return;
}

