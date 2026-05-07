// Class: PlantStreetLamp


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStreetLamp::StaticClassInit() */

void PlantStreetLamp::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantStreetLamp");
    (*pcVar2)(plVar1,asStack_10,FUN_03ff07fc,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantStreetLamp::StaticGetClass() */

long * PlantStreetLamp::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantStreetLamp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantStreetLamp::GetClass() const */

long * PlantStreetLamp::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantStreetLamp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantStreetLamp::PlantStreetLamp() */

void __thiscall PlantStreetLamp::PlantStreetLamp(PlantStreetLamp *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantStreetLamp)0x0;
  *(undefined ***)this = &PTR_GetClass_067b0d30;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* PlantStreetLamp::StaticNew() */

PlantStreetLamp * PlantStreetLamp::StaticNew(void)

{
  PlantStreetLamp *this;
  
  this = ::operator_new(0x48);
  PlantStreetLamp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStreetLamp::FindAllZombiesAndStunned() */

void __thiscall PlantStreetLamp::FindAllZombiesAndStunned(PlantStreetLamp *this)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  Zombie *this_00;
  int extraout_w1;
  int iVar6;
  int extraout_w1_00;
  code *pcVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x29);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    this_00 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    cVar2 = Zombie::CannotStunnedByStreetLamp(this_00);
    if (cVar2 == '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar7 = *(code **)(*plVar4 + 0x298);
      lVar5 = FUN_03ff0548(*(undefined8 *)(this + 0x10));
      (*pcVar7)(*(undefined4 *)(lVar5 + 0x38),plVar4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      iVar6 = extraout_w1;
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      iVar6 = extraout_w1_00;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar6);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantStreetLamp::OnAnimCommand(std::string const&, std::string const&) */

void PlantStreetLamp::OnAnimCommand(string *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
  if (cVar1 != '\0') {
    bVar2 = std::operator==(param_2,"use_action");
    if (bVar2) {
      FindAllZombiesAndStunned((PlantStreetLamp *)param_1);
      PlantFramework::OnAnimCommand(param_1,param_2);
      return;
    }
  }
  PlantFramework::OnAnimCommand(param_1,param_2);
  return;
}


/* PlantStreetLamp::~PlantStreetLamp() */

void __thiscall PlantStreetLamp::~PlantStreetLamp(PlantStreetLamp *this)

{
  *(undefined ***)this = &PTR_GetClass_067b0d30;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantStreetLamp::~PlantStreetLamp() */

void __thiscall PlantStreetLamp::~PlantStreetLamp(PlantStreetLamp *this)

{
  ~PlantStreetLamp(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStreetLamp::GetLightUpGrid() */

void __thiscall PlantStreetLamp::GetLightUpGrid(PlantStreetLamp *this)

{
  vector<Sexy::Point,std::allocator<Sexy::Point>> *this_00;
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  Point aPStack_10 [8];
  long local_8;
  
  this_00 = (vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear(this_00);
  cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),0x17);
  if (cVar1 == '\0') {
    cVar2 = NewPVPUtils::IsPlayingNewPVP();
    cVar1 = '\0';
    if (cVar2 != '\0') {
      iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
      iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
      Sexy::Point::Point(aPStack_10,iVar3,iVar4);
      cVar1 = NewPVPUtils::IsOppoentRegion(aPStack_10);
    }
    if (this[0x28] == (PlantStreetLamp)0x0) {
      uVar9 = 0xfffffffe;
      iVar4 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
      iVar3 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
      iVar3 = iVar3 + -2;
      do {
        uVar6 = 0xfffffffd;
        iVar8 = (uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f);
        iVar7 = iVar4 + -3;
        do {
          if (((int)(iVar8 + ((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f))) < 4) &&
             ((uVar6 == 0 || (iVar8 != 2)))) {
            if (cVar1 == '\0') {
              cVar2 = NewPVPUtils::IsPlayingNewPVP();
              if (cVar2 != '\0') {
                Sexy::Point::Point(aPStack_10,iVar7,iVar3);
                cVar2 = NewPVPUtils::IsOppoentRegion(aPStack_10);
                if (cVar2 != '\0') goto LAB_03ff0f78;
              }
LAB_03ff0fe0:
              Sexy::Point::Point(aPStack_10,iVar7,iVar3);
              std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(this_00,aPStack_10);
            }
            else {
              cVar2 = NewPVPUtils::IsPlayingNewPVP();
              if (cVar2 != '\0') {
                Sexy::Point::Point(aPStack_10,iVar7,iVar3);
                cVar2 = NewPVPUtils::IsOppoentRegion(aPStack_10);
                if (cVar2 != '\0') goto LAB_03ff0fe0;
              }
            }
          }
LAB_03ff0f78:
          uVar6 = uVar6 + 1;
          iVar7 = iVar7 + 1;
        } while (uVar6 != 4);
        uVar9 = uVar9 + 1;
        iVar3 = iVar3 + 1;
      } while (uVar9 != 3);
      cVar1 = FUN_03ff0088(*(undefined4 *)(*(long *)(this + 0x10) + 0x28));
    }
    else {
      iVar3 = 0;
      lVar5 = *(long *)(gLawnApp + 0x9f0);
      if (0 < *(int *)(lVar5 + 0xf8)) {
        do {
          if (-2 < *(int *)(lVar5 + 0xfc)) {
            iVar4 = -1;
            if (cVar1 == '\0') {
LAB_03ff0e38:
              do {
                cVar2 = NewPVPUtils::IsPlayingNewPVP();
                if (cVar2 != '\0') {
                  Sexy::Point::Point(aPStack_10,iVar3,iVar4);
                  cVar2 = NewPVPUtils::IsOppoentRegion(aPStack_10);
                  if (cVar2 != '\0') {
                    iVar4 = iVar4 + 1;
                    lVar5 = *(long *)(gLawnApp + 0x9f0);
                    if (*(int *)(lVar5 + 0xfc) < iVar4) break;
                    goto LAB_03ff0e38;
                  }
                }
                iVar7 = iVar4 + 1;
                Sexy::Point::Point(aPStack_10,iVar3,iVar4);
                std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back(this_00,aPStack_10);
                lVar5 = *(long *)(gLawnApp + 0x9f0);
                iVar4 = iVar7;
              } while (iVar7 <= *(int *)(lVar5 + 0xfc));
            }
            else {
              do {
                cVar2 = NewPVPUtils::IsPlayingNewPVP();
                if (cVar2 != '\0') {
                  Sexy::Point::Point(aPStack_10,iVar3,iVar4);
                  cVar2 = NewPVPUtils::IsOppoentRegion(aPStack_10);
                  if (cVar2 != '\0') {
                    Sexy::Point::Point(aPStack_10,iVar3,iVar4);
                    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                              (this_00,aPStack_10);
                  }
                }
                iVar4 = iVar4 + 1;
                lVar5 = *(long *)(gLawnApp + 0x9f0);
              } while (iVar4 <= *(int *)(lVar5 + 0xfc));
            }
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(lVar5 + 0xf8));
      }
      cVar1 = FUN_03ff0088(*(undefined4 *)(*(long *)(this + 0x10) + 0x28));
    }
    if (cVar1 != '\0') {
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear(this_00);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* PlantStreetLamp::Initialize() */

void __thiscall PlantStreetLamp::Initialize(PlantStreetLamp *this)

{
  Plant *pPVar1;
  undefined4 uVar2;
  
  PlantFramework::Initialize((PlantFramework *)this);
  uVar2 = PVZ_EOT();
  this[0x28] = (PlantStreetLamp)0x0;
  *(undefined4 *)(this + 0x2c) = uVar2;
  GetLightUpGrid(this);
  MessageRouter::Post<PlantFramework*,int,PlantStreetLamp*,StreetLampChangeState>
            ((MessageRouter *)gMessageRouter,Message::NotifyWhenChanged,this,0);
  pPVar1 = (Plant *)FUN_03ff04c0(*(undefined8 *)(this + 0x10));
  PlantAnimRig_GroundCherry::SetPlantGroundCherry(pPVar1);
  return;
}


/* PlantStreetLamp::UpdateActions() */

void __thiscall PlantStreetLamp::UpdateActions(PlantStreetLamp *this)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)PVZ_T();
  if (fVar1 <= *(float *)(this + 0x2c)) {
    return;
  }
  uVar2 = PVZ_EOT();
  this[0x28] = (PlantStreetLamp)0x0;
  *(undefined4 *)(this + 0x2c) = uVar2;
  MessageRouter::Post((_func_void *)gMessageRouter);
  GetLightUpGrid(this);
  MessageRouter::Post<PlantFramework*,int,PlantStreetLamp*,StreetLampChangeState>
            ((MessageRouter *)gMessageRouter,Message::NotifyWhenChanged,this,1);
  return;
}


/* PlantStreetLamp::onApplyCondition(PlantConditions) */

void __thiscall PlantStreetLamp::onApplyCondition(PlantStreetLamp *this,int param_2)

{
  if (param_2 != 0x17) {
    return;
  }
  GetLightUpGrid(this);
  MessageRouter::Post<Plant*,Plant*>
            ((MessageRouter *)gMessageRouter,Message::StreetLampSheep,*(Plant **)(this + 0x10));
  MessageRouter::Post<PlantFramework*,int,PlantStreetLamp*,StreetLampChangeState>
            ((MessageRouter *)gMessageRouter,Message::NotifyWhenChanged,this,2);
  return;
}


/* PlantStreetLamp::onEndCondition(PlantConditions) */

void __thiscall PlantStreetLamp::onEndCondition(PlantStreetLamp *this,int param_2)

{
  if ((param_2 == 0x17) && (0.0 < *(float *)(*(long *)(this + 0x10) + 0xd8))) {
    GetLightUpGrid(this);
    MessageRouter::Post<Plant*,Plant*>
              ((MessageRouter *)gMessageRouter,Message::StreetLampSheep,*(Plant **)(this + 0x10));
    MessageRouter::Post<PlantFramework*,int,PlantStreetLamp*,StreetLampChangeState>
              ((MessageRouter *)gMessageRouter,Message::NotifyWhenChanged,this,0);
    return;
  }
  return;
}


/* PlantStreetLamp::DoPlantFoodEffect() */

void __thiscall PlantStreetLamp::DoPlantFoodEffect(PlantStreetLamp *this)

{
  long lVar1;
  float fVar2;
  
  this[0x28] = (PlantStreetLamp)0x1;
  fVar2 = (float)PVZ_T();
  lVar1 = FUN_03ff0548(*(undefined8 *)(this + 0x10));
  *(float *)(this + 0x2c) = fVar2 + *(float *)(lVar1 + 0x2b8);
  MessageRouter::Post((_func_void *)gMessageRouter);
  GetLightUpGrid(this);
  MessageRouter::Post<PlantFramework*,int,PlantStreetLamp*,StreetLampChangeState>
            ((MessageRouter *)gMessageRouter,Message::NotifyWhenChanged,this,0);
  return;
}


/* PlantStreetLamp::CancelPlantfood() */

void __thiscall PlantStreetLamp::CancelPlantfood(PlantStreetLamp *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  DoPlantFoodEffect(this);
  return;
}


/* PlantStreetLamp::onKilled(bool) */

void PlantStreetLamp::onKilled(bool param_1)

{
  GetLightUpGrid((PlantStreetLamp *)(ulong)param_1);
  MessageRouter::Post<PlantFramework*,int,PlantStreetLamp*,StreetLampChangeState>
            ((MessageRouter *)gMessageRouter,Message::NotifyWhenChanged,
             (PlantStreetLamp *)(ulong)param_1,2);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* PlantStreetLamp::NotifySetHidden(bool, bool) */

void __thiscall PlantStreetLamp::NotifySetHidden(PlantStreetLamp *this,bool param_1,bool param_2)

{
  GetLightUpGrid(this);
  MessageRouter::Post<Plant*,Plant*>
            ((MessageRouter *)gMessageRouter,Message::StreetLampSheep,*(Plant **)(this + 0x10));
  if (param_1 < param_2) {
    MessageRouter::Post<PlantFramework*,int,PlantStreetLamp*,StreetLampChangeState>
              ((MessageRouter *)gMessageRouter,Message::NotifyWhenChanged,this,0);
    return;
  }
  if (param_1 <= param_2) {
    return;
  }
  MessageRouter::Post<PlantFramework*,int,PlantStreetLamp*,StreetLampChangeState>
            ((MessageRouter *)gMessageRouter,Message::NotifyWhenChanged,this,2);
  return;
}

