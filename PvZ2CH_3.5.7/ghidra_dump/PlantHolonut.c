// Class: PlantHolonut


/* PlantHolonut::PlantHolonut() */

void __thiscall PlantHolonut::PlantHolonut(PlantHolonut *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067ba7d0;
  return;
}


/* PlantHolonut::StaticNew() */

PlantHolonut * PlantHolonut::StaticNew(void)

{
  PlantHolonut *this;
  
  this = ::operator_new(0x38);
  PlantHolonut(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHolonut::StaticClassInit() */

void PlantHolonut::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantHolonut");
    (*pcVar2)(plVar1,asStack_10,FUN_04033710,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHolonut::StaticGetClass() */

long * PlantHolonut::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantHolonut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHolonut::GetClass() const */

long * PlantHolonut::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantHolonut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantHolonut::CanBeTargeted() */

byte __thiscall PlantHolonut::CanBeTargeted(PlantHolonut *this)

{
  byte bVar1;
  
  bVar1 = PlantPuffshroom::IsVanishing((PlantPuffshroom *)this);
  return bVar1 ^ 1;
}


/* PlantHolonut::~PlantHolonut() */

void __thiscall PlantHolonut::~PlantHolonut(PlantHolonut *this)

{
  *(undefined ***)this = &PTR_GetClass_067ba7d0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantHolonut::~PlantHolonut() */

void __thiscall PlantHolonut::~PlantHolonut(PlantHolonut *this)

{
  ~PlantHolonut(this);
  AK::FreeHook(this);
  return;
}


/* PlantHolonut::Idle() */

void __thiscall PlantHolonut::Idle(PlantHolonut *this)

{
  long *plVar1;
  
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x118))();
  return;
}


/* PlantHolonut::setHiding(bool) */

void __thiscall PlantHolonut::setHiding(PlantHolonut *this,bool param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(this + 0x10);
  if (!param_1) {
    *(undefined4 *)(lVar1 + 200) = 4;
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0x28) = uVar2;
    *(undefined4 *)(this + 0x2c) = uVar2;
    lVar1 = FUN_04033b04(lVar1);
    FUN_040334ec(lVar1 + 0x3b8,param_1);
    return;
  }
  *(undefined4 *)(lVar1 + 200) = 10;
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x2c) = uVar2;
  lVar1 = FUN_04033b04(*(undefined8 *)(this + 0x10));
  FUN_040334ec(lVar1 + 0x3b8,param_1);
  return;
}


/* PlantHolonut::ApplyPlantfood() */

void __thiscall PlantHolonut::ApplyPlantfood(PlantHolonut *this)

