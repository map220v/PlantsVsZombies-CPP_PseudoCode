// Class: PlantGluttonydragon


/* PlantGluttonydragon::canBeMovedByPlant(Zombie const*) const */

byte __thiscall PlantGluttonydragon::canBeMovedByPlant(PlantGluttonydragon *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  
  cVar1 = RealObject::IsOnOpposingTeam((RealObject *)param_1,*(RealObject **)(this + 0x10));
  if ((((cVar1 != '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')
       ) && (cVar1 = Zombie::IsIgnoringAllDamage(param_1), cVar1 == '\0')) &&
     (((cVar1 = Zombie::CanBeLaunchedByPlants(param_1), cVar1 != '\0' &&
       (cVar1 = Zombie::IsControlled(param_1), cVar1 == '\0')) &&
      ((cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 == '\0' &&
       (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 == '\0')))))) {
    iVar3 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
    cVar1 = BoardEntity::IsInRow((BoardEntity *)param_1,iVar3);
    if (cVar1 != '\0') {
      pfVar4 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_1);
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(this + 0x10));
      if (*pfVar5 - 30.0 < *pfVar4) {
        bVar2 = Zombie::IsInvisible(param_1);
        return bVar2 ^ 1;
      }
    }
  }
  return 0;
}


/* PlantGluttonydragon::CanEndPlantfood() */

bool __thiscall PlantGluttonydragon::CanEndPlantfood(PlantGluttonydragon *this)

{
  return 4 < *(int *)(this + 0x28) - 0x14U;
}


/* PlantGluttonydragon::CanBeRangeTargeted() */

undefined8 __thiscall PlantGluttonydragon::CanBeRangeTargeted(PlantGluttonydragon *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x28);
  if ((10 < uVar1) && ((uVar1 < 0xf || (uVar1 == 0x10)))) {
    return 0;
  }
  return 1;
}


/* PlantGluttonydragon::FindTargetAndFire(PlantWeapon) */

void PlantGluttonydragon::FindTargetAndFire(long param_1)

