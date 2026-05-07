// Class: SpawnZombiesMirrorWaveAction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnZombiesMirrorWaveAction::StaticClassInit() */

void SpawnZombiesMirrorWaveAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpawnZombiesMirrorWaveAction");
    (*pcVar2)(plVar1,asStack_10,FUN_049380d0,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpawnZombiesMirrorWaveAction::StaticGetClass() */

long * SpawnZombiesMirrorWaveAction::StaticGetClass(void)

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
  uVar2 = SpawnZombiesJitteredWaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"SpawnZombiesMirrorWaveAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SpawnZombiesMirrorWaveAction::SpawnZombiesMirrorWaveAction() */

void __thiscall
SpawnZombiesMirrorWaveAction::SpawnZombiesMirrorWaveAction(SpawnZombiesMirrorWaveAction *this)

{
  SpawnZombiesJitteredWaveAction::SpawnZombiesJitteredWaveAction
            ((SpawnZombiesJitteredWaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_06911f30;
  return;
}


/* SpawnZombiesMirrorWaveAction::StaticNew() */

SpawnZombiesMirrorWaveAction * SpawnZombiesMirrorWaveAction::StaticNew(void)

{
  SpawnZombiesMirrorWaveAction *this;
  
  this = ::operator_new(0x48);
  SpawnZombiesMirrorWaveAction(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpawnZombiesMirrorWaveAction::onCreatedZombies(int, std::vector<Zombie*, std::allocator<Zombie*>
   >) */

void __thiscall
SpawnZombiesMirrorWaveAction::onCreatedZombies
          (undefined8 param_1_00,undefined4 param_1,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined8 *puVar7;
  RtWeakPtrBase *this;
  SexyVector3 *this_00;
  SharkMinion *this_01;
  long *plVar8;
  code *pcVar9;
  float fVar10;
  Zombie *pZVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  Vec3 aVStack_40 [16];
  undefined4 local_30 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  StageModule::GetFlagZombieType();
  iVar3 = BoardConstants::NUMBER_OF_ROWS();
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_3);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_3);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1) {
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    this_01 = (SharkMinion *)*puVar7;
    Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_30);
    local_30[0] = FUN_04937060(*(undefined4 *)(this_01 + 0x50));
    plVar8 = *(long **)(gLawnApp + 0x9f0);
    pcVar9 = *(code **)(*plVar8 + 0x318);
    this = (RtWeakPtrBase *)Zombie::GetType((Zombie *)this_01);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aVStack_40,this);
    this_00 = (SexyVector3 *)(*pcVar9)(plVar8,aVStack_40,param_1,(ValidatePlantData *)local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_40);
    Zombie::GetHasPlantFood((Zombie *)this_01);
    Zombie::SetHasPlantFood(SUB81(this_00,0));
    uVar5 = Zombie::GetLoot((Zombie *)this_01);
    Zombie::SetLoot((Zombie *)this_00,uVar5);
    pcVar9 = *(code **)(*(long *)this_00 + 0x250);
    uVar5 = Sexy::RtWeakPtrBase::operator==(this,(RtWeakPtrBase *)aRStack_58);
    (*pcVar9)(this_00,uVar5);
    bVar1 = (bool)Zombie::GetHasLeader((Zombie *)this_01);
    Zombie::SetHasLeader((Zombie *)this_00,bVar1);
    bVar1 = (bool)Zombie::IsFriendZombie((Zombie *)this_01);
    Zombie::SetIsFriendZombie((Zombie *)this_00,bVar1);
    cVar2 = Zombie::HasCondition(this_01,0x3a);
    if (cVar2 != '\0') {
      uVar5 = Zombie::GetEliminateColor((Zombie *)this_01);
      Zombie::SetEliminateColor((Zombie *)this_00,uVar5);
      pZVar11 = (Zombie *)PVZ_EOT();
      Zombie::ApplyCondition(pZVar11,0,this_00,0x3a,1);
    }
    iVar4 = SharkMinion::getRow(this_01);
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this_01);
    fVar10 = *pfVar6;
    iVar4 = BoardTransforms::GridToBoardSpaceY(iVar4 + iVar3 / 2 + 1);
    EATextSquish::Vec3::Vec3(aVStack_40,fVar10,(float)iVar4,pfVar6[2]);
    BoardEntity::PlaceOnBoard(this_00);
    ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpawnZombiesMirrorWaveAction::~SpawnZombiesMirrorWaveAction() */

void __thiscall
SpawnZombiesMirrorWaveAction::~SpawnZombiesMirrorWaveAction(SpawnZombiesMirrorWaveAction *this)

{
  *(undefined ***)this = &PTR_GetActionClass_06911f30;
  SpawnZombiesJitteredWaveAction::~SpawnZombiesJitteredWaveAction
            ((SpawnZombiesJitteredWaveAction *)this);
  return;
}


/* SpawnZombiesMirrorWaveAction::~SpawnZombiesMirrorWaveAction() */

void __thiscall
SpawnZombiesMirrorWaveAction::~SpawnZombiesMirrorWaveAction(SpawnZombiesMirrorWaveAction *this)

{
  ~SpawnZombiesMirrorWaveAction(this);
  AK::FreeHook(this);
  return;
}