{
  char cVar1;
  
  Plant::Heal(*(Plant **)(this + 0x10));
  cVar1 = PlantPuffshroom::IsVanishing((PlantPuffshroom *)this);
  if (cVar1 != '\0') {
    setHiding(this,false);
  }
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 5;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* PlantHolonut::Initialize() */

void __thiscall PlantHolonut::Initialize(PlantHolonut *this)

{
  char cVar1;
  PlantAnimRig_Holonut *this_00;
  long lVar2;
  RealObject *this_01;
  undefined4 uVar3;
  
  PlantFramework::Initialize((PlantFramework *)this);
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x28) = uVar3;
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    return;
  }
  this_00 = (PlantAnimRig_Holonut *)FUN_04033b04(*(undefined8 *)(this + 0x10));
  PlantAnimRig_Holonut::PlayPlanted(this_00);
  this_01 = *(RealObject **)(this + 0x10);
  lVar2 = FUN_04033c58(this_01);
  RealObject::PlayPositionalSound(this_01,(string *)(lVar2 + 0x2c8),0.0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHolonut::GetRegenerateTime() */

void __thiscall PlantHolonut::GetRegenerateTime(PlantHolonut *this)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  Plant *this_00;
  float fVar4;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_04033c58(*(undefined8 *)(this + 0x10));
  this_00 = *(Plant **)(this + 0x10);
  fVar4 = *(float *)(lVar2 + 0x2c4);
  iVar1 = FUN_040334f8(this_00);
  if (iVar1 == 2) {
    fVar4 = fVar4 * 0.6666667;
  }
  else if (2 < iVar1) {
    fVar4 = fVar4 * 0.5;
  }
  local_10 = (float)Plant::GetGeneSkillBoost(this_00);
  local_10 = fVar4 - local_10;
  local_c = 1.0;
  pfVar3 = eastl::max_alt<float>(&local_10,&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*pfVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHolonut::regenerateFromDeath() */

void __thiscall PlantHolonut::regenerateFromDeath(PlantHolonut *this)

{
  int iVar1;
  PlantAnimRig_Holonut *this_00;
  long lVar2;
  Plant *this_01;
  RealObject *this_02;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  this_01 = *(Plant **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_040334e4(*(undefined4 *)(this_01 + 0x50));
  if (4 < iVar1) {
    lVar2 = FUN_04033c58(this_01);
    fVar3 = (float)Plant::GetMaxHealth(*(Plant **)(this + 0x10));
    fVar3 = (float)NEON_fminnm(fVar3 + *(float *)(lVar2 + 0x2d8),*(undefined4 *)(lVar2 + 0x2dc));
    Plant::SetMaxHealth(*(Plant **)(this + 0x10),fVar3);
    this_01 = *(Plant **)(this + 0x10);
  }
  Plant::Heal(this_01);
  setHiding(this,false);
  this_00 = (PlantAnimRig_Holonut *)FUN_04033b04(*(undefined8 *)(this + 0x10));
  PlantAnimRig_Holonut::PlayPlanted(this_00);
  this_02 = *(RealObject **)(this + 0x10);
  lVar2 = FUN_04033c58(this_02);
  RealObject::PlayPositionalSound(this_02,(string *)(lVar2 + 0x2c8),0.0);
  iVar1 = *(int *)(this + 0x30);
  *(int *)(this + 0x30) = iVar1 + 1;
  if (1 < iVar1 + 1) {
    std::string::string(asStack_10,"re_re_spawn");
    Achievement::Queue(asStack_10,100.0);
    std::string::~string(asStack_10);
    nop();
    Achievement::ShowAll();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHolonut::UpdateActions() */

void __thiscall PlantHolonut::UpdateActions(PlantHolonut *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  PlantAnimRig_Holonut *this_00;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_04033c58(*(undefined8 *)(this + 0x10));
  lVar3 = *(long *)(this + 0x10);
  fVar6 = (float)FUN_040334e8(*(undefined4 *)(lVar3 + 0xd8));
  if (*(float *)(lVar2 + 0x2d4) <= fVar6) {
    uVar4 = FUN_04033b04(lVar3);
    puVar5 = &PlantAnimRig_Holonut::k_totalshieldLayerSetName;
  }
  else if (*(float *)(lVar2 + 0x2d0) <= fVar6) {
    uVar4 = FUN_04033b04(lVar3);
    puVar5 = &PlantAnimRig_Holonut::k_halfshieldLayerSetName;
  }
  else {
    uVar4 = FUN_04033b04(lVar3);
    puVar5 = &PlantAnimRig_Holonut::k_normalLayerSetName;
  }
  FUN_05475d88(asStack_10,puVar5);
  PlantAnimRig_DragonBruit::ShowBoostedLayerSet(uVar4,asStack_10);
  std::string::~string(asStack_10);
  cVar1 = PlantPuffshroom::IsVanishing((PlantPuffshroom *)this);
  if ((cVar1 == '\0') || (*(char *)(lVar2 + 0x2c0) == '\0')) {
    fVar6 = (float)PVZ_EOT();
    if ((*(float *)(this + 0x28) < fVar6) &&
       ((*(char *)(lVar2 + 0x2b8) != '\0' &&
        (fVar7 = (float)PVZ_T(), *(float *)(lVar2 + 700) < fVar7 - *(float *)(this + 0x28))))) {
      *(float *)(this + 0x28) = fVar6;
      Plant::Heal(*(Plant **)(this + 0x10));
      this_00 = (PlantAnimRig_Holonut *)FUN_04033b04(*(undefined8 *)(this + 0x10));
      PlantAnimRig_Holonut::PlayRecover(this_00);
    }
  }
  else {
    fVar6 = (float)PVZ_T();
    fVar8 = *(float *)(this + 0x2c);
    fVar7 = (float)GetRegenerateTime(this);
    if (fVar7 + fVar8 < fVar6) {
      regenerateFromDeath(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHolonut::ClearShield() */

void __thiscall PlantHolonut::ClearShield(PlantHolonut *this)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  ResourceInfo *this_00;
  GridItemPlantShield *this_01;
  int iVar4;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  Point aPStack_48 [8];
  RtWeakPtr aRStack_40 [8];
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_48,*(int *)(*(long *)(this + 0x10) + 0x114),
                     *(int *)(*(long *)(this + 0x10) + 0x110));
  ToolPacketData::GetProps();
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x2f);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
    this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_38);
    iVar4 = extraout_w1;
    if ((this_00 != (ResourceInfo *)0x0) &&
       (bVar1 = Sexy::RtObject::IsA<GridItemPlantShield>((RtObject *)this_00),
       iVar4 = extraout_w1_00, bVar1)) {
      this_01 = Sexy::RtObject::Cast<GridItemPlantShield>((RtObject *)this_00);
      cVar2 = GridItemPlantShield::IsOwnedBy(this_01,aRStack_40);
      iVar4 = extraout_w1_01;
      if (cVar2 != '\0') {
        (**(code **)(*(long *)this_00 + 0x48))(this_00);
        iVar4 = extraout_w1_02;
      }
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar4);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantHolonut::onDestroy() */

void __thiscall PlantHolonut::onDestroy(PlantHolonut *this)

{
  ClearShield(this);
  PlantFramework::onDestroy((PlantFramework *)this);
  return;
}


/* PlantHolonut::TakeDamage(DamageInfo const&) */

void PlantHolonut::TakeDamage(DamageInfo *param_1)

{
  char cVar1;
  PlantAnimRig_Holonut *this;
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  undefined4 uVar2;
  float fVar3;
  
  DamageInfo::DamageInfo(in_x8,in_x1);
  uVar2 = PVZ_T();
  fVar3 = *(float *)(in_x1 + 8);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  if ((*(float *)(*(Plant **)(param_1 + 0x10) + 0xd8) <= fVar3) &&
     (cVar1 = Plant::IsInPlantDefence(*(Plant **)(param_1 + 0x10)), cVar1 == '\0')) {
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0xd8) = 0x3f800000;
    *(undefined4 *)(in_x8 + 8) = 0;
    setHiding((PlantHolonut *)param_1,true);
    this = (PlantAnimRig_Holonut *)FUN_04033b04(*(undefined8 *)(param_1 + 0x10));
    PlantAnimRig_Holonut::PlayDie(this);
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHolonut::CancelPlantfood() */

void __thiscall PlantHolonut::CancelPlantfood(PlantHolonut *this)

{
  char cVar1;
  RtObject *pRVar2;
  GridItemPlantShield *pGVar3;
  int iVar4;
  Board *this_00;
  int local_50 [2];
  RtWeakPtr aRStack_48 [8];
  string local_40 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  Sexy::Point::Point((Point *)local_50,*(int *)(*(long *)(this + 0x10) + 0x114),
                     *(int *)(*(long *)(this + 0x10) + 0x110));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  ClearShield(this);
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  if (0 < *(int *)(this_00 + 0xfc)) {
    iVar4 = 0;
LAB_040344e0:
    do {
      std::string::string(local_40,"holoshield");
      pRVar2 = (RtObject *)Board::AddGridItem(this_00,local_40,local_50[0],iVar4,1);
      std::string::~string(local_40);
      nop();
      if (pRVar2 != (RtObject *)0x0) {
        ToolPacketData::GetProps();
        pGVar3 = Sexy::RtObject::Cast<GridItemPlantShield>(pRVar2);
        GridItemPlantShield::SetOwner(pGVar3,aRStack_48);
        nop();
        std::vector<GridItemLinkedPlantShield*,std::allocator<GridItemLinkedPlantShield*>>::
        push_back((vector<GridItemLinkedPlantShield*,std::allocator<GridItemLinkedPlantShield*>> *)
                  avStack_38,(GridItemLinkedPlantShield **)local_40);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48)
        ;
      }
      cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
      if (cVar1 == '\0') {
        this_00 = *(Board **)(gLawnApp + 0x9f0);
      }
      else {
        this_00 = *(Board **)(gLawnApp + 0x9f0);
        if (local_50[0] < *(int *)(this_00 + 0xf8) + -2) {
          std::string::string(local_40,"holoshield");
          pRVar2 = (RtObject *)Board::AddGridItem(this_00,local_40,local_50[0] + 1,iVar4,1);
          std::string::~string(local_40);
          nop();
          if (pRVar2 != (RtObject *)0x0) {
            ToolPacketData::GetProps();
            pGVar3 = Sexy::RtObject::Cast<GridItemPlantShield>(pRVar2);
            GridItemPlantShield::SetOwner(pGVar3,aRStack_48);
            nop();
            std::vector<GridItemLinkedPlantShield*,std::allocator<GridItemLinkedPlantShield*>>::
            push_back((vector<GridItemLinkedPlantShield*,std::allocator<GridItemLinkedPlantShield*>>
                       *)avStack_20,(GridItemLinkedPlantShield **)local_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
          }
          iVar4 = iVar4 + 1;
          this_00 = *(Board **)(gLawnApp + 0x9f0);
          if (*(int *)(this_00 + 0xfc) <= iVar4) break;
          goto LAB_040344e0;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(this_00 + 0xfc));
  }
  GridItemLinkedPlantShield::SetPlantShieldGroup((vector *)avStack_38);
  GridItemLinkedPlantShield::SetPlantShieldGroup((vector *)avStack_20);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 4;
  std::vector<GridItemLinkedPlantShield*,std::allocator<GridItemLinkedPlantShield*>>::~vector
            ((vector<GridItemLinkedPlantShield*,std::allocator<GridItemLinkedPlantShield*>> *)
             avStack_20);
  std::vector<GridItemLinkedPlantShield*,std::allocator<GridItemLinkedPlantShield*>>::~vector
            ((vector<GridItemLinkedPlantShield*,std::allocator<GridItemLinkedPlantShield*>> *)
             avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

