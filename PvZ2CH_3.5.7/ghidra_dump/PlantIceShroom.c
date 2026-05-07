// Class: PlantIceShroom


/* PlantIceShroom::CanBeWatered() */

byte __thiscall PlantIceShroom::CanBeWatered(PlantIceShroom *this)

{
  char cVar1;
  byte bVar2;
  Plant *this_00;
  
  this_00 = *(Plant **)(this + 0x10);
  cVar1 = FUN_04213334(*(undefined4 *)(this_00 + 0x1d0));
  if (((cVar1 == '\0') && (*(int *)(this_00 + 200) != 3)) &&
     (cVar1 = Plant::IsSuspended(this_00), cVar1 == '\0')) {
    bVar2 = (**(code **)(*(long *)this + 0x180))(this);
    return bVar2 ^ 1;
  }
  return 0;
}


/* PlantIceShroom::CanApplyPlantfood() */

byte PlantIceShroom::CanApplyPlantfood(void)

{
  byte bVar1;
  
  bVar1 = FUN_042133e4(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0xc98));
  return bVar1 ^ 1;
}


/* PlantIceShroom::GetCurLevel() */

void __thiscall PlantIceShroom::GetCurLevel(PlantIceShroom *this)

{
  FUN_042133bc(*(undefined8 *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIceShroom::StaticClassInit() */

void PlantIceShroom::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantIceShroom");
    (*pcVar2)(plVar1,asStack_10,FUN_04213d34,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantIceShroom::StaticGetClass() */

long * PlantIceShroom::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantIceShroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantIceShroom::GetClass() const */

long * PlantIceShroom::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantIceShroom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIceShroom::FireProjectile(IceShroomProps::IceShroomGrowthStates, int, bool) */

void __thiscall
PlantIceShroom::FireProjectile
          (PlantIceShroom *this,RtWeakPtr *param_2,undefined4 param_3,char param_4)

{
  float *pfVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_00);
  fVar5 = *(float *)(this_00 + 0xc4);
  fVar8 = *(float *)(param_2 + 0x10);
  fVar4 = *pfVar1;
  fVar7 = *(float *)(param_2 + 0x14);
  fVar3 = pfVar1[1];
  fVar6 = fVar5 * *(float *)(param_2 + 0xc);
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    fVar6 = fVar6 + pfVar1[2] + 1.0;
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_18);
  if (param_4 == '\0') {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,param_2);
  }
  else {
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,param_2 + 0x18);
  }
  uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)a_Stack_18);
  uVar2 = Board::AddProjectile
                    ((Board *)(fVar4 + fVar8 * fVar5),fVar3 + fVar5 * fVar7,fVar6,uVar2,aRStack_10,
                     *(undefined8 *)(this + 0x10),param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PlantIceShroom::~PlantIceShroom() */

void __thiscall PlantIceShroom::~PlantIceShroom(PlantIceShroom *this)

{
  *(undefined ***)this = &PTR_GetClass_0680c780;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantIceShroom::~PlantIceShroom() */

void __thiscall PlantIceShroom::~PlantIceShroom(PlantIceShroom *this)

{
  ~PlantIceShroom(this);
  AK::FreeHook(this);
  return;
}


/* PlantIceShroom::onPlantGrowthPaused() */

void __thiscall PlantIceShroom::onPlantGrowthPaused(PlantIceShroom *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x2c) = uVar1;
  return;
}


/* PlantIceShroom::onPlantGrowthResumed() */

void __thiscall PlantIceShroom::onPlantGrowthResumed(PlantIceShroom *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x28) = (*(float *)(this + 0x28) - *(float *)(this + 0x2c)) + fVar1;
  return;
}


/* PlantIceShroom::Idle() */

void __thiscall PlantIceShroom::Idle(PlantIceShroom *this)

{
  long *plVar1;
  
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x118))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIceShroom::FindTargetAndFire(PlantWeapon) */

