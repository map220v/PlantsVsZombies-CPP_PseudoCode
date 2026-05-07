// Class: CollectableSeedPacketElixir


/* CollectableSeedPacketElixir::onCursorDestroyed(BaseCursor*) */

void __thiscall
CollectableSeedPacketElixir::onCursorDestroyed
          (CollectableSeedPacketElixir *this,BaseCursor *param_1)

{
  char cVar1;
  
  if (*(PVZDB **)(this + 0x1f8) != (PVZDB *)param_1) {
    return;
  }
  cVar1 = PVZDB::IsInitialized(*(PVZDB **)(this + 0x1f8));
  if (cVar1 == '\0') {
    Collectable::SetPauseExpirationTimer((Collectable *)this,false);
    *(undefined8 *)(this + 0x1f8) = 0;
  }
  else {
    (**(code **)(*(long *)this + 0x48))(this);
    *(undefined8 *)(this + 0x1f8) = 0;
  }
  return;
}


/* CollectableSeedPacketElixir::~CollectableSeedPacketElixir() */

void __thiscall
CollectableSeedPacketElixir::~CollectableSeedPacketElixir(CollectableSeedPacketElixir *this)

{
  *(undefined ***)this = &PTR_GetClass_067571e0;
  *(undefined ***)(this + 0x10) = &PTR__CollectableSeedPacketElixir_06757430;
  std::string::~string((string *)(this + 0x1f0));
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableSeedPacketElixir::~CollectableSeedPacketElixir() */

void __thiscall
CollectableSeedPacketElixir::~CollectableSeedPacketElixir(CollectableSeedPacketElixir *this)

{
  ~CollectableSeedPacketElixir(this + -0x10);
  return;
}


/* CollectableSeedPacketElixir::~CollectableSeedPacketElixir() */

void __thiscall
CollectableSeedPacketElixir::~CollectableSeedPacketElixir(CollectableSeedPacketElixir *this)

{
  ~CollectableSeedPacketElixir(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableSeedPacketElixir::~CollectableSeedPacketElixir() */

void __thiscall
CollectableSeedPacketElixir::~CollectableSeedPacketElixir(CollectableSeedPacketElixir *this)

{
  ~CollectableSeedPacketElixir(this + -0x10);
  return;
}


/* CollectableSeedPacketElixir::CollectableSeedPacketElixir() */

void __thiscall
CollectableSeedPacketElixir::CollectableSeedPacketElixir(CollectableSeedPacketElixir *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_067571e0;
  *(undefined ***)(this + 0x10) = &PTR__CollectableSeedPacketElixir_06757430;
  Set8BytesTo0(this + 0x1f0);
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  return;
}


/* CollectableSeedPacketElixir::StaticNew() */

CollectableSeedPacketElixir * CollectableSeedPacketElixir::StaticNew(void)

{
  CollectableSeedPacketElixir *this;
  
  this = ::operator_new(0x208);
  CollectableSeedPacketElixir(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSeedPacketElixir::StaticClassInit() */

void CollectableSeedPacketElixir::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"CollectableSeedPacketElixir");
    (*pcVar2)(plVar1,asStack_10,FUN_03c67260,0x208,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableSeedPacketElixir::StaticGetClass() */

long * CollectableSeedPacketElixir::StaticGetClass(void)

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
  uVar2 = Collectable::StaticGetClass();
  (*pcVar3)(plVar1,"CollectableSeedPacketElixir",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableSeedPacketElixir::GetClass() const */

long * CollectableSeedPacketElixir::GetClass(void)

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
  uVar2 = Collectable::StaticGetClass();
  (*pcVar3)(plVar1,"CollectableSeedPacketElixir",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSeedPacketElixir::onTouchEvent(Sexy::Touch const&) */

void __thiscall
CollectableSeedPacketElixir::onTouchEvent(CollectableSeedPacketElixir *this,Touch *param_1)

{
  char cVar1;
  char cVar2;
  ToolPacketCursor *this_00;
  Touch aTStack_40 [16];
  Point aPStack_30 [8];
  Point aPStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Collectable::IsTouched((Collectable *)this,param_1);
  if (cVar1 != '\0') {
    if (*(int *)(param_1 + 0x30) == 0) {
      Sexy::Touch::Touch(aTStack_40,param_1);
      Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),aPStack_30);
      Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),aPStack_28);
      this_00 = ::operator_new(0x60);
      ToolPacketCursor::ToolPacketCursor(this_00,aTStack_40,(string *)(this + 0x1f0));
      cVar2 = Board::TryToAddCursor(*(Board **)(gLawnApp + 0x9f0),(BaseCursor *)this_00,true);
      if (cVar2 != '\0') {
        *(ToolPacketCursor **)(this + 0x1f8) = this_00;
      }
      Collectable::SetPauseExpirationTimer((Collectable *)this,true);
    }
    else {
      cVar1 = '\0';
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSeedPacketElixir::SetElixirTypeName(std::string const&) */

void CollectableSeedPacketElixir::SetElixirTypeName(string *param_1)

{
  string *psVar1;
  bool bVar2;
  RtObject *this;
  Effect_PopAnim *pEVar3;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  psVar1 = param_1 + 0x1f0;
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(psVar1);
  this = (RtObject *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xb0))
  ;
  pEVar3 = Sexy::RtObject::Cast<Effect_PopAnim>(this);
  if (pEVar3 == (Effect_PopAnim *)0x0) goto LAB_03c6821c;
  bVar2 = std::operator==(psVar1,"tool_buff_small_elixir");
  if (bVar2) {
    std::string::string(asStack_10,"animation1");
    PVZ_EOT();
LAB_03c68270:
    Effect_PopAnim::PlayLoopingAnimation(pEVar3,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
  }
  else {
    bVar2 = std::operator==(psVar1,"tool_buff_medium_elixir");
    if (bVar2) {
      __s = "animation2";
    }
    else {
      bVar2 = std::operator==(psVar1,"tool_buff_large_elixir");
      if (bVar2) {
        std::string::string(asStack_10,"animation3");
        PVZ_EOT();
        goto LAB_03c68270;
      }
      bVar2 = std::operator==(psVar1,"tool_buff_thunder_elixir");
      if (!bVar2) goto LAB_03c6821c;
      __s = "animation4";
    }
    std::string::string(asStack_10,__s);
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar3,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
  }
LAB_03c6821c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableSeedPacketElixir::registerForEvents() */

void __thiscall CollectableSeedPacketElixir::registerForEvents(CollectableSeedPacketElixir *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Collectable::registerForEvents((Collectable *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCursorDestroyed);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<CollectableSeedPacketElixir,void(CollectableSeedPacketElixir::*)(BaseCursor*)>>
            ((MessageRouter *)puVar1,Message::CursorDestroyed,&local_40);
  return;
}

