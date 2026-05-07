// Class: PlantTulipTrumpeter


/* PlantTulipTrumpeter::DelayPlantfood() */

void __thiscall PlantTulipTrumpeter::DelayPlantfood(PlantTulipTrumpeter *this)

{
  this[0x13c] = (PlantTulipTrumpeter)0x1;
  return;
}


/* PlantTulipTrumpeter::Initialize() */

void __thiscall PlantTulipTrumpeter::Initialize(PlantTulipTrumpeter *this)

{
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(this + 300) = 0xffffffff;
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
  this[0x130] = (PlantTulipTrumpeter)0x0;
  this[0x13c] = (PlantTulipTrumpeter)0x0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  return;
}


/* PlantTulipTrumpeter::PostInitialize() */

void __thiscall PlantTulipTrumpeter::PostInitialize(PlantTulipTrumpeter *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 != '\0') {
    this[0x130] = (PlantTulipTrumpeter)0x1;
    return;
  }
  PlantStatefulFramework::setActionState((PlantStatefulFramework *)this,0xc,false);
  return;
}


/* PlantTulipTrumpeter::CancelPlantfood() */

void __thiscall PlantTulipTrumpeter::CancelPlantfood(PlantTulipTrumpeter *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  if (this[0x130] == (PlantTulipTrumpeter)0x0) {
    PlantStatefulFramework::setActionState((PlantStatefulFramework *)this,4,false);
    *(undefined4 *)(this + 0x134) = 0;
    *(undefined4 *)(this + 0x138) = 0;
    return;
  }
  PlantStatefulFramework::setActionState((PlantStatefulFramework *)this,0xc,false);
  this[0x130] = (PlantTulipTrumpeter)0x0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  return;
}


/* PlantTulipTrumpeter::CanApplyPlantfood() */

byte __thiscall PlantTulipTrumpeter::CanApplyPlantfood(PlantTulipTrumpeter *this)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  
  uVar1 = *(undefined4 *)(this + 0x128);
  cVar2 = FUN_0423e39c(uVar1,3);
  bVar3 = 0;
  if (cVar2 == '\0') {
    bVar3 = FUN_0423e39c(uVar1,4);
    bVar3 = bVar3 ^ 1;
  }
  return bVar3;
}


/* PlantTulipTrumpeter::IgnoreCurrentAction(PlantActionType) */

bool __thiscall PlantTulipTrumpeter::IgnoreCurrentAction(PlantTulipTrumpeter *this,int param_2)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  
  if (param_2 == 0) {
    cVar1 = FUN_0423e39c(*(undefined4 *)(this + 0x128),1);
    bVar3 = true;
    if (cVar1 != '\0') {
      bVar3 = 0 < *(int *)(this + 300);
    }
  }
  else {
    bVar3 = false;
    if (param_2 == 4) {
      bVar2 = FUN_0423e39c(*(undefined4 *)(this + 0x128),2);
      return (bool)(bVar2 ^ 1);
    }
  }
  return bVar3;
}


/* PlantTulipTrumpeter::getState() */

undefined4 __thiscall PlantTulipTrumpeter::getState(PlantTulipTrumpeter *this)