void PlantIceShroom::FindTargetAndFire(long *param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::CanFindTarget(param_1[2]);
  if (cVar1 == '\0') {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)param_1[2]);
    (**(code **)(*plVar2 + 0x88))();
    Plant::GetProps();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    lVar3 = FUN_04213830(*(undefined8 *)(lVar3 + 0x70));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    lVar5 = param_1[2];
    fVar6 = (float)FUN_042133b4(*(undefined4 *)(lVar5 + 0x3cc));
    local_1c = fVar6 * *(float *)(lVar3 + 0x24);
    local_18 = (float)(**(code **)(*param_1 + 0x4c8))(param_1);
    pfVar4 = eastl::max_alt<float>(&local_1c,&local_18);
    fVar7 = *pfVar4;
    local_14 = fVar6 * *(float *)(lVar3 + 0x28);
    local_10[0] = (**(code **)(*param_1 + 0x4c8))(param_1);
    pfVar4 = eastl::max_alt<float>(&local_14,(float *)local_10);
    Sexy::FastCurve::SetOutRange((FastCurve *)(lVar5 + 0xbc),fVar7,*pfVar4);
  }
  else {
    (**(code **)(*param_1 + 0x1a0))(param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 != '\0');
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIceShroom::GetTheLeastAttactDuration() */

void __thiscall PlantIceShroom::GetTheLeastAttactDuration(PlantIceShroom *this)

{
  PopAnimRig *this_00;
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string(asStack_10,"attack_stage1");
  uVar1 = PopAnimRig::CalcAnimLengthSeconds(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIceShroom::PlantIceShroom() */

void __thiscall PlantIceShroom::PlantIceShroom(PlantIceShroom *this)

{
  undefined *puVar1;
  undefined4 uVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0680c780;
  uVar2 = PVZ_EOT();
  this[0x30] = (PlantIceShroom)0x0;
  *(undefined4 *)(this + 0x28) = uVar2;
  *(undefined4 *)(this + 0x2c) = uVar2;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantGrowthPaused);
  Sexy::Delegate0::Delegate0<PlantIceShroom,void(PlantIceShroom::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PlantGrowthAndDecayPaused,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantGrowthResumed);
  Sexy::Delegate0::Delegate0<PlantIceShroom,void(PlantIceShroom::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::PlantGrowthAndDecayResumed,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantIceShroom::StaticNew() */

PlantIceShroom * PlantIceShroom::StaticNew(void)

{
  PlantIceShroom *this;
  
  this = ::operator_new(0x38);
  PlantIceShroom(this);
  return this;
}


/* PlantIceShroom::GetIceShroomProps() */

void __thiscall PlantIceShroom::GetIceShroomProps(PlantIceShroom *this)

{
  FUN_04215160(*(undefined8 *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIceShroom::getMaxGrowthStage() */

void __thiscall PlantIceShroom::getMaxGrowthStage(PlantIceShroom *this)

{
  long lVar1;
  int *piVar2;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_04215160(*(undefined8 *)(this + 0x10));
  local_10 = 0;
  local_c = FUN_042136f4(*(undefined8 *)(lVar1 + 0x2b8),*(undefined8 *)(lVar1 + 0x2c0));
  local_c = local_c + -1;
  piVar2 = eastl::max_alt<int>(&local_10,&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*piVar2);
}


/* PlantIceShroom::isFullyGrown() */

bool __thiscall PlantIceShroom::isFullyGrown(PlantIceShroom *this)

{
  uint uVar1;
  
  uVar1 = getMaxGrowthStage(this);
  return uVar1 == (byte)this[0x30];
}


/* PlantIceShroom::NotifySetHidden(bool, bool) */

void __thiscall PlantIceShroom::NotifySetHidden(PlantIceShroom *this,bool param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  lVar3 = FUN_04215160(*(undefined8 *)(this + 0x10));
  if ((lVar3 != 0) && (param_1 < param_2)) {
    cVar1 = isFullyGrown(this);
    if (cVar1 == '\0') {
      fVar6 = (float)PVZ_T();
      lVar3 = FUN_042136d8(*(undefined8 *)(lVar3 + 0x2b8),this[0x30]);
      fVar7 = *(float *)(lVar3 + 8);
      lVar3 = FUN_04215160(*(undefined8 *)(this + 0x10));
      iVar2 = FUN_042133bc(*(undefined8 *)(this + 0x10));
      pfVar4 = (float *)FUN_042136d0(*(undefined8 *)(lVar3 + 0x2d0),(long)(iVar2 + -1));
      *(float *)(this + 0x28) = fVar6 + fVar7 * *pfVar4;
      return;
    }
    uVar5 = PVZ_EOT();
    *(undefined4 *)(this + 0x28) = uVar5;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIceShroom::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantIceShroom::Fire(PlantIceShroom *param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  IceShroomGrowthStates *pIVar4;
  undefined8 uVar5;
  RealObject *this;
  IceShroomGrowthStates aIStack_48 [24];
  RtMixedPtrBase aRStack_30 [8];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)param_1 + 0x180))();
  if (cVar2 == '\0') {
    lVar3 = FUN_04215160(*(undefined8 *)(param_1 + 0x10));
    pIVar4 = (IceShroomGrowthStates *)FUN_042136d8(*(undefined8 *)(lVar3 + 0x2b8),param_1[0x30]);
    IceShroomProps::IceShroomGrowthStates::IceShroomGrowthStates(aIStack_48,pIVar4);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aIStack_48);
    if ((cVar2 == '\0') && (cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_30), cVar2 == '\0')) {
      uVar5 = 0;
    }
    else {
      this = *(RealObject **)(param_1 + 0x10);
      std::string::string(asStack_28,"Play_Plant_DarkAges_IceShroom_Attack");
      RealObject::PlayPositionalSound(this,asStack_28,0.0);
      std::string::~string(asStack_28);
      nop();
      cVar2 = FUN_042133c4(*(undefined8 *)(param_1 + 0x10));
      bVar1 = false;
      if (cVar2 != '\0') {
        lVar3 = FUN_042136f4(*(undefined8 *)(lVar3 + 0x2b8),*(undefined8 *)(lVar3 + 0x2c0));
        bVar1 = (ulong)(byte)param_1[0x30] == lVar3 - 1U;
      }
      IceShroomProps::IceShroomGrowthStates::IceShroomGrowthStates
                ((IceShroomGrowthStates *)asStack_28,aIStack_48);
      uVar5 = FireProjectile(param_1,asStack_28,0,bVar1);
      IceShroomProps::IceShroomGrowthStates::~IceShroomGrowthStates
                ((IceShroomGrowthStates *)asStack_28);
    }
    IceShroomProps::IceShroomGrowthStates::~IceShroomGrowthStates(aIStack_48);
  }
  else {
    uVar5 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* PlantIceShroom::Initialize() */

void __thiscall PlantIceShroom::Initialize(PlantIceShroom *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x30] = (PlantIceShroom)0x0;
  lVar3 = FUN_04215160(*(undefined8 *)(this + 0x10));
  cVar1 = std::
          vector<IceShroomProps::IceShroomGrowthStates,std::allocator<IceShroomProps::IceShroomGrowthStates>>
          ::empty((vector<IceShroomProps::IceShroomGrowthStates,std::allocator<IceShroomProps::IceShroomGrowthStates>>
                   *)(lVar3 + 0x2b8));
  if (cVar1 == '\0') {
    lVar3 = FUN_04215160(*(undefined8 *)(this + 0x10));
    cVar1 = std::vector<IceShroomProps::AdvanceInfo,std::allocator<IceShroomProps::AdvanceInfo>>::
            empty((vector<IceShroomProps::AdvanceInfo,std::allocator<IceShroomProps::AdvanceInfo>> *
                  )(lVar3 + 0x2d0));
    if (cVar1 == '\0') {
      fVar6 = (float)PVZ_T();
      lVar3 = FUN_04215160(*(undefined8 *)(this + 0x10));
      lVar3 = FUN_042136d8(*(undefined8 *)(lVar3 + 0x2b8),0);
      fVar7 = *(float *)(lVar3 + 8);
      lVar3 = FUN_04215160(*(undefined8 *)(this + 0x10));
      iVar2 = FUN_042133bc(*(undefined8 *)(this + 0x10));
      pfVar4 = (float *)FUN_042136d0(*(undefined8 *)(lVar3 + 0x2d0),(long)(iVar2 + -1));
      *(float *)(this + 0x28) = fVar6 + fVar7 * *pfVar4;
      uVar5 = PVZ_T();
      *(undefined4 *)(this + 0x2c) = uVar5;
      return;
    }
  }
  uVar5 = PVZ_EOT();
  *(undefined4 *)(this + 0x28) = uVar5;
  uVar5 = PVZ_T();
  *(undefined4 *)(this + 0x2c) = uVar5;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIceShroom::ApplyPlantfood() */

void __thiscall PlantIceShroom::ApplyPlantfood(PlantIceShroom *this)

{
  char cVar1;
  PlantIceShroom PVar2;
  PlantAnimRig_IceShroom *extraout_x0;
  undefined4 uVar3;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04213834(*(long *)(gLawnApp + 0x9f0) + 0xc98);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  cVar1 = isFullyGrown(this);
  if (cVar1 == '\0') {
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x28) = uVar3;
    PVar2 = (PlantIceShroom)getMaxGrowthStage(this);
    this[0x30] = PVar2;
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
    PlantAnimRig_IceShroom::SetGrowthStage(extraout_x0,3,aRStack_50);
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
/* PlantIceShroom::setGrowthStage(int, RtReflectionDelegate<Sexy::Delegate1<std::string const&> >)
    */

void __thiscall
PlantIceShroom::setGrowthStage(PlantIceShroom *this,int param_1,RtReflectionDelegate *param_3)

{
  PlantIceShroom PVar1;
  int *piVar2;
  PlantAnimRig_IceShroom *extraout_x0;
  int local_64 [3];
  int local_58 [2];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_58[1] = 0;
  local_8 = ___stack_chk_guard;
  local_64[0] = param_1;
  local_58[0] = getMaxGrowthStage(this);
  piVar2 = eastl::min_alt<int>(local_58,local_64);
  piVar2 = eastl::max_alt<int>(local_58 + 1,piVar2);
  this[0x30] = SUB41(*piVar2,0);
  UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  nop();
  PVar1 = this[0x30];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  PlantAnimRig_IceShroom::SetGrowthStage(extraout_x0,PVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIceShroom::UpdateActions() */

void __thiscall PlantIceShroom::UpdateActions(PlantIceShroom *this)

{
  PlantIceShroom PVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  Board *this_00;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(*(long *)(this + 0x10) + 200) == 4) {
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    cVar2 = Board::IsPlaying(this_00);
    if ((((cVar2 != '\0') && (cVar2 = Board::IsPlantGrowthAndDecayPaused(this_00), cVar2 == '\0'))
        && (fVar6 = (float)PVZ_T(), *(float *)(this + 0x28) < fVar6)) &&
       (lVar4 = FUN_04215160(*(undefined8 *)(this + 0x10)), lVar4 != 0)) {
      PVar1 = this[0x30];
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
      setGrowthStage(this,(byte)PVar1 + 1,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      cVar2 = isFullyGrown(this);
      if (cVar2 == '\0') {
        fVar6 = (float)PVZ_T();
        lVar4 = FUN_042136d8(*(undefined8 *)(lVar4 + 0x2b8),this[0x30]);
        fVar8 = *(float *)(lVar4 + 8);
        lVar4 = FUN_04215160(*(undefined8 *)(this + 0x10));
        iVar3 = FUN_042133bc(*(undefined8 *)(this + 0x10));
        pfVar5 = (float *)FUN_042136d0(*(undefined8 *)(lVar4 + 0x2d0),(long)(iVar3 + -1));
        *(float *)(this + 0x28) = fVar6 + fVar8 * *pfVar5;
      }
      else {
        uVar7 = PVZ_EOT();
        *(undefined4 *)(this + 0x28) = uVar7;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIceShroom::InitPooyanShooter(float) */

void __thiscall PlantIceShroom::InitPooyanShooter(PlantIceShroom *this,float param_1)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  IceShroomGrowthStates *pIVar4;
  IceShroomGrowthStates aIStack_70 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsInModule(gLawnApp,1);
  if (cVar1 != '\0') {
    lVar3 = FUN_04215160(*(undefined8 *)(this + 0x10));
    uVar2 = getMaxGrowthStage(this);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
    setGrowthStage(this,uVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    pIVar4 = (IceShroomGrowthStates *)FUN_042136d8(*(undefined8 *)(lVar3 + 0x2b8),this[0x30]);
    IceShroomProps::IceShroomGrowthStates::IceShroomGrowthStates(aIStack_70,pIVar4);
    cVar1 = FUN_042133c4(*(undefined8 *)(this + 0x10));
    if ((cVar1 == '\0') ||
       (lVar3 = FUN_042136f4(*(undefined8 *)(lVar3 + 0x2b8),*(undefined8 *)(lVar3 + 0x2c0)),
       (ulong)(byte)this[0x30] != lVar3 - 1U)) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_70);
      *(float *)(lVar3 + 0x18) = param_1;
    }
    else {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
      *(float *)(lVar3 + 0x18) = param_1;
    }
    IceShroomProps::IceShroomGrowthStates::~IceShroomGrowthStates(aIStack_70);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantIceShroom::GenerateIceHole() */

void __thiscall PlantIceShroom::GenerateIceHole(PlantIceShroom *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  RtObject *this_00;
  BoardEntity *this_01;
  TPoint<int> *pTVar8;
  TPoint *pTVar9;
  ulong uVar10;
  undefined8 uVar11;
  int *piVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  Board *this_02;
  int iVar17;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  iVar17 = 0;
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  iVar15 = 2;
  if (cVar1 != '\0') {
    iVar15 = 3;
  }
  uVar3 = operator|(4,2);
  do {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
    Board::GetGridBoundingRect();
    EntityFinder::GetEntitiesTouchingRectangle(avStack_68,uVar3,avStack_20,0xffffffff,0xffffffff);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    local_98 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_68);
    local_90 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_68);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,(__normal_iterator *)&local_90);
    if (bVar2) {
      do {
        plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
        this_00 = (RtObject *)*plVar7;
        if (this_00 != (RtObject *)0x0) {
          iVar6 = -1;
          do {
            bVar2 = Sexy::RtObject::IsA<GridItemIceHole>(this_00);
            iVar16 = -1;
            if (!bVar2) goto LAB_04217018;
LAB_04216fb4:
            nop();
            GridItem::GetGridLocation();
            Sexy::Point::Point((Point *)&local_80,iVar6,iVar16);
            Sexy::TPoint<int>::operator+((TPoint<int> *)&local_88,(TPoint *)&local_80);
            Sexy::Point::Point((Point *)&local_70,(TPoint *)&local_78);
            std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                      ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_50,
                       (Point *)&local_70);
            while (iVar16 = iVar16 + 1, iVar16 != 2) {
              while( true ) {
                bVar2 = Sexy::RtObject::IsA<GridItemIceHole>((RtObject *)*plVar7);
                if (bVar2) goto LAB_04216fb4;
LAB_04217018:
                bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)*plVar7);
                if (!bVar2) break;
                nop();
                iVar4 = BoardEntity::CalcColumnPosition(this_01);
                iVar5 = SharkMinion::getRow((SharkMinion *)this_01);
                Sexy::Point::Point((Point *)&local_88,iVar4,iVar5);
                iVar4 = iVar16 + 1;
                Sexy::Point::Point((Point *)&local_80,iVar6,iVar16);
                Sexy::TPoint<int>::operator+((TPoint<int> *)&local_88,(TPoint *)&local_80);
                Sexy::Point::Point((Point *)&local_70,(TPoint *)&local_78);
                std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                          ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20,
                           (Point *)&local_70);
                iVar16 = iVar4;
                if (iVar4 == 2) goto LAB_042170a0;
              }
            }
LAB_042170a0:
            iVar6 = iVar6 + 1;
            if (iVar6 == 2) break;
            this_00 = (RtObject *)*plVar7;
          } while( true );
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,(__normal_iterator *)&local_90)
        ;
      } while (bVar2);
    }
    iVar6 = 1;
    lVar14 = *(long *)(gLawnApp + 0x9f0);
    if (2 < *(int *)(lVar14 + 0xf8)) {
      do {
        iVar16 = 1;
        if (2 < *(int *)(lVar14 + 0xfc)) {
          do {
            Sexy::Point::Point((Point *)&local_80,iVar6,iVar16);
            local_78 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)&local_50);
            local_70 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)&local_50);
            while (bVar2 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70)
                  , bVar2) {
              pTVar8 = (TPoint<int> *)
                       std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
              cVar1 = Sexy::TPoint<int>::operator==(pTVar8,(TPoint *)&local_80);
              if (cVar1 != '\0') goto LAB_04217168;
              eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                        ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
            }
            std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                      ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38,
                       (Point *)&local_80);
LAB_04217168:
            iVar16 = iVar16 + 1;
            lVar14 = *(long *)(gLawnApp + 0x9f0);
          } while (iVar16 < *(int *)(lVar14 + 0xfc) + -1);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar14 + 0xf8) + -1);
    }
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_50);
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_38);
    local_80 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_38);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_88,(__normal_iterator *)&local_80);
    if (bVar2) {
      do {
        pTVar8 = (TPoint<int> *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
        local_78 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_20);
        local_70 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70),
              bVar2) {
          pTVar9 = (TPoint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78)
          ;
          cVar1 = Sexy::TPoint<int>::operator==(pTVar8,pTVar9);
          if (cVar1 != '\0') {
            std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                      ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_50,(Point *)pTVar8)
            ;
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_88,(__normal_iterator *)&local_80)
        ;
      } while (bVar2);
    }
    cVar1 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty
                      ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_50);
    if (cVar1 == '\0') {
      iVar6 = PlantFramework::Rand((PlantFramework *)this);
      uVar10 = FUN_042136e0(local_50,local_48);
      this_02 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)&local_70,"gridIceHole");
      uVar11 = local_50;
