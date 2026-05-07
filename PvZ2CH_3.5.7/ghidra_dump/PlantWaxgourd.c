// Class: PlantWaxgourd


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWaxgourd::StaticClassInit() */

void PlantWaxgourd::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWaxgourd");
    (*pcVar2)(plVar1,asStack_10,FUN_0425763c,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWaxgourd::StaticGetClass() */

long * PlantWaxgourd::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantWaxgourd",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWaxgourd::GetClass() const */

long * PlantWaxgourd::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantWaxgourd",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWaxgourd::~PlantWaxgourd() */

void __thiscall PlantWaxgourd::~PlantWaxgourd(PlantWaxgourd *this)

{
  *(undefined ***)this = &PTR_GetClass_0681a7b0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantWaxgourd::~PlantWaxgourd() */

void __thiscall PlantWaxgourd::~PlantWaxgourd(PlantWaxgourd *this)

{
  ~PlantWaxgourd(this);
  AK::FreeHook(this);
  return;
}


/* PlantWaxgourd::PlantWaxgourd() */

void __thiscall PlantWaxgourd::PlantWaxgourd(PlantWaxgourd *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0681a7b0;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x28) = uVar1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x2c) = uVar1;
  *(undefined4 *)(this + 0x30) = 0;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x34) = uVar1;
  return;
}


/* PlantWaxgourd::StaticNew() */

PlantWaxgourd * PlantWaxgourd::StaticNew(void)

