// Class: CServerTimeHandler_SingleGacha


/* CServerTimeHandler_SingleGacha::CServerTimeHandler_SingleGacha() */

void __thiscall
CServerTimeHandler_SingleGacha::CServerTimeHandler_SingleGacha(CServerTimeHandler_SingleGacha *this)

{
  CServerTimeHandler::CServerTimeHandler((CServerTimeHandler *)this);
  *(undefined ***)this = &PTR_nop_06934780;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CServerTimeHandler_SingleGacha::OnServerTimeGet(bool, long) */

void CServerTimeHandler_SingleGacha::OnServerTimeGet(bool param_1,long param_2)

{
  LawnApp *this;
  byte bVar1;
  int iVar2;
  PlayerInfo *this_00;
  GroupInfo *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  if (this_00 != (PlayerInfo *)0x0) {
    bVar1 = PlayerInfo::canFreeGacha(this_00);
    if (bVar1 == 0) {
      std::string::string(asStack_10,"gacha_diamond");
      this_01 = ::operator_new(0x10);
      Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo
                (this_01,asStack_10,1,*(uint *)(gLawnApp + 0x28f8));
      std::string::~string(asStack_10);
      nop();
      Sexy::OutputDebugStrF((wchar_t *)"ghzhou StorePanelUI gacha Dimand once no free");
    }
    else {
      iVar2 = LawnApp::GetRealBeijingTime(gLawnApp);
      PlayerInfo::setLastFreeGachaTime(this_00,iVar2);
      std::string::string(asStack_10,"gacha_free");
      this_01 = ::operator_new(0x10);
      Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo(this_01,asStack_10,1,0);
      std::string::~string(asStack_10);
      nop();
      Sexy::OutputDebugStrF((wchar_t *)"ghzhou StorePanelUI gacha Dimand once free");
    }
    this = gLawnApp;
    std::string::string(asStack_10,"gacha_diamond");
    LawnApp::ShowGachaUI(this,asStack_10,(bool)(bVar1 ^ 1));
    std::string::~string(asStack_10);
    nop();
    MessageRouter::Post<EventMetrics*,int,EventMetrics*,int>
              ((MessageRouter *)gMessageRouter,Message::EventPurchase,(EventMetrics *)this_01,
               *(int *)(gLawnApp + 0x28fc));
    MessageRouter::Post((_func_void *)gMessageRouter);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)this_01);
    AK::FreeHook(this_01);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