{
  Plant::CanFindTarget(*(undefined8 *)(param_1 + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGluttonydragon::StaticClassInit() */

void PlantGluttonydragon::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantGluttonydragon");
    (*pcVar2)(plVar1,asStack_10,FUN_04d25394,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGluttonydragon::StaticGetClass() */

long * PlantGluttonydragon::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantGluttonydragon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGluttonydragon::GetClass() const */

long * PlantGluttonydragon::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantGluttonydragon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGluttonydragon::playEndEffect() */

void __thiscall PlantGluttonydragon::playEndEffect(PlantGluttonydragon *this)

{
  char cVar1;
  string *psVar2;
  GameObjectDictionary *this_00;
  AttachedEffect *pAVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
  std::string::string(asStack_10,"gluttonyfire_tiles");
  cVar1 = GameObjectDictionary::Contains(psVar2);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 != '\0') {
    psVar2 = asStack_10;
    std::string::string(asStack_18,"hhhhhhh03");
    nop();
    if (*(int *)(this + 0x28) == 0xd) {
      std::string::append(asStack_18,"hhhhhhh_ls03",(size_t)psVar2);
    }
    else if (*(int *)(this + 0x28) == 0xe) {
      std::string::append(asStack_18,"hhhhhhh_zs03",(size_t)psVar2);
    }
    this_00 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
    std::string::string(asStack_10,"gluttonyfire_tiles");
    pAVar3 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    AttachedEffect::PlayAnimAndDestroy(pAVar3,asStack_18,0);
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGluttonydragon::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantGluttonydragon::Fire
          (PlantGluttonydragon *this,RtWeakPtrBase *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  uVar2 = 0;
  local_8 = ___stack_chk_guard;
  if ((int)param_4 == 1) {
    lVar3 = *(long *)(this + 0x10);
    cVar1 = FUN_04d229e0(lVar3);
    if (cVar1 != '\0') {
      *(undefined4 *)(lVar3 + 0x150) = 1;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
      uVar2 = PlantFramework::Fire((PlantFramework *)this,aRStack_10,param_3,param_4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGluttonydragon::getDamageInfo(PlantWeapon) */

void PlantGluttonydragon::getDamageInfo(undefined8 param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  FUN_04d22a20(*(undefined8 *)(lVar1 + 0x70),param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(param_2 + 0x10));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* PlantGluttonydragon::CanBeTargetedBy(BoardEntity const*) */

undefined1 __thiscall
PlantGluttonydragon::CanBeTargetedBy(PlantGluttonydragon *this,BoardEntity *param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(this + 0x28);
  if ((10 < uVar1) && ((uVar1 < 0xf || (uVar1 == 0x10)))) {
    if (param_1 != (BoardEntity *)0x0) {
      bVar2 = Sexy::RtObject::IsA<ZombieGargantuar>((RtObject *)param_1);
      if (bVar2) {
        return 1;
      }
    }
    return 0;
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGluttonydragon::calcEnergy(float) */

void PlantGluttonydragon::calcEnergy(float param_1)

{
  undefined4 uVar1;
  PlantNameMapperServerID *pPVar2;
  undefined8 uVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
  Plant::GetType();
  uVar1 = PlantNameMapperServerID::GetIdForType(pPVar2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar3 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  fVar4 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar3,uVar1,0x23,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar4 * param_1 + param_1);
}


/* PlantGluttonydragon::PlantGluttonydragon() */

void __thiscall PlantGluttonydragon::PlantGluttonydragon(PlantGluttonydragon *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_069aa8e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  return;
}


/* PlantGluttonydragon::StaticNew() */

PlantGluttonydragon * PlantGluttonydragon::StaticNew(void)

{
  PlantGluttonydragon *this;
  
  this = ::operator_new(0x70);
  PlantGluttonydragon(this);
  return this;
}


/* PlantGluttonydragon::GetCurrentState() */

undefined1 __thiscall PlantGluttonydragon::GetCurrentState(PlantGluttonydragon *this)

{
  long lVar1;
  
  lVar1 = FUN_04d249fc(*(undefined8 *)(this + 0x10));
  if (*(float *)(this + 0x2c) == *(float *)(lVar1 + 0x2c8)) {
    return 2;
  }
  return *(float *)(this + 0x30) <= *(float *)(this + 0x2c);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGluttonydragon::pushAllZombies() */

void __thiscall PlantGluttonydragon::pushAllZombies(PlantGluttonydragon *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  Zombie *this_00;
  float fVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  lVar4 = FUN_04d249fc(*(undefined8 *)(this + 0x10));
  fVar6 = *(float *)(lVar4 + 0x2e4);
  puVar5 = (undefined8 *)Board::GetZombies(*(Board **)(gLawnApp + 0x9f0));
  local_18 = FUN_04d24540(*puVar5);
  local_10 = FUN_04d24590(puVar5[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (Zombie *)*puVar5;
    cVar2 = canBeMovedByPlant(this,this_00);
    if (cVar2 != '\0') {
      Zombie::Nudge(this_00,(float)(iVar3 * 9 + 200),fVar6,true);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGluttonydragon::Draw(Sexy::Graphics*) */

void PlantGluttonydragon::Draw(Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  wchar16 *pwVar6;
  float *pfVar7;
  long lVar8;
  Insets *pIVar9;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  float fVar10;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Draw(param_1);
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    pwVar6 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pIVar9 = aIStack_28;
    std::string::string(asStack_18,"HealthBars");
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar6,(wchar16 *)asStack_18,(LineBreakCategory *)pIVar9,in_x3,in_x4);
    std::string::~string(asStack_18);
    nop();
    if (cVar1 != '\0') {
      FUN_05478178(auStack_30,&DAT_056f11a8,asStack_18);
      nop();
      Sexy::StrFormat(L"%0.1f/%0.1f",asStack_18,(double)*(float *)(param_1 + 0x2c),
                      (double)(*(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x30)));
      FUN_054766c8(auStack_30,asStack_18);
      FUN_05476c50(asStack_18);
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(param_1 + 0x10));
      fVar10 = *pfVar7;
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar2 = FUN_04d22a30((int)(fVar10 - (float)(iVar2 / 2)));
      lVar8 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              **)(param_1 + 0x10));
      fVar10 = *(float *)(lVar8 + 4);
      iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
      iVar3 = FUN_04d22a30((int)((fVar10 - (float)iVar3) - 10.0));
      BoardConstants::GRIDSQUARE_WIDTH();
      iVar4 = FUN_04d22a30();
      BoardConstants::GRIDSQUARE_HEIGHT();
      iVar5 = FUN_04d22a30();
      Sexy::Insets::Insets(aIStack_28,iVar2,iVar3,iVar4,iVar5);
      PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12);
      Sexy::Color::Color((Color *)asStack_18,7);
      WriteWordInRect();
      FUN_05476c50(auStack_30);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGluttonydragon::zombieIsBlacklisted(Zombie const*) const */

void __thiscall PlantGluttonydragon::zombieIsBlacklisted(PlantGluttonydragon *this,Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ZombieGargantuar *pZVar9;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  bVar1 = std::operator==((string *)(lVar5 + 8),"dark_wizard");
  if (!bVar1) {
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    bVar1 = std::operator==((string *)(lVar5 + 8),"zombie_target_wizard");
    if (!bVar1) {
      cVar2 = Zombie::HasFogImmune(param_1);
      if (((cVar2 == '\0') &&
          (cVar2 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar2 == '\0')) &&
         (cVar2 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar2 == '\0')) {
        cVar2 = Zombie::CanTakeFatalDamage(param_1);
        if (cVar2 != '\0') {
          cVar3 = Zombie::IsBerserk(param_1);
          if (cVar3 == '\0') {
            lVar5 = FUN_04d249fc(*(undefined8 *)(this + 0x10));
            uVar6 = FUN_04d245e0(*(undefined8 *)(lVar5 + 0x2f0));
            uVar7 = FUN_04d24630(*(undefined8 *)(lVar5 + 0x2f8));
            lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
            local_18 = std::
                       find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                                 (uVar6,uVar7,lVar8 + 8);
            local_10 = FUN_04d24630(*(undefined8 *)(lVar5 + 0x2f8));
            bVar1 = __gnu_cxx::operator!=
                              ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
            cVar3 = cVar2;
            if (((!bVar1) &&
                (pZVar9 = Sexy::RtObject::Cast<ZombieGargantuar>((RtObject *)param_1),
                pZVar9 == (ZombieGargantuar *)0x0)) &&
               (iVar4 = Zombie::GetSizeType(param_1), iVar4 != 1)) {
              iVar4 = Zombie::GetSizeType(param_1);
              cVar3 = iVar4 == 2;
            }
          }
          goto LAB_04d24f60;
        }
      }
      cVar3 = '\x01';
      goto LAB_04d24f60;
    }
  }
  cVar3 = '\0';
LAB_04d24f60:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar3);
  }
  return;
}


/* PlantGluttonydragon::calcSuctionDestination(Zombie const*) const */

float __thiscall
PlantGluttonydragon::calcSuctionDestination(PlantGluttonydragon *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  fVar5 = *pfVar4;
  cVar1 = zombieIsBlacklisted(this,param_1);
  fVar6 = 30.0;
  if (cVar1 == '\0') {
    iVar2 = FUN_04d229a8(*(undefined4 *)(param_1 + 0x50));
    iVar3 = FUN_04d229d8(*(undefined8 *)(this + 0x10));
    fVar6 = 30.0;
    if (iVar2 <= iVar3) {
      fVar6 = 0.0;
    }
  }
  return fVar5 + 20.0 + fVar6;
}


/* PlantGluttonydragon::zombieIsInRange(Zombie const*) const */

undefined8 __thiscall
PlantGluttonydragon::zombieIsInRange(PlantGluttonydragon *this,Zombie *param_1)

{
  int iVar1;
  float *pfVar2;
  undefined8 uVar3;
  float fVar4;
  
  fVar4 = (float)calcSuctionDestination(this,param_1);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  if (5.0 < ABS(*pfVar2 - fVar4)) {
    return 0;
  }
  iVar1 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  uVar3 = BoardEntity::IsInRow((BoardEntity *)param_1,iVar1);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGluttonydragon::allSuctionZombiesAreWithinRange() */

void __thiscall PlantGluttonydragon::allSuctionZombiesAreWithinRange(PlantGluttonydragon *this)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  RtWeakPtr *this_00;
  ResourceInfo *pRVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x38));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x38));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    if (pRVar4 != (ResourceInfo *)0x0) {
      cVar2 = zombieIsInRange(this,(Zombie *)pRVar4);
      uVar3 = 0;
      if (cVar2 == '\0') goto LAB_04d2521c;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  uVar3 = 1;
LAB_04d2521c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* PlantGluttonydragon::~PlantGluttonydragon() */

void __thiscall PlantGluttonydragon::~PlantGluttonydragon(PlantGluttonydragon *this)

{
  *(undefined ***)this = &PTR_GetClass_069aa8e0;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x38));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantGluttonydragon::~PlantGluttonydragon() */

void __thiscall PlantGluttonydragon::~PlantGluttonydragon(PlantGluttonydragon *this)

{
  ~PlantGluttonydragon(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGluttonydragon::getEffectName() */

void PlantGluttonydragon::getEffectName(void)

{
  bool bVar1;
  int iVar2;
  long in_x0;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  string *in_x8;
  undefined8 local_40;
  undefined8 local_38;
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  Plant::GetType();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  NewAvatar::GetListByPlantName((string *)(lVar3 + 8),(vector *)avStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar1) {
      std::string::string(in_x8,"POPANIM_EFFECTS_GLUTTONYDRAGON_EFFECT");
      nop();
LAB_04d25964:
      std::vector<Sexy::RtWeakPtr<PlantNewAvatar>,std::allocator<Sexy::RtWeakPtr<PlantNewAvatar>>>::
      ~vector((vector<Sexy::RtWeakPtr<PlantNewAvatar>,std::allocator<Sexy::RtWeakPtr<PlantNewAvatar>>>
               *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this = (RtWeakPtr<Sexy::ResourceInfo> *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    iVar2 = FUN_04d229ac(*(undefined4 *)(*(long *)(in_x0 + 0x10) + 0x294));
    if ((*(int *)(lVar3 + 0x10) == iVar2) &&
       (lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this), *(int *)(lVar3 + 0x60) == 1)) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar3 + 0x60));
      std::operator+("POPANIM_EFFECTS_GLUTTONYDRAGON_EFFECT",(string *)aRStack_28);
      std::string::~string((string *)aRStack_28);
      FUN_05474148();
      std::string::~string(asStack_30);
      goto LAB_04d25964;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGluttonydragon::playFireEffect() */

void __thiscall PlantGluttonydragon::playFireEffect(PlantGluttonydragon *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  string *psVar4;
  char *pcVar5;
  char *pcVar6;
  GameObjectDictionary *pGVar7;
  AttachedEffect *pAVar8;
  ResourceInfo *pRVar9;
  undefined8 uVar10;
  Plant *this_00;
  code *pcVar11;
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"hz01");
  nop();
  psVar4 = asStack_20;
  std::string::string(asStack_30,"hhhhhhh02");
  nop();
  if (*(int *)(this + 0x28) == 0xd) {
    std::string::append(asStack_38,"hz_ls",(size_t)psVar4);
    std::string::append(asStack_30,"hhhhhhh_ls02",(size_t)psVar4);
  }
  else if (*(int *)(this + 0x28) == 0xe) {
    std::string::append(asStack_38,"hz_zs",(size_t)psVar4);
    std::string::append(asStack_30,"hhhhhhh_zs02",(size_t)psVar4);
  }
  Board::MakeRenderOrder(0x61e68,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
  Board::MakeRenderOrder(0x65130,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
  psVar4 = (string *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
  std::string::string(asStack_20,"gluttonydragon_fire");
  cVar1 = GameObjectDictionary::Contains(psVar4);
  std::string::~string(asStack_20);
  nop();
  if (cVar1 == '\0') {
    getEffectName();
    pcVar5 = (char *)FUN_0547429c(asStack_28);
    pcVar6 = (char *)FUN_0547429c(asStack_38);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_20,105.0,-43.0,0.0);
    this_00 = *(Plant **)(this + 0x10);
    iVar2 = Board::MakeRenderOrder(0x635d8,*(undefined4 *)(this_00 + 0x110),100);
    iVar3 = (**(code **)(*(long *)this + 0x88))(this);
    Plant::AddAttachedEffect
              (this_00,"gluttonydragon_fire",pcVar5,pcVar6,(SexyVector3 *)asStack_20,iVar2 - iVar3,
               false);
    std::string::~string(asStack_28);
  }
  else {
    pGVar7 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
    std::string::string(asStack_20,"gluttonydragon_fire");
    pAVar8 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(pGVar7,asStack_20);
    std::string::~string(asStack_20);
    nop();
    AttachedEffect::PlayAnimLooped(pAVar8,asStack_38,0);
  }
  psVar4 = (string *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
  std::string::string(asStack_20,"gluttonyfire_tiles");
  cVar1 = GameObjectDictionary::Contains(psVar4);
  std::string::~string(asStack_20);
  nop();
  if (cVar1 == '\0') {
    pGVar7 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
    std::string::string(asStack_20,"gluttonyfire_tiles");
    pAVar8 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(pGVar7,asStack_20);
    std::string::~string(asStack_20);
    nop();
    getEffectName();
    GetPAMByName(asStack_28);
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_20);
    AttachedEffect::InitializeWithAnimation(pAVar8,(PopAnim *)pRVar9);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
    std::string::~string(asStack_28);
    uVar10 = *(undefined8 *)(this + 0x10);
    pcVar11 = *(code **)(*(long *)pAVar8 + 0x18);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_20,120.0,-15.0,0.0);
    (*pcVar11)(pAVar8,uVar10,asStack_20,0xfffffffe);
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)asStack_20);
    std::string::string(asStack_28,"hhhhhhh");
    AnimationSequence::AddSingleAnimation(asStack_20,asStack_28,0);
    std::string::~string(asStack_28);
    nop();
    std::string::string(asStack_28,"hhhhhhh02");
    PVZ_EOT();
    AnimationSequence::AddLoopingAnimation(asStack_20,asStack_28,0);
    std::string::~string(asStack_28);
    nop();
    AttachedEffect::PlayAnimSequence(pAVar8,(AnimationSequence *)asStack_20);
    AnimationSequence::~AnimationSequence((AnimationSequence *)asStack_20);
  }
  else {
    pGVar7 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
    std::string::string(asStack_20,"gluttonyfire_tiles");
    pAVar8 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(pGVar7,asStack_20);
    std::string::~string(asStack_20);
    nop();
    AttachedEffect::PlayAnimLooped(pAVar8,asStack_30,0);
  }
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGluttonydragon::playLevelupEffect() */

void __thiscall PlantGluttonydragon::playLevelupEffect(PlantGluttonydragon *this)

{
  GameObjectDictionary *this_00;
  AttachedEffect *this_01;
  ResourceInfo *pRVar1;
  undefined8 uVar2;
  code *pcVar3;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
  std::string::string(asStack_18,"gluttony_levelup");
  this_01 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_00,asStack_18);
  std::string::~string(asStack_18);
  nop();
  getEffectName();
  GetPAMByName(asStack_20);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
  AttachedEffect::InitializeWithAnimation(this_01,(PopAnim *)pRVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  std::string::~string(asStack_20);
  uVar2 = *(undefined8 *)(this + 0x10);
  pcVar3 = *(code **)(*(long *)this_01 + 0x18);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,-5.0,0.0);
  (*pcVar3)(this_01,uVar2,asStack_18,0xffffffff);
  std::string::string(asStack_18,"hf");
  AttachedEffect::PlayAnimAndDestroy(this_01,asStack_18,0);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGluttonydragon::pullSuctionZombies() */

void __thiscall PlantGluttonydragon::pullSuctionZombies(PlantGluttonydragon *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  SkyCityStage *this_01;
  long lVar6;
  RtWeakPtr *pRVar7;
  ResourceInfo *this_02;
  float *pfVar8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_03;
  code *pcVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_8c;
  undefined8 local_88;
  undefined8 local_80;
  Point aPStack_78 [8];
  undefined8 local_70;
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (SkyCityStage *)FUN_04d24ca4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if ((this_01 == (SkyCityStage *)0x0) ||
     (cVar1 = SkyCityStage::IsHaveGridItemAirShip(this_01), cVar1 == '\0')) {
LAB_04d25f9c:
    lVar6 = FUN_04d249fc(*(undefined8 *)(this + 0x10));
    fVar12 = *(float *)(lVar6 + 0x2c8);
    iVar5 = *(int *)(lVar6 + 0x2d4);
    local_8c = fVar12;
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x38));
    local_80 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x38));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80), bVar2)
    {
      pRVar7 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
      this_02 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar7);
      if (this_02 != (ResourceInfo *)0x0) {
        fVar11 = (float)calcSuctionDestination(this,(Zombie *)this_02);
        Zombie::Nudge((Zombie *)this_02,fVar11,(float)iVar5,true);
        cVar1 = zombieIsBlacklisted(this,(Zombie *)this_02);
        if (cVar1 == '\0') {
          iVar3 = FUN_04d229a8(*(undefined4 *)(this_02 + 0x50));
          iVar4 = FUN_04d229d8(*(undefined8 *)(this + 0x10));
          if ((iVar3 + -1 <= iVar4) &&
             (cVar1 = zombieIsInRange(this,(Zombie *)this_02), cVar1 != '\0')) {
            uVar10 = *(undefined8 *)(this + 0x10);
            pcVar9 = *(code **)(*(long *)this_02 + 0x120);
            Sexy::Point::Point(aPStack_78,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)0x0,(undefined4)local_70,local_70._4_4_,(DamageInfo *)local_68,
                       4,uVar10,aPStack_78,0);
            (*pcVar9)(this_02,(DamageInfo *)local_68);
            DamageInfo::~DamageInfo((DamageInfo *)local_68);
            fVar13 = *(float *)(this + 0x2c);
            fVar11 = (float)calcEnergy(fVar12 * 0.2);
            local_68[0] = CONCAT44(local_68[0]._4_4_,fVar11 + fVar13);
            pfVar8 = eastl::min_alt<float>(&local_8c,(float *)local_68);
            *(float *)(this + 0x2c) = *pfVar8;
            playLevelupEffect(this);
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
    }
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  iVar5 = Reflection::RFunctionType::StaticGetTypeCategory();
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x38);
  iVar5 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar5);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
LAB_04d2618c:
  local_68[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)local_68);
  if (bVar2) {
    pRVar7 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    this_03 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar7);
    do {
      if (this_03 !=
          (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           *)0x0) {
        pfVar8 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(this_03);
        if ((float)iVar5 < *pfVar8) goto LAB_04d26244;
        Zombie::EndCondition((Zombie *)this_03,0x18);
        Zombie::SetIsControlled((Zombie *)this_03,false);
      }
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)local_68,(__normal_iterator *)&local_70);
      local_70 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
                           ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
                             *)this_00,local_68[0]);
      local_68[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)local_68);
      if (!bVar2) break;
      pRVar7 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
      this_03 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar7);
    } while( true );
  }
  goto LAB_04d25f9c;
