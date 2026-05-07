// Class: ZombossDropZombieActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDropZombieActionHandler::StaticClassInit() */

void ZombossDropZombieActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossDropZombieActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04734478,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossDropZombieActionHandler::StaticGetClass() */

long * ZombossDropZombieActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossDropZombieActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossDropZombieActionHandler::GetClass() const */

long * ZombossDropZombieActionHandler::GetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossDropZombieActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossDropZombieActionHandler::pickPlantfoodSpawnDelay() const */

int ZombossDropZombieActionHandler::pickPlantfoodSpawnDelay(void)

{
  int iVar1;
  ZombossHydraSprayActionDefinition *pZVar2;
  float fVar3;
  
  pZVar2 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  fVar3 = *(float *)(pZVar2 + 0x58);
  iVar1 = Sexy::Rand(((int)*(float *)(pZVar2 + 0x5c) - (int)fVar3) + 1);
  return iVar1 + (int)fVar3 + -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDropZombieActionHandler::calcNewSpawningPoint() const */

void ZombossDropZombieActionHandler::calcNewSpawningPoint(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ZombieActionHandler *in_x0;
  ZombossHydraSprayActionDefinition *pZVar5;
  RtObject *this;
  ZombieZombossMech *this_00;
  int *piVar6;
  Point *in_x8;
  int *piVar7;
  int local_18;
  int local_14 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar5 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  this = (RtObject *)ZombieActionHandler::getZombie(in_x0);
  this_00 = Sexy::RtObject::Cast<ZombieZombossMech>(this);
  piVar7 = local_14 + 2;
  local_14[2] = 1;
  piVar6 = eastl::max_alt<int>(piVar7,(int *)(pZVar5 + 0x78));
  iVar1 = *piVar6;
  local_18 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
  do {
    iVar3 = SharkMinion::getRow((SharkMinion *)this_00);
    iVar4 = rand();
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = iVar4 / iVar1;
    }
    local_14[0] = iVar3 + (iVar4 - iVar2 * iVar1);
  } while ((local_14[0] == *(int *)(in_x0 + 0x44)) && (1 < iVar1));
  local_14[1] = 0;
  piVar6 = eastl::max_alt<int>(local_14 + 1,local_14);
  local_14[2] = BoardConstants::NUMBER_OF_ROWS();
  local_14[2] = local_14[2] + -1;
  piVar6 = eastl::min_alt<int>(piVar6,piVar7);
  iVar1 = *piVar6;
  local_14[1] = 0;
  piVar6 = eastl::max_alt<int>(local_14 + 1,&local_18);
  local_14[2] = BoardConstants::NUMBER_OF_COLUMNS();
  local_14[2] = local_14[2] + -1;
  piVar6 = eastl::min_alt<int>(piVar6,piVar7);
  Sexy::Point::Point(in_x8,*piVar6,iVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossDropZombieActionHandler::onEndAction() */

void __thiscall ZombossDropZombieActionHandler::onEndAction(ZombossDropZombieActionHandler *this)

{
  int iVar1;
  int iVar2;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  undefined4 uVar3;
  
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x78) = uVar3;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  iVar1 = ZombieZombossMech::GetNextZombieWaveWithPlantfood(this_01);
  iVar2 = ZombieZombossMech::GetZombieWaveCounter(this_01);
  if (iVar1 != iVar2) {
    ZombieZombossMech::IncrementZombieWaveCounter(this_01);
    return;
  }
  iVar2 = pickPlantfoodSpawnDelay();
  ZombieZombossMech::SetNextZombieWaveWithPlantfood(this_01,iVar1 + 1 + iVar2);
  ZombieZombossMech::IncrementZombieWaveCounter(this_01);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDropZombieActionHandler::waveHasPlantfoodCarryingZombie(std::vector<Sexy::RtWeakPtr<ZombieType
   const>, std::allocator<Sexy::RtWeakPtr<ZombieType const> > >) const */

void __thiscall
ZombossDropZombieActionHandler::waveHasPlantfoodCarryingZombie
          (undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  RtWeakPtrBase *pRVar2;
  ZombieType *this;
  long lVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_04732274(*param_2);
  local_10 = FUN_047322c4(param_2[1]);
  do {
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)cVar1) {
LAB_047323b4:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar1);
    }
    pRVar2 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar2);
    this = (ZombieType *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    lVar3 = ZombieType::GetProps(this);
    cVar1 = *(char *)(lVar3 + 0x38);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      goto LAB_047323b4;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* ZombossDropZombieActionHandler::ZombossDropZombieActionHandler() */

void __thiscall
ZombossDropZombieActionHandler::ZombossDropZombieActionHandler(ZombossDropZombieActionHandler *this)

{
  undefined4 uVar1;
  
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068c5bd0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  Sexy::Point::Point((Point *)(this + 0x40));
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0x48));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x78) = uVar1;
  return;
}


