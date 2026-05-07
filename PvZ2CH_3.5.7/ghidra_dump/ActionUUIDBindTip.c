// Class: ActionUUIDBindTip


/* ActionUUIDBindTip::onUUIDBindClosed() */

void __thiscall ActionUUIDBindTip::onUUIDBindClosed(ActionUUIDBindTip *this)

{
  this[9] = (ActionUUIDBindTip)0x1;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* ActionUUIDBindTip::~ActionUUIDBindTip() */

void __thiscall ActionUUIDBindTip::~ActionUUIDBindTip(ActionUUIDBindTip *this)

{
  *(undefined ***)this = &PTR_GetClass_06859a40;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionUUIDBindTip::~ActionUUIDBindTip() */

void __thiscall ActionUUIDBindTip::~ActionUUIDBindTip(ActionUUIDBindTip *this)

{
  ~ActionUUIDBindTip(this);
  AK::FreeHook(this);
  return;
}


/* ActionUUIDBindTip::StaticGetClass() */

long * ActionUUIDBindTip::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionUUIDBindTip",uVar2,StaticNew);
  return sClass;
}


/* ActionUUIDBindTip::GetClass() const */

long * ActionUUIDBindTip::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionUUIDBindTip",uVar2,StaticNew);
  return sClass;
}


/* ActionUUIDBindTip::ActionUUIDBindTip() */

void __thiscall ActionUUIDBindTip::ActionUUIDBindTip(ActionUUIDBindTip *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_06859a40;
  return;
}


/* ActionUUIDBindTip::StaticNew() */

ActionUUIDBindTip * ActionUUIDBindTip::StaticNew(void)

{
  ActionUUIDBindTip *this;
  
  this = ::operator_new(0x18);
  ActionUUIDBindTip(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionUUIDBindTip::CreateIfNeed(bool&) */

void ActionUUIDBindTip::CreateIfNeed(bool *param_1)

{
  char cVar1;
  TextureInfo *pTVar2;
  ActionUUIDBindTip *this;
  CheatUIPanel *this_00;
  IdentifierMgr *this_01;
  EASquaredImpl *this_02;
  ProfileMgr *this_03;
  PlayerInfo *this_04;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*param_1 == false) {
    pTVar2 = (TextureInfo *)Sexy::LazySingleton<IdentifierMgr>::GetInstance();
    cVar1 = EA::Text::GlyphCache_Memory::EndUpdate(pTVar2);
    if (cVar1 != '\0') {
      this_00 = (CheatUIPanel *)Sexy::LazySingleton<IdentifierMgr>::GetInstance();
      cVar1 = CheatUIPanel::IsVisible(this_00);
      if (cVar1 == '\0') {
        this_01 = (IdentifierMgr *)Sexy::LazySingleton<IdentifierMgr>::GetInstance();
        IdentifierMgr::setBindTip(this_01);
        this_02 = (EASquaredImpl *)Sexy::LazySingleton<IdentifierMgr>::GetInstance();
        cVar1 = EASquaredImpl::IsEnabledForUser(this_02);
        if (cVar1 == '\0') {
          this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          this_04 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_03);
          if (this_04 != (PlayerInfo *)0x0) {
            std::string::string(asStack_10,"UUIDBindTip");
            cVar1 = PlayerInfo::IsFirstPopToday(this_04,asStack_10);
            std::string::~string(asStack_10);
            nop();
            if (cVar1 == '\0') goto LAB_04558090;
          }
          this = ::operator_new(0x18);
          *(undefined8 *)this = 0;
          this[8] = (ActionUUIDBindTip)0x0;
          this[9] = (ActionUUIDBindTip)0x0;
          this[10] = (ActionUUIDBindTip)0x0;
          *(undefined4 *)(this + 0xc) = 0;
          *(undefined4 *)(this + 0x10) = 0;
          ActionUUIDBindTip(this);
          goto LAB_04558094;
        }
      }
    }
  }
LAB_04558090:
  this = (ActionUUIDBindTip *)0x0;
LAB_04558094:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionUUIDBindTip::Start() */

void __thiscall ActionUUIDBindTip::Start(ActionUUIDBindTip *this)

{
  undefined *this_00;
  IdentifierMgr *this_01;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (IdentifierMgr *)Sexy::LazySingleton<IdentifierMgr>::GetInstance();
  IdentifierMgr::TryBind(this_01);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUUIDBindClosed);
  Sexy::Delegate0::Delegate0<ActionUUIDBindTip,void(ActionUUIDBindTip::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::UUIDDialogClosed,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

