// Class: HappyLeek_badsmelleffect


/* HappyLeek_badsmelleffect::~HappyLeek_badsmelleffect() */

void __thiscall HappyLeek_badsmelleffect::~HappyLeek_badsmelleffect(HappyLeek_badsmelleffect *this)

{
  *(undefined ***)this = &PTR_GetClass_067a77c0;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* HappyLeek_badsmelleffect::~HappyLeek_badsmelleffect() */

void __thiscall HappyLeek_badsmelleffect::~HappyLeek_badsmelleffect(HappyLeek_badsmelleffect *this)

{
  ~HappyLeek_badsmelleffect(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HappyLeek_badsmelleffect::StaticClassInit() */

void HappyLeek_badsmelleffect::StaticClassInit(void)

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
    std::string::string(asStack_10,"HappyLeek_badsmelleffect");
    (*pcVar2)(plVar1,asStack_10,FUN_03faea18,0x120,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HappyLeek_badsmelleffect::StaticGetClass() */

long * HappyLeek_badsmelleffect::StaticGetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"HappyLeek_badsmelleffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HappyLeek_badsmelleffect::GetClass() const */

long * HappyLeek_badsmelleffect::GetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"HappyLeek_badsmelleffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HappyLeek_badsmelleffect::HappyLeek_badsmelleffect() */

void __thiscall HappyLeek_badsmelleffect::HappyLeek_badsmelleffect(HappyLeek_badsmelleffect *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_067a77c0;
  Sexy::Insets::Insets((Insets *)(this + 0x10c));
  *(undefined4 *)(this + 0x11c) = 0x3f800000;
  return;
}


/* HappyLeek_badsmelleffect::StaticNew() */

HappyLeek_badsmelleffect * HappyLeek_badsmelleffect::StaticNew(void)

{
  HappyLeek_badsmelleffect *this;
  
  this = ::operator_new(0x120);
  HappyLeek_badsmelleffect(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HappyLeek_badsmelleffect::onUpdate() */

void __thiscall HappyLeek_badsmelleffect::onUpdate(HappyLeek_badsmelleffect *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  Zombie *this_00;
  float fVar5;
  ZombieLaneChangingSubsystem *local_88;
  undefined8 local_80;
  undefined8 local_78;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_70 [24];
  undefined8 local_58;
  char local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  char local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_70);
  EntityFinder::GetEntitiesInGridSquares(avStack_70,2,this + 0x10c);
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_70);
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_70);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_80,(__normal_iterator *)&local_78);
    if (!bVar1) {
      Effect_PopAnim::onUpdate((Effect_PopAnim *)this);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_70);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
    nop();
    cVar2 = RealObject::IsOnTeam();
    if ((((cVar2 == '\0') && (cVar2 = FUN_03faeeb8(*(undefined4 *)(this_00 + 0xcc)), cVar2 == '\0'))
        && (iVar3 = Zombie::GetInvisibleState(this_00), iVar3 != 2)) &&
       ((cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0' &&
        (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0')))) {
      local_30 = 0;
      local_28 = 0;
      local_24 = 0;
      local_18 = 0;
      local_10 = 0;
      local_58 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      local_50 = cVar2;
      local_2c = local_30;
      local_20 = local_30;
      local_1c = local_30;
      local_14 = cVar2;
      PlantHappyLeek::PlantHappyLeek((PlantHappyLeek *)&local_58);
      cVar2 = PlantHappyLeek::canZombieLaunch((PlantHappyLeek *)&local_58,this_00);
      PlantHappyLeek::~PlantHappyLeek((PlantHappyLeek *)&local_58);
      if (cVar2 != '\0') {
        fVar5 = (float)Sexy::Rand(1.0);
        iVar3 = -1;
        if (fVar5 <= 0.5) {
          iVar3 = 1;
        }
        iVar4 = SharkMinion::getRow((SharkMinion *)this_00);
        cVar2 = ZombieLaneChangingSubsystem::CanZombieMoveTo(this_00,iVar4 + iVar3);
        if (cVar2 == '\0') {
          iVar4 = SharkMinion::getRow((SharkMinion *)this_00);
          cVar2 = ZombieLaneChangingSubsystem::CanZombieMoveTo(this_00,iVar4 - iVar3);
          if (cVar2 == '\0') goto LAB_03fb09b4;
          local_88 = Board::GetGameSubSystem<ZombieLaneChangingSubsystem>
                               (*(Board **)(gLawnApp + 0x9f0));
          iVar4 = SharkMinion::getRow((SharkMinion *)this_00);
          iVar4 = iVar4 - iVar3;
        }
        else {
          local_88 = Board::GetGameSubSystem<ZombieLaneChangingSubsystem>
                               (*(Board **)(gLawnApp + 0x9f0));
          iVar4 = SharkMinion::getRow((SharkMinion *)this_00);
          iVar4 = iVar4 + iVar3;
        }
                    /* WARNING: Load size is inaccurate */
        ZombieLaneChangingSubsystem::ForceLaneChange
                  (*(ZombieLaneChangingSubsystem **)(this + 0x11c),0,local_88,this_00,iVar4,4);
      }
    }
LAB_03fb09b4:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
  } while( true );
}

