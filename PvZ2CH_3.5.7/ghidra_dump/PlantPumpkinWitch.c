// Class: PlantPumpkinWitch


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPumpkinWitch::StaticClassInit() */

void PlantPumpkinWitch::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPumpkinWitch");
    (*pcVar2)(plVar1,asStack_10,FUN_040eb908,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPumpkinWitch::StaticGetClass() */

long * PlantPumpkinWitch::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPumpkinWitch",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPumpkinWitch::GetClass() const */

long * PlantPumpkinWitch::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPumpkinWitch",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPumpkinWitch::PlantPumpkinWitch() */

void __thiscall PlantPumpkinWitch::PlantPumpkinWitch(PlantPumpkinWitch *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067de820;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* PlantPumpkinWitch::StaticNew() */

PlantPumpkinWitch * PlantPumpkinWitch::StaticNew(void)

{
  PlantPumpkinWitch *this;
  
  this = ::operator_new(0x50);
  PlantPumpkinWitch(this);
  return this;
}


/* PlantPumpkinWitch::LaunchProjectileAt(Projectile*, Sexy::SexyVector3 const&, float, float) */

void __thiscall
PlantPumpkinWitch::LaunchProjectileAt
          (PlantPumpkinWitch *this,Projectile *param_1,SexyVector3 *param_2,float param_3,
          float param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_040eaa88(*(undefined8 *)(this + 0x10));
  fVar5 = *(float *)(lVar1 + 0x2ec);
  lVar1 = FUN_040eaa88(*(undefined8 *)(this + 0x10));
  fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,param_3 * *(float *)(lVar1 + 0x2ec));
  lVar1 = FUN_040eaa88(*(undefined8 *)(this + 0x10));
  fVar4 = *(float *)(lVar1 + 0x2e8);
  lVar1 = FUN_040eaa88(*(undefined8 *)(this + 0x10));
  fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,param_4 * *(float *)(lVar1 + 0x2e8));
  Projectile::LaunchAt(param_1,param_2,fVar2 + fVar5,fVar3 + fVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPumpkinWitch::normalFire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantPumpkinWitch::normalFire
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               PlantPumpkinWitch *param_4,RtMixedPtrBase *param_5,undefined8 param_6,
               undefined8 param_7)

{
  char cVar1;
  Projectile *this;
  long *plVar2;
  long lVar3;
  Plant *pPVar4;
  RealObject *this_00;
  code *pcVar5;
  DVec3 aDStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_4 + 0x180))();
  if (cVar1 == '\0') {
    pPVar4 = *(Plant **)(param_4 + 0x10);
    *(undefined4 *)(pPVar4 + 0x150) = 0;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)param_5);
    this = (Projectile *)
           Plant::Fire(pPVar4,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_6,param_7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)param_5);
    Projectile::SetTarget(this,(RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    DVec3::DVec3(aDStack_28);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(param_5);
    if (cVar1 != '\0') {
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_5);
      pcVar5 = *(code **)(*plVar2 + 0x3b0);
      lVar3 = FUN_040eaa88(*(undefined8 *)(param_4 + 0x10));
      local_18 = (*pcVar5)(*(undefined4 *)(lVar3 + 0x2e8),plVar2);
      local_14 = param_2;
      local_10 = param_3;
      Sexy::SexyVector3::operator=((SexyVector3 *)aDStack_28,(SexyVector3 *)&local_18);
    }
    LaunchProjectileAt(param_4,this,(SexyVector3 *)aDStack_28,_FUN_040ead4c,_FUN_040ead4c);
    this_00 = *(RealObject **)(param_4 + 0x10);
    std::string::string((string *)&local_18,"Play_CabbagePult_Throw");
    RealObject::PlayPositionalSound(this_00,(string *)&local_18,0.0);
    std::string::~string((string *)&local_18);
    nop();
  }
  else {
    (**(code **)(*(long *)param_4 + 0xa8))(param_4,0);
    this = (Projectile *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPumpkinWitch::OnAnimCommand(std::string const&, std::string const&) */

void __thiscall
PlantPumpkinWitch::OnAnimCommand(PlantPumpkinWitch *this,string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  RtMixedPtrBase aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"use_action");
  if (bVar1) {
    PlantFramework::FindTargetZombie(aRStack_18,this,0,param_2);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
    if ((cVar2 != '\0') || (cVar2 = (**(code **)(*(long *)this + 0x180))(this), cVar2 != '\0')) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      normalFire(this,aRStack_10,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    lVar3 = 1;
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    lVar3 = ___stack_chk_guard;
    if (local_8 == ___stack_chk_guard) {
      PlantFramework::OnAnimCommand((string *)this,param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPumpkinWitch::PlayAttackAnimation() */

void __thiscall PlantPumpkinWitch::PlayAttackAnimation(PlantPumpkinWitch *this)

{
  RtObject *this_00;
  PlantAnimRig_PumpkinWitch *pPVar1;
  code *pcVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar1 = Sexy::RtObject::Cast<PlantAnimRig_PumpkinWitch>(this_00);
  pcVar2 = *(code **)(*(long *)pPVar1 + 0x130);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar2)(pPVar1,aRStack_50);
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
/* PlantPumpkinWitch::Initialize() */

void __thiscall PlantPumpkinWitch::Initialize(PlantPumpkinWitch *this)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x30));
  *(undefined4 *)(this + 0x48) = 0;
  lVar2 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar2 + 200) = 10;
  plVar1 = (long *)FUN_040ea994(lVar2);
  (**(code **)(*plVar1 + 0x118))();
  fVar3 = (float)PVZ_T();
  FUN_040ea7b8(aRStack_10,*(undefined8 *)(this + 0x10));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar2 = FUN_040ea7e4(*(undefined8 *)(lVar2 + 0x70));
  fVar4 = *(float *)(lVar2 + 0x20);
  fVar5 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
  *(float *)(this + 0x28) = (fVar3 + fVar4) - fVar5;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPumpkinWitch::setState(unsigned int) */

void __thiscall PlantPumpkinWitch::setState(PlantPumpkinWitch *this,uint param_1)

{
  float *pfVar1;
  PopAnimRig *pPVar2;
  long *plVar3;
  long lVar4;
  char *__s;
  UIEasyButtonWidget *this_00;
  float fVar5;
  float fVar6;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  float local_60 [2];
  undefined4 local_58 [2];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(uint *)(this_00 + 200) == param_1) goto switchD_040eb0cc_caseD_c;
  *(uint *)(this_00 + 200) = param_1;
  switch(param_1) {
  case 0xb:
    plVar3 = (long *)FUN_040ea994(this_00);
    (**(code **)(*plVar3 + 0x118))();
    break;
  case 0xd:
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    std::string::string((string *)local_58,"attack_sleep");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue(pPVar2,(string *)local_58,0,(DummyInit *)aRStack_50);
    std::string::~string((string *)local_58);
    nop();
    fVar5 = (float)PVZ_T();
    lVar4 = FUN_040eaa88(*(undefined8 *)(this + 0x10));
    fVar6 = *(float *)(lVar4 + 0x2f0);
    local_60[0] = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
    local_60[0] = fVar6 - local_60[0];
    local_58[0] = 0x3f800000;
    pfVar1 = eastl::max_alt<float>(local_60,(float *)local_58);
    *(float *)(this + 0x28) = *pfVar1 + fVar5;
    break;
  case 0xe:
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    __s = "attack_huifu";
    goto LAB_040eb0f4;
  case 0x10:
    *(undefined4 *)(this + 0x48) = 0;
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
               (this + 0x30));
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string((string *)local_58,"sleep");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3((DummyInit *)aRStack_50);
    PopAnimRig::PlayAndContinue(pPVar2,(string *)local_58,0,(DummyInit *)aRStack_50);
    std::string::~string((string *)local_58);
    nop();
    fVar5 = (float)PVZ_T();
    lVar4 = FUN_040eaa88(*(undefined8 *)(this + 0x10));
    *(float *)(this + 0x28) = fVar5 + *(float *)(lVar4 + 0x2f4);
    break;
  case 0x11:
    pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    __s = "huifu";
LAB_040eb0f4:
    std::string::string((string *)local_58,__s);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string((string *)local_60,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               (string *)local_60);
    PopAnimRig::PlayAndStop(pPVar2,(string *)local_58,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)local_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string((string *)local_58);
    nop();
  }
switchD_040eb0cc_caseD_c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPumpkinWitch::UpdateActions() */

void __thiscall PlantPumpkinWitch::UpdateActions(PlantPumpkinWitch *this)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(*(long *)(this + 0x10) + 200)) {
  case 10:
    fVar4 = *(float *)(this + 0x28);
    fVar2 = (float)PVZ_T();
    if (fVar4 < fVar2) {
      uVar3 = PVZ_EOT();
      *(undefined4 *)(this + 0x28) = uVar3;
      setState(this,0xb);
    }
    break;
  case 0xb:
    cVar1 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar1 == '\0') {
      PlantFramework::FindTargetZombie(aRStack_10,this);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)this + 0x1a0))(this);
        setState(this,0xc);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    break;
  case 0xd:
    fVar4 = *(float *)(this + 0x28);
    fVar2 = (float)PVZ_T();
    if (fVar4 < fVar2) {
      uVar3 = PVZ_EOT();
      *(undefined4 *)(this + 0x28) = uVar3;
      setState(this,0xe);
    }
    break;
  case 0x10:
    fVar4 = *(float *)(this + 0x28);
    fVar2 = (float)PVZ_T();
    if (fVar4 < fVar2) {
      uVar3 = PVZ_EOT();
      *(undefined4 *)(this + 0x28) = uVar3;
      setState(this,0x11);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPumpkinWitch::ApplyPlantfood() */

void __thiscall PlantPumpkinWitch::ApplyPlantfood(PlantPumpkinWitch *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  setState(this,0xf);
  return;
}


/* PlantPumpkinWitch::CancelPlantfood() */

void __thiscall PlantPumpkinWitch::CancelPlantfood(PlantPumpkinWitch *this)

{
  SoccerGameModule *this_00;
  SexyVector3 *pSVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,0x10);
  this_00 = (SoccerGameModule *)FUN_040eaa08(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_00 != (SoccerGameModule *)0x0) {
    this_01 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(this + 0x10);
    pSVar1 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_01);
    SoccerGameModule::DoShot(this_00,pSVar1,(BoardEntity *)this_01);
    return;
  }
  return;
}