/* ZombossDropZombieActionHandler::StaticNew() */

ZombossDropZombieActionHandler * ZombossDropZombieActionHandler::StaticNew(void)

{
  ZombossDropZombieActionHandler *this;
  
  this = ::operator_new(0x80);
  ZombossDropZombieActionHandler(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDropZombieActionHandler::onSpawnAnimationEnd(std::string const&) */

void __thiscall
ZombossDropZombieActionHandler::onSpawnAnimationEnd
          (ZombossDropZombieActionHandler *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  Zombie *this_00;
  ZombieHydraHeadAnimRig *pZVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(this_00);
  bVar1 = std::operator==(param_1,"zombie_drop");
  if (bVar1) {
    *(undefined4 *)(this + 0x7c) = 3;
LAB_04732c18:
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onSpawnAnimationEnd");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    ZombieAnimRig_ZombossMech_LostCity::PlayLoopZombieDrop
              ((ZombieAnimRig_ZombossMech_LostCity *)pZVar3,aRStack_50);
  }
  else {
    bVar1 = std::operator==(param_1,"zombie_drop_loop");
    if (!bVar1) {
      bVar1 = std::operator==(param_1,"zombie_drop_end");
      if (bVar1) {
        ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
      }
      goto LAB_04732bd8;
    }
    cVar2 = std::
            vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
            ::empty((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                     *)(this + 0x28));
    if (cVar2 == '\0') goto LAB_04732c18;
    *(undefined4 *)(this + 0x7c) = 4;
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onSpawnAnimationEnd");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    ZombieAnimRig_ZombossMech_LostCity::PlayEndZombieDrop
              ((ZombieAnimRig_ZombossMech_LostCity *)pZVar3,aRStack_50);
  }
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
LAB_04732bd8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDropZombieActionHandler::createNextZombie() */

void __thiscall
ZombossDropZombieActionHandler::createNextZombie(ZombossDropZombieActionHandler *this)

{
  int iVar1;
  int iVar2;
  Zombie *this_00;
  long lVar3;
  RtWeakPtrBase *pRVar4;
  SexyVector3 *pSVar5;
  long *plVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 local_50;
  int local_48;
  int local_44;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [16];
  undefined4 local_30;
  undefined1 local_2b;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  calcNewSpawningPoint();
  BoardTransforms::GridToBoardSpace((Point *)&local_50);
  *(undefined8 *)(this + 0x40) = local_50;
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  local_30 = Zombie::GetSummonZombieLevel(this_00);
  uVar7 = *(undefined8 *)(this + 0x28);
  local_2b = 1;
  plVar6 = *(long **)(gLawnApp + 0x9f0);
  pcVar8 = *(code **)(*plVar6 + 0x318);
  lVar3 = FUN_04730dcc(uVar7,*(undefined8 *)(this + 0x30));
  pRVar4 = (RtWeakPtrBase *)FUN_04730dd8(uVar7,lVar3 + -1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,pRVar4);
  pSVar5 = (SexyVector3 *)(*pcVar8)(plVar6,aRStack_40,0xfffffffb,(SpawnZombieParams *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  FUN_04731ea8(this + 0x30);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_40,(float)(local_48 - (iVar1 >> 2)),(float)local_44,0.0);
  BoardEntity::PlaceOnBoard(pSVar5);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pSVar5);
}


/* ZombossDropZombieActionHandler::~ZombossDropZombieActionHandler() */

void __thiscall
ZombossDropZombieActionHandler::~ZombossDropZombieActionHandler
          (ZombossDropZombieActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068c5bd0;
  CurveSequenceCollection<float>::~CurveSequenceCollection
            ((CurveSequenceCollection<float> *)(this + 0x48));
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
           *)(this + 0x28));
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossDropZombieActionHandler::~ZombossDropZombieActionHandler() */

void __thiscall
ZombossDropZombieActionHandler::~ZombossDropZombieActionHandler
          (ZombossDropZombieActionHandler *this)

{
  ~ZombossDropZombieActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x047341d0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossDropZombieActionHandler::spawnZombie() */

void __thiscall ZombossDropZombieActionHandler::spawnZombie(ZombossDropZombieActionHandler *this)

{
  vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
  *this_00;
  char cVar1;
  ZombossHydraSprayActionDefinition *pZVar2;
  RtObject *this_01;
  ZombieZombossMech *this_02;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_03;
  ComponentRunner *pCVar3;
  ComponentZombieMovement *pCVar4;
  vector<Loot,std::allocator<Loot>> *this_04;
  undefined4 *puVar5;
  ulong uVar6;
  RtWeakPtr<Sexy::ResourceInfo> *this_05;
  ZombieType *this_06;
  long lVar7;
  code *pcVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined8 local_30;
  float local_28 [2];
  float local_20 [6];
  long local_8;
  
  this_00 = (vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
             *)(this + 0x28);
  local_8 = ___stack_chk_guard;
  cVar1 = std::
          vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
          ::empty(this_00);
  if (cVar1 != '\0') goto LAB_047340b4;
  pZVar2 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  this_01 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_02 = Sexy::RtObject::Cast<ZombieZombossMech>(this_01);
  this_03 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)createNextZombie(this);
  fVar9 = *(float *)(this_03 + 0x1c);
  FUN_04730e40(*(undefined4 *)(this_03 + 0x18),fVar9,*(undefined4 *)(this_03 + 0x20));
  pCVar3 = (ComponentRunner *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_03);
  local_30 = *(undefined8 *)pCVar3;
  local_28[0] = *(float *)(pCVar3 + 8);
  SharkMinion::getRow((SharkMinion *)this_02);
  BoardTransforms::GridToBoardSpaceYUnbounded((int)pCVar3 + -1);
  fVar11 = *(float *)(pZVar2 + 0x7c);
  fVar9 = (float)(int)(fVar9 - (float)(int)pCVar3);
  BoardEntity::GetComponentRunner((BoardEntity *)this_03);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
  std::string::string((string *)local_20,"LostCityZombossFallComponent");
  pCVar4 = ComponentRunner::Add<ComponentZombieMovement>(pCVar3,aRStack_38,(string *)local_20);
  std::string::~string((string *)local_20);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  pcVar8 = *(code **)(*(long *)this_03 + 0x78);
  EATextSquish::Vec3::Vec3((Vec3 *)local_20,(float)local_30,local_30._4_4_,fVar9 + local_28[0]);
  (*pcVar8)(this_03,(string *)local_20);
  local_20[0] = fVar9;
  ComponentZombieMovement::AddCurve
            ((ComponentZombieMovement *)(fVar9 / fVar11),pCVar4,3,(string *)local_20,local_28,2);
  ZombieZombossMech::GetNextZombieWaveWithPlantfood(this_02);
  ZombieZombossMech::GetZombieWaveCounter(this_02);
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
          *)local_20,(vector *)this_00);
  uVar6 = waveHasPlantfoodCarryingZombie(this,(string *)local_20);
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
           *)local_20);
  if ((uVar6 & 0xff) == 0) {
LAB_047342d4:
    Zombie::SetHasPlantFood(SUB81(this_03,0));
    pickPlantfoodSpawnDelay();
    ZombieZombossMech::SetNextZombieWaveWithPlantfood(this_02,(int)pCVar4 + 1 + (int)uVar6);
  }
  else {
    this_05 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)this_03);
    this_06 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_05);
    lVar7 = ZombieType::GetProps(this_06);
    if (*(char *)(lVar7 + 0x38) != '\0') {
      uVar6 = FUN_04730dcc(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
      dVar10 = (double)(uVar6 + 1);
      Sexy::Rand((int)dVar10);
      if ((double)(int)uVar6 / dVar10 < 1.0 / dVar10) goto LAB_047342d4;
    }
  }
  this_04 = (vector<Loot,std::allocator<Loot>> *)
            ZombieZombossMech::GetLootForSpawnedZombies(this_02);
  cVar1 = std::
          vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
          ::empty(this_00);
  if ((cVar1 != '\0') &&
     (cVar1 = std::vector<Loot,std::allocator<Loot>>::empty(this_04), cVar1 == '\0')) {
    puVar5 = (undefined4 *)
             std::vector<unsigned_int,std::allocator<unsigned_int>>::back
                       ((vector<unsigned_int,std::allocator<unsigned_int>> *)this_04);
    Zombie::SetLoot((Zombie *)this_03,*puVar5);
    FUN_04730e30(this_04 + 8);
  }
