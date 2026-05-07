// Class: PlantMissileToe


/* PlantMissileToe::PlantMissileToe() */

void __thiscall PlantMissileToe::PlantMissileToe(PlantMissileToe *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantMissileToe)0x0;
  this[0x29] = (PlantMissileToe)0x0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR_GetClass_06740d00;
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}


/* PlantMissileToe::StaticNew() */

PlantMissileToe * PlantMissileToe::StaticNew(void)

{
  PlantMissileToe *this;
  
  this = ::operator_new(0x40);
  PlantMissileToe(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMissileToe::StaticClassInit() */

void PlantMissileToe::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantMissileToe");
    (*pcVar2)(plVar1,asStack_10,FUN_03bf2d78,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMissileToe::StaticGetClass() */

long * PlantMissileToe::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantMissileToe",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMissileToe::GetClass() const */

long * PlantMissileToe::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantMissileToe",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMissileToe::~PlantMissileToe() */

void __thiscall PlantMissileToe::~PlantMissileToe(PlantMissileToe *this)

{
  *(undefined ***)this = &PTR_GetClass_06740d00;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantMissileToe::~PlantMissileToe() */

void __thiscall PlantMissileToe::~PlantMissileToe(PlantMissileToe *this)

{
  ~PlantMissileToe(this);
  AK::FreeHook(this);
  return;
}


/* PlantMissileToe::SetLevel5Proj(bool) */

void __thiscall PlantMissileToe::SetLevel5Proj(PlantMissileToe *this,bool param_1)

{
  RtObject *this_00;
  PlantAnimRig_MissileToe *pPVar1;
  
  this[0x38] = (PlantMissileToe)param_1;
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar1 = Sexy::RtObject::Cast<PlantAnimRig_MissileToe>(this_00);
  if (pPVar1 != (PlantAnimRig_MissileToe *)0x0) {
    FUN_03bf25fc(pPVar1 + 0x3b8,this[0x38]);
    return;
  }
  return;
}


/* PlantMissileToe::TryShootLevel5(bool) */

void __thiscall PlantMissileToe::TryShootLevel5(PlantMissileToe *this,bool param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  uVar3 = *(undefined8 *)(this + 0x10);
  bVar1 = (bool)FUN_03bf25c8(uVar3);
  if ((bVar1 != false) && (!param_1)) {
    lVar2 = FUN_03bf61dc(uVar3);
    fVar5 = *(float *)(lVar2 + 0x2d4);
    fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    SetLevel5Proj(this,fVar4 < fVar5);
    return;
  }
  SetLevel5Proj(this,bVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMissileToe::registerForEvents() */

void __thiscall PlantMissileToe::registerForEvents(PlantMissileToe *this)

{
  undefined *puVar1;
  Board *pBVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTouchEvent);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<PlantMissileToe,bool(PlantMissileToe::*)(Sexy::Touch_const&)>
            (aDStack_68,(CBMemberTranslatorX *)&local_80);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_88,(RtWeakPtrBase *)aRStack_90);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Board::RegisterTouchGameplayObject(pBVar2,aDStack_68,6,aRStack_88,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCursorDestroyed);
  local_b0 = local_80;
  uStack_a8 = uStack_78;
  local_a0 = local_70;
  MessageRouter::
  Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<PlantMissileToe,void(PlantMissileToe::*)(BaseCursor*)>>
            ((MessageRouter *)puVar1,Message::CursorDestroyed,&local_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMissileToe::canFire() const */

void PlantMissileToe::canFire(void)

{
  int iVar1;
  undefined1 uVar2;
  long in_x0;
  wchar16 *pwVar3;
  LineBreakCategory *pLVar4;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(*(long *)(in_x0 + 0x10) + 200);
  local_8 = ___stack_chk_guard;
  uVar2 = iVar1 == 10 || iVar1 == 1;
  if (iVar1 != 10 && iVar1 != 1) {
    pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar4 = aLStack_18;
    std::string::string(asStack_10,"FreePlanting");
    uVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar3,(wchar16 *)asStack_10,pLVar4,in_x3,in_x4);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMissileToe::setState(int) */

void __thiscall PlantMissileToe::setState(PlantMissileToe *this,int param_1)

{
  char cVar1;
  RtObject *pRVar2;
  PlantAnimRig_MissileToe *pPVar3;
  char *pcVar4;
  long *plVar5;
  UIEasyButtonWidget *this_00;
  code *pcVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this_00 + 200) == param_1) && (param_1 != 0xb)) goto switchD_03bf86b4_caseD_2;
  *(int *)(this_00 + 200) = param_1;
  switch(param_1) {
  case 1:
    plVar5 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
    (**(code **)(*plVar5 + 0x118))();
    break;
  case 10:
    pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar4,"Play_Plant_MissileToe_Attack_Activate");
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
    break;
  case 0xb:
    pRVar2 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_00);
    pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_MissileToe>(pRVar2);
    lVar7 = *(long *)(this + 0x10);
    fVar8 = (float)PVZ_T();
    std::string::string(asStack_58,"special");
    fVar9 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)pPVar3,asStack_58);
    *(float *)(lVar7 + 0x128) = fVar9 + fVar8;
    std::string::~string(asStack_58);
    nop();
    pcVar6 = *(code **)(*(long *)pPVar3 + 0x130);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
    (*pcVar6)(pPVar3,(RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    goto LAB_03bf87e0;
  case 0xc:
    cVar1 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar1 != '\0') {
      pRVar2 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
      ;
      pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_MissileToe>(pRVar2);
      lVar7 = *(long *)(this + 0x10);
      fVar8 = (float)PVZ_T();
      std::string::string(asStack_58,"plantfood");
      fVar9 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)pPVar3,asStack_58);
      *(float *)(lVar7 + 0x128) = fVar8 + fVar9 + _FUN_03bf88d4;
      std::string::~string(asStack_58);
      nop();
    }
LAB_03bf87e0:
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
    break;
  case 0xd:
    *(undefined4 *)(this_00 + 0x128) = *(undefined4 *)(this + 0x2c);
    pRVar2 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_00);
    pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_MissileToe>(pRVar2);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_MissileToe::PlayRecoverStart(pPVar3,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
switchD_03bf86b4_caseD_2:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMissileToe::Initialize() */

void __thiscall PlantMissileToe::Initialize(PlantMissileToe *this)

{
  PlantFramework::Initialize((PlantFramework *)this);
  setState(this,1);
  this[0x38] = (PlantMissileToe)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMissileToe::UpdateActions() */

void __thiscall PlantMissileToe::UpdateActions(PlantMissileToe *this)

{
  int iVar1;
  long lVar2;
  long extraout_x0;
  RtObject *this_00;
  PlantAnimRig_MissileToe *pPVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  iVar1 = *(int *)(*(long *)(this + 0x10) + 200);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 0xc) {
    fVar5 = (float)PVZ_T();
    if (fVar5 <= *(float *)(*(long *)(this + 0x10) + 0x128)) goto LAB_03bf895c;
  }
  else {
    if (iVar1 == 0xd) {
      fVar5 = (float)PVZ_T();
      if (*(float *)(this + 0x2c) < fVar5) {
        TryShootLevel5(this,false);
        setState(this,0xe);
        this_00 = (RtObject *)
                  UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_MissileToe>(this_00);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string((string *)aRStack_58,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_60,(string *)aRStack_58);
        PlantAnimRig_MissileToe::PlayRecoverEnd(pPVar3,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string((string *)aRStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
      }
      goto LAB_03bf895c;
    }
    if ((iVar1 != 0xb) ||
       (fVar5 = (float)PVZ_T(), fVar5 <= *(float *)(*(long *)(this + 0x10) + 0x128)))
    goto LAB_03bf895c;
    fVar5 = (float)PVZ_T();
    FUN_03bf259c(aRStack_58,*(undefined8 *)(this + 0x10));
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    lVar2 = FUN_03bf2614(*(undefined8 *)(lVar2 + 0x70),0);
    fVar6 = (float)FUN_03bf2588(*(undefined4 *)(*(long *)(this + 0x10) + 0x420));
    *(float *)(this + 0x2c) = fVar5 + *(float *)(lVar2 + 0x28) * fVar6;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    iVar1 = FUN_03bf25c0(*(undefined8 *)(this + 0x10));
    if (1 < iVar1) {
      Plant::GetProps();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
      if (extraout_x0 != 0) {
        uVar4 = *(undefined8 *)(this + 0x10);
        fVar5 = *(float *)(extraout_x0 + 0x2d8);
        iVar1 = FUN_03bf25c0(uVar4);
        if (2 < iVar1) {
          fVar5 = *(float *)(extraout_x0 + 0x2dc) * fVar5 + fVar5;
        }
        FUN_03bf259c(aRStack_58,uVar4);
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
        lVar2 = FUN_03bf2614(*(undefined8 *)(lVar2 + 0x70),0);
        fVar8 = *(float *)(lVar2 + 0x28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
        fVar6 = (float)PVZ_T();
        fVar7 = (float)FUN_03bf2588(*(undefined4 *)(*(long *)(this + 0x10) + 0x420));
        *(float *)(this + 0x2c) = fVar6 + (1.0 - fVar5) * fVar7 * fVar8;
      }
    }
  }
  setState(this,0xd);
LAB_03bf895c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMissileToe::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantMissileToe::onAnimStoppedCallback(PlantMissileToe *this,string *param_1)

{
  bool bVar1;
  RtObject *this_00;
  PlantAnimRig_MissileToe *this_01;
  
  bVar1 = std::operator==(param_1,"reload_end");
  if (bVar1) {
    setState(this,1);
    return;
  }
  bVar1 = std::operator==(param_1,"reload");
  if (!bVar1) {
    return;
  }
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  this_01 = Sexy::RtObject::Cast<PlantAnimRig_MissileToe>(this_00);
  PlantAnimRig_MissileToe::PlayRecoverLoop(this_01);
  return;
}


/* PlantMissileToe::CancelPlantfood() */

void __thiscall PlantMissileToe::CancelPlantfood(PlantMissileToe *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,0xd);
  return;
}


/* PlantMissileToe::select() */

bool __thiscall PlantMissileToe::select(PlantMissileToe *this)

{
  int iVar1;
  RtObject *this_00;
  PlantAnimRig_MissileToe *this_01;
  bool bVar2;
  
  iVar1 = *(int *)(*(UIEasyButtonWidget **)(this + 0x10) + 200);
  if (iVar1 == 0xd) {
    bVar2 = false;
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
  }
  else {
    bVar2 = iVar1 == 1 || iVar1 == 0xe;
    if (iVar1 == 1 || iVar1 == 0xe) {
      this_00 = (RtObject *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      this_01 = Sexy::RtObject::Cast<PlantAnimRig_MissileToe>(this_00);
      PlantAnimRig_MissileToe::PlaySelected(this_01);
      setState(this,10);
    }
  }
  return bVar2;
}


/* PlantMissileToe::onTouchEvent(Sexy::Touch const&) */

char __thiscall PlantMissileToe::onTouchEvent(PlantMissileToe *this,Touch *param_1)

{
  char cVar1;
  TRect<int> *this_00;
  MissileToeTargetCursor *this_01;
  Board *this_02;
  float fVar2;
  float fVar3;
  
  cVar1 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if ((cVar1 == '\0') &&
     (cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),0x11), cVar1 == '\0')) {
    this_02 = *(Board **)(gLawnApp + 0x9f0);
    cVar1 = Board::IsPlaying(this_02);
    if (((cVar1 != '\0') && (cVar1 = FUN_03bf2594(this_02[0x887]), cVar1 != '\0')) ||
       (this[0x29] != (PlantMissileToe)0x0)) {
      fVar2 = (float)FUN_03bf2a90((float)*(int *)(param_1 + 0x10));
      fVar3 = (float)FUN_03bf2a90((float)*(int *)(param_1 + 0x14));
      this_00 = (TRect<int> *)
                (**(code **)(**(long **)(this + 0x10) + 0x178))(*(long **)(this + 0x10));
      cVar1 = Sexy::TRect<int>::Contains(this_00,(int)fVar2,(int)fVar3);
      if ((((cVar1 != '\0') && (*(int *)(param_1 + 0x30) == 0)) &&
          ((*(BaseCursor **)(this + 0x30) == (BaseCursor *)0x0 ||
           (cVar1 = BaseCursor::IsCachedCursor(*(BaseCursor **)(this + 0x30)), cVar1 != '\0')))) &&
         (cVar1 = select(this), cVar1 != '\0')) {
        this_01 = ::operator_new(0x50);
        MissileToeTargetCursor::MissileToeTargetCursor(this_01,param_1,this);
        cVar1 = Board::TryToAddCursor(*(Board **)(gLawnApp + 0x9f0),(BaseCursor *)this_01,true);
        if (cVar1 != '\0') {
          *(MissileToeTargetCursor **)(this + 0x30) = this_01;
          return cVar1;
        }
      }
    }
  }
  return '\0';
}


/* PlantMissileToe::deselect() */

void __thiscall PlantMissileToe::deselect(PlantMissileToe *this)

{
  char *pcVar1;
  
  setState(this,1);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Plant_MissileToe_Attack_Disarm");
  return;
}


/* PlantMissileToe::forceStopSelection() */

void __thiscall PlantMissileToe::forceStopSelection(PlantMissileToe *this)

{
  char cVar1;
  
  if ((*(int *)(*(long *)(this + 0x10) + 200) == 10) &&
     (cVar1 = (**(code **)(*(long *)this + 0x180))(), cVar1 == '\0')) {
    deselect(this);
  }
  if ((*(BaseCursor **)(this + 0x30) != (BaseCursor *)0x0) &&
     (cVar1 = BaseCursor::IsCachedCursor(*(BaseCursor **)(this + 0x30)), cVar1 == '\0')) {
    BaseCursor::Destroy(*(BaseCursor **)(this + 0x30));
  }
  *(undefined8 *)(this + 0x30) = 0;
  return;
}


/* PlantMissileToe::onApplyCondition(PlantConditions) */

void PlantMissileToe::onApplyCondition(PlantMissileToe *param_1)

{
  char cVar1;
  
  cVar1 = Plant::IsSuspended(*(Plant **)(param_1 + 0x10));
  if (cVar1 == '\0') {
    return;
  }
  forceStopSelection(param_1);
  return;
}


/* PlantMissileToe::onCursorDestroyed(BaseCursor*) */

void __thiscall PlantMissileToe::onCursorDestroyed(PlantMissileToe *this,BaseCursor *param_1)

{
  if (*(BaseCursor **)(this + 0x30) != param_1) {
    return;
  }
  forceStopSelection(this);
  return;
}


/* PlantMissileToe::NotifySetHidden(bool, bool) */

void __thiscall PlantMissileToe::NotifySetHidden(PlantMissileToe *this,bool param_1,bool param_2)

{
  if (param_1 <= param_2) {
    return;
  }
  forceStopSelection(this);
  return;
}


/* PlantMissileToe::queueShot(float, Sexy::Point const&) */

void __thiscall PlantMissileToe::queueShot(PlantMissileToe *this,float param_1,Point *param_2)

{
  undefined1 uVar1;
  MissileToeLauncherSubSystem *this_00;
  code *pcVar2;
  
  this_00 = Board::GetGameSubSystem<MissileToeLauncherSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  pcVar2 = *(code **)(*(long *)*(Plant **)(this + 0x10) + 0x1f8);
  if (pcVar2 == Plant::IsInPlantFoodState) {
    uVar1 = Plant::IsInPlantFoodState(*(Plant **)(this + 0x10));
  }
  else {
    uVar1 = (*pcVar2)();
  }
  MissileToeLauncherSubSystem::QueueShot(this_00,this,param_1,param_2,(bool)uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMissileToe::AutoFire() */

void PlantMissileToe::AutoFire(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  PlantFramework *in_x0;
  undefined8 uVar4;
  undefined8 uVar5;
  long *extraout_x0;
  long lVar6;
  BoardTransforms *this;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  float extraout_s0;
  float fVar11;
  float in_s1;
  undefined8 local_40;
  undefined8 local_38;
  float local_30;
  undefined4 uStack_2c;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  Board::GetGridBoundingRect();
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
             (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_30,0xffffffff,0xffffffff);
  uVar5 = local_20;
  iVar3 = FUN_03bf2624(local_20,local_18);
  uVar1 = iVar3 - 1;
  if (-1 < (int)uVar1) {
    uVar4 = operator|(1,8);
    lVar7 = (long)(int)uVar1 + -1;
    uVar4 = operator|(uVar4,4);
    uVar4 = operator|(uVar4,0x80);
    operator|(uVar4,0x800);
    lVar6 = lVar7;
    lVar9 = (long)(int)uVar1;
    while( true ) {
      lVar8 = lVar6;
      FUN_03bf2630(uVar5,lVar9);
      nop();
      cVar2 = Zombie::MatchesAny();
      uVar5 = local_20;
      if (cVar2 != '\0') {
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_20);
        local_38 = __gnu_cxx::
                   __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                   ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                *)&local_40,lVar9);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_30,(__normal_iterator *)&local_38);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,
                   CONCAT44(uStack_2c,local_30));
        uVar5 = local_20;
      }
      local_20 = uVar5;
      if (lVar8 == lVar7 - (ulong)uVar1) break;
      lVar6 = lVar8 + -1;
      lVar9 = lVar8;
    }
    iVar3 = FUN_03bf2624(uVar5,local_18);
  }
  iVar3 = PlantFramework::Rand(in_x0,iVar3);
  FUN_03bf2630(local_20,(long)iVar3);
  nop();
  pcVar10 = *(code **)(*extraout_x0 + 0x3a8);
  lVar6 = FUN_03bf61dc(*(undefined8 *)(in_x0 + 0x10));
  this = (BoardTransforms *)(*pcVar10)(*(undefined4 *)(lVar6 + 700),extraout_x0);
  local_30 = extraout_s0;
  BoardTransforms::BoardSpaceToGrid(this,extraout_s0,in_s1);
  TryShootLevel5((PlantMissileToe *)in_x0,true);
  fVar11 = (float)PVZ_T();
  lVar6 = FUN_03bf61dc(*(undefined8 *)(in_x0 + 0x10));
  queueShot((PlantMissileToe *)in_x0,fVar11 + *(float *)(lVar6 + 700),(Point *)&local_38);
  setState((PlantMissileToe *)in_x0,0xb);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMissileToe::ApplyPlantfood() */

void PlantMissileToe::ApplyPlantfood(void)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  PlantFramework *in_x0;
  undefined8 uVar5;
  long lVar6;
  long *extraout_x0;
  BoardTransforms *pBVar7;
  long *extraout_x0_00;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float extraout_s0;
  float extraout_s0_00;
  float in_s1;
  float fVar12;
  int local_9c;
  undefined1 local_98 [8];
  TPoint<int> aTStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  float local_70 [4];
  undefined8 local_60;
  float local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood(in_x0);
  if (*(BaseCursor **)(in_x0 + 0x30) != (BaseCursor *)0x0) {
    cVar2 = BaseCursor::IsCachedCursor(*(BaseCursor **)(in_x0 + 0x30));
    if (cVar2 == '\0') {
      BaseCursor::Destroy(*(BaseCursor **)(in_x0 + 0x30));
    }
    else {
      Board::ClearCachedCursor(*(Board **)(gLawnApp + 0x9f0));
    }
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  Board::GetGridBoundingRect();
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50,2,
             (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_20,0xffffffff,0xffffffff);
  uVar8 = local_50;
  iVar4 = FUN_03bf2624(local_50,local_48);
  uVar1 = iVar4 - 1;
  if (-1 < (int)uVar1) {
    uVar5 = operator|(1,8);
    lVar9 = (long)(int)uVar1 + -1;
    uVar5 = operator|(uVar5,4);
    uVar5 = operator|(uVar5,0x80);
    operator|(uVar5,0x800);
    lVar6 = lVar9;
    lVar11 = (long)(int)uVar1;
    while( true ) {
      lVar10 = lVar6;
      FUN_03bf2630(uVar8,lVar11);
      nop();
      cVar2 = Zombie::MatchesAny();
      uVar8 = local_50;
      if (cVar2 != '\0') {
        local_60 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_50);
        local_38[0] = __gnu_cxx::
                      __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                   *)&local_60,lVar11);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_20,(__normal_iterator *)local_38);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50,local_20);
        uVar8 = local_50;
      }
      local_50 = uVar8;
      if (lVar10 == lVar9 - (ulong)uVar1) break;
      lVar6 = lVar10 + -1;
      lVar11 = lVar10;
    }
  }
  lVar6 = FUN_03bf61dc(*(undefined8 *)(in_x0 + 0x10));
  local_9c = 0;
  fVar12 = *(float *)(lVar6 + 0x2c0);
  local_58 = fVar12;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,(vector *)&local_50);
  while ((lVar6 = FUN_03bf61dc(*(undefined8 *)(in_x0 + 0x10)), local_9c < *(int *)(lVar6 + 0x2b8) &&
         (cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20),
         cVar2 == '\0'))) {
    iVar4 = FUN_03bf2624(local_20,local_18);
    iVar4 = PlantFramework::Rand(in_x0,iVar4);
    FUN_03bf2630(local_20,(long)iVar4);
    nop();
    pBVar7 = (BoardTransforms *)
             (**(code **)(*extraout_x0_00 + 0x3a8))((float)(local_9c + 1) * fVar12);
    local_70[0] = extraout_s0_00;
    BoardTransforms::BoardSpaceToGrid(pBVar7,extraout_s0_00,in_s1);
    uVar8 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)local_38);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_38);
    local_88 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                         (uVar8,uVar5,aTStack_90);
    local_80 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)local_38);
    bVar3 = __gnu_cxx::operator==((__normal_iterator *)&local_88,(__normal_iterator *)&local_80);
    if (bVar3) {
      Sexy::Point::Point((Point *)&local_78,-1,-1);
      cVar2 = Sexy::TPoint<int>::operator!=(aTStack_90,(TPoint *)&local_78);
      if (cVar2 != '\0') {
        FUN_03bfa30c(&local_60,&local_9c,aTStack_90);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                  ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_38,(Point *)aTStack_90);
        uVar8 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_50);
        uVar5 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_50);
        local_80 = std::
                   remove<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,Zombie*>
                             (uVar8,uVar5,local_98);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_78,(__normal_iterator *)&local_80);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50,local_78);
      }
    }
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_80 = __gnu_cxx::
               __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
               ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                            *)&local_88,(long)iVar4);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_78,(__normal_iterator *)&local_80);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,local_78);
  }
  while ((lVar6 = FUN_03bf61dc(*(undefined8 *)(in_x0 + 0x10)), local_9c < *(int *)(lVar6 + 0x2b8) &&
         (cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50),
         cVar2 == '\0'))) {
    iVar4 = FUN_03bf2624(local_50,local_48);
    iVar4 = PlantFramework::Rand(in_x0,iVar4);
    FUN_03bf2630(local_20,(long)iVar4);
    nop();
    pBVar7 = (BoardTransforms *)(**(code **)(*extraout_x0 + 0x3a8))((float)(local_9c + 1) * fVar12);
    local_70[0] = extraout_s0;
    BoardTransforms::BoardSpaceToGrid(pBVar7,extraout_s0,in_s1);
    FUN_03bfa30c(&local_60,&local_9c,aTStack_90);
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_50);
    local_80 = __gnu_cxx::
               __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
               ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                            *)&local_88,(long)iVar4);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_78,(__normal_iterator *)&local_80);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50,local_78);
  }
  while (lVar6 = FUN_03bf61dc(*(undefined8 *)(in_x0 + 0x10)), local_9c < *(int *)(lVar6 + 0x2b8)) {
    Sexy::Point::Point((Point *)local_70,-1,-1);
    FUN_03bfa30c(&local_60,&local_9c,(Point *)local_70);
  }
  setState((PlantMissileToe *)in_x0,0xc);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMissileToe::FireMissile(Sexy::Point const&) */