/* PlantPumpkinWitch::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantPumpkinWitch::onAnimStoppedCallback(PlantPumpkinWitch *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"attack");
  if (bVar1) {
    setState(this,0xd);
    return;
  }
  bVar1 = std::operator==(param_1,"attack_huifu");
  if ((!bVar1) && (bVar1 = std::operator==(param_1,"huifu"), !bVar1)) {
    return;
  }
  setState(this,0xb);
  return;
}


/* PlantPumpkinWitch::~PlantPumpkinWitch() */

void __thiscall PlantPumpkinWitch::~PlantPumpkinWitch(PlantPumpkinWitch *this)

{
  *(undefined ***)this = &PTR_GetClass_067de820;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantPumpkinWitch::~PlantPumpkinWitch() */

void __thiscall PlantPumpkinWitch::~PlantPumpkinWitch(PlantPumpkinWitch *this)

{
  ~PlantPumpkinWitch(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPumpkinWitch::FindTargetZombie(Sexy::TRect<int>&, PlantWeapon, PlantTargetParams&) */

void PlantPumpkinWitch::FindTargetZombie
               (RtWeakPtr<Sexy::SoundResource> *param_1_00,long param_1,undefined8 param_3,
               undefined8 param_4,long param_5)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  Zombie *this;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined8 uVar6;
  undefined8 uVar7;
  float *pfVar8;
  Zombie *pZVar9;
  float fVar10;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  undefined8 local_68;
  undefined8 local_60;
  string asStack_58 [8];
  undefined8 local_50;
  ulong local_48 [2];
  vector<std::string,std::allocator<std::string>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)0x0;
  local_8 = ___stack_chk_guard;
  lVar5 = FUN_040eaa88(*(undefined8 *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_38,(vector *)(lVar5 + 0x2d0))
  ;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x114);
  Sexy::Insets::Insets
            ((Insets *)local_48,iVar1,*(int *)(*(long *)(param_1 + 0x10) + 0x110),0x11 - iVar1,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,(Insets *)local_48);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)&local_60);
    if (!bVar2) {
      if (this_01 ==
          (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           *)0x0) {
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_48);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1_00,(RtWeakPtrBase *)local_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_48);
      }
      else {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1_00,(RtWeakPtrBase *)local_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_48);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      std::vector<std::string,std::allocator<std::string>>::~vector(avStack_38);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(param_1_00);
      }
      return;
    }
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    nop();
    if (this != (Zombie *)0x0) {
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      FUN_05475d88(asStack_58,lVar5 + 8);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_38);
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_38);
      local_50 = std::
                 find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                           (uVar6,uVar7,asStack_58);
      local_48[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)avStack_38);
      bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_50,(__normal_iterator *)local_48);
      if (!bVar2) {
        uVar6 = operator|(1,4);
        uVar6 = operator|(uVar6,0x80);
        uVar6 = operator|(uVar6,0x200);
        uVar6 = operator|(uVar6,0x800);
        uVar4 = operator|(uVar6,0x2000);
        local_48[0] = CONCAT44(local_48[0]._4_4_,uVar4);
        if (*(int *)(param_5 + 4) == 0) {
          operator|=((Insets *)local_48,8);
          cVar3 = Zombie::MatchesAny(this,local_48[0] & 0xffffffff,*(undefined8 *)(param_1 + 0x10));
        }
        else {
          cVar3 = Zombie::MatchesAny(this,uVar4,*(undefined8 *)(param_1 + 0x10));
        }
        if ((((cVar3 == '\0') &&
             (cVar3 = RealObject::IsOnOpposingTeam
                                (*(RealObject **)(param_1 + 0x10),(RealObject *)this), cVar3 != '\0'
             )) && (cVar3 = (**(code **)(*(long *)this + 0x328))(this), cVar3 == '\0')) &&
           (cVar3 = (**(code **)(*(long *)this + 0x330))(this), cVar3 == '\0')) {
          pfVar8 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)this);
          fVar10 = *pfVar8;
          if (fVar10 <= 800.0) {
            pZVar9 = this;
            if ((this_01 !=
                 (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)0x0) &&
               (pfVar8 = (float *)std::
                                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  ::_M_leftmost(this_01), pZVar9 = this, *pfVar8 <= fVar10)) {
              pZVar9 = (Zombie *)this_01;
            }
            std::string::~string(asStack_58);
            this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)pZVar9;
            goto LAB_040eb6f0;
          }
        }
      }
      std::string::~string(asStack_58);
    }