LAB_04d26244:
  FUN_04d244e0((__normal_iterator *)&local_70);
  goto LAB_04d2618c;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGluttonydragon::UpdatePlantfood() */

void __thiscall PlantGluttonydragon::UpdatePlantfood(PlantGluttonydragon *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  RtWeakPtr *this_01;
  long *plVar3;
  Zombie *pZVar4;
  code *pcVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 local_88;
  undefined8 local_80;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x28) == 0x14) {
    pullSuctionZombies(this);
    cVar1 = allSuctionZombiesAreWithinRange(this);
    if (cVar1 != '\0') {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x38);
      local_88 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_00);
      local_80 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80),
            bVar2) {
        this_01 = (RtWeakPtr *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
        if (bVar2) {
          fVar7 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
          plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
          uVar6 = *(undefined8 *)(this + 0x10);
          pcVar5 = *(code **)(*plVar3 + 0x110);
          Sexy::Point::Point(aPStack_78,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)(fVar7 * 1000.0),local_70,local_6c,aDStack_68,uVar6,aPStack_78,0)
          ;
          (*pcVar5)(plVar3,aDStack_68);
          DamageInfo::~DamageInfo(aDStack_68);
          pZVar4 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
          Zombie::EndCondition(pZVar4,0x18);
          pZVar4 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
          Zombie::SetIsControlled(pZVar4,false);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
      }
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00)
      ;
    }
  }
  else if (*(int *)(this + 0x28) == 0x16) {
    pushAllZombies(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGluttonydragon::getLv5EffectName() */

void PlantGluttonydragon::getLv5EffectName(void)

{
  bool bVar1;
  int iVar2;
  long in_x0;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this;
  string *in_x8;
  undefined8 local_40;
  undefined8 local_38;
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  Plant::GetType();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  NewAvatar::GetListByPlantName((string *)(lVar3 + 8),(vector *)avStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar1) {
      std::string::string(in_x8,"POPANIM_PLANT_GLUTTONYDRAGON");
      nop();
LAB_04d26570:
      std::vector<Sexy::RtWeakPtr<PlantNewAvatar>,std::allocator<Sexy::RtWeakPtr<PlantNewAvatar>>>::
      ~vector((vector<Sexy::RtWeakPtr<PlantNewAvatar>,std::allocator<Sexy::RtWeakPtr<PlantNewAvatar>>>
               *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this = (RtWeakPtr<Sexy::ResourceInfo> *)
           std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
    iVar2 = FUN_04d229ac(*(undefined4 *)(*(long *)(in_x0 + 0x10) + 0x294));
    if ((*(int *)(lVar3 + 0x10) == iVar2) &&
       (lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this), *(int *)(lVar3 + 0x60) == 1)) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar3 + 0x60));
      std::operator+("POPANIM_PLANT_GLUTTONYDRAGON",(string *)aRStack_28);
      std::string::~string((string *)aRStack_28);
      FUN_05474148();
      std::string::~string(asStack_30);
      goto LAB_04d26570;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGluttonydragon::createLv5Effect() */

void __thiscall PlantGluttonydragon::createLv5Effect(PlantGluttonydragon *this)

{
  char cVar1;
  GluttonyFire_Effect *this_00;
  ResourceInfo *pRVar2;
  RtClass *pRVar3;
  GameObjectDictionary *this_01;
  AttachedEffect *this_02;
  UIWidget *this_03;
  PlantAnimRig *this_04;
  undefined8 uVar4;
  code *pcVar5;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<GluttonyFire_Effect>(*(Board **)(gLawnApp + 0x9f0));
  getLv5EffectName();
  GetPAMByName(asStack_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  pRVar3 = (RtClass *)Sexy::RtClass::StaticGetClassNamed("PlantAnimRig_Gluttonydragon");
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this_00,(PopAnim *)pRVar2,pRVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  Effect_PopAnim::SetPopAnimDelegates((Effect_PopAnim *)this_00);
  Effect_PopAnim::GetPopAnimRigPtr();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  nop();
  PlantAnimRig::SetState();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)asStack_20);
  CthulhuEyeballEffect::SetCthulhuEasyButton((CthulhuEyeballEffect *)this_00,aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
  this_01 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
  std::string::string((string *)aRStack_18,"gluttony_dummy");
  this_02 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_01,(string *)aRStack_18);
  std::string::~string((string *)aRStack_18);
  nop();
  AttachedEffect::InitializeWithEffectPopAnim(this_02,(Effect_PopAnim *)this_00);
  uVar4 = *(undefined8 *)(this + 0x10);
  pcVar5 = *(code **)(*(long *)this_02 + 0x18);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,-5.0,0.0);
  (*pcVar5)(this_02,uVar4,aRStack_18,0xffffffff);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    this_03 = (UIWidget *)AttachedEffect::GetEffect(this_02);
    UIWidget::GetAtlasImage(this_03);
    nop();
    PlantAnimRig::HideAllAvatarLayers(this_04);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_02);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGluttonydragon::markSuctionZombies() */

void __thiscall PlantGluttonydragon::markSuctionZombies(PlantGluttonydragon *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  SkyCityStage *this_00;
  long lVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float *pfVar5;
  ulong uVar6;
  Zombie *this_02;
  int iVar7;
  Zombie *pZVar8;
  undefined8 local_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar7 = *(int *)(*(long *)(this + 0x10) + 0x114);
  Sexy::Insets::Insets
            (aIStack_30,iVar7,*(int *)(*(long *)(this + 0x10) + 0x110),
             *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) - iVar7,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,aIStack_30);
  this_00 = (SkyCityStage *)FUN_04d24ca4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_00 == (SkyCityStage *)0x0) {
    lVar4 = FUN_04d249fc(*(undefined8 *)(this + 0x10));
    iVar7 = *(int *)(lVar4 + 0x2d0);
  }
  else {
    cVar1 = SkyCityStage::IsHaveGridItemAirShip(this_00);
    lVar4 = FUN_04d249fc(*(undefined8 *)(this + 0x10));
    iVar7 = *(int *)(lVar4 + 0x2d0);
    if (cVar1 != '\0') {
      iVar3 = Reflection::RFunctionType::StaticGetTypeCategory();
      iVar3 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar3);
      local_48 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40),
            bVar2) {
        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
        nop();
        if (((this_01 !=
              (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)0x0) && (cVar1 = canBeMovedByPlant(this,(Zombie *)this_01), cVar1 != '\0')) &&
           (pfVar5 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost(this_01), (float)iVar3 < *pfVar5)) {
          pZVar8._0_4_ = (Zombie *)PVZ_EOT();
          Zombie::ApplyCondition(pZVar8._0_4_,0,this_01,0x18,1);
          Zombie::SetIsControlled((Zombie *)this_01,true);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aIStack_30,(RtWeakPtrBase *)aRStack_38);
          std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                    ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                     (this + 0x38),(RtWeakPtr *)aIStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        }
        uVar6 = FUN_04d22a14(*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40));
        if ((ulong)(long)iVar7 <= uVar6) break;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
      }
      goto LAB_04d2693c;
    }
  }
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar2) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    nop();
    if ((this_02 != (Zombie *)0x0) && (cVar1 = canBeMovedByPlant(this,this_02), cVar1 != '\0')) {
      pZVar8._0_4_ = (Zombie *)PVZ_EOT();
      Zombie::ApplyCondition(pZVar8._0_4_,0,this_02,0x18,1);
      Zombie::SetIsControlled(this_02,true);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aIStack_30,(RtWeakPtrBase *)aRStack_38);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                 (this + 0x38),(RtWeakPtr *)aIStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    }
    uVar6 = FUN_04d22a14(*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40));
    if ((ulong)(long)iVar7 <= uVar6) break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  }