{
  PlantWaxgourd *this;
  
  this = ::operator_new(0x38);
  PlantWaxgourd(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWaxgourd::setstate(unsigned int) */

void __thiscall PlantWaxgourd::setstate(PlantWaxgourd *this,uint param_1)

{
  int iVar1;
  UIEasyButtonWidget *this_00;
  long *plVar2;
  long extraout_x0;
  long extraout_x0_00;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  *(uint *)(this_00 + 200) = param_1;
  if (param_1 == 0xb) {
    fVar4 = (float)PVZ_T();
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    nop();
    fVar6 = *(float *)(extraout_x0_00 + 0x2b8);
    iVar1 = FUN_04256eac(*(undefined8 *)(this + 0x10));
    fVar5 = 0.5;
    if (iVar1 < 3) {
      fVar5 = 1.0;
    }
    *(float *)(this + 0x28) = fVar4 + fVar6 * fVar5;
  }
  else {
    if (param_1 != 0xc) {
      if (param_1 == 10) {
        plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
        (**(code **)(*plVar2 + 0x118))();
      }
      goto LAB_04257f34;
    }
    fVar4 = (float)PVZ_T();
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    nop();
    *(float *)(this + 0x2c) = fVar4 + *(float *)(extraout_x0 + 700);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pcVar3 = *(code **)(*plVar2 + 0x130);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string((string *)aRStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             aRStack_58);
  (*pcVar3)(plVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
LAB_04257f34:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWaxgourd::Initialize() */

void __thiscall PlantWaxgourd::Initialize(PlantWaxgourd *this)

{
  char cVar1;
  PlantAnimRig_DevilsFlower *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  pPVar2 = (PlantAnimRig_DevilsFlower *)FUN_04257ecc(*(undefined8 *)(this + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  PlantAnimRig_DevilsFlower::SetPlantPtr(pPVar2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    setstate(this,0xb);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWaxgourd::onAnimStoppedCallback(std::string const&) */

void PlantWaxgourd::onAnimStoppedCallback(string *param_1)

{
  setstate((PlantWaxgourd *)param_1,10);
  return;
}


/* PlantWaxgourd::ApplyPlantfood() */

void __thiscall PlantWaxgourd::ApplyPlantfood(PlantWaxgourd *this)

{
  *(undefined4 *)(this + 0x30) = 0;
  setstate(this,5);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* PlantWaxgourd::CancelPlantfood() */

void __thiscall PlantWaxgourd::CancelPlantfood(PlantWaxgourd *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setstate(this,10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWaxgourd::UpdateActions() */

void __thiscall PlantWaxgourd::UpdateActions(PlantWaxgourd *this)

{
  char cVar1;
  long lVar2;
  float fVar3;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  lVar2 = *(long *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04256eb4(lVar2);
  if ((cVar1 != '\0') && (*(int *)(lVar2 + 200) == 10)) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    Sexy::Insets::Insets
              (aIStack_30,*(int *)(*(long *)(this + 0x10) + 0x114),
               *(int *)(*(long *)(this + 0x10) + 0x110),2,1);
    EntityFinder::GetEntitiesInGridSquares(avStack_20,2,aIStack_30);
    cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    if ((cVar1 == '\0') && (fVar3 = (float)PVZ_T(), *(float *)(this + 0x2c) < fVar3)) {
      setstate(this,0xc);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWaxgourd::DoSpecial(int) */

void PlantWaxgourd::DoSpecial(int param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  WaxgourdSubsystem *pWVar5;
  long extraout_x0;
  long extraout_x0_00;
  undefined8 *puVar6;
  GridItem *pGVar7;
  long lVar8;
  RealObject *this;
  bool bVar9;
  float fVar10;
  float fVar11;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  long local_8;
  
  uVar4 = (ulong)(uint)param_1;
  this = *(RealObject **)(uVar4 + 0x10);
  iVar1 = *(int *)(this + 200);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 0xb) {
    MessageRouter::Post<Plant*,Plant*>
              ((MessageRouter *)gMessageRouter,Message::NotifyPlantfoodRelease,(Plant *)this);
    pWVar5 = Board::GetGameSubSystem<WaxgourdSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    Sexy::Insets::Insets
              ((Insets *)&local_68,*(int *)(*(long *)(uVar4 + 0x10) + 0x114),
               *(int *)(*(long *)(uVar4 + 0x10) + 0x110),2,1);
    WaxgourdSubsystem::StunZombies(pWVar5,(TRect *)&local_68,0.0,false);
    this = *(RealObject **)(uVar4 + 0x10);
    goto LAB_04258780;
  }
  if (iVar1 == 0xc) {
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    nop();
    fVar11 = *(float *)(extraout_x0 + 0x2c4);
    fVar10 = (float)Plant::GetTotalDamageRate(*(Plant **)(uVar4 + 0x10));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    pWVar5 = Board::GetGameSubSystem<WaxgourdSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    Sexy::Insets::Insets
              ((Insets *)&local_68,*(int *)(*(long *)(uVar4 + 0x10) + 0x114),
               *(int *)(*(long *)(uVar4 + 0x10) + 0x110),2,1);
    WaxgourdSubsystem::StunZombies(pWVar5,(TRect *)&local_68,fVar10 * fVar11,false);
    this = *(RealObject **)(uVar4 + 0x10);
    goto LAB_04258780;
  }
  if (iVar1 != 5) goto LAB_04258780;
  MessageRouter::Post<Plant*,Plant*>
            ((MessageRouter *)gMessageRouter,Message::NotifyPlantfoodRelease,(Plant *)this);
  Sexy::Insets::Insets((Insets *)local_90);
  fVar10 = *(float *)(uVar4 + 0x30);
  if (fVar10 == 0.0) {
    bVar9 = false;
    Sexy::Insets::Insets
              ((Insets *)&local_68,*(int *)(*(long *)(uVar4 + 0x10) + 0x114),
               *(int *)(*(long *)(uVar4 + 0x10) + 0x110),2,1);
    local_90[0] = local_68;
  }
  else {
    if (fVar10 == 1.0) {
      lVar8 = *(long *)(uVar4 + 0x10);
      bVar9 = false;
    }
    else {
      if (fVar10 != 2.0) {
        bVar9 = false;
        goto LAB_0425883c;
      }
      lVar8 = *(long *)(uVar4 + 0x10);
      bVar9 = true;
    }
    Sexy::Insets::Insets
              ((Insets *)&local_68,*(int *)(lVar8 + 0x114) + -1,*(int *)(lVar8 + 0x110) + -1,3,3);
    local_90[0] = local_68;
  }
LAB_0425883c:
  cVar2 = Plant::GetAvatarEnable(*(Plant **)(uVar4 + 0x10));
  if (cVar2 == '\0') {
    fVar10 = 0.0;
  }
  else {
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    nop();
    fVar11 = *(float *)(extraout_x0_00 + 0x2c0);
    fVar10 = (float)Plant::GetTotalDamageRate(*(Plant **)(uVar4 + 0x10));
    fVar10 = fVar10 * fVar11;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
    EntityFinder::GetEntitiesInGridSquares(avStack_80,4,(Insets *)local_90);
    local_a0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
    local_98 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar3)
    {
      puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0)
      ;
      pGVar7 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar6);
      if ((pGVar7 != (GridItem *)0x0) &&
         (cVar2 = (**(code **)(*(long *)pGVar7 + 0x200))(), cVar2 != '\0')) {
        DamageInfo::DamageInfo((DamageInfo *)&local_68);
        local_58 = 0x2000;
        local_60 = fVar10;
        (**(code **)(*(long *)pGVar7 + 0x110))(pGVar7,(RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
        DamageInfo::~DamageInfo((DamageInfo *)&local_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  }
  pWVar5 = Board::GetGameSubSystem<WaxgourdSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  WaxgourdSubsystem::StunZombies(pWVar5,(TRect *)local_90,fVar10,bVar9);
  this = *(RealObject **)(uVar4 + 0x10);
  *(float *)(uVar4 + 0x30) = *(float *)(uVar4 + 0x30) + 1.0;
LAB_04258780:
  std::string::string((string *)&local_68,"Play_Plant_Waxgourd_Attack");
  RealObject::PlayPositionalSound(this,(string *)&local_68,0.0);
  std::string::~string((string *)&local_68);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWaxgourd::TakeDamage(DamageInfo const&) */

void PlantWaxgourd::TakeDamage(DamageInfo *param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  Plant *pPVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = (float)PVZ_T();
  pPVar4 = *(Plant **)(param_1 + 0x10);
  if ((*(float *)(param_1 + 0x34) < fVar5) &&
     (iVar2 = *(int *)(pPVar4 + 200), *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + 5.0,
     iVar2 == 10)) {
    plVar3 = (long *)UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)pPVar4);
    (**(code **)(*plVar3 + 0x118))();
    pPVar4 = *(Plant **)(param_1 + 0x10);
  }
  cVar1 = FUN_04256ea0(pPVar4[0x278]);
  if ((cVar1 == '\0') && (cVar1 = Plant::IsOnBoard(pPVar4), cVar1 != '\0')) {
    pPVar4 = *(Plant **)(param_1 + 0x10);
    cVar1 = FUN_042578ac(*(undefined4 *)(pPVar4 + 0x28));
    if (((cVar1 == '\0') &&
        ((((cVar1 = Plant::IsSuspended(pPVar4), cVar1 == '\0' &&
           (cVar1 = Plant::HasCondition(*(undefined8 *)(param_1 + 0x10),0xb), cVar1 == '\0')) &&
          (cVar1 = Plant::IsWatering(*(Plant **)(param_1 + 0x10)), cVar1 == '\0')) &&
         ((cVar1 = Plant::HasCondition(*(undefined8 *)(param_1 + 0x10),0xf), cVar1 == '\0' &&
          (cVar1 = Plant::HasCondition(*(undefined8 *)(param_1 + 0x10),0x11), cVar1 == '\0')))))) &&
       ((cVar1 = Plant::HasCondition(*(undefined8 *)(param_1 + 0x10),0x17), cVar1 == '\0' &&
        (cVar1 = Plant::HasCondition(*(undefined8 *)(param_1 + 0x10),0x14), cVar1 == '\0')))) {
      fVar5 = (float)PVZ_T();
      pPVar4 = *(Plant **)(param_1 + 0x10);
      if (((fVar5 <= *(float *)(param_1 + 0x28)) || (*(int *)(pPVar4 + 200) != 10)) ||
         (iVar2 = FUN_04256eac(pPVar4), iVar2 < 2)) {
        fVar5 = (float)FUN_04256ea4(*(undefined4 *)(pPVar4 + 0xd8));
        fVar6 = *(float *)(in_x1 + 8);
        fVar7 = (float)Plant::GetMaxHealth(pPVar4);
        if (((fVar5 <= fVar7 * 0.6666667) ||
            (fVar7 = (float)Plant::GetMaxHealth(*(Plant **)(param_1 + 0x10)),
            fVar7 * 0.6666667 <= fVar5 - fVar6)) &&
           ((fVar7 = (float)Plant::GetMaxHealth(*(Plant **)(param_1 + 0x10)),
            fVar5 <= fVar7 * 0.33333334 ||
            (fVar7 = (float)Plant::GetMaxHealth(*(Plant **)(param_1 + 0x10)),
            fVar7 * 0.33333334 <= fVar5 - fVar6)))) goto LAB_04258b6c;
      }
      setstate((PlantWaxgourd *)param_1,0xb);
    }
  }
LAB_04258b6c:
  DamageInfo::DamageInfo(in_x8,in_x1);
  return;
}