LAB_040eb6f0:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPumpkinWitch::FindPlantFoodTargetZombie() */

void PlantPumpkinWitch::FindPlantFoodTargetZombie(void)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  long in_x0;
  long lVar4;
  Zombie *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  undefined8 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  float *pfVar8;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  Zombie *pZVar9;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  undefined8 local_70;
  undefined8 local_68;
  string asStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  undefined8 local_50;
  undefined8 local_48 [2];
  vector<std::string,std::allocator<std::string>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)0x0;
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_040eaa88(*(undefined8 *)(in_x0 + 0x10));
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(in_x0 + 0x30);
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_38,(vector *)(lVar4 + 0x2d0))
  ;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  Sexy::Insets::Insets((Insets *)local_48,0,0,0x11,9);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,(Insets *)local_48);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)&local_68);
    if (!bVar1) {
      if (this_02 ==
          (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           *)0x0) {
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_48);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)local_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_48);
      }
      else {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_48,(RtWeakPtrBase *)&local_50);
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                   (in_x0 + 0x30),(RtWeakPtr *)local_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)local_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_48);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      std::vector<std::string,std::allocator<std::string>>::~vector(avStack_38);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    nop();
    if (this_00 != (Zombie *)0x0) {
      this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_00);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      FUN_05475d88(asStack_60,lVar4 + 8);
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_38);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_38);
      local_50 = std::
                 find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                           (uVar5,uVar6,asStack_60);
      local_48[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)avStack_38);
      bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_50,(__normal_iterator *)local_48);
      if (!bVar1) {
        uVar5 = operator|(1,4);
        uVar5 = operator|(uVar5,0x80);
        uVar5 = operator|(uVar5,0x200);
        uVar5 = operator|(uVar5,0x800);
        uVar3 = operator|(uVar5,0x2000);
        cVar2 = Zombie::MatchesAny(this_00,uVar3,*(undefined8 *)(in_x0 + 0x10));
        if ((((((cVar2 == '\0') &&
               (cVar2 = RealObject::IsOnOpposingTeam
                                  (*(RealObject **)(in_x0 + 0x10),(RealObject *)this_00),
               cVar2 != '\0')) &&
              (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0')) &&
             ((cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0' &&
              (cVar2 = Zombie::HasFogImmune(this_00), cVar2 == '\0')))) &&
            ((cVar2 = Zombie::IsBerserk(this_00), cVar2 == '\0' &&
             ((cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 == '\0' &&
              (cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 == '\0')))))) &&
           (pfVar7 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)this_00), *pfVar7 <= 800.0)) {
          uVar5 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(this);
          uVar6 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this);
          ToolPacketData::GetProps();
          local_50 = std::
                     find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<GameObject>>
                               (uVar5,uVar6,aRStack_58);
          local_48[0] = std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::end(this);
          bVar1 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_50,(__normal_iterator *)local_48);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
          if (!bVar1) {
            pZVar9 = this_00;
            if ((this_02 !=
                 (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)0x0) &&
               (pfVar8 = (float *)std::
                                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  ::_M_leftmost(this_02), pZVar9 = this_00, *pfVar8 <= *pfVar7)) {
              pZVar9 = (Zombie *)this_02;
            }
            std::string::~string(asStack_60);
            this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)pZVar9;
            goto LAB_040ebc28;
          }
        }
      }
      std::string::~string(asStack_60);
    }
