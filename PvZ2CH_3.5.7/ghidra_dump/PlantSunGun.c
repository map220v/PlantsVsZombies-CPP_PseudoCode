// Class: PlantSunGun


/* PlantSunGun::HandleSuperFSMAction_SunGunState(SunGunState, StateAction) */

void PlantSunGun::HandleSuperFSMAction_SunGunState(void)

{
  return;
}


/* PlantSunGun::UpdateActions() */

void __thiscall PlantSunGun::UpdateActions(PlantSunGun *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0411e6e4(*(undefined4 *)(this + 0x28));
  (**(code **)(*(long *)this + 0x528))(this,uVar1,2);
  return;
}


/* PlantSunGun::setState_SunGunState(SunGunState) */

void __thiscall PlantSunGun::setState_SunGunState(PlantSunGun *this,int param_2)

{
  if (*(int *)(this + 0x28) != -1) {
    (**(code **)(*(long *)this + 0x528))(this,*(int *)(this + 0x28),3);
  }
  *(int *)(this + 0x28) = param_2;
  if (param_2 != -1) {
    (**(code **)(*(long *)this + 0x528))(this,param_2,1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunGun::StaticClassInit() */

void PlantSunGun::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantSunGun");
    (*pcVar2)(plVar1,asStack_10,FUN_0411fc28,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSunGun::StaticGetClass() */

long * PlantSunGun::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantSunGun",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSunGun::GetClass() const */

long * PlantSunGun::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantSunGun",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSunGun::IncrementSunsClaimed(int) */

void __thiscall PlantSunGun::IncrementSunsClaimed(PlantSunGun *this,int param_1)

{
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  *(int *)(this + 0x30) = *(int *)(this + 0x30) + param_1;
  return;
}


/* PlantSunGun::DecrementSunsClaimed(int) */

void __thiscall PlantSunGun::DecrementSunsClaimed(PlantSunGun *this,int param_1)

{
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
  *(int *)(this + 0x30) = *(int *)(this + 0x30) - param_1;
  return;
}


/* PlantSunGun::CanClaimSun() */

bool __thiscall PlantSunGun::CanClaimSun(PlantSunGun *this)

{
  int iVar1;
  
  iVar1 = FUN_0411e6e4(*(undefined4 *)(this + 0x28));
  return iVar1 == 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunGun::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantSunGun::onAnimStoppedCallback(PlantSunGun *this,string *param_1)

{
  char cVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  FUN_0411e728(asStack_10);
  cVar1 = std::operator==(param_1,asStack_10);
  std::string::~string(asStack_10);
  if (cVar1 == '\0') {
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    FUN_0411e790(asStack_10);
    cVar1 = std::operator==(param_1,asStack_10);
    std::string::~string(asStack_10);
    if (cVar1 == '\0') {
      UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      FUN_0411e7f8(asStack_10);
      cVar1 = std::operator==(param_1,asStack_10);
      std::string::~string(asStack_10);
      if (cVar1 == '\0') {
        UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        FUN_0411e860(asStack_10);
        cVar1 = std::operator==(param_1,asStack_10);
        std::string::~string(asStack_10);
        if (cVar1 != '\0') {
          Plant::KillPlant(*(Plant **)(this + 0x10),0,0,1);
        }
      }
      else {
        setState_SunGunState(this,3);
      }
    }
    else {
      setState_SunGunState(this,2);
    }
  }
  else {
    setState_SunGunState(this,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunGun::Initialize() */

void __thiscall PlantSunGun::Initialize(PlantSunGun *this)

{
  ZombieRaSubSystem *pZVar1;
  code *pcVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  pZVar1 = Board::GetGameSubSystem<ZombieRaSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x88);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  (*pcVar2)(pZVar1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  setState_SunGunState(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSunGun::PlantSunGun() */

void __thiscall PlantSunGun::PlantSunGun(PlantSunGun *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067e8740;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  return;
}


/* PlantSunGun::StaticNew() */

PlantSunGun * PlantSunGun::StaticNew(void)

{
  PlantSunGun *this;
  
  this = ::operator_new(0x50);
  PlantSunGun(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunGun::OnAnimCommand(std::string const&, std::string const&) */

void PlantSunGun::OnAnimCommand(string *param_1,string *param_2)

{
  int iVar1;
  bool bVar2;
  float *pfVar3;
  long lVar4;
  Projectile *this;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar2 = std::operator==(param_2,"throw_object");
  if (bVar2) {
    p_Var5 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               **)(param_1 + 0x10);
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(p_Var5);
    fVar11 = *pfVar3;
    FUN_0411e6bc(aRStack_18,p_Var5);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    lVar4 = FUN_0411e974(*(undefined8 *)(lVar4 + 0x70));
    fVar7 = *(float *)(lVar4 + 0x68);
    fVar13 = *(float *)(*(long *)(param_1 + 0x10) + 0xc4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    p_Var5 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               **)(param_1 + 0x10);
    lVar4 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(p_Var5);
    fVar12 = *(float *)(lVar4 + 4);
    FUN_0411e6bc(aRStack_18,p_Var5);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    lVar4 = FUN_0411e974(*(undefined8 *)(lVar4 + 0x70));
    fVar8 = *(float *)(lVar4 + 0x6c);
    fVar14 = *(float *)(*(long *)(param_1 + 0x10) + 0xc4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    Plant::GetProps();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    lVar4 = FUN_0411e974(*(undefined8 *)(lVar4 + 0x70));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)(lVar4 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    for (iVar1 = *(int *)(param_1 + 0x34); 0 < iVar1; iVar1 = iVar1 + -0x32) {
      uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_20);
      this = (Projectile *)
             Board::AddProjectile
                       ((Board *)(fVar11 + fVar7 * fVar13),fVar12 + fVar8 * fVar14,0,uVar6,
                        aRStack_18,*(undefined8 *)(param_1 + 0x10),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      lVar4 = FUN_0411f4bc(*(undefined8 *)(param_1 + 0x10));
      fVar9 = (float)Sexy::SexyMath::DegToRad(*(float *)(lVar4 + 0x2b8));
      fVar9 = (float)RandRangeFloat(-fVar9,fVar9);
      fVar10 = cosf(fVar9);
      fVar9 = sinf(fVar9);
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar10 * 500.0,-(fVar9 * 500.0),0.0);
      Projectile::SetVelocity(this,(SexyVector3 *)aRStack_18);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    PlantFramework::OnAnimCommand(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSunGun::HandleStateMachine_SunGunState(SunGunState, StateAction) */

void __thiscall
PlantSunGun::HandleStateMachine_SunGunState(PlantSunGun *this,uint param_2,int param_3)

{
  char cVar1;
  PlantAnimRig_SunGun *extraout_x0;
  PlantAnimRig_SunGun *extraout_x0_00;
  PlantAnimRig_SunGun *extraout_x0_01;
  PlantAnimRig_SunGun *extraout_x0_02;
  PopAnimRig *pPVar2;
  RtMixedPtr aRStack_a8 [8];
  RtId aRStack_a0 [8];
  string asStack_98 [24];
  Delegate2<SunGunState,StateAction> aDStack_80 [48];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,HandleSuperFSMAction_SunGunState);
  Sexy::Delegate2<SunGunState,StateAction>::
  Delegate2<PlantSunGun,void(PlantSunGun::*)(SunGunState,StateAction)>(aDStack_80,asStack_98);
  switch(param_2) {
  case 0:
    switch(param_3) {
    case 0:
    case 3:
      break;
    case 1:
      UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      nop();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_a8);
      std::string::string(asStack_98,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_a0,asStack_98);
      PlantAnimRig_SunGun::PlayGunPlanted(extraout_x0_00,aRStack_50);
LAB_0411f964:
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      std::string::~string(asStack_98);
      nop();
      Sexy::RtId::~RtId(aRStack_a0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
      break;
    case 2:
      pPVar2 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      cVar1 = PopAnimRig::IsPlayingAnything(pPVar2);
      if (cVar1 == '\0') {
        setState_SunGunState(this,1);
      }
      break;
    default:
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_80,(char *)0x0);
    }
    break;
  case 1:
    switch(param_3) {
    case 0:
    case 3:
      break;
    case 1:
      UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      nop();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_a8);
      std::string::string(asStack_98,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_a0,asStack_98);
      PlantAnimRig_SunGun::PlayGunCollecting(extraout_x0,aRStack_50);
      goto LAB_0411f964;
    case 2:
      pPVar2 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      cVar1 = PopAnimRig::IsPlayingAnything(pPVar2);
      if (cVar1 == '\0') {
        setState_SunGunState(this,2);
      }
      break;
    default:
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_80,(char *)0x1);
    }
    break;
  case 2:
    switch(param_3) {
    case 0:
    case 3:
      break;
    case 1:
      UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      nop();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_a8);
      std::string::string(asStack_98,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_a0,asStack_98);
      PlantAnimRig_SunGun::PlayGunFiring(extraout_x0_01,aRStack_50);
      goto LAB_0411f964;
    case 2:
      pPVar2 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      cVar1 = PopAnimRig::IsPlayingAnything(pPVar2);
      if (cVar1 == '\0') {
        setState_SunGunState(this,3);
      }
      break;
    default:
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_80,(char *)0x2);
    }
    break;
  case 3:
    switch(param_3) {
    case 0:
    case 3:
      break;
    case 1:
      UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      nop();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_a8);
      std::string::string(asStack_98,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                (aRStack_50,aRStack_a0,asStack_98);
      PlantAnimRig_SunGun::PlayGunDying(extraout_x0_02,aRStack_50);
      goto LAB_0411f964;
    case 2:
      pPVar2 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      cVar1 = PopAnimRig::IsPlayingAnything(pPVar2);
      if (cVar1 == '\0') {
        Plant::KillPlant(*(Plant **)(this + 0x10),0,0,1);
      }
      break;
    default:
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_80,(char *)0x3);
    }
    break;
  case 0xffffffff:
    if (param_3 != 0) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_80,(char *)0xffffffff);
    }
    break;
  default:
    Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_80,(char *)(ulong)param_2);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantSunGun::~PlantSunGun() */

void __thiscall PlantSunGun::~PlantSunGun(PlantSunGun *this)

{
  *(undefined ***)this = &PTR_GetClass_067e8740;
  std::vector<MagnetShroomPulledEntity,std::allocator<MagnetShroomPulledEntity>>::~vector
            ((vector<MagnetShroomPulledEntity,std::allocator<MagnetShroomPulledEntity>> *)
             (this + 0x38));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantSunGun::~PlantSunGun() */

void __thiscall PlantSunGun::~PlantSunGun(PlantSunGun *this)

{
  ~PlantSunGun(this);
  AK::FreeHook(this);
  return;
}

