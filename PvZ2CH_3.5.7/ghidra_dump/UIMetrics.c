// Class: UIMetrics


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMetrics::AddMetricsToCheatDisplay(UIMetrics::UIEventInfo&) */

void UIMetrics::AddMetricsToCheatDisplay(UIEventInfo *param_1)

{
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::operator+((string *)param_1," ");
  std::operator+(asStack_38,(string *)(param_1 + 8));
  std::operator+(asStack_30," ");
  std::operator+(asStack_28,(string *)(param_1 + 0x10));
  std::operator+(asStack_20," ");
  std::operator+(asStack_18,(string *)(param_1 + 0x18));
  std::operator+(asStack_10,"\n");
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMetrics::BroadcastUIEvent(std::string, std::string) */

void UIMetrics::BroadcastUIEvent(string *param_1,string *param_2)

{
  undefined *puVar1;
  UIEventInfo aUStack_48 [32];
  InvitationPlayerInfo aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEventInfo::UIEventInfo(aUStack_48,param_1,param_2);
  puVar1 = gMessageRouter;
  InvitationPlayerInfo::InvitationPlayerInfo(aIStack_28,(InvitationPlayerInfo *)aUStack_48);
  MessageRouter::Broadcast<UIMetrics::UIEventInfo&,UIMetrics::UIEventInfo>
            ((MessageRouter *)puVar1,Message::UIEvent,aIStack_28);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aIStack_28);
  AddMetricsToCheatDisplay(aUStack_48);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aUStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIMetrics::BroadcastUIEvent(std::string, std::string, std::string, std::string) */

void UIMetrics::BroadcastUIEvent(string *param_1,string *param_2,string *param_3,string *param_4)

{
  undefined *puVar1;
  UIEventInfo aUStack_48 [32];
  InvitationPlayerInfo aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEventInfo::UIEventInfo(aUStack_48,param_1,param_2,param_3,param_4);
  puVar1 = gMessageRouter;
  InvitationPlayerInfo::InvitationPlayerInfo(aIStack_28,(InvitationPlayerInfo *)aUStack_48);
  MessageRouter::Broadcast<UIMetrics::UIEventInfo&,UIMetrics::UIEventInfo>
            ((MessageRouter *)puVar1,Message::UIEvent,aIStack_28);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aIStack_28);
  AddMetricsToCheatDisplay(aUStack_48);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aUStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