LAB_04d2693c:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGluttonydragon::findTargets(PlantWeapon, std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&) */

void __thiscall
PlantGluttonydragon::findTargets
          (PlantGluttonydragon *this,int param_2,
          vector<BoardEntity*,std::allocator<BoardEntity*>> *param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  Zombie *pZVar5;
  GridItem *pGVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  RtObject *local_58;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined1 auStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (**(code **)(*(long *)this + 0x2b8))(auStack_30,this,param_2);
  iVar7 = *(int *)(*(long *)(this + 0x10) + 0x110);
  uVar3 = operator|(4,2);
  iVar8 = iVar7;
  if (param_2 == 1) {
    iVar8 = iVar7 + 1;
    iVar7 = iVar7 + -1;
  }
  EntityFinder::GetEntitiesTouchingRectangle(avStack_20,uVar3,auStack_30,iVar7,iVar8);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar2) {
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    local_58 = (RtObject *)*puVar4;
    pZVar5 = Sexy::RtObject::Cast<Zombie>(local_58);
    if (pZVar5 != (Zombie *)0x0) {
      pcVar9 = *(code **)(*(long *)this + 0x3e0);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
      cVar1 = (*pcVar9)(this,aRStack_38,param_2);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      if (cVar1 != '\0') {
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  (param_3,(BoardEntity **)&local_58);
      }
    }
    pGVar6 = Sexy::RtObject::Cast<GridItem>(local_58);
    if ((pGVar6 != (GridItem *)0x0) &&
       (cVar1 = (**(code **)(*(long *)pGVar6 + 0x200))(), cVar1 != '\0')) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                (param_3,(BoardEntity **)&local_58);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGluttonydragon::setState(GluttonydragonState) */

void __thiscall PlantGluttonydragon::setState(PlantGluttonydragon *this,int param_2)

{
  char cVar1;
  long lVar2;
  PlantAnimRig_Gluttonydragon *extraout_x0;
  PlantAnimRig_Gluttonydragon *extraout_x0_00;
  PlantAnimRig_Gluttonydragon *extraout_x0_01;
  PlantAnimRig_Gluttonydragon *extraout_x0_02;
  string *psVar3;
  PlantAnimRig_Gluttonydragon *this_00;
  GameObjectDictionary *this_01;
  AttachedEffect *pAVar4;
  PopAnimRig *this_02;
  PlantAnimRig_Gluttonydragon *extraout_x0_03;
  PlantAnimRig_Gluttonydragon *this_03;
  StandaloneEffect *this_04;
  char *pcVar5;
  RealObject *pRVar6;
  float fVar7;
  string asStack_e0 [8];
  RtMixedPtr aRStack_d8 [8];
  RtId aRStack_d0 [64];
  string asStack_90 [64];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x28) == param_2) goto switchD_04d26d34_caseD_d;
  lVar2 = FUN_04d249fc(*(undefined8 *)(this + 0x10));
  fVar7 = *(float *)(lVar2 + 0x2c8);
  *(int *)(this + 0x28) = param_2;
  switch(param_2) {
  case 10:
    *(undefined4 *)(this + 0x58) = *(undefined4 *)(lVar2 + 0x2e8);
    if (*(float *)(this + 0x2c) == fVar7) {
      pcVar5 = "old_idle";
    }
    else if (*(float *)(this + 0x30) <= *(float *)(this + 0x2c)) {
      pcVar5 = "young_idle";
    }
    else {
      pcVar5 = "baby_idle";
    }
    std::string::string(asStack_90,pcVar5);
    nop();
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    PlantAnimRig_Gluttonydragon::PlayDragonIdle(this_03,asStack_90);
    std::string::~string(asStack_90);
    break;
  case 0xb:
    if (*(float *)(this + 0x2c) == fVar7) {
      pcVar5 = "jump02";
    }
    else {
      pcVar5 = "jump01";
    }
    goto LAB_04d272a0;
  case 0xc:
    if (*(float *)(this + 0x2c) == fVar7) {
      pcVar5 = "fly02";
    }
    else {
      pcVar5 = "fly01";
    }
    std::string::string(asStack_e0,pcVar5);
    nop();
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    PlantAnimRig_Gluttonydragon::PlayDragonIdle(this_00,asStack_e0);
    playFireEffect(this);
    psVar3 = (string *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
    std::string::string(asStack_90,"gluttony_dummy");
    cVar1 = GameObjectDictionary::Contains(psVar3);
    std::string::~string(asStack_90);
    nop();
    if (cVar1 != '\0') {
      this_01 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
      std::string::string(asStack_90,"gluttony_dummy");
      pAVar4 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_01,asStack_90);
      AttachedEffect::AttachedEffect((AttachedEffect *)aRStack_d0,pAVar4);
      std::string::~string(asStack_90);
      nop();
      AttachedEffect::GetEffect((AttachedEffect *)aRStack_d0);
      Effect_PopAnim::GetPopAnimRigPtr();
      this_02 = (PopAnimRig *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d8);
      std::string::string(asStack_90,"lv5tuhuo03");
      cVar1 = PopAnimRig::IsAnimStringActive(this_02,asStack_90);
      std::string::~string(asStack_90);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d8);
      if (cVar1 == '\0') {
        psVar3 = (string *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
        std::string::string(asStack_90,"gluttony_dummy");
        GameObjectDictionary::Remove(psVar3);
        std::string::~string(asStack_90);
        nop();
        pAVar4 = (AttachedEffect *)createLv5Effect(this);
        AttachedEffect::AttachedEffect((AttachedEffect *)asStack_90,pAVar4);
        this_04 = (StandaloneEffect *)AttachedEffect::GetEffect((AttachedEffect *)asStack_90);
        StandaloneEffect::SetKeepAlive(this_04,false);
        std::string::string((string *)aRStack_d8,"lv5tuhuo03");
        AttachedEffect::PlayAnimAndDestroy
                  ((AttachedEffect *)asStack_90,(RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d8,0);
        std::string::~string((string *)aRStack_d8);
        nop();
        AttachedEffect::~AttachedEffect((AttachedEffect *)asStack_90);
      }
      this[0x6c] = (PlantGluttonydragon)0x0;
      AttachedEffect::~AttachedEffect((AttachedEffect *)aRStack_d0);
    }
    goto LAB_04d2735c;
  case 0xf:
    if (*(float *)(this + 0x2c) == fVar7) {
      pcVar5 = "young_bs";
    }
    else {
      pcVar5 = "baby_bs";
    }
LAB_04d272a0:
    std::string::string(asStack_e0,pcVar5);
    nop();
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_d8);
    std::string::string(asStack_90,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_d0,
               asStack_90);
    PlantAnimRig_Gluttonydragon::PlayJumpOrLanding
              (extraout_x0_03,asStack_e0,
               (RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
LAB_04d27334:
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_90);
    nop();
    Sexy::RtId::~RtId(aRStack_d0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d8);
LAB_04d2735c:
    std::string::~string(asStack_e0);
    break;
  case 0x10:
    if (*(float *)(this + 0x2c) < *(float *)(this + 0x30)) {
      pcVar5 = "luodi02";
    }
    else {
      pcVar5 = "luodi01";
    }
    std::string::string(asStack_e0,pcVar5);
    nop();
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_d8);
    std::string::string(asStack_90,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_d0,
               asStack_90);
    PlantAnimRig_Gluttonydragon::PlayJumpOrLanding(extraout_x0_02,asStack_e0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_90);
    nop();
    Sexy::RtId::~RtId(aRStack_d0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d8);
    psVar3 = (string *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
    std::string::string(asStack_90,"gluttonydragon_fire");
    GameObjectDictionary::Remove(psVar3);
    std::string::~string(asStack_90);
    nop();
    *(undefined4 *)(this + 0x34) = 0;
    cVar1 = FUN_04d229e0(*(undefined8 *)(this + 0x10));
    if (cVar1 != '\0') {
      this[0x6c] = (PlantGluttonydragon)0x1;
      *(float *)(this + 100) = *(float *)(this + 100) + 1.3 + *(float *)(this + 0x60) * 0.5;
    }
    *(undefined4 *)(this + 0x60) = 0;
    std::string::~string(asStack_e0);
    break;
  case 0x11:
    if (*(float *)(this + 0x30) <= *(float *)(this + 0x2c)) {
      pcVar5 = "chilingshi02";
    }
    else {
      pcVar5 = "chilingshi01";
    }
    std::string::string(asStack_e0,pcVar5);
    nop();
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_d8);
    std::string::string(asStack_90,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_d0,
               asStack_90);
    PlantAnimRig_Gluttonydragon::PlayCharged
              (extraout_x0_01,asStack_e0,
               (RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
    goto LAB_04d27334;
  case 0x13:
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_d8);
    std::string::string(asStack_90,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_d0,
               asStack_90);
    PlantAnimRig_Gluttonydragon::PlayGnaw(extraout_x0_00,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_90);
    nop();
    Sexy::RtId::~RtId(aRStack_d0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d8);
    pRVar6 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_90,"Play_Plant_Chomper_Attack_Chew");
    RealObject::PlayPositionalSound(pRVar6,asStack_90,0.0);
    std::string::~string(asStack_90);
    nop();
    break;
  case 0x14:
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar1 == '\0') {
      pcVar5 = "plantfood01";
    }
    else {
      pcVar5 = "plantfood02";
    }
    std::string::string(asStack_e0,pcVar5);
    nop();
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_d8);
    std::string::string(asStack_90,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_d0,
               asStack_90);
    PlantAnimRig_Gluttonydragon::PlayJumpOrLanding(extraout_x0,asStack_e0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_90);
    nop();
    Sexy::RtId::~RtId(aRStack_d0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d8);
    markSuctionZombies(this);
    pRVar6 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_90,"Play_Plant_Chomper_PlantFood_Start");
    RealObject::PlayPositionalSound(pRVar6,asStack_90,0.0);
    std::string::~string(asStack_90);
    nop();
    std::string::~string(asStack_e0);
  }
