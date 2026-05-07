// Class: PlantCoconutCannon


/* PlantCoconutCannon::onCancelEvent() */

void __thiscall PlantCoconutCannon::onCancelEvent(PlantCoconutCannon *this)

{
  *(undefined8 *)(this + 0x30) = 0;
  return;
}


/* PlantCoconutCannon::PlantCoconutCannon() */

void __thiscall PlantCoconutCannon::PlantCoconutCannon(PlantCoconutCannon *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantCoconutCannon)0x0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR_GetClass_067b90e0;
  *(undefined4 *)(this + 0x38) = 0x3f800000;
  return;
}


/* PlantCoconutCannon::StaticNew() */

PlantCoconutCannon * PlantCoconutCannon::StaticNew(void)

{
  PlantCoconutCannon *this;
  
  this = ::operator_new(0x40);
  PlantCoconutCannon(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCoconutCannon::StaticClassInit() */

void PlantCoconutCannon::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantCoconutCannon");
    (*pcVar2)(plVar1,asStack_10,FUN_0402d3e0,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCoconutCannon::StaticGetClass() */

long * PlantCoconutCannon::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantCoconutCannon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCoconutCannon::GetClass() const */

long * PlantCoconutCannon::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantCoconutCannon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCoconutCannon::isReadyToFire() */

bool __thiscall PlantCoconutCannon::isReadyToFire(PlantCoconutCannon *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(this + 0x10);
  cVar2 = FUN_0402cf40(*(undefined1 *)(lVar4 + 0x278));
  bVar3 = false;
  if (cVar2 == '\0') {
    iVar1 = *(int *)(lVar4 + 200);
    bVar3 = iVar1 == 0xc || iVar1 == 1;
  }
  return bVar3;
}


/* PlantCoconutCannon::~PlantCoconutCannon() */

void __thiscall PlantCoconutCannon::~PlantCoconutCannon(PlantCoconutCannon *this)

{
  *(undefined ***)this = &PTR_GetClass_067b90e0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantCoconutCannon::~PlantCoconutCannon() */

void __thiscall PlantCoconutCannon::~PlantCoconutCannon(PlantCoconutCannon *this)

{
  ~PlantCoconutCannon(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCoconutCannon::SetPopAnimDelegates(PlantAnimRig*) */

void __thiscall
PlantCoconutCannon::SetPopAnimDelegates(PlantCoconutCannon *this,PlantAnimRig *param_1)

{
  PlantAnimRig *pPVar1;
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1<float> aDStack_68 [48];
  Delegate1<float> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::SetPopAnimDelegates((PlantFramework *)this,param_1);
  pPVar1 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,fireProjectileCallback);
  Sexy::Delegate1<float>::Delegate1<PlantCoconutCannon,void(PlantCoconutCannon::*)(float)>
            (aDStack_68,aCStack_98);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,fireProjectileCallback);
  Sexy::Delegate1<float>::Delegate1<PlantCoconutCannon,void(PlantCoconutCannon::*)(float)>
            (aDStack_38,aCStack_80);
  PlantAnimRig::SetPlantDelegates(pPVar1,aDStack_68,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCoconutCannon::registerForEvents() */

void __thiscall PlantCoconutCannon::registerForEvents(PlantCoconutCannon *this)

{
  char cVar1;
  Board *pBVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = PlantFramework::IsArenaBattle();
  if (cVar1 == '\0') {
    pBVar2 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onTouchEvent);
    Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
    Delegate1wRet<PlantCoconutCannon,bool(PlantCoconutCannon::*)(Sexy::Touch_const&)>
              (aDStack_68,aCStack_98);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)aRStack_a8);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onCancelEvent);
    Sexy::Delegate0::Delegate0<PlantCoconutCannon,void(PlantCoconutCannon::*)()>
              (aDStack_38,aCStack_80);
    Board::RegisterTouchGameplayObject(pBVar2,aDStack_68,2,aRStack_a0,aDStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCoconutCannon::setState(int) */

void __thiscall PlantCoconutCannon::setState(PlantCoconutCannon *this,int param_1)

{
  UIEasyButtonWidget *this_00;
  PlantAnimRig_CarrotLauncher *pPVar1;
  PlantAnimRig *pPVar2;
  long *plVar3;
  PopAnimRig *this_01;
  PlantAnimRig_Mandrake *this_02;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  Color aCStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(int *)(this_00 + 200) != param_1) {
    *(int *)(this_00 + 200) = param_1;
    if (param_1 == 0xb) {
      this_02 = (PlantAnimRig_Mandrake *)FUN_0402e1a8();
      PlantAnimRig_Mandrake::PlayRecoverLooped(this_02);
      Plant::GetProps();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aCStack_60);
      lVar4 = FUN_0402cfb4(*(undefined8 *)(lVar4 + 0x70),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aCStack_60);
      fVar6 = (float)PVZ_T();
      lVar5 = *(long *)(this + 0x10);
      fVar8 = *(float *)(this + 0x38);
      fVar9 = *(float *)(lVar4 + 0x28);
      fVar7 = (float)FUN_0402cf44(*(undefined4 *)(lVar5 + 0x420));
      *(float *)(lVar5 + 0x128) = fVar6 + fVar7 * fVar8 * fVar9;
    }
    else if (param_1 == 0xc) {
      pPVar1 = (PlantAnimRig_CarrotLauncher *)FUN_0402e1a8();
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
      PlantAnimRig_CarrotLauncher::PlayRecoverEnd(pPVar1,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      pPVar2 = (PlantAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      PlantAnimRig::SetState(pPVar2,0xe);
    }
    else if (param_1 == 1) {
      plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
      (**(code **)(*plVar3 + 0x118))();
      this_01 = (PopAnimRig *)
                UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      Sexy::Color::Color(aCStack_60,1);
      PopAnimRig::SetPAMColor(this_01,aCStack_60);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCoconutCannon::Initialize() */

void __thiscall PlantCoconutCannon::Initialize(PlantCoconutCannon *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  PlantFramework::Initialize((PlantFramework *)this);
  setState(this,1);
  cVar1 = LawnApp::IsInModule(gLawnApp,4);
  if (cVar1 == '\0') {
    *(undefined4 *)(this + 0x38) = 0x3f800000;
    iVar2 = FUN_0402cf70(*(undefined8 *)(this + 0x10));
    if (*(code **)(*(long *)this + 0x410) == PlantFramework::GetMiniLevel) {
      iVar3 = PlantFramework::GetMiniLevel((PlantFramework *)this);
    }
    else {
      iVar3 = (**(code **)(*(long *)this + 0x410))();
    }
    if (iVar2 - iVar3 == 1) {
      lVar4 = FUN_0402e0c8(*(undefined8 *)(this + 0x10));
      *(undefined4 *)(this + 0x38) = *(undefined4 *)(lVar4 + 0x2b8);
    }
    else if (1 < iVar2 - iVar3) {
      lVar4 = FUN_0402e0c8(*(undefined8 *)(this + 0x10));
      *(undefined4 *)(this + 0x38) = *(undefined4 *)(lVar4 + 700);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCoconutCannon::ApplyPlantfood() */

void __thiscall PlantCoconutCannon::ApplyPlantfood(PlantCoconutCannon *this)

{
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Play_CoconutCannon_PF_Fire");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  setState(this,5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCoconutCannon::CancelPlantfood() */

void __thiscall PlantCoconutCannon::CancelPlantfood(PlantCoconutCannon *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,0xb);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x0402e684 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantCoconutCannon::UpdateActions() */

void __thiscall PlantCoconutCannon::UpdateActions(PlantCoconutCannon *this)

{
  undefined1 auVar1 [16];
  char cVar2;
  UIEasyButtonWidget *this_00;
  PopAnimRig *pPVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined1 extraout_var [12];
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(this_00 + 200)) {
  case 1:
    cVar2 = PlantFramework::IsArenaBattle();
    if ((cVar2 != '\0') &&
       (cVar2 = Plant::CanFindTarget(*(undefined8 *)(this + 0x10),0), cVar2 != '\0')) {
      (**(code **)(*(long *)this + 0x460))(this);
    }
    break;
  case 10:
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    cVar2 = PopAnimRig::IsPlayingAnything(pPVar3);
    if (cVar2 == '\0') {
      setState(this,0xb);
    }
    break;
  case 0xb:
    fVar5 = (float)PVZ_T();
    if (fVar5 <= *(float *)(*(UIEasyButtonWidget **)(this + 0x10) + 0x128)) {
      Plant::GetProps();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      lVar4 = FUN_0402cfb4(*(undefined8 *)(lVar4 + 0x70),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      fVar8 = *(float *)(*(long *)(this + 0x10) + 0x128);
      fVar5 = (float)PVZ_T();
      fVar7 = *(float *)(this + 0x38);
      fVar9 = *(float *)(lVar4 + 0x28);
      fVar6 = (float)FUN_0402cf44(*(undefined4 *)(*(long *)(this + 0x10) + 0x420));
      fVar5 = 1.0 - (fVar8 - fVar5) / (fVar7 * fVar9 * fVar6);
      fVar5 = fVar5 * fVar5;
      fVar5 = fVar5 * fVar5 * 125.66371 + 3.1415927;
      cosf(fVar5);
      local_18 = 0x3f800000;
      local_1c = 0x3ecccccd;
      auVar1._4_12_ = extraout_var;
      auVar1._0_4_ = fVar5;
      fVar5 = CurveEvaluate<float>
                        (auVar1,0x3f000000,&local_1c,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,1);
      Sexy::Color::Color((Color *)&local_18);
      local_18 = (int)(fVar5 * 255.0);
      local_14 = local_18;
      local_10 = local_18;
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      PopAnimRig::SetPAMColor(pPVar3,(Color *)&local_18);
    }
    else {
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      Sexy::Color::Color((Color *)&local_18,1);
      PopAnimRig::SetPAMColor(pPVar3,(Color *)&local_18);
      setState(this,0xc);
    }
    break;
  case 0xc:
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    cVar2 = PopAnimRig::IsPlayingAnything(pPVar3);
    if (cVar2 == '\0') {
      setState(this,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCoconutCannon::AutoFire() */

void __thiscall PlantCoconutCannon::AutoFire(PlantCoconutCannon *this)

{
  PlantAnimRig *pPVar1;
  code *pcVar2;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PlantAnimRig *)FUN_0402e1a8(*(undefined8 *)(this + 0x10));
  pcVar2 = *(code **)(*(long *)pPVar1 + 0x130);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  (*pcVar2)(pPVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  PlantAnimRig::SetState(pPVar1,0xe);
  setState(this,10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCoconutCannon::FindTargetAndFire(PlantWeapon) */

void PlantCoconutCannon::FindTargetAndFire(PlantCoconutCannon *param_1)

{
  char cVar1;
  PlantAnimRig *pPVar2;
  code *pcVar3;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::CanFindTarget(*(undefined8 *)(param_1 + 0x10));
  if (cVar1 != '\0') {
    pPVar2 = (PlantAnimRig *)FUN_0402e1a8(*(undefined8 *)(param_1 + 0x10));
    pcVar3 = *(code **)(*(long *)pPVar2 + 0x130);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
    (*pcVar3)(pPVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    PlantAnimRig::SetState(pPVar2,0xe);
    setState(param_1,10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 != '\0');
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCoconutCannon::Idle() */

void __thiscall PlantCoconutCannon::Idle(PlantCoconutCannon *this)

{
  long *plVar1;
  PlantAnimRig_CarrotLauncher *pPVar2;
  PlantAnimRig_Mandrake *this_00;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(*(UIEasyButtonWidget **)(this + 0x10) + 200)) {
  case 1:
    plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar1 + 0x118))();
    break;
  case 10:
  case 0xb:
    this_00 = (PlantAnimRig_Mandrake *)FUN_0402e1a8();
    PlantAnimRig_Mandrake::PlayRecoverLooped(this_00);
    break;
  case 0xc:
    pPVar2 = (PlantAnimRig_CarrotLauncher *)FUN_0402e1a8();
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
    PlantAnimRig_CarrotLauncher::PlayRecoverEnd(pPVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCoconutCannon::fireProjectileCallback(float) */

void __thiscall PlantCoconutCannon::fireProjectileCallback(PlantCoconutCannon *this,float param_1)

{
  int iVar1;
  char cVar2;
  float *pfVar3;
  long lVar4;
  Projectile *this_00;
  RtObject *this_01;
  EffectAnimRig_CoconutCannonball *this_02;
  StarCoconutCannonProjectile *this_03;
  CoconutCannonProjectile *this_04;
  undefined4 uVar5;
  undefined8 uVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_05;
  undefined8 uVar7;
  RealObject *this_06;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_05 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_05);
  fVar10 = *(float *)(this_05 + 0xc4);
  fVar9 = *pfVar3;
  fVar8 = pfVar3[2];
  fVar11 = pfVar3[1];
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_18);
  cVar2 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar2 == '\0') {
    uVar7 = *(undefined8 *)(this + 0x10);
    cVar2 = FUN_0402cf78(uVar7);
    if (cVar2 == '\0') {
      FUN_0402cf4c(aRStack_10,uVar7);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      uVar7 = *(undefined8 *)(lVar4 + 0x70);
      uVar6 = 0;
    }
    else {
      FUN_0402cf4c(aRStack_10,uVar7);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      uVar7 = *(undefined8 *)(lVar4 + 0x70);
      uVar6 = 3;
    }
  }
  else {
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar2 == '\0') {
      FUN_0402cf4c(aRStack_10,*(undefined8 *)(this + 0x10));
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      uVar7 = *(undefined8 *)(lVar4 + 0x70);
      uVar6 = 1;
    }
    else {
      FUN_0402cf4c(aRStack_10,*(undefined8 *)(this + 0x10));
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      uVar7 = *(undefined8 *)(lVar4 + 0x70);
      uVar6 = 2;
    }
  }
  lVar4 = FUN_0402cfb4(uVar7,uVar6);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)(lVar4 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)a_Stack_18);
  this_00 = (Projectile *)
            Board::AddProjectile
                      ((Board *)(fVar9 + fVar10 * 15.0),fVar11,fVar8 + fVar10 * 35.0,uVar7,
                       aRStack_10,*(undefined8 *)(this + 0x10),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8);
    lVar4 = FUN_0402cfa0(uVar7);
    if (((lVar4 != 0) && (lVar4 = FUN_0402e8e4(uVar7), lVar4 != 0)) &&
       (cVar2 = (**(code **)(*(long *)this + 0x180))(this), cVar2 == '\0')) {
      FUN_0402cfec(this_00 + 0x184);
    }
  }
  cVar2 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar2 == '\0') {
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  uVar5 = 2;
  if (this[0x28] == (PlantCoconutCannon)0x0) {
    uVar5 = 1;
  }
  FUN_0402cf28(this_00 + 0xb0,uVar5);
  cVar2 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar2 != '\0') {
    uVar7 = FUN_0402cf30(*(undefined8 *)(this_00 + 0xe0));
    uVar7 = operator|(uVar7,0x2000);
    FUN_0402cf34(this_00 + 0xe0,uVar7);
  }
  fVar8 = (float)PVZ_T();
  Projectile::SetUpdateTimeOverride(this_00,fVar8 - param_1);
  this_01 = (RtObject *)Projectile::GetAnimRig(this_00);
  this_02 = Sexy::RtObject::Cast<EffectAnimRig_CoconutCannonball>(this_01);
  cVar2 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar2 == '\0') {
    EffectAnimRig_CoconutCannonball::PlayNormalFlightLooped(this_02);
  }
  else {
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar2 == '\0') {
      EffectAnimRig_CoconutCannonball::PlayPlantFoodFlightLooped(this_02);
      this_04 = Sexy::RtObject::Cast<CoconutCannonProjectile>((RtObject *)this_00);
      if (this_04 != (CoconutCannonProjectile *)0x0) {
        lVar4 = FUN_0402e964(*(undefined8 *)(this + 0x10));
        fVar8 = *(float *)(lVar4 + 0x2c8);
        lVar4 = FUN_0402e964(*(undefined8 *)(this + 0x10));
        fVar9 = *(float *)(lVar4 + 0x2c0);
        lVar4 = FUN_0402e964(*(undefined8 *)(this + 0x10));
        CoconutCannonProjectile::SetExplosionParameters
                  (this_04,fVar8,fVar9,(float)*(int *)(lVar4 + 0x2c4));
      }
    }
    else {
      EffectAnimRig_CoconutCannonball::PlayStarPlantFoodFlightLooped(this_02);
      this_03 = Sexy::RtObject::Cast<StarCoconutCannonProjectile>((RtObject *)this_00);
      if (this_03 != (StarCoconutCannonProjectile *)0x0) {
        lVar4 = FUN_0402e964(*(undefined8 *)(this + 0x10));
        fVar8 = *(float *)(lVar4 + 0x2c8);
        lVar4 = FUN_0402e964(*(undefined8 *)(this + 0x10));
        fVar9 = *(float *)(lVar4 + 0x2c0);
        lVar4 = FUN_0402e964(*(undefined8 *)(this + 0x10));
        iVar1 = *(int *)(lVar4 + 0x2c4);
        lVar4 = FUN_0402e964(*(undefined8 *)(this + 0x10));
        StarCoconutCannonProjectile::SetExplosionParameters
                  (this_03,fVar8,fVar9,(float)iVar1,*(float *)(lVar4 + 0x2cc));
      }
    }
  }
  this_06 = *(RealObject **)(this + 0x10);
  std::string::string((string *)aRStack_10,"Play_Coconut_Cannon_Fire");
  RealObject::PlayPositionalSound(this_06,(string *)aRStack_10,0.0);
  std::string::~string((string *)aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCoconutCannon::onTouchEvent(Sexy::Touch const&) */

void PlantCoconutCannon::onTouchEvent(Touch *param_1)

{
  char cVar1;
  char cVar2;
  TRect<int> *pTVar3;
  wchar16 *pwVar4;
  PlantAnimRig *pPVar5;
  long *in_x1;
  LineBreakCategory *pLVar6;
  LineBreakCategory *pLVar7;
  LineBreakCategory *in_x4;
  long lVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  LineBreakCategory aLStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsInModule(gLawnApp,4);
  if (cVar1 == '\0') {
    cVar1 = Plant::IsWatering(*(Plant **)(param_1 + 0x10));
    if (cVar1 == '\0') {
      cVar1 = '\0';
      if ((*(long *)(param_1 + 0x30) == 0) && ((int)in_x1[6] == 0)) {
        fVar10 = (float)FUN_0402d230((float)(int)in_x1[2]);
        fVar11 = (float)FUN_0402d230((float)*(int *)((long)in_x1 + 0x14));
        pTVar3 = (TRect<int> *)
                 (**(code **)(**(long **)(param_1 + 0x10) + 0x178))(*(long **)(param_1 + 0x10));
        cVar2 = Sexy::TRect<int>::Contains(pTVar3,(int)fVar10,(int)fVar11);
        if (cVar2 != '\0') {
          *(long *)(param_1 + 0x30) = *in_x1;
          goto LAB_0402ee28;
        }
      }
      else if (*(long *)(param_1 + 0x30) == *in_x1) {
        if ((int)in_x1[6] == 4) {
          *(undefined8 *)(param_1 + 0x30) = 0;
          goto LAB_0402ee28;
        }
        if ((int)in_x1[6] == 3) {
          lVar8 = in_x1[2];
          *(undefined8 *)(param_1 + 0x30) = 0;
          fVar10 = (float)FUN_0402d230((float)(int)lVar8);
          fVar11 = (float)FUN_0402d230((float)*(int *)((long)in_x1 + 0x14));
          pLVar7 = *(LineBreakCategory **)(param_1 + 0x10);
          pTVar3 = (TRect<int> *)(**(code **)(*(long *)pLVar7 + 0x178))(pLVar7);
          cVar1 = Sexy::TRect<int>::Contains(pTVar3,(int)fVar10,(int)fVar11);
          if ((cVar1 != '\0') &&
             ((lVar8 = *(long *)(gLawnApp + 0x9f0), lVar8 == 0 ||
              ((cVar1 = FUN_0402cf98(*(undefined1 *)(lVar8 + 0x887)), cVar1 != '\0' &&
               (cVar1 = FUN_0402cf9c(*(undefined1 *)(lVar8 + 0x888)), cVar1 != '\0')))))) {
            lVar8 = *(long *)(param_1 + 0x10);
            cVar1 = FUN_0402dad8(*(undefined4 *)(lVar8 + 0x28));
            if (cVar1 == '\0') {
              cVar1 = Plant::HasCondition(lVar8,0x11);
              if (cVar1 == '\0') {
                pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
                pLVar6 = aLStack_60;
                std::string::string(asStack_58,"FreePlanting");
                cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                                  (pwVar4,(wchar16 *)asStack_58,pLVar6,pLVar7,in_x4);
                if (((cVar1 == '\0') &&
                    (cVar1 = isReadyToFire((PlantCoconutCannon *)param_1), cVar1 == '\0')) ||
                   (cVar1 = *(char *)(*(long *)(gLawnApp + 0x9f0) + 0x973), cVar1 == '\0')) {
                  std::string::~string(asStack_58);
                  nop();
                  cVar1 = '\0';
                }
                else {
                  std::string::~string(asStack_58);
                  nop();
                  pPVar5 = (PlantAnimRig *)FUN_0402e1a8(*(undefined8 *)(param_1 + 0x10));
                  pcVar9 = *(code **)(*(long *)pPVar5 + 0x130);
                  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                            (aRStack_50);
                  (*pcVar9)(pPVar5,aRStack_50);
                  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  ::~RtReflectionDelegate
                            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                              *)aRStack_50);
                  PlantAnimRig::SetState(pPVar5,0xe);
                  setState((PlantCoconutCannon *)param_1,10);
                }
                goto LAB_0402ee28;
              }
            }
          }
        }
      }
    }
  }
  cVar1 = '\0';
LAB_0402ee28:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}