LAB_040ebc28:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_70);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPumpkinWitch::DoSpecial(int) */

void PlantPumpkinWitch::DoSpecial(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  PlantPumpkinWitch *this;
  SharkMinion *this_00;
  Projectile *this_01;
  long *plVar3;
  long lVar4;
  PumpkinWitchProjectile *this_02;
  RealObject *this_03;
  Plant *pPVar5;
  code *pcVar6;
  RtMixedPtrBase aRStack_30 [8];
  DVec3 aDStack_28 [16];
  undefined4 local_18 [4];
  long local_8;
  
  this = (PlantPumpkinWitch *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 != '\0') {
    if (*(int *)(this + 0x48) < 5) {
      FindPlantFoodTargetZombie();
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
      if (cVar1 == '\0') {
        (**(code **)(*(long *)this + 0x228))(this);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
      else {
        pPVar5 = *(Plant **)(this + 0x10);
        *(undefined4 *)(pPVar5 + 0x150) = 1;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)aRStack_30);
        this_00 = (SharkMinion *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        uVar2 = SharkMinion::getRow(this_00);
        this_01 = (Projectile *)
                  Plant::Fire(pPVar5,(RtWeakPtr<Sexy::SoundResource> *)local_18,uVar2,1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)aRStack_30);
        Projectile::SetTarget(this_01,(RtWeakPtr *)local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
        DVec3::DVec3(aDStack_28);
        plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
        pcVar6 = *(code **)(*plVar3 + 0x3b0);
        lVar4 = FUN_040eaa88(*(undefined8 *)(this + 0x10));
        local_18[0] = (*pcVar6)(*(undefined4 *)(lVar4 + 0x2e8),plVar3);
        Sexy::SexyVector3::operator=((SexyVector3 *)aDStack_28,(SexyVector3 *)local_18);
        LaunchProjectileAt(this,this_01,(SexyVector3 *)aDStack_28,0.1,0.1);
        nop();
        PumpkinWitchProjectile::setPlantFoodAttack(this_02,true);
        cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
        if (cVar1 != '\0') {
          PumpkinWitchProjectile::setAvatarAttack(this_02,true);
        }
        this_03 = *(RealObject **)(this + 0x10);
        std::string::string((string *)local_18,"Play_CabbagePult_Throw");
        RealObject::PlayPositionalSound(this_03,(string *)local_18,0.0);
        std::string::~string((string *)local_18);
        nop();
        *(int *)(this + 0x48) = *(int *)(this + 0x48) + 1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
    else {
      (**(code **)(*(long *)this + 0x228))(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

