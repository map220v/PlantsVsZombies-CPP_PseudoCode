// Class: PlantBowlingBulb


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBowlingBulb::CanTargetZombie(Sexy::RtWeakPtr<Zombie>, PlantWeapon) */

void PlantBowlingBulb::CanTargetZombie(TextureInfo *param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  undefined1 uVar2;
  long *plVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  uVar2 = 0;
  local_8 = ___stack_chk_guard;
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = (**(code **)(*plVar3 + 0x330))();
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    uVar2 = EA::Text::GlyphCache_Memory::EndUpdate(param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PlantBowlingBulb::CancelPlantfood() */

void __thiscall PlantBowlingBulb::CancelPlantfood(PlantBowlingBulb *this)

{
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 4;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  *(undefined4 *)(*(long *)(this + 0x10) + 300) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBowlingBulb::StaticClassInit() */

void PlantBowlingBulb::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantBowlingBulb");
    (*pcVar2)(plVar1,asStack_10,FUN_041f7948,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBowlingBulb::StaticGetClass() */

long * PlantBowlingBulb::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantBowlingBulb",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBowlingBulb::GetClass() const */

long * PlantBowlingBulb::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantBowlingBulb",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBowlingBulb::pickEmptySlot() */

undefined8 __thiscall PlantBowlingBulb::pickEmptySlot(PlantBowlingBulb *this)

{
  int *piVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 0x30);
  piVar1 = (int *)FUN_041f635c(uVar2,0);
  if (*piVar1 == 0) {
    uVar2 = 0;
  }
  else {
    piVar1 = (int *)FUN_041f635c(uVar2,1);
    if (*piVar1 == 0) {
      uVar2 = 1;
    }
    else {
      piVar1 = (int *)FUN_041f635c(uVar2,2);
      uVar2 = 0xffffffff;
      if (*piVar1 == 0) {
        uVar2 = 2;
      }
    }
  }
  return uVar2;
}


/* PlantBowlingBulb::pickBestCoconutToFire() */

int __thiscall PlantBowlingBulb::pickBestCoconutToFire(PlantBowlingBulb *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x30);
  piVar3 = (int *)FUN_041f635c(uVar4,0);
  if (*piVar3 == 1) {
    piVar3 = (int *)FUN_041f635c(uVar4,1);
    iVar1 = *piVar3;
    if (iVar1 != 1) {
      iVar2 = 0;
      goto LAB_041f6748;
    }
    iVar2 = 0;
    piVar3 = (int *)FUN_041f635c(uVar4,2);
    iVar1 = *piVar3;
  }
  else {
    if (*piVar3 == 2) {
      return 0;
    }
    piVar3 = (int *)FUN_041f635c(uVar4,1);
    iVar1 = *piVar3;
    if (iVar1 != 1) {
      iVar2 = -1;
LAB_041f6748:
      if (iVar1 == 2) {
        return 1;
      }
      piVar3 = (int *)FUN_041f635c(uVar4,2);
      iVar1 = *piVar3;
      if (iVar1 == 1) {
        if (iVar2 == -1) {
          iVar2 = 2;
        }
        return iVar2;
      }
      goto LAB_041f6768;
    }
    piVar3 = (int *)FUN_041f635c(uVar4,2);
    iVar1 = *piVar3;
    iVar2 = 1;
  }
  if (iVar1 == 1) {
    return iVar2;
  }
LAB_041f6768:
  if (iVar1 == 2) {
    iVar2 = 2;
  }
  return iVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBowlingBulb::DoSpecial(int) */

void PlantBowlingBulb::DoSpecial(int param_1)

{
  long *plVar1;
  code *pcVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  plVar1 = (long *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  PlantFramework::FindTargetZombie(aRStack_18,plVar1,1);
  pcVar2 = *(code **)(*plVar1 + 0xb0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  (*pcVar2)(plVar1,aRStack_10,*(undefined4 *)(plVar1[2] + 0x110),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBowlingBulb::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantBowlingBulb::Fire
          (PlantBowlingBulb *this,RtWeakPtrBase *param_2,undefined8 param_3,uint param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x48] == (PlantBowlingBulb)0x0) {
    iVar3 = pickBestCoconutToFire(this);
    if (iVar3 == -1) {
      lVar6 = 0;
      goto LAB_041f7728;
    }
    piVar4 = (int *)FUN_041f635c(*(undefined8 *)(this + 0x30),(long)iVar3);
    if (*piVar4 == 2) {
      cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
      if (cVar2 == '\0') {
LAB_041f77ac:
        uVar7 = 1;
        param_4 = 1;
      }
      else if (iVar3 == 1) {
        uVar7 = 5;
        param_4 = 5;
      }
      else if (iVar3 == 2) {
        uVar7 = 6;
        param_4 = 6;
      }
      else {
        if (iVar3 != 0) goto LAB_041f77ac;
        uVar7 = 4;
        param_4 = 4;
      }
      bVar1 = true;
      piVar4 = (int *)FUN_041f635c(*(undefined8 *)(this + 0x30),(long)iVar3);
    }
    else if (param_4 == 0) {
      bVar1 = false;
      if (iVar3 == 1) {
        uVar7 = 2;
        param_4 = 2;
      }
      else if (iVar3 == 2) {
        uVar7 = 3;
        param_4 = 3;
      }
      else {
        uVar7 = 0;
      }
    }
    else {
      uVar7 = (ulong)param_4;
      bVar1 = false;
    }
    lVar6 = *(long *)(this + 0x10);
    *piVar4 = 0;
    *(int *)(lVar6 + 0x150) = (int)uVar7;
    Sexy::OutputDebugStrF((wchar_t *)"PlantBowlingBulb::Fire: %d",uVar7);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    lVar6 = PlantFramework::Fire
                      ((PlantFramework *)this,aRStack_10,
                       *(undefined4 *)(*(long *)(this + 0x10) + 0x110),param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (bVar1) {
      uVar5 = FUN_041f6310(*(undefined8 *)(lVar6 + 0xe0));
      uVar5 = operator|(uVar5,0x2000);
      FUN_041f6314((undefined8 *)(lVar6 + 0xe0),uVar5);
    }
  }
  else {
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 7;
    Sexy::OutputDebugStrF((wchar_t *)"PlantBowlingBulb::Fire: %d",7);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    lVar6 = PlantFramework::Fire
                      ((PlantFramework *)this,aRStack_10,
                       *(undefined4 *)(*(long *)(this + 0x10) + 0x110),7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
LAB_041f7728:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBowlingBulb::getCountCoconutsOwned() */

void __thiscall PlantBowlingBulb::getCountCoconutsOwned(PlantBowlingBulb *this)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x30));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x30));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar2 != 0) {
      iVar3 = iVar3 + 1;
    }
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


/* PlantBowlingBulb::setHasPlantfoodedBulbs(bool) */

void __thiscall PlantBowlingBulb::setHasPlantfoodedBulbs(PlantBowlingBulb *this,bool param_1)

{
  RtObject *this_00;
  PlantAnimRig_BowlingBulb *pPVar1;
  
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar1 = Sexy::RtObject::Cast<PlantAnimRig_BowlingBulb>(this_00);
  pPVar1[0x3b8] = (PlantAnimRig_BowlingBulb)param_1;
  this[0x49] = (PlantBowlingBulb)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBowlingBulb::getCountCoconutsSuper() const */

void __thiscall PlantBowlingBulb::getCountCoconutsSuper(PlantBowlingBulb *this)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  local_18 = FUN_041f7dec(*(undefined8 *)(this + 0x30));
  local_10 = FUN_041f7e3c(*(undefined8 *)(this + 0x38));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar2 == 2) {
      iVar3 = iVar3 + 1;
    }
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


/* PlantBowlingBulb::GetLaunchDelayMultiplier() */

undefined1  [16] __thiscall PlantBowlingBulb::GetLaunchDelayMultiplier(PlantBowlingBulb *this)

{
  int iVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  iVar1 = getCountCoconutsSuper(this);
  if (0 < iVar1) {
    return ZEXT416(0x3e99999a);
  }
  PlantFramework::GetLaunchDelayMultiplier();
  auVar2._4_4_ = extraout_var;
  auVar2._0_4_ = extraout_s0;
  auVar2._8_8_ = extraout_var_00;
  return auVar2;
}


/* PlantBowlingBulb::PlantBowlingBulb() */

void __thiscall PlantBowlingBulb::PlantBowlingBulb(PlantBowlingBulb *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06806970;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x28) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* PlantBowlingBulb::StaticNew() */

PlantBowlingBulb * PlantBowlingBulb::StaticNew(void)

{
  PlantBowlingBulb *this;
  
  this = ::operator_new(0x50);
  PlantBowlingBulb(this);
  return this;
}


/* PlantBowlingBulb::IsInvincible() const */

undefined8 __thiscall PlantBowlingBulb::IsInvincible(PlantBowlingBulb *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_041f8844(*(undefined8 *)(this + 0x10));
  iVar1 = *(int *)(lVar3 + 0x2b8);
  iVar2 = getCountCoconutsSuper(this);
  if ((0 < iVar2) && (iVar2 = getCountCoconutsSuper(this), iVar2 < iVar1)) {
    return 1;
  }
  uVar4 = PlantFramework::IsInvincible();
  return uVar4;
}


/* PlantBowlingBulb::CanApplyPlantfood() */

bool __thiscall PlantBowlingBulb::CanApplyPlantfood(PlantBowlingBulb *this)

{
  int iVar1;
  long lVar2;
  
  iVar1 = getCountCoconutsSuper(this);
  lVar2 = FUN_041f8844(*(undefined8 *)(this + 0x10));
  return iVar1 < *(int *)(lVar2 + 0x2b8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBowlingBulb::PlayAttackAnimation() */

void __thiscall PlantBowlingBulb::PlayAttackAnimation(PlantBowlingBulb *this)

{
  int iVar1;
  RtObject *this_00;
  PlantAnimRig_BowlingBulb *pPVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar2 = Sexy::RtObject::Cast<PlantAnimRig_BowlingBulb>(this_00);
  if (this[0x48] == (PlantBowlingBulb)0x0) {
    iVar1 = pickBestCoconutToFire(this);
    if (iVar1 == -1) goto LAB_041f8a34;
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_BowlingBulb::PlayBulbAttack(pPVar2,iVar1,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  else {
    *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xb;
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_BowlingBulb::PlayBulbSuperSkill(pPVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  iVar1 = getCountCoconutsSuper(this);
  setHasPlantfoodedBulbs(this,0 < iVar1);
LAB_041f8a34:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBowlingBulb::~PlantBowlingBulb() */

void __thiscall PlantBowlingBulb::~PlantBowlingBulb(PlantBowlingBulb *this)

{
  *(undefined ***)this = &PTR_GetClass_06806970;
  std::vector<BowlingBulbOwned,std::allocator<BowlingBulbOwned>>::~vector
            ((vector<BowlingBulbOwned,std::allocator<BowlingBulbOwned>> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantBowlingBulb::~PlantBowlingBulb() */

void __thiscall PlantBowlingBulb::~PlantBowlingBulb(PlantBowlingBulb *this)

{
  ~PlantBowlingBulb(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBowlingBulb::getLayerName(int) */

void PlantBowlingBulb::getLayerName(int param_1)

{
  int in_w1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  Sexy::StrFormat("bulb%d_",asStack_18,(ulong)(in_w1 + 1));
  std::operator+(asStack_18,"body");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  std::operator+(asStack_18,"body_unloaded");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  std::operator+(asStack_18,"eye_left");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  std::operator+(asStack_18,"eye_right");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  std::operator+(asStack_18,"mouth");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  std::operator+(asStack_18,"top");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)in_x8,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBowlingBulb::updateCoconutLayers() */

void __thiscall PlantBowlingBulb::updateCoconutLayers(PlantBowlingBulb *this)

{
  bool bVar1;
  PopAnimRig *this_00;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  string asStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  lVar4 = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  do {
    getLayerName((int)this);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1)
    {
      uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      FUN_05475d88(asStack_38,uVar2);
      piVar3 = (int *)FUN_041f635c(*(undefined8 *)(this + 0x30),lVar4);
      PopAnimRig::SetLayerVisibility(this_00,asStack_38,*piVar3 != 0);
      std::string::~string(asStack_38);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    lVar4 = lVar4 + 1;
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  } while (lVar4 != 3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBowlingBulb::FindTargetAndFire(PlantWeapon) */

void __thiscall PlantBowlingBulb::FindTargetAndFire(PlantBowlingBulb *this,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  float fVar8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(*(long *)(this + 0x10) + 200) == 4) &&
     (iVar4 = getCountCoconutsOwned(this), 0 < iVar4)) {
    lVar6 = FUN_041f8844(*(undefined8 *)(this + 0x10));
    iVar4 = *(int *)(lVar6 + 0x2b8);
    iVar5 = getCountCoconutsSuper(this);
    if ((iVar5 < 1) || (iVar5 = getCountCoconutsSuper(this), iVar4 <= iVar5)) {
      cVar1 = FUN_041f632c(*(undefined8 *)(this + 0x10));
      if ((cVar1 != '\0') && (this[0x49] == (PlantBowlingBulb)0x0)) {
        fVar8 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
        lVar6 = FUN_041f8844(*(undefined8 *)(this + 0x10));
        pfVar7 = (float *)FUN_041f6354(*(undefined8 *)(lVar6 + 0x2d8),0);
        if (fVar8 < *pfVar7) {
          this[0x48] = (PlantBowlingBulb)0x1;
          local_18 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)(this + 0x30));
          local_10 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x30));
          while (bVar2 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
                bVar2) {
            eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                      ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
          }
          param_2 = 7;
          Sexy::OutputDebugStrF((wchar_t *)"PlantBowlingBulb::FindTargetAndFire weapon : %d");
        }
      }
      updateCoconutLayers(this);
      uVar3 = PlantFramework::FindTargetAndFire(this,param_2);
    }
    else {
      (**(code **)(*(long *)this + 0x1a0))(this);
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* PlantBowlingBulb::ApplyPlantfood() */

void __thiscall PlantBowlingBulb::ApplyPlantfood(PlantBowlingBulb *this)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  this[0x48] = (PlantBowlingBulb)0x0;
  lVar3 = FUN_041f8844(*(undefined8 *)(this + 0x10));
  iVar2 = *(int *)(lVar3 + 0x2b8);
  if (0 < iVar2) {
    uVar5 = *(undefined8 *)(this + 0x30);
    lVar3 = 0;
    do {
      lVar1 = lVar3 + 1;
      puVar4 = (undefined4 *)FUN_041f635c(uVar5,lVar3);
      *puVar4 = 2;
      lVar3 = lVar1;
    } while ((int)lVar1 < iVar2);
  }
  setHasPlantfoodedBulbs(this,true);
  updateCoconutLayers(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBowlingBulb::addACoconut() */

void __thiscall PlantBowlingBulb::addACoconut(PlantBowlingBulb *this)

{
  int iVar1;
  undefined4 *puVar2;
  RtObject *this_00;
  PlantAnimRig_BowlingBulb *pPVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = pickEmptySlot(this);
  if (iVar1 < 0) {
    Sexy::OutputDebugStrF((wchar_t *)"PlantBowlingBulb::addACoconut, can\'t found empty slot");
  }
  else {
    puVar2 = (undefined4 *)FUN_041f635c(*(undefined8 *)(this + 0x30),(long)iVar1);
    *puVar2 = 1;
    updateCoconutLayers(this);
    this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_BowlingBulb>(this_00);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_BowlingBulb::PlayBulbRecharge(pPVar3,iVar1,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBowlingBulb::UpdateActions() */

void __thiscall PlantBowlingBulb::UpdateActions(PlantBowlingBulb *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float *pfVar6;
  Effect_AngerFlame *this_00;
  ulong uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar3 = *(int *)(*(UIEasyButtonWidget **)(this + 0x10) + 200);
  if (iVar3 != 4) {
    if (iVar3 != 0xc) {
      return;
    }
    this[0x48] = (PlantBowlingBulb)0x0;
    iVar3 = 3;
    fVar9 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    lVar5 = FUN_041f8844(*(undefined8 *)(this + 0x10));
    pfVar6 = (float *)FUN_041f6354(*(undefined8 *)(lVar5 + 0x2d8),2);
    if (*pfVar6 <= fVar9) {
      lVar5 = FUN_041f8844(*(undefined8 *)(this + 0x10));
      pfVar6 = (float *)FUN_041f6354(*(undefined8 *)(lVar5 + 0x2d8),2);
      fVar13 = *pfVar6;
      lVar5 = FUN_041f8844(*(undefined8 *)(this + 0x10));
      pfVar6 = (float *)FUN_041f6354(*(undefined8 *)(lVar5 + 0x2d8),1);
      if (fVar13 + *pfVar6 <= fVar9) {
        *(undefined4 *)(*(long *)(this + 0x10) + 200) = 4;
        return;
      }
      iVar3 = 2;
    }
    uVar7 = 0;
    do {
      addACoconut(this);
      uVar1 = (int)uVar7 + 1;
      Sexy::OutputDebugStrF
                ((wchar_t *)"PlantBowlingBulb::onAnimStoppedCallback : reload - %d",uVar7);
      uVar7 = (ulong)uVar1;
    } while ((int)uVar1 < iVar3);
    return;
  }
  this_00 = (Effect_AngerFlame *)
            UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar3 = Effect_AngerFlame::GetFlameCol(this_00);
  if (iVar3 != 1) {
    return;
  }
  iVar3 = getCountCoconutsSuper(this);
  if (iVar3 != 0) {
    return;
  }
  lVar5 = FUN_041f8844(*(undefined8 *)(this + 0x10));
  fVar11 = *(float *)(lVar5 + 700);
  lVar5 = FUN_041f8844(*(undefined8 *)(this + 0x10));
  iVar3 = FUN_041f6324(*(undefined8 *)(this + 0x10));
  pfVar6 = (float *)FUN_041f6354(*(undefined8 *)(lVar5 + 0x2c0),(long)(iVar3 + -1));
  fVar9 = *(float *)(this + 0x28);
  fVar12 = *pfVar6;
  fVar13 = (float)PVZ_T();
  if (fVar13 <= fVar11 + fVar9) {
    return;
  }
  uVar10 = PVZ_T();
  uVar8 = *(undefined8 *)(this + 0x10);
  *(undefined4 *)(this + 0x28) = uVar10;
  iVar3 = FUN_041f6324(uVar8);
  if (iVar3 == 2) {
    fVar9 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    uVar8 = *(undefined8 *)(this + 0x10);
    iVar3 = 2;
    if (fVar9 < fVar12) goto LAB_041f955c;
    iVar3 = FUN_041f6324(uVar8);
  }
  if (2 < iVar3) {
    iVar3 = 3;
    fVar9 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    uVar8 = *(undefined8 *)(this + 0x10);
    if (fVar9 < fVar12) goto LAB_041f955c;
  }
  iVar3 = 1;
LAB_041f955c:
  while( true ) {
    lVar5 = FUN_041f8844(uVar8);
    iVar2 = *(int *)(lVar5 + 0x2b8);
    iVar4 = getCountCoconutsOwned(this);
    if (iVar2 <= iVar4) {
      return;
    }
    addACoconut(this);
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) break;
    uVar8 = *(undefined8 *)(this + 0x10);
  }
  return;
}


/* PlantBowlingBulb::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantBowlingBulb::onAnimStoppedCallback(PlantBowlingBulb *this,string *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  RtObject *pRVar4;
  PlantAnimRig_BowlingBulb *pPVar5;
  long lVar6;
  UIEasyButtonWidget *pUVar7;
  
  bVar2 = std::operator==(param_1,"reload");
  if (((bVar2) || (bVar2 = std::operator==(param_1,"reload2"), bVar2)) ||
     (bVar2 = std::operator==(param_1,"reload3"), bVar2)) {
    pUVar7 = *(UIEasyButtonWidget **)(this + 0x10);
    *(undefined4 *)(pUVar7 + 200) = 4;
    pRVar4 = (RtObject *)UIEasyButtonWidget::GetImageNormal(pUVar7);
    pPVar5 = Sexy::RtObject::Cast<PlantAnimRig_BowlingBulb>(pRVar4);
    (**(code **)(*(long *)pPVar5 + 0x118))();
  }
  else {
    bVar2 = std::operator==(param_1,"plantfood3");
    if (bVar2) {
      lVar6 = FUN_041f8844(*(undefined8 *)(this + 0x10));
      iVar1 = *(int *)(lVar6 + 0x2b8);
      iVar3 = getCountCoconutsOwned(this);
      if (iVar3 < iVar1) {
        do {
          iVar3 = iVar3 + 1;
          addACoconut(this);
        } while (iVar3 != iVar1);
      }
    }
    else {
      bVar2 = std::operator==(param_1,"super_skill");
      if (bVar2) {
        pUVar7 = *(UIEasyButtonWidget **)(this + 0x10);
        *(undefined4 *)(pUVar7 + 200) = 0xc;
        pRVar4 = (RtObject *)UIEasyButtonWidget::GetImageNormal(pUVar7);
        pPVar5 = Sexy::RtObject::Cast<PlantAnimRig_BowlingBulb>(pRVar4);
        (**(code **)(*(long *)pPVar5 + 0x118))();
        Sexy::OutputDebugStrF((wchar_t *)"PlantBowlingBulb::onAnimStoppedCallback : super_skill");
      }
    }
  }
  iVar3 = getCountCoconutsSuper(this);
  setHasPlantfoodedBulbs(this,0 < iVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBowlingBulb::Initialize() */

void __thiscall PlantBowlingBulb::Initialize(PlantBowlingBulb *this)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  for (iVar2 = 0; lVar1 = FUN_041f8844(*(undefined8 *)(this + 0x10)),
      iVar2 < *(int *)(lVar1 + 0x2b8); iVar2 = iVar2 + 1) {
    local_c = 1;
    std::vector<BowlingBulbOwned,std::allocator<BowlingBulbOwned>>::push_back
              ((vector<BowlingBulbOwned,std::allocator<BowlingBulbOwned>> *)(this + 0x30),
               (BowlingBulbOwned *)&local_c);
  }
  updateCoconutLayers(this);
  uVar3 = PVZ_T();
  this[0x48] = (PlantBowlingBulb)0x0;
  this[0x49] = (PlantBowlingBulb)0x0;
  *(undefined4 *)(this + 0x28) = uVar3;
  setHasPlantfoodedBulbs(this,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