switchD_04d26d34_caseD_d:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGluttonydragon::Initialize() */

void __thiscall PlantGluttonydragon::Initialize(PlantGluttonydragon *this)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  long extraout_x0;
  float fVar4;
  undefined4 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  FUN_04d229b4(aRStack_10,*(undefined8 *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar5 = *(undefined4 *)(extraout_x0 + 0x2e8);
  uVar1 = *(undefined4 *)(extraout_x0 + 0x2d8);
  fVar4 = *(float *)(extraout_x0 + 0x2c8) * 0.5;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x58) = uVar5;
  *(undefined4 *)(this + 0x50) = uVar1;
  *(float *)(this + 0x30) = fVar4;
  *(float *)(this + 0x2c) = fVar4;
  fVar4 = (float)PVZ_T();
  this[0x6d] = (PlantGluttonydragon)0x0;
  this[0x6c] = (PlantGluttonydragon)0x0;
  *(undefined4 *)(this + 100) = 0;
  *(float *)(this + 0x54) = fVar4 + *(float *)(this + 0x50);
  uVar5 = PVZ_T();
  *(undefined4 *)(this + 0x68) = uVar5;
  setState(this,10);
  if (((*(long **)(gLawnApp + 0x9f0) != (long *)0x0) &&
      (cVar2 = (**(code **)(**(long **)(gLawnApp + 0x9f0) + 0x328))(), cVar2 != '\0')) &&
     (iVar3 = FUN_04d229d8(*(undefined8 *)(this + 0x10)), 1 < iVar3)) {
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)(extraout_x0 + 0x2c8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGluttonydragon::ApplyPlantfood() */

void __thiscall PlantGluttonydragon::ApplyPlantfood(PlantGluttonydragon *this)

{
  char cVar1;
  string *psVar2;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  psVar2 = (string *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
  std::string::string(asStack_10,"gluttonydragon_fire");
  GameObjectDictionary::Remove(psVar2);
  std::string::~string(asStack_10);
  nop();
  playEndEffect(this);
  cVar1 = FUN_04d229e0(*(undefined8 *)(this + 0x10));
  if (cVar1 != '\0') {
    fVar3 = *(float *)(this + 0x60);
    *(undefined4 *)(this + 0x60) = 0;
    *(float *)(this + 100) = *(float *)(this + 100) + 1.3 + fVar3 * 0.5;
  }
  setState(this,0x14);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGluttonydragon::CancelPlantfood() */

void __thiscall PlantGluttonydragon::CancelPlantfood(PlantGluttonydragon *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGluttonydragon::onStandaloneEffectFinishedCallback(StandaloneEffect*) */

void __thiscall
PlantGluttonydragon::onStandaloneEffectFinishedCallback
          (PlantGluttonydragon *this,StandaloneEffect *param_1)

{
  char cVar1;
  UIWidget *this_00;
  PopAnimRig *this_01;
  string *psVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  this_01 = (PopAnimRig *)UIWidget::GetAtlasImage(this_00);
  std::string::string(asStack_18,"luodi01");
  cVar1 = PopAnimRig::IsAnimStringActive(this_01,asStack_18);
  if (cVar1 == '\0') {
    std::string::string(asStack_10,"luodi02");
    cVar1 = PopAnimRig::IsAnimStringActive(this_01,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    if (cVar1 == '\0') {
      setState(this,0xc);
      goto LAB_04d277c8;
    }
  }
  else {
    std::string::~string(asStack_18);
    nop();
  }
  setState(this,10);
  psVar2 = (string *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
  std::string::string(asStack_10,"gluttonydragon_dummy");
  GameObjectDictionary::Remove(psVar2);
  std::string::~string(asStack_10);
  nop();
LAB_04d277c8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGluttonydragon::turnToBig(float, bool) */

void __thiscall PlantGluttonydragon::turnToBig(PlantGluttonydragon *this,float param_1,bool param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(this + 0x30);
  if (((fVar1 <= param_1) || (*(float *)(this + 0x2c) < fVar1)) &&
     ((fVar1 + fVar1 != *(float *)(this + 0x2c) || (param_1 == fVar1 + fVar1)))) {
    if (!param_2) {
      return;
    }
    setState(this,10);
    return;
  }
  setState(this,0xf);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGluttonydragon::damageTargets(PlantWeapon) */

void __thiscall PlantGluttonydragon::damageTargets(PlantGluttonydragon *this,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *extraout_x0;
  undefined8 *puVar6;
  float *pfVar7;
  RtObject *this_00;
  float fVar8;
  float fVar9;
  ulong local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [8];
  float local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_04d249fc(*(undefined8 *)(this + 0x10));
  getDamageInfo(aDStack_68,this,param_2);
  if (*(int *)(this + 0x28) == 0xd) {
    local_60 = local_60 + local_60;
  }
  else if (*(int *)(this + 0x28) == 0xe) {
    local_60 = local_60 * 3.0;
  }
  if (*(code **)(*(long *)this + 0x198) == PlantFramework::GetDamageFlags) {
    uVar5 = PlantFramework::GetDamageFlags();
  }
  else {
    uVar5 = (**(code **)(*(long *)this + 0x198))(this,param_2);
  }
  operator|=(auStack_58,uVar5);
  operator|=(auStack_58,0x400);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  findTargets(this,param_2,avStack_80);
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar2) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
    this_00 = (RtObject *)*puVar6;
    if ((this_00 == (RtObject *)0x0) || (bVar2 = Sexy::RtObject::IsA<Zombie>(this_00), !bVar2)) {
      (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_68);
    }
    else {
      nop();
      (**(code **)(*extraout_x0 + 0x110))();
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
  }
  if (param_2 == 1) {
    iVar1 = *(int *)(lVar4 + 0x2cc);
    iVar3 = FUN_04d229d8(*(undefined8 *)(this + 0x10));
    if (iVar3 == 2) {
      fVar8 = 1.0 - *(float *)(lVar4 + 0x2b8);
    }
    else {
      fVar8 = 1.0;
      if (2 < iVar3) {
        fVar8 = 1.0 - *(float *)(lVar4 + 700);
      }
    }
    local_90 = local_90 & 0xffffffff00000000;
    *(float *)(this + 0x34) = *(float *)(this + 0x34) + (float)iVar1 * fVar8;
    local_88 = CONCAT44(local_88._4_4_,*(float *)(this + 0x2c) - (float)iVar1 * fVar8);
    pfVar7 = eastl::max_alt<float>((float *)&local_90,(float *)&local_88);
    *(float *)(this + 0x2c) = *pfVar7;
  }
  else {
    fVar9 = *(float *)(this + 0x2c);
    fVar8 = (float)calcEnergy(*(float *)(lVar4 + 0x2dc));
    local_88 = CONCAT44(local_88._4_4_,fVar8 + fVar9);
    pfVar7 = eastl::min_alt<float>((float *)&local_88,(float *)(lVar4 + 0x2c8));
    *(float *)(this + 0x2c) = *pfVar7;
    playLevelupEffect(this);
    turnToBig(this,(float)(int)fVar9,false);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGluttonydragon::onAnimStoppedCallback(std::string const&) */

void __thiscall
PlantGluttonydragon::onAnimStoppedCallback(PlantGluttonydragon *this,string *param_1)

{
  bool bVar1;
  string *psVar2;
  long lVar3;
  float *pfVar4;
  RealObject *this_00;
  float fVar5;
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"baby_kenyao");
  if ((((bVar1) || (bVar1 = std::operator==(param_1,"luodi02"), bVar1)) ||
      (bVar1 = std::operator==(param_1,"luodi01"), bVar1)) ||
     ((bVar1 = std::operator==(param_1,"baby_bs"), bVar1 ||
      (bVar1 = std::operator==(param_1,"young_bs"), bVar1)))) {
    setState(this,10);
    psVar2 = (string *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
    std::string::string((string *)local_10,"gluttonydragon_dummy");
    GameObjectDictionary::Remove(psVar2);
    std::string::~string((string *)local_10);
    nop();
    this_00 = *(RealObject **)(this + 0x10);
    std::string::string((string *)local_10,"Play_Plant_FirePeaShooter_PlantFood_End");
    RealObject::PlayPositionalSound(this_00,(string *)local_10,0.0);
    std::string::~string((string *)local_10);
    nop();
  }
  else {
    bVar1 = std::operator==(param_1,"chilingshi01");
    if ((bVar1) || (bVar1 = std::operator==(param_1,"chilingshi02"), bVar1)) {
      lVar3 = FUN_04d249fc(*(undefined8 *)(this + 0x10));
      fVar5 = *(float *)(this + 0x2c);
      local_10[0] = (float)calcEnergy(*(float *)(lVar3 + 0x2e0));
      local_10[0] = local_10[0] + fVar5;
      pfVar4 = eastl::min_alt<float>(local_10,(float *)(lVar3 + 0x2c8));
      *(float *)(this + 0x2c) = *pfVar4;
      playLevelupEffect(this);
      turnToBig(this,(float)(int)fVar5,true);
    }
    else {
      bVar1 = std::operator==(param_1,"jump01");
      if ((bVar1) || (bVar1 = std::operator==(param_1,"jump02"), bVar1)) {
        setState(this,0xc);
      }
      else {
        bVar1 = std::operator==(param_1,"plantfood02");
        if ((bVar1) || (bVar1 = std::operator==(param_1,"plantfood01"), bVar1)) {
          setState(this,0x19);
        }
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGluttonydragon::UpdateActions() */

void __thiscall PlantGluttonydragon::UpdateActions(PlantGluttonydragon *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  RealObject *this_00;
  float fVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(this + 0x28)) {
  case 10:
    fVar6 = (float)PVZ_Dt();
    *(float *)(this + 0x58) = *(float *)(this + 0x58) - fVar6;
  case 0x11:
    if ((*(float *)(this + 0x2c) < *(float *)(this + 0x30) + *(float *)(this + 0x30)) ||
       (cVar1 = (**(code **)(*(long *)this + 0x150))(this,1), cVar1 == '\0')) {
      cVar1 = (**(code **)(*(long *)this + 0x150))(this,0);
      if (cVar1 == '\0') {
        if ((*(float *)(this + 0x58) <= 0.0) &&
           (*(float *)(this + 0x2c) != *(float *)(this + 0x30) + *(float *)(this + 0x30))) {
          setState(this,0x11);
        }
      }
      else {
        fVar6 = (float)PVZ_T();
        if (fVar6 <= *(float *)(this + 0x68)) {
          setState(this,10);
        }
        else {
          setState(this,0x13);
          fVar6 = (float)PVZ_T();
          *(float *)(this + 0x68) = fVar6 + 2.0;
        }
      }
    }
    else {
      setState(this,0xb);
    }
  default:
    goto switchD_04d27de4_caseD_b;
  case 0xc:
    uVar5 = *(undefined8 *)(this + 0x10);
    iVar2 = FUN_04d229d8(uVar5);
    if (1 < iVar2) {
      lVar3 = FUN_04d249fc(uVar5);
      piVar4 = (int *)FUN_04d22a00(*(undefined8 *)(lVar3 + 0x308),0);
      if ((*piVar4 != 0) && ((float)*piVar4 <= *(float *)(this + 0x34))) {
        setState(this,0xd);
        playFireEffect(this);
      }
      goto switchD_04d27de4_caseD_d;
    }
    break;
  case 0xd:
switchD_04d27de4_caseD_d:
    uVar5 = *(undefined8 *)(this + 0x10);
    iVar2 = FUN_04d229d8(uVar5);
    if (2 < iVar2) {
      lVar3 = FUN_04d249fc(uVar5);
      piVar4 = (int *)FUN_04d22a00(*(undefined8 *)(lVar3 + 0x308),1);
      if ((*piVar4 != 0) && ((float)*piVar4 <= *(float *)(this + 0x34))) {
        setState(this,0xe);
        playFireEffect(this);
      }
    }
    break;
  case 0xe:
    break;
  }
  fVar6 = (float)PVZ_Dt();
  *(float *)(this + 0x60) = *(float *)(this + 0x60) + fVar6;
  fVar6 = (float)PVZ_T();
  if (*(float *)(this + 0x54) < fVar6) {
    damageTargets(this,1);
    fVar6 = (float)PVZ_T();
    *(float *)(this + 0x54) = fVar6 + *(float *)(this + 0x50);
    fVar6 = (float)PVZ_T();
    if (*(float *)(this + 0x5c) < fVar6) goto LAB_04d27fa0;
LAB_04d27ec0:
    fVar6 = *(float *)(this + 0x2c);
  }
  else {
    fVar6 = (float)PVZ_T();
    if (fVar6 <= *(float *)(this + 0x5c)) goto LAB_04d27ec0;
LAB_04d27fa0:
    this_00 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_10,"Play_Plant_FirePeaShooter_PlantFood_Start");
    RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
    fVar6 = (float)PVZ_T();
    *(float *)(this + 0x5c) = fVar6 + 1.0;
    fVar6 = *(float *)(this + 0x2c);
  }
  if ((fVar6 <= 0.0) || (cVar1 = (**(code **)(*(long *)this + 0x150))(this,1), cVar1 == '\0')) {
    playEndEffect(this);
    setState(this,0x10);
    *(undefined4 *)(this + 0x5c) = 0;
  }
switchD_04d27de4_caseD_b:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGluttonydragon::OnAnimCommand(std::string const&, std::string const&) */

void PlantGluttonydragon::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  float *pfVar3;
  code *pcVar4;
  RealObject *this;
  float fVar5;
  float local_18 [2];
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"use_action");
  if (bVar1) {
    switch(*(undefined4 *)(param_1 + 0x28)) {
    case 0xc:
    case 0xd:
    case 0xe:
      cVar2 = FUN_04d229e0(*(undefined8 *)(param_1 + 0x10));
      if (cVar2 != '\0') {
        pcVar4 = *(code **)(*(long *)param_1 + 0xb0);
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_10);
        (*pcVar4)(param_1,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_10
                  ,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x110),1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
      }
      break;
    case 0x13:
      damageTargets((PlantGluttonydragon *)param_1,0);
      break;
    case 0x14:
      cVar2 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
      if (cVar2 != '\0') {
        fVar5 = *(float *)(param_1 + 0x2c);
        local_18[0] = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x30);
        local_10[0] = (float)calcEnergy(local_18[0] * 0.4);
        local_10[0] = local_10[0] + fVar5;
        pfVar3 = eastl::min_alt<float>(local_18,local_10);
        *(float *)(param_1 + 0x2c) = *pfVar3;
        playLevelupEffect((PlantGluttonydragon *)param_1);
      }
    }
  }
  else {
    bVar1 = std::operator==(param_2,"use_action1");
    if (bVar1) {
      setState((PlantGluttonydragon *)param_1,0x16);
      this = *(RealObject **)(param_1 + 0x10);
      std::string::string((string *)local_10,"Play_Plant_Chomper_PlantFood_Stop");
      RealObject::PlayPositionalSound(this,(string *)local_10,0.0);
      std::string::~string((string *)local_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGluttonydragon::UpdateUnconditionally() */

void __thiscall PlantGluttonydragon::UpdateUnconditionally(PlantGluttonydragon *this)

{
  char cVar1;
  string *psVar2;
  GameObjectDictionary *this_00;
  AttachedEffect *pAVar3;
  StandaloneEffect *this_01;
  float fVar4;
  float fVar5;
  string asStack_68 [8];
  PIInterpolator aPStack_60 [24];
  string asStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x6c] != (PlantGluttonydragon)0x0) {
    psVar2 = (string *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
    std::string::string(asStack_48,"gluttony_dummy");
    cVar1 = GameObjectDictionary::Contains(psVar2);
    std::string::~string(asStack_48);
    nop();
    if (cVar1 == '\0') {
      pAVar3 = (AttachedEffect *)createLv5Effect(this);
      AttachedEffect::AttachedEffect((AttachedEffect *)asStack_48,pAVar3);
      Sexy::PIInterpolator::PIInterpolator(aPStack_60);
      std::string::string(asStack_68,"lv5tuhuo");
      AnimationSequence::AddSingleAnimation(aPStack_60,asStack_68,0);
      std::string::~string(asStack_68);
      nop();
      std::string::string(asStack_68,"lv5tuhuo02");
      PVZ_EOT();
      AnimationSequence::AddLoopingAnimation(aPStack_60,asStack_68,0);
      std::string::~string(asStack_68);
      nop();
      AttachedEffect::PlayAnimSequence((AttachedEffect *)asStack_48,(AnimationSequence *)aPStack_60)
      ;
      AnimationSequence::~AnimationSequence((AnimationSequence *)aPStack_60);
      AttachedEffect::~AttachedEffect((AttachedEffect *)asStack_48);
    }
    fVar4 = (float)PVZ_Dt();
    fVar5 = *(float *)(this + 100);
    *(float *)(this + 100) = fVar5 - fVar4;
    if (fVar5 - fVar4 < 0.0) {
      psVar2 = (string *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
      std::string::string(asStack_48,"gluttony_dummy");
      cVar1 = GameObjectDictionary::Contains(psVar2);
      std::string::~string(asStack_48);
      nop();
      if (cVar1 != '\0') {
        this_00 = (GameObjectDictionary *)Plant::GetAttachedEffectManager(*(Plant **)(this + 0x10));
        std::string::string(asStack_48,"gluttony_dummy");
        pAVar3 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_00,asStack_48);
        std::string::~string(asStack_48);
        nop();
        this_01 = (StandaloneEffect *)AttachedEffect::GetEffect(pAVar3);
        StandaloneEffect::SetKeepAlive(this_01,false);
        std::string::string(asStack_48,"lv5tuhuo03");
        AttachedEffect::PlayAnimAndDestroy(pAVar3,asStack_48,0);
        std::string::~string(asStack_48);
        nop();
        this[0x6c] = (PlantGluttonydragon)0x0;
      }
      *(undefined4 *)(this + 100) = 0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