void __thiscall PlantMissileToe::FireMissile(PlantMissileToe *this,Point *param_1)

{
  char cVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  undefined8 local_30;
  ulong local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = ___stack_chk_guard;
  if (this[0x29] == (PlantMissileToe)0x0) {
    lVar4 = *(long *)(gLawnApp + 0x9f0);
    cVar1 = FUN_03bf2594(*(undefined1 *)(lVar4 + 0x887));
    if ((cVar1 == '\0') || (cVar1 = FUN_03bf2598(*(undefined1 *)(lVar4 + 0x888)), cVar1 == '\0'))
    goto LAB_03bfa8c0;
  }
  iVar3 = (int)lVar2;
  cVar1 = FUN_03bf472c(*(undefined4 *)(*(long *)(this + 0x10) + 0x28));
  if ((cVar1 != '\0') || (cVar1 = canFire(), cVar1 == '\0')) goto LAB_03bfa8c0;
  BoardTransforms::BoardSpaceToGrid
            ((BoardTransforms *)(ulong)*(uint *)param_1,*(int *)(param_1 + 4),iVar3);
  if (this[0x28] == (PlantMissileToe)0x0) {
    if (((int)local_30 == -1) || (local_30._4_4_ == -1)) {
LAB_03bfa9dc:
      deselect(this);
      goto LAB_03bfa8c0;
    }
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    EntityFinder::GetEntitiesAtGridSquare(avStack_20,2,local_30 & 0xffffffff,local_30._4_4_);
    cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    if (cVar1 != '\0') {
      Sexy::Point::Point((Point *)&local_28,-1,-1);
      local_30 = local_28;
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    if (((int)local_30 == -1) || (local_30._4_4_ == -1)) {
      if (this[0x28] != (PlantMissileToe)0x0) goto LAB_03bfa8c0;
      goto LAB_03bfa9dc;
    }
  }
  fVar5 = (float)PVZ_T();
  lVar2 = FUN_03bf61dc(*(undefined8 *)(this + 0x10));
  queueShot(this,fVar5 + *(float *)(lVar2 + 700),(Point *)&local_30);
  setState(this,0xb);
LAB_03bfa8c0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