LAB_042172ac:
      iVar16 = 0;
      if (uVar10 != 0) {
        iVar16 = (int)((ulong)(long)iVar6 / uVar10);
      }
      uVar13 = iVar6 - iVar16 * (int)uVar10;
      piVar12 = (int *)FUN_042136ec(uVar11,(long)(int)((uVar13 ^ (int)uVar13 >> 0x3f) -
                                                      ((int)uVar13 >> 0x1f)));
      Board::AddGridItem(this_02,(string *)&local_70,*piVar12,piVar12[1],1);
      std::string::~string((string *)&local_70);
      nop();
    }
    else {
      cVar1 = std::vector<Sexy::Point,std::allocator<Sexy::Point>>::empty
                        ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38);
      if (cVar1 == '\0') {
        iVar6 = PlantFramework::Rand((PlantFramework *)this);
        uVar10 = FUN_042136e0(local_38,local_30);
        this_02 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string((string *)&local_70,"gridIceHole");
        uVar11 = local_38;
        goto LAB_042172ac;
      }
    }
    iVar17 = iVar17 + 1;
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_38);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_50);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_68);
    if (iVar17 == iVar15) {
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


/* PlantIceShroom::CancelPlantfood() */

void __thiscall PlantIceShroom::CancelPlantfood(PlantIceShroom *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  GenerateIceHole(this);
  return;
}