LAB_047340b4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x04734974 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossDropZombieActionHandler::pickZombiesForSpawn() */

void __thiscall
ZombossDropZombieActionHandler::pickZombiesForSpawn(ZombossDropZombieActionHandler *this)

{
  ZombossHydraSprayActionDefinition *pZVar1;
  RtObject *this_00;
  ZombieZombossMech *pZVar2;
  ulong uVar3;
  long lVar4;
  string *psVar5;
  ZombieType *this_01;
  ulong uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_13d8 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_13d0 [48];
  MTRand aMStack_13a0 [5016];
  long local_8;
  
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  pZVar1 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  pZVar2 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  fVar7 = (float)FUN_04730da8(*(undefined4 *)(pZVar2 + 0x284));
  auVar8 = FUN_04730da4(*(undefined4 *)(pZVar2 + 0x280));
  fVar7 = CurveLerp<float>(auVar8,fVar7,fVar7 - auVar8._0_4_,pZVar1 + 0x60,pZVar1 + 100,1);
  uVar3 = CalcRandomSeed(1);
  Sexy::MTRand::MTRand(aMStack_13a0,uVar3 & 0xffffffff);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_13d0);
  lVar4 = FUN_04730db4(*(undefined8 *)(pZVar1 + 0x40),*(undefined8 *)(pZVar1 + 0x48));
  if (lVar4 != 0) {
    do {
      psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      FUN_04730dc0(*(undefined8 *)(pZVar1 + 0x40),uVar6);
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
      this_01 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_13d8);
      lVar4 = ZombieType::GetProps(this_01);
      if ((int)fVar7 < *(int *)(lVar4 + 0x9c)) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_13d8);
      }
      else {
        std::
        set<Sexy::RtWeakPtr<ZombieType_const>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
        ::insert((set<Sexy::RtWeakPtr<ZombieType_const>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                  *)amStack_13d0,(RtWeakPtr *)aRStack_13d8);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_13d8);
      }
      uVar6 = uVar6 + 1;
      uVar3 = FUN_04730db4(*(undefined8 *)(pZVar1 + 0x40),*(undefined8 *)(pZVar1 + 0x48));
    } while (uVar6 < uVar3);
  }
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  clear((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
         *)(this + 0x28));
  WaveHelpers::PickZombiesFromPool
            ((int)fVar7,(set *)amStack_13d0,aMStack_13a0,(vector *)(this + 0x28));
  std::
  set<Sexy::RtWeakPtr<ZombieType_const>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
  ::~set((set<Sexy::RtWeakPtr<ZombieType_const>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
          *)amStack_13d0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDropZombieActionHandler::onStartAction() */

void __thiscall ZombossDropZombieActionHandler::onStartAction(ZombossDropZombieActionHandler *this)

{
  string *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ZombossHydraSprayActionDefinition *pZVar11;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ulong *puVar12;
  CurveSequence<float> *pCVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float local_48;
  float local_44;
  undefined8 local_40;
  float local_38 [2];
  Vec3 aVStack_30 [16];
  undefined4 local_20;
  float fStack_1c;
  float local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)(this + 0x48);
  pZVar11 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  fVar15 = (float)ZombieZombossMech::GetZomboss_T(this_01);
  iVar10 = *(int *)(pZVar11 + 0x68);
  iVar8 = rand();
  iVar2 = *(int *)(pZVar11 + 0x70);
  iVar3 = *(int *)(pZVar11 + 0x6c);
  iVar5 = 0;
  if (iVar2 != 0) {
    iVar5 = iVar8 / iVar2;
  }
  iVar9 = rand();
  iVar4 = *(int *)(pZVar11 + 0x74);
  iVar6 = 0;
  if (iVar4 != 0) {
    iVar6 = iVar9 / iVar4;
  }
  iVar10 = BoardTransforms::GridToBoardSpaceX(iVar10 + (iVar8 - iVar5 * iVar2));
  local_48 = (float)iVar10;
  iVar10 = BoardTransforms::GridToBoardSpaceY(iVar3 + (iVar9 - iVar6 * iVar4));
  fVar18 = (float)iVar10;
  local_44 = fVar18;
  puVar12 = (ulong *)std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)this_01);
  local_40 = *puVar12;
  fVar16 = *(float *)(puVar12 + 1);
  local_38[0] = fVar16;
  EATextSquish::Vec3::Vec3(aVStack_30,local_48,fVar18,fVar16);
  local_20 = Sexy::SexyVector3::operator-((SexyVector3 *)aVStack_30,(SexyVector3 *)&local_40);
  fStack_1c = fVar18;
  local_18 = fVar16;
  fVar16 = (float)DVec3::getLength((DVec3 *)&local_20);
  fVar16 = fVar16 / *(float *)(pZVar11 + 0x88);
  Sexy::Point::Point((Point *)&local_20,-1,-1);
  *(ulong *)(this + 0x40) = CONCAT44(fStack_1c,local_20);
  *(undefined4 *)(this + 0x7c) = 1;
  uVar17 = ZombieZombossMech::GetZomboss_T(this_01);
  *(undefined4 *)(this + 0x78) = uVar17;
  std::string::string((string *)&local_20,"x");
  pCVar13 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
  CurveSequence<float>::StartSequence(pCVar13,fVar15,(float *)&local_40);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"y");
  pCVar13 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
  CurveSequence<float>::StartSequence(pCVar13,fVar15,(float *)((long)&local_40 + 4));
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"z");
  pCVar13 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
  CurveSequence<float>::StartSequence(pCVar13,fVar15,local_38);
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"x");
  uVar14 = CurveSequenceCollection<float>::operator[](psVar1);
  FUN_04734e64(fVar16,local_40 & 0xffffffff,uVar14,&local_48,*(undefined4 *)(pZVar11 + 0x84));
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"y");
  uVar14 = CurveSequenceCollection<float>::operator[](psVar1);
  FUN_04734e64(fVar16,local_40._4_4_,uVar14,&local_44,*(undefined4 *)(pZVar11 + 0x84));
  std::string::~string((string *)&local_20);
  nop();
  std::string::string((string *)&local_20,"z");
  uVar14 = CurveSequenceCollection<float>::operator[](psVar1);
  FUN_04734e64(fVar16,local_38[0],uVar14,local_38,*(undefined4 *)(pZVar11 + 0x84));
  std::string::~string((string *)&local_20);
  nop();
  pickZombiesForSpawn(this);
  iVar10 = ZombieZombossMech::GetNextZombieWaveWithPlantfood(this_01);
  if (iVar10 == -1) {
    iVar10 = pickPlantfoodSpawnDelay();
    ZombieZombossMech::SetNextZombieWaveWithPlantfood(this_01,iVar10);
  }
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
          *)&local_20,(vector *)(this + 0x28));
  cVar7 = waveHasPlantfoodCarryingZombie(this,(DVec3 *)&local_20);
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
           *)&local_20);
  if (cVar7 == '\0') {
    iVar10 = ZombieZombossMech::GetNextZombieWaveWithPlantfood(this_01);
    ZombieZombossMech::SetNextZombieWaveWithPlantfood(this_01,iVar10 + 1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDropZombieActionHandler::onUpdateAction() */

void __thiscall ZombossDropZombieActionHandler::onUpdateAction(ZombossDropZombieActionHandler *this)

{
  char cVar1;
  ZombossHydraSprayActionDefinition *pZVar2;
  RtObject *pRVar3;
  ZombieZombossMech *pZVar4;
  CurveSequence<float> *this_00;
  ZombieHydraHeadAnimRig *pZVar5;
  float fVar6;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x7c) == 1) {
    pRVar3 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    pZVar4 = Sexy::RtObject::Cast<ZombieZombossMech>(pRVar3);
    ZombieZombossMech::UpdatePositionFromCurve(pZVar4,(CurveSequenceCollection *)(this + 0x48));
    std::string::string(asStack_58,"x");
    this_00 = (CurveSequence<float> *)
              CurveSequenceCollection<float>::operator[]((string *)(this + 0x48));
    fVar6 = (float)ZombieZombossMech::GetZomboss_T(pZVar4);
    cVar1 = CurveSequence<float>::IsTimeInSequence(this_00,fVar6);
    std::string::~string(asStack_58);
    nop();
    if (cVar1 == '\0') {
      *(undefined4 *)(this + 0x7c) = 2;
      pZVar5 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)pZVar4);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onSpawnAnimationEnd");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      ZombieAnimRig_ZombossMech_LostCity::PlayStartZombieDrop
                ((ZombieAnimRig_ZombossMech_LostCity *)pZVar5,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
  }
  else if (*(int *)(this + 0x7c) == 3) {
    pZVar2 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
    pRVar3 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    pZVar4 = Sexy::RtObject::Cast<ZombieZombossMech>(pRVar3);
    fVar6 = (float)ZombieZombossMech::GetZomboss_T(pZVar4);
    if (*(float *)(this + 0x78) <= fVar6) {
      spawnZombie(this);
      fVar6 = (float)ZombieZombossMech::GetZomboss_T(pZVar4);
      *(float *)(this + 0x78) = fVar6 + *(float *)(pZVar2 + 0x80);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