{
  return *(undefined4 *)(this + 0x128);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTulipTrumpeter::PlantCanBeCured(Plant*) */

void PlantTulipTrumpeter::PlantCanBeCured(Plant *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  FUN_05475d88(asStack_18,lVar2 + 8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  bVar1 = std::operator==(asStack_18,"iceburg");
  if ((((bVar1) || (bVar1 = std::operator==(asStack_18,"cherry_bomb"), bVar1)) ||
      (bVar1 = std::operator==(asStack_18,"coffeebean"), bVar1)) ||
     (((bVar1 = std::operator==(asStack_18,"squash"), bVar1 ||
       (bVar1 = std::operator==(asStack_18,"jalapeno"), bVar1)) ||
      (bVar1 = std::operator==(asStack_18,"powerlily"), bVar1)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* PlantTulipTrumpeter::FindTargetZombie(Sexy::TRect<int>&, PlantWeapon, PlantTargetParams&) */

_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *
PlantTulipTrumpeter::FindTargetZombie
          (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1_00,long param_1,
          undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  
  cVar1 = FUN_0423e39c(*(undefined4 *)(param_1 + 0x128),1);
  if (cVar1 != '\0') {
    PlantFramework::FindTargetZombie(param_1_00,param_1,param_3,param_4,param_5);
    return param_1_00;
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (param_1_00);
  return param_1_00;
}


/* PlantTulipTrumpeter::CanEndPlantfood() */

bool __thiscall PlantTulipTrumpeter::CanEndPlantfood(PlantTulipTrumpeter *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  return *(float *)(this + 0x138) < fVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTulipTrumpeter::ApplyPlantfood() */

void __thiscall PlantTulipTrumpeter::ApplyPlantfood(PlantTulipTrumpeter *this)

{
  char cVar1;
  long extraout_x0;
  RealObject *this_00;
  float fVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  PlantStatefulFramework::setActionState((PlantStatefulFramework *)this,5,false);
  Plant::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (extraout_x0 != 0) {
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar1 == '\0') {
      fVar3 = *(float *)(extraout_x0 + 0x2d0);
    }
    else {
      fVar3 = *(float *)(extraout_x0 + 0x2d4);
    }
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x138) = fVar2 + fVar3;
  }
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string((string *)aRStack_10,"Play_Plant_Tuliptrumpeter_Plantfood");
  RealObject::PlayPositionalSound(this_00,(string *)aRStack_10,0.0);
  std::string::~string((string *)aRStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTulipTrumpeter::onEnterState_Idle(PlantState) */

void PlantTulipTrumpeter::onEnterState_Idle(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_1 + 0x10));
  (**(code **)(*plVar1 + 0x118))();
  return;
}


/* PlantTulipTrumpeter::~PlantTulipTrumpeter() */

void __thiscall PlantTulipTrumpeter::~PlantTulipTrumpeter(PlantTulipTrumpeter *this)

{
  *(undefined ***)this = &PTR_GetClass_06814e00;
  PlantStatefulFramework::~PlantStatefulFramework((PlantStatefulFramework *)this);
  return;
}


/* PlantTulipTrumpeter::~PlantTulipTrumpeter() */

void __thiscall PlantTulipTrumpeter::~PlantTulipTrumpeter(PlantTulipTrumpeter *this)

{
  ~PlantTulipTrumpeter(this);
  AK::FreeHook(this);
  return;
}


/* PlantTulipTrumpeter::setState(TulipTrumpeterState) */

void __thiscall PlantTulipTrumpeter::setState(PlantTulipTrumpeter *this,int param_2)

{
  long lVar1;
  
  if (*(int *)(this + 0x128) != param_2) {
    *(int *)(this + 0x128) = param_2;
    if (param_2 == 1) {
      lVar1 = *(long *)(this + 0x10);
      *(undefined4 *)(lVar1 + 0x150) = 0;
      lVar1 = FUN_0423fd9c(lVar1);
      FUN_0423e46c(lVar1 + 0x3b8,0);
      if (this[0x13c] != (PlantTulipTrumpeter)0x0) {
        (**(code **)(*(long *)this + 0x220))(this);
        this[0x13c] = (PlantTulipTrumpeter)0x0;
      }
    }
    else if (param_2 == 2) {
      lVar1 = *(long *)(this + 0x10);
      *(undefined4 *)(lVar1 + 0x150) = 1;
      lVar1 = FUN_0423fd9c(lVar1);
      FUN_0423e46c(lVar1 + 0x3b8,1);
      return;
    }
  }
  return;
}


/* PlantTulipTrumpeter::onAnimStopped_BeginCure(std::string const&) */

void PlantTulipTrumpeter::onAnimStopped_BeginCure(string *param_1)

{
  PlantStatefulFramework::setActionState((PlantStatefulFramework *)param_1,4,false);
  setState((PlantTulipTrumpeter *)param_1,2);
  return;
}


/* PlantTulipTrumpeter::onAnimStopped_BeginAttack(std::string const&) */

void PlantTulipTrumpeter::onAnimStopped_BeginAttack(string *param_1)

{
  PlantStatefulFramework::setActionState((PlantStatefulFramework *)param_1,4,false);
  setState((PlantTulipTrumpeter *)param_1,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTulipTrumpeter::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantTulipTrumpeter::Fire(PlantFramework *param_1)

{
  char cVar1;
  int iVar2;
  long extraout_x0;
  long lVar3;
  float *pfVar4;
  char *__s;
  RealObject *this;
  undefined8 uVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 300) < 1) {
    cVar1 = (**(code **)(*(long *)param_1 + 0x180))();
    if (cVar1 == '\0') {
      this = *(RealObject **)(param_1 + 0x10);
      iVar2 = FUN_0423e374(this);
      if (iVar2 < 2) {
LAB_0423ff7c:
        *(undefined4 *)(this + 0x150) = 0;
        __s = "Play_Plant_Tuliptrumpeter_Attack";
      }
      else {
        Plant::GetProps();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        if (extraout_x0 == 0) {
          this = *(RealObject **)(param_1 + 0x10);
          goto LAB_0423ff7c;
        }
        fVar6 = (float)PlantFramework::Rand(param_1,1.0);
        this = *(RealObject **)(param_1 + 0x10);
        fVar11 = *(float *)(extraout_x0 + 0x2c8);
        iVar2 = FUN_0423e374(this);
        if (2 < iVar2) {
          fVar11 = *(float *)(extraout_x0 + 0x2cc) * fVar11 + fVar11;
        }
        if (fVar11 <= fVar6) goto LAB_0423ff7c;
        *(undefined4 *)(this + 0x150) = 2;
        __s = "Play_Plant_Tuliptrumpeter_Special";
      }
      std::string::string((string *)aRStack_10,__s);
      RealObject::PlayPositionalSound(this,(string *)aRStack_10,0.0);
      std::string::~string((string *)aRStack_10);
      nop();
      lVar3 = FUN_0423fd9c(*(undefined8 *)(param_1 + 0x10));
      cVar1 = FUN_0423e47c(*(undefined1 *)(lVar3 + 0x3bc));
      if (cVar1 == '\0') {
        Plant::GetProps();
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        lVar3 = FUN_0423e4a0(*(undefined8 *)(lVar3 + 0x70),
                             (long)*(int *)(*(long *)(param_1 + 0x10) + 0x150));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    **)(param_1 + 0x10);
        pfVar4 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(this_00);
        fVar11 = *(float *)(lVar3 + 0x6c);
        fVar10 = *pfVar4;
        fVar9 = pfVar4[2];
        fVar8 = *(float *)(this_00 + 0xc4);
        fVar6 = *(float *)(lVar3 + 0x68);
        fVar7 = pfVar4[1];
        uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)(lVar3 + 8));
        lVar3 = Board::AddProjectile
                          ((Board *)(fVar10 + fVar6 * fVar8),fVar7,fVar9 - fVar8 * fVar11,uVar5,
                           aRStack_10,*(undefined8 *)(param_1 + 0x10),0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        uVar5 = FUN_0423e35c(*(undefined8 *)(lVar3 + 0xe0));
        uVar5 = operator|(uVar5,0x2000);
        FUN_0423e360((undefined8 *)(lVar3 + 0xe0),uVar5);
        goto LAB_042400c8;
      }
    }
    else {
      (**(code **)(*(long *)param_1 + 0xa8))(param_1,0);
    }
  }
  lVar3 = 0;
LAB_042400c8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTulipTrumpeter::DoLvl5Attack() */

void __thiscall PlantTulipTrumpeter::DoLvl5Attack(PlantTulipTrumpeter *this)

{
  char cVar1;
  long extraout_x0;
  long *plVar2;
  long lVar3;
  float *pfVar4;
  long extraout_x0_00;
  UIEasyButtonWidget *this_00;
  undefined8 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0423e37c(this_00);
  if (cVar1 != '\0') {
    if (*(int *)(this + 300) < 0) {
      Plant::GetProps();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if ((extraout_x0_00 != 0) &&
         (fVar7 = (float)PlantFramework::Rand((PlantFramework *)this,1.0),
         fVar7 < *(float *)(extraout_x0_00 + 700))) {
        fVar7 = *(float *)(extraout_x0_00 + 0x2c4);
        *(undefined4 *)(this + 300) = *(undefined4 *)(extraout_x0_00 + 0x2c0);
        Plant::GetProps();
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        lVar3 = FUN_0423e4a0(*(undefined8 *)(lVar3 + 0x70),3);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        Sexy::FastCurve::SetOutRange
                  ((FastCurve *)(*(long *)(this + 0x10) + 0xbc),*(float *)(lVar3 + 0x24) / fVar7,
                   *(float *)(lVar3 + 0x28) / fVar7);
        Plant::ResetLaunchTimer(*(Plant **)(this + 0x10),false);
        lVar3 = *(long *)(this + 0x10);
        *(undefined4 *)(lVar3 + 0x150) = 3;
        lVar3 = FUN_0423fd9c(lVar3);
        FUN_0423e474(lVar3 + 0x3bc,1);
      }
    }
    else if (*(int *)(this + 300) == 0) {
      plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
      (**(code **)(*plVar2 + 0x88))();
      *(undefined4 *)(this + 300) = 0xffffffff;
      Plant::GetProps();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      lVar3 = FUN_0423e4a0(*(undefined8 *)(lVar3 + 0x70),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)(*(long *)(this + 0x10) + 0xbc),*(float *)(lVar3 + 0x24),
                 *(float *)(lVar3 + 0x28));
      lVar3 = FUN_0423fd9c(*(undefined8 *)(this + 0x10));
      FUN_0423e474(lVar3 + 0x3bc,0);
    }
    else {
      Plant::GetProps();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if (extraout_x0 != 0) {
        uVar6 = *(undefined4 *)(extraout_x0 + 0x2c4);
        plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        (**(code **)(*plVar2 + 0x80))(uVar6);
        Plant::GetProps();
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        lVar3 = FUN_0423e4a0(*(undefined8 *)(lVar3 + 0x70),3);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(lVar3 + 8));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18);
        if (cVar1 == '\0') {
          *(int *)(this + 300) = *(int *)(this + 300) + -1;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        }
        else {
          pfVar4 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                            **)(this + 0x10));
          fVar11 = *pfVar4;
          Plant::GetProps();
          lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
          lVar3 = FUN_0423e4a0(*(undefined8 *)(lVar3 + 0x70),3);
          fVar7 = *(float *)(lVar3 + 0x68);
          fVar8 = *(float *)(*(long *)(this + 0x10) + 0xc4);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          lVar3 = std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  **)(this + 0x10));
          uVar6 = *(undefined4 *)(lVar3 + 4);
          Plant::GetProps();
          lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
          lVar3 = FUN_0423e4a0(*(undefined8 *)(lVar3 + 0x70),3);
          fVar9 = *(float *)(lVar3 + 0x6c);
          fVar10 = *(float *)(*(long *)(this + 0x10) + 0xc4);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
          Board::AddProjectile
                    ((Board *)(fVar11 + fVar7 * fVar8),uVar6,-(fVar9 * fVar10),uVar5,aRStack_10,
                     *(undefined8 *)(this + 0x10),0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          *(int *)(this + 300) = *(int *)(this + 300) + -1;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        }
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
/* PlantTulipTrumpeter::FindTargetAndFire(PlantWeapon) */

void __thiscall PlantTulipTrumpeter::FindTargetAndFire(PlantTulipTrumpeter *this,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0423e39c(*(undefined4 *)(this + 0x128),1);
  if (cVar1 != '\0') {
    cVar2 = Plant::CanFindTarget(*(undefined8 *)(this + 0x10),param_2);
    if (cVar2 == '\0') {
      cVar1 = '\0';
      plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      (**(code **)(*plVar3 + 0x88))();
      *(undefined4 *)(this + 300) = 0xffffffff;
      Plant::GetProps();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      lVar4 = FUN_0423e4a0(*(undefined8 *)(lVar4 + 0x70),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)(*(long *)(this + 0x10) + 0xbc),*(float *)(lVar4 + 0x24),
                 *(float *)(lVar4 + 0x28));
    }
    else {
      (**(code **)(*(long *)this + 0x1a0))(this);
      DoLvl5Attack(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* PlantTulipTrumpeter::doTakeCure(Plant*, CureType) */

void __thiscall PlantTulipTrumpeter::doTakeCure(PlantTulipTrumpeter *this,long *param_1,int param_3)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  
  if (param_3 == 0) {
    pcVar3 = *(code **)(*param_1 + 0x1e0);
    lVar2 = FUN_042405fc(*(undefined8 *)(this + 0x10));
    (*pcVar3)(param_1,*(undefined4 *)(lVar2 + 0x2b8),1);
    return;
  }
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    pcVar3 = *(code **)(*param_1 + 0x1e0);
    lVar2 = FUN_042405fc(*(undefined8 *)(this + 0x10));
    (*pcVar3)(param_1,(int)*(float *)(lVar2 + 0x2e4),1);
    return;
  }
  pcVar3 = *(code **)(*param_1 + 0x1e0);
  lVar2 = FUN_042405fc(*(undefined8 *)(this + 0x10));
  (*pcVar3)(param_1,(int)*(float *)(lVar2 + 0x2e8),1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTulipTrumpeter::onEnterState_BeginCure(PlantState) */

void PlantTulipTrumpeter::onEnterState_BeginCure(PlantTulipTrumpeter *param_1)

{
  PlantAnimRig_TulipTrumpeter *pPVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  setState(param_1,3);
  pPVar1 = (PlantAnimRig_TulipTrumpeter *)FUN_0423fd9c(*(undefined8 *)(param_1 + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PlantAnimRig_TulipTrumpeter::PlayCureBegin(pPVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTulipTrumpeter::onEnterState_BeginAttack(PlantState) */

void PlantTulipTrumpeter::onEnterState_BeginAttack(PlantTulipTrumpeter *param_1)

{
  PlantAnimRig_TulipTrumpeter *pPVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  setState(param_1,4);
  pPVar1 = (PlantAnimRig_TulipTrumpeter *)FUN_0423fd9c(*(undefined8 *)(param_1 + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PlantAnimRig_TulipTrumpeter::PlayAttackBegin(pPVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTulipTrumpeter::IsPlantNeedCure() */

void __thiscall PlantTulipTrumpeter::IsPlantNeedCure(PlantTulipTrumpeter *this)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  Plant *pPVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  (**(code **)(*(long *)this + 0x2b8))(auStack_30,this,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,auStack_30
             ,*(int *)(*(long *)(this + 0x10) + 0x110) + -1,
             *(int *)(*(long *)(this + 0x10) + 0x110) + 1);
  uVar7 = local_20;
  lVar2 = FUN_0423e48c(local_20,local_18);
  if (lVar2 != 0) {
    do {
      puVar3 = (undefined8 *)FUN_0423e498(uVar7,uVar6);
      pPVar4 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
      if (pPVar4 != (Plant *)0x0) {
        cVar1 = PlantCanBeCured((Plant *)this);
        if (cVar1 != '\0') goto LAB_04240a88;
      }
      uVar7 = local_20;
      uVar6 = uVar6 + 1;
      uVar5 = FUN_0423e48c(local_20,local_18);
    } while (uVar6 < uVar5);
  }
  cVar1 = '\0';
LAB_04240a88:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* PlantTulipTrumpeter::updateState() */

void __thiscall PlantTulipTrumpeter::updateState(PlantTulipTrumpeter *this)

{
  char cVar1;
  int iVar2;
  PlantAnimRig_TulipTrumpeter *this_00;
  Plant *this_01;
  float fVar3;
  
  iVar2 = getState(this);
  if ((iVar2 == 2) && (*(int *)(*(long *)(this + 0x10) + 200) == 4)) {
    fVar3 = (float)PVZ_T();
    this_01 = *(Plant **)(this + 0x10);
    if (*(float *)(this_01 + 300) < fVar3) {
      cVar1 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
      if (cVar1 != '\0') {
        cVar1 = IsPlantNeedCure(this);
        if (cVar1 == '\0') {
          this_01 = *(Plant **)(this + 0x10);
        }
        else {
          this_00 = (PlantAnimRig_TulipTrumpeter *)FUN_0423fd9c(*(undefined8 *)(this + 0x10));
          PlantAnimRig_TulipTrumpeter::PlayCureSpawn(this_00);
          this_01 = *(Plant **)(this + 0x10);
        }
      }
      Plant::ResetLaunchTimer(this_01,false);
      return;
    }
  }
  return;
}


/* PlantTulipTrumpeter::UpdateActions() */

void __thiscall PlantTulipTrumpeter::UpdateActions(PlantTulipTrumpeter *this)

{
  PlantStatefulFramework::UpdateActions((PlantStatefulFramework *)this);
  updateState(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTulipTrumpeter::CheckNeedCure() */

void __thiscall PlantTulipTrumpeter::CheckNeedCure(PlantTulipTrumpeter *this)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  ulong uVar4;
  RealObject *this_00;
  long *plVar5;
  ulong uVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  cVar2 = '\0';
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 300) < 0) {
    uVar6 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    Sexy::Insets::Insets
              (aIStack_30,*(int *)(*(long *)(this + 0x10) + 0x114) + -1,
               *(int *)(*(long *)(this + 0x10) + 0x110) + -1,3,3);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
               aIStack_30);
    while( true ) {
      uVar1 = local_20;
      uVar4 = FUN_0423e48c(local_20,local_18);
      if (uVar4 <= uVar6) break;
      FUN_0423e498(uVar1,uVar6);
      nop();
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      this_00 = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      cVar2 = RealObject::IsOnOpposingTeam(this_00,*(RealObject **)(this + 0x10));
      if (cVar2 != '\0') {
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
        cVar3 = (**(code **)(*plVar5 + 0x328))();
        if (cVar3 == '\0') {
          plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
          cVar3 = (**(code **)(*plVar5 + 0x330))();
          if (cVar3 == '\0') {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
            goto LAB_04240cfc;
          }
        }
      }
      uVar6 = uVar6 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    }
    cVar2 = '\0';
LAB_04240cfc:
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* PlantTulipTrumpeter::updateState_Idle() */

void __thiscall PlantTulipTrumpeter::updateState_Idle(PlantTulipTrumpeter *this)

{
  undefined4 uVar1;
  char cVar2;
  
  uVar1 = *(undefined4 *)(this + 0x128);
  cVar2 = FUN_0423e39c(uVar1,1);
  if (cVar2 == '\0') {
    cVar2 = FUN_0423e39c(uVar1,2);
    if (cVar2 != '\0') {
      cVar2 = CheckNeedCure(this);
      if (cVar2 == '\0') {
        PlantStatefulFramework::setActionState((PlantStatefulFramework *)this,0xc,false);
        return;
      }
    }
  }
  else {
    cVar2 = CheckNeedCure(this);
    if (cVar2 != '\0') {
      PlantStatefulFramework::setActionState((PlantStatefulFramework *)this,0xb,false);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTulipTrumpeter::CurePlant(PlantAction const&) */

void PlantTulipTrumpeter::CurePlant(PlantAction *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  Plant *pPVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0423e39c(*(undefined4 *)(param_1 + 0x128),2);
  if (cVar1 != '\0') {
    uVar6 = 0;
    (**(code **)(*(long *)param_1 + 0x2b8))(auStack_30,param_1,1);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    EntityFinder::GetEntitiesTouchingRectangle
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,
               auStack_30,*(int *)(*(long *)(param_1 + 0x10) + 0x110) + -1,
               *(int *)(*(long *)(param_1 + 0x10) + 0x110) + 1);
    uVar7 = local_20;
    lVar2 = FUN_0423e48c(local_20,local_18);
    if (lVar2 != 0) {
      do {
        puVar3 = (undefined8 *)FUN_0423e498(uVar7,uVar6);
        pPVar4 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
        if ((pPVar4 != (Plant *)0x0) && (cVar1 = PlantCanBeCured((Plant *)param_1), cVar1 != '\0'))
        {
          doTakeCure((PlantTulipTrumpeter *)param_1,pPVar4,0);
        }
        uVar7 = local_20;
        uVar6 = uVar6 + 1;
        uVar5 = FUN_0423e48c(local_20,local_18);
      } while (uVar6 < uVar5);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTulipTrumpeter::DamageAndHeal() */

void __thiscall PlantTulipTrumpeter::DamageAndHeal(PlantTulipTrumpeter *this)

{
  char cVar1;
  undefined4 uVar2;
  long extraout_x0;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  Plant *pPVar6;
  ulong uVar7;
  Zombie *this_00;
  ulong uVar8;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  if (extraout_x0 != 0) {
    uVar8 = 0;
    (**(code **)(*(long *)this + 0x2b8))(auStack_90,this,1);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    uVar3 = operator|(1,2);
    uVar2 = operator|(uVar3,4);
    EntityFinder::GetEntitiesTouchingRectangle
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar2,
               auStack_90,*(int *)(*(long *)(this + 0x10) + 0x110) + -1,
               *(int *)(*(long *)(this + 0x10) + 0x110) + 1);
    uVar3 = local_80;
    lVar4 = FUN_0423e48c(local_80,local_78);
    if (lVar4 != 0) {
      do {
        puVar5 = (undefined8 *)FUN_0423e498(uVar3,uVar8);
        pPVar6 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar5);
        if (pPVar6 == (Plant *)0x0) {
          DamageInfo::DamageInfo((DamageInfo *)aRStack_68);
          cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
          if (cVar1 == '\0') {
            local_60 = *(undefined4 *)(extraout_x0 + 0x2dc);
            puVar5 = (undefined8 *)FUN_0423e498(local_80,uVar8);
            this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
            if (this_00 != (Zombie *)0x0) goto LAB_04241088;
LAB_042410e0:
            puVar5 = (undefined8 *)FUN_0423e498(local_80,uVar8);
            this_00 = (Zombie *)Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar5);
            if (((this_00 != (Zombie *)0x0) &&
                (cVar1 = RealObject::IsOnOpposingTeam
                                   ((RealObject *)this_00,*(RealObject **)(this + 0x10)),
                cVar1 != '\0')) &&
               (cVar1 = (**(code **)(*(long *)this_00 + 0x200))(this_00), cVar1 != '\0')) {
LAB_04241098:
              (**(code **)(*(long *)this_00 + 0x110))(this_00,aRStack_68);
            }
          }
          else {
            local_60 = *(undefined4 *)(extraout_x0 + 0x2e0);
            puVar5 = (undefined8 *)FUN_0423e498(local_80,uVar8);
            this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
            if (this_00 == (Zombie *)0x0) goto LAB_042410e0;
LAB_04241088:
            cVar1 = Zombie::MatchesAny(this_00,0x2d);
            if (cVar1 == '\0') goto LAB_04241098;
          }
          DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
        }
        else {
          cVar1 = PlantCanBeCured((Plant *)this);
          if (cVar1 != '\0') {
            doTakeCure(this,pPVar6,1);
          }
        }
        uVar3 = local_80;
        uVar8 = uVar8 + 1;
        uVar7 = FUN_0423e48c(local_80,local_78);
      } while (uVar8 < uVar7);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTulipTrumpeter::UpdatePlantfood() */

void __thiscall PlantTulipTrumpeter::UpdatePlantfood(PlantTulipTrumpeter *this)

{
  long extraout_x0;
  float fVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (extraout_x0 != 0) {
    fVar2 = *(float *)(extraout_x0 + 0x2d8);
    fVar1 = (float)PVZ_T();
    if (*(float *)(this + 0x134) < fVar1) {
      fVar1 = (float)PVZ_T();
      *(float *)(this + 0x134) = fVar1 + fVar2;
      DamageAndHeal(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTulipTrumpeter::PlantTulipTrumpeter() */

void __thiscall PlantTulipTrumpeter::PlantTulipTrumpeter(PlantTulipTrumpeter *this)

{
  map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
  *this_00;
  Delegate2<Sexy::IPurchaseDriver*,bool> *pDVar1;
  map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
  *this_01;
  uint local_54;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantStatefulFramework::PlantStatefulFramework((PlantStatefulFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06814e00;
  this_00 = (map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
             *)PlayerInfo::GetPlantAvatarInfo((PlayerInfo *)this);
  local_54 = 0xb;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x6f8);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantTulipTrumpeter,void(PlantTulipTrumpeter::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  this_01 = (map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
             *)Sexy::RtDbTable::GetSharedIteratorStorage((RtDbTable *)this);
  local_54 = 0xb;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x700);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantTulipTrumpeter,void(PlantTulipTrumpeter::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 0xc;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate1<std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate1<std::string_const&>>>>
           ::operator[](this_00,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x720);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantTulipTrumpeter,void(PlantTulipTrumpeter::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  local_54 = 0xc;
  pDVar1 = (Delegate2<Sexy::IPurchaseDriver*,bool> *)
           std::
           map<unsigned_int,Sexy::Delegate2<std::string_const&,std::string_const&>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,Sexy::Delegate2<std::string_const&,std::string_const&>>>>
           ::operator[](this_01,&local_54);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x728);
  Sexy::Delegate2<std::string_const&,std::string_const&>::
  Delegate2<PlantTulipTrumpeter,void(PlantTulipTrumpeter::*)(std::string_const&,std::string_const&)>
            ((Delegate2<std::string_const&,std::string_const&> *)aDStack_38,aCStack_50);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(pDVar1,(Delegate2 *)aDStack_38);
  *(undefined4 *)(this + 0x128) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTulipTrumpeter::StaticNew() */

PlantTulipTrumpeter * PlantTulipTrumpeter::StaticNew(void)

{
  PlantTulipTrumpeter *this;
  
  this = ::operator_new(0x140);
  PlantTulipTrumpeter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTulipTrumpeter::StaticClassInit() */

void PlantTulipTrumpeter::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<PlantState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<PlantState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"PlantTulipTrumpeter");
      (*pcVar4)(plVar1,asStack_150,FUN_042416dc,0x140,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<PlantState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x6e0);
  Sexy::Delegate1<PlantState>::
  Delegate1<PlantTulipTrumpeter,void(PlantTulipTrumpeter::*)(PlantState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x6e8);
  Sexy::Delegate0::Delegate0<PlantTulipTrumpeter,void(PlantTulipTrumpeter::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x6f0);
  Sexy::Delegate1<PlantState>::
  Delegate1<PlantTulipTrumpeter,void(PlantTulipTrumpeter::*)(PlantState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"TULIPTRUMPETER_BEGINCURE");
  StateDefinition<PlantState>::StateDefinition
            (aSStack_a8,0xb,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_042413d8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x708);
  Sexy::Delegate1<PlantState>::
  Delegate1<PlantTulipTrumpeter,void(PlantTulipTrumpeter::*)(PlantState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x710);
  Sexy::Delegate0::Delegate0<PlantTulipTrumpeter,void(PlantTulipTrumpeter::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0x718);
  Sexy::Delegate1<PlantState>::
  Delegate1<PlantTulipTrumpeter,void(PlantTulipTrumpeter::*)(PlantState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"TULIPTRUMPETER_BEGINATTACK");
  StateDefinition<PlantState>::StateDefinition
            (aSStack_a8,0xc,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_042413d8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantTulipTrumpeter::StaticGetClass() */

long * PlantTulipTrumpeter::StaticGetClass(void)

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
  uVar2 = PlantStatefulFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTulipTrumpeter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTulipTrumpeter::GetClass() const */

long * PlantTulipTrumpeter::GetClass(void)

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
  uVar2 = PlantStatefulFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTulipTrumpeter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

