// Class: PlantChomper


/* PlantChomper::CanEndPlantfood() */

bool __thiscall PlantChomper::CanEndPlantfood(PlantChomper *this)

{
  return 4 < *(int *)(*(long *)(this + 0x10) + 200) - 0xfU;
}


/* PlantChomper::Initialize() */

void __thiscall PlantChomper::Initialize(PlantChomper *this)

{
  undefined4 uVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChomper::StaticClassInit() */

void PlantChomper::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantChomper");
    (*pcVar2)(plVar1,asStack_10,FUN_03ff9cb0,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantChomper::StaticGetClass() */

long * PlantChomper::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantChomper",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantChomper::GetClass() const */

long * PlantChomper::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantChomper",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantChomper::CanPullHelmFrom(Zombie*) */

byte __thiscall PlantChomper::CanPullHelmFrom(PlantChomper *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar5;
  
  iVar3 = FUN_03ff7ad0(*(undefined8 *)(this + 0x10));
  iVar4 = FUN_03ff7aac(*(undefined4 *)(param_1 + 0x50));
  if (iVar4 <= iVar3) {
    FUN_03ff7af8(*(undefined4 *)(param_1 + 0xb0));
    cVar1 = Zombie::IsHelmTypeMetallic();
    if ((cVar1 != '\0') && (cVar1 = RealObject::IsOnTeam(param_1,2), cVar1 != '\0')) {
      pEVar5 = (EntityConditionTracker<Zombie,ZombieConditions> *)
               Zombie::GetConditionTracker(param_1);
      cVar1 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(pEVar5,0x19);
      if (cVar1 == '\0') {
        pEVar5 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                 Zombie::GetConditionTracker(param_1);
        bVar2 = EntityConditionTracker<Zombie,ZombieConditions>::HasCondition(pEVar5,0x77);
        return bVar2 ^ 1;
      }
    }
  }
  return 0;
}


/* PlantChomper::PlantChomper() */

void __thiscall PlantChomper::PlantChomper(PlantChomper *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067b2260;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x28) = uVar1;
  *(undefined4 *)(this + 0x2c) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  *(undefined4 *)(this + 0x48) = 0;
  return;
}


/* PlantChomper::StaticNew() */

PlantChomper * PlantChomper::StaticNew(void)

{
  PlantChomper *this;
  
  this = ::operator_new(0x50);
  PlantChomper(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChomper::pushAllZombies() */

void __thiscall PlantChomper::pushAllZombies(PlantChomper *this)

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
  lVar4 = FUN_03ff8fa4(*(undefined8 *)(this + 0x10));
  fVar6 = *(float *)(lVar4 + 0x304);
  puVar5 = (undefined8 *)Board::GetZombies(*(Board **)(gLawnApp + 0x9f0));
  local_18 = FUN_03ff8d94(*puVar5);
  local_10 = FUN_03ff8de4(puVar5[1]);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (Zombie *)*puVar5;
    cVar2 = PlantGluttonydragon::canBeMovedByPlant((PlantGluttonydragon *)this,this_00);
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
/* PlantChomper::PushFrontZombies() */

void __thiscall PlantChomper::PushFrontZombies(PlantChomper *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  float fVar7;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  iVar1 = *(int *)(*(long *)(this + 0x10) + 0x114);
  local_8 = ___stack_chk_guard;
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  lVar5 = FUN_03ff8fa4(*(undefined8 *)(this + 0x10));
  fVar7 = *(float *)(lVar5 + 0x304);
  Sexy::Insets::Insets
            (aIStack_30,*(int *)(*(long *)(this + 0x10) + 0x114),
             *(int *)(*(long *)(this + 0x10) + 0x110),2,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,aIStack_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
    cVar3 = PlantGluttonydragon::canBeMovedByPlant((PlantGluttonydragon *)this,this_00);
    if (cVar3 != '\0') {
      Zombie::Nudge(this_00,(float)((iVar1 + 2) * iVar4 + 200),fVar7,true);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
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
/* PlantChomper::DropMetal() */

void __thiscall PlantChomper::DropMetal(PlantChomper *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  Zombie *pZVar6;
  undefined8 uVar7;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  iVar1 = *(int *)(*(long *)(this + 0x10) + 0x110);
  local_8 = ___stack_chk_guard;
  iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets
            (aIStack_30,*(int *)(*(long *)(this + 0x10) + 0x114),iVar1,
             iVar4 - *(int *)(*(long *)(this + 0x10) + 0x114),1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,aIStack_30);
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
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
    cVar3 = CanPullHelmFrom(this,pZVar6);
    if (cVar3 != '\0') {
      uVar7 = (**(code **)(*(long *)pZVar6 + 0x248))(pZVar6);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_40,0.0,0.0,0.0);
      ZombieParticle::SetBounceMotionWithVelocity(local_40,local_3c,local_38,uVar7);
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
/* PlantChomper::zombieIsBlacklisted(Zombie const*) const */

void __thiscall PlantChomper::zombieIsBlacklisted(PlantChomper *this,Zombie *param_1)

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
            lVar5 = FUN_03ff8fa4(*(undefined8 *)(this + 0x10));
            uVar6 = FUN_03ff8cf4(*(undefined8 *)(lVar5 + 0x2e0));
            uVar7 = FUN_03ff8d44(*(undefined8 *)(lVar5 + 0x2e8));
            lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
            local_18 = std::
                       find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                                 (uVar6,uVar7,lVar8 + 8);
            local_10 = FUN_03ff8d44(*(undefined8 *)(lVar5 + 0x2e8));
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
          goto LAB_03ff9428;
        }
      }
      cVar3 = '\x01';
      goto LAB_03ff9428;
    }
  }
  cVar3 = '\0';
LAB_03ff9428:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar3);
  }
  return;
}


/* PlantChomper::calcSuctionDestination(Zombie const*) const */

float __thiscall PlantChomper::calcSuctionDestination(PlantChomper *this,Zombie *param_1)

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
    iVar2 = FUN_03ff7aac(*(undefined4 *)(param_1 + 0x50));
    iVar3 = FUN_03ff7ad0(*(undefined8 *)(this + 0x10));
    fVar6 = 30.0;
    if (iVar2 <= iVar3) {
      fVar6 = 0.0;
    }
  }
  return fVar5 + 20.0 + fVar6;
}


/* PlantChomper::zombieIsInRange(Zombie const*) const */

undefined8 __thiscall PlantChomper::zombieIsInRange(PlantChomper *this,Zombie *param_1)

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
/* PlantChomper::allSuctionZombiesAreWithinRange() */

void __thiscall PlantChomper::allSuctionZombiesAreWithinRange(PlantChomper *this)

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
                      *)(this + 0x30));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x30));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    if (pRVar4 != (ResourceInfo *)0x0) {
      cVar2 = zombieIsInRange(this,(Zombie *)pRVar4);
      uVar3 = 0;
      if (cVar2 == '\0') goto LAB_03ff96e4;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  uVar3 = 1;
LAB_03ff96e4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* PlantChomper::~PlantChomper() */

void __thiscall PlantChomper::~PlantChomper(PlantChomper *this)

{
  *(undefined ***)this = &PTR_GetClass_067b2260;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantChomper::~PlantChomper() */

void __thiscall PlantChomper::~PlantChomper(PlantChomper *this)

{
  ~PlantChomper(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChomper::PlayBurpEffect(std::string const&, Sexy::SexyVector2 const&) */

void __thiscall
PlantChomper::PlayBurpEffect(PlantChomper *this,string *param_1,SexyVector2 *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  Effect_PopAnim *this_00;
  long lVar6;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  ResourceInfo *pRVar7;
  undefined8 local_50;
  undefined8 local_48;
  string asStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  Vec3 aVStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  EATextSquish::Vec3::Vec3
            (aVStack_30,(float)(int)(*(float *)param_2 + *pfVar5),
             (float)(int)(*(float *)(param_2 + 4) + pfVar5[1]),0.0);
  uVar3 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  Plant::GetType();
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
  NewAvatar::GetListByPlantName((string *)(lVar6 + 8),(vector *)avStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
    if (!bVar1) {
LAB_03ff9948:
      Effect_PopAnim::GetPopAnimRigPtr();
      cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      if (cVar2 != '\0') {
        std::string::string(asStack_40,"POPANIM_EFFECTS_CHOMPER_BULLET");
        GetPAMByName(asStack_40);
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_38);
        Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar7,(RtClass *)0x0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        std::string::~string(asStack_40);
        nop();
      }
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_00,(SexyVector3 *)aVStack_30,-1);
      FUN_03ff7aa4(this_00 + 0x1c,uVar3);
      Effect_PopAnim::PlaySingleAnimation(this_00,param_1,0);
      std::vector<Sexy::RtWeakPtr<PlantNewAvatar>,std::allocator<Sexy::RtWeakPtr<PlantNewAvatar>>>::
      ~vector((vector<Sexy::RtWeakPtr<PlantNewAvatar>,std::allocator<Sexy::RtWeakPtr<PlantNewAvatar>>>
               *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    iVar4 = FUN_03ff7ab0(*(undefined4 *)(*(long *)(this + 0x10) + 0x294));
    if ((*(int *)(lVar6 + 0x10) == iVar4) &&
       (lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01), *(int *)(lVar6 + 0x60) == 1)) {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
      std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar6 + 0x60));
      std::operator+("POPANIM_EFFECTS_CHOMPER_BULLET",(string *)aRStack_38);
      std::string::~string((string *)aRStack_38);
      GetPAMByName(asStack_40);
      pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_38);
      Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar7,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      std::string::~string(asStack_40);
      goto LAB_03ff9948;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChomper::onDestroy() */

void __thiscall PlantChomper::onDestroy(PlantChomper *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  float *pfVar6;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar7;
  undefined8 local_50;
  undefined8 local_48;
  string asStack_40 [8];
  string asStack_38 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (cVar1 = Board::IsLevelEnded(*(Board **)(gLawnApp + 0x9f0)), cVar1 == '\0')) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    Plant::GetType();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    NewAvatar::GetListByPlantName((string *)(lVar5 + 8),(vector *)avStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar2)
    {
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      iVar3 = FUN_03ff7ab0(*(undefined4 *)(*(long *)(this + 0x10) + 0x294));
      if ((*(int *)(lVar5 + 0x10) == iVar3) &&
         (lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00), *(int *)(lVar5 + 0x60) == 1)) {
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(this + 0x10));
        EATextSquish::Vec3::Vec3
                  ((Vec3 *)aRStack_30,(float)(int)(*pfVar6 - 50.0),(float)(int)(pfVar6[1] - 150.0),
                   0.0);
        uVar4 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
        this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar5 + 0x60));
        std::operator+("POPANIM_EFFECTS_CHOMPER_BULLET",asStack_38);
        std::string::~string(asStack_38);
        GetPAMByName(asStack_40);
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_38);
        Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar7,(RtClass *)0x0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38)
        ;
        StandaloneEffect::SetBoardSpaceOrigin
                  ((StandaloneEffect *)this_01,(SexyVector3 *)aRStack_30,-1);
        FUN_03ff7aa4(this_01 + 0x1c,uVar4);
        std::string::string(asStack_38,"die");
        Effect_PopAnim::PlaySingleAnimation(this_01,asStack_38,0);
        std::string::~string(asStack_38);
        nop();
        std::string::~string(asStack_40);
        break;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
    }
    std::vector<Sexy::RtWeakPtr<PlantNewAvatar>,std::allocator<Sexy::RtWeakPtr<PlantNewAvatar>>>::
    ~vector((vector<Sexy::RtWeakPtr<PlantNewAvatar>,std::allocator<Sexy::RtWeakPtr<PlantNewAvatar>>>
             *)avStack_20);
  }
  PlantFramework::onDestroy((PlantFramework *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChomper::pullSuctionZombies() */

void __thiscall PlantChomper::pullSuctionZombies(PlantChomper *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  SkyCityStage *this_01;
  long lVar5;
  RtWeakPtr *pRVar6;
  ResourceInfo *this_02;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_03;
  float *pfVar7;
  code *pcVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined8 local_88;
  undefined8 local_80;
  Point aPStack_78 [8];
  undefined8 local_70;
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (SkyCityStage *)FUN_03ff93c4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if ((this_01 == (SkyCityStage *)0x0) ||
     (cVar1 = SkyCityStage::IsHaveGridItemAirShip(this_01), cVar1 == '\0')) {
LAB_03ffa0b0:
    lVar5 = FUN_03ff8fa4(*(undefined8 *)(this + 0x10));
    fVar11 = *(float *)(lVar5 + 0x300);
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x30));
    local_80 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x30));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80), bVar2)
    {
      pRVar6 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
      this_02 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar6);
      if (this_02 != (ResourceInfo *)0x0) {
        fVar10 = (float)calcSuctionDestination(this,(Zombie *)this_02);
        Zombie::Nudge((Zombie *)this_02,fVar10,fVar11,true);
        cVar1 = zombieIsBlacklisted(this,(Zombie *)this_02);
        if (cVar1 == '\0') {
          iVar3 = FUN_03ff7aac(*(undefined4 *)(this_02 + 0x50));
          iVar4 = FUN_03ff7ad0(*(undefined8 *)(this + 0x10));
          if ((iVar3 <= iVar4) && (cVar1 = zombieIsInRange(this,(Zombie *)this_02), cVar1 != '\0'))
          {
            uVar9 = *(undefined8 *)(this + 0x10);
            pcVar8 = *(code **)(*(long *)this_02 + 0x120);
            Sexy::Point::Point(aPStack_78,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)0x0,(undefined4)local_70,local_70._4_4_,(DamageInfo *)local_68,
                       4,uVar9,aPStack_78,0);
            (*pcVar8)(this_02,(DamageInfo *)local_68);
            DamageInfo::~DamageInfo((DamageInfo *)local_68);
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
  iVar3 = Reflection::RFunctionType::StaticGetTypeCategory();
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x30);
  iVar3 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar3);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
LAB_03ffa244:
  local_68[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)local_68);
  if (bVar2) {
    pRVar6 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    this_03 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar6);
    do {
      if (this_03 !=
          (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           *)0x0) {
        pfVar7 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(this_03);
        if ((float)iVar3 < *pfVar7) goto LAB_03ffa2fc;
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
      pRVar6 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
      this_03 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar6);
    } while( true );
  }
  goto LAB_03ffa0b0;
LAB_03ffa2fc:
  FUN_03ff8c94((__normal_iterator *)&local_70);
  goto LAB_03ffa244;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChomper::markSuctionZombies() */

void __thiscall PlantChomper::markSuctionZombies(PlantChomper *this)

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
  this_00 = (SkyCityStage *)FUN_03ff93c4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_00 == (SkyCityStage *)0x0) {
    lVar4 = FUN_03ff8fa4(*(undefined8 *)(this + 0x10));
    iVar7 = *(int *)(lVar4 + 0x2b8);
  }
  else {
    cVar1 = SkyCityStage::IsHaveGridItemAirShip(this_00);
    lVar4 = FUN_03ff8fa4(*(undefined8 *)(this + 0x10));
    iVar7 = *(int *)(lVar4 + 0x2b8);
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
               *)0x0) &&
            (cVar1 = PlantGluttonydragon::canBeMovedByPlant
                               ((PlantGluttonydragon *)this,(Zombie *)this_01), cVar1 != '\0')) &&
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
                     (this + 0x30),(RtWeakPtr *)aIStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        }
        uVar6 = FUN_03ff7b2c(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38));
        if ((ulong)(long)iVar7 <= uVar6) break;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
      }
      goto LAB_03ffa4c4;
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
    if (((this_02 != (Zombie *)0x0) &&
        (cVar1 = PlantGluttonydragon::canBeMovedByPlant((PlantGluttonydragon *)this,this_02),
        cVar1 != '\0')) && (cVar1 = Zombie::IsControlled(this_02), cVar1 == '\0')) {
      pZVar8._0_4_ = (Zombie *)PVZ_EOT();
      Zombie::ApplyCondition(pZVar8._0_4_,0,this_02,0x18,1);
      Zombie::SetIsControlled(this_02,true);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aIStack_30,(RtWeakPtrBase *)aRStack_38);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                 (this + 0x30),(RtWeakPtr *)aIStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    }
    uVar6 = FUN_03ff7b2c(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38));
    if ((ulong)(long)iVar7 <= uVar6) break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  }
LAB_03ffa4c4:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChomper::setState(int) */

void __thiscall PlantChomper::setState(PlantChomper *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  int iVar1;
  bool bVar2;
  char cVar3;
  PlantAnimRig_Chomper *this_01;
  RtWeakPtr *this_02;
  Zombie *pZVar4;
  long lVar5;
  code *pcVar6;
  RealObject *this_03;
  undefined4 uVar7;
  undefined8 local_60;
  undefined8 local_58;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  lVar5 = *(long *)(this + 0x10);
  iVar1 = *(int *)(lVar5 + 200);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 0x11) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x30);
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar2)
    {
      this_02 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60)
      ;
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_02);
      if (bVar2) {
        pZVar4 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
        Zombie::EndCondition(pZVar4,0x18);
        pZVar4 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
        Zombie::SetIsControlled(pZVar4,false);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
    }
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00);
    lVar5 = *(long *)(this + 0x10);
  }
  else if ((iVar1 == 0x12) || (iVar1 == 0xd)) {
    uVar7 = PVZ_EOT();
    *(undefined4 *)(this + 0x28) = uVar7;
  }
  *(int *)(lVar5 + 200) = param_1;
  this_01 = (PlantAnimRig_Chomper *)FUN_03ff8f1c(lVar5);
  switch(param_1) {
  case 4:
    (**(code **)(*(long *)this_01 + 0x118))(this_01);
    break;
  case 10:
    pcVar6 = *(code **)(*(long *)this_01 + 0x130);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
    (*pcVar6)(this_01,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    break;
  case 0xb:
    PlantAnimRig_Chomper::PlayBiteToIdle(this_01);
    break;
  case 0xc:
    PlantAnimRig_Chomper::PlayBiteToChewing(this_01);
    break;
  case 0xd:
    uVar7 = PVZ_T();
    *(undefined4 *)(this + 0x28) = uVar7;
    uVar7 = PVZ_T();
    *(undefined4 *)(this + 0x2c) = uVar7;
    PlantAnimRig_Chomper::PlayChewing(this_01);
    break;
  case 0xe:
    PlantAnimRig_Chomper::PlaySwallow(this_01);
    break;
  case 0xf:
    PlantAnimRig_Chomper::PlayBeginSucking(this_01);
    break;
  case 0x10:
    PlantAnimRig_Chomper::PlayLoopSucking(this_01);
    markSuctionZombies(this);
    break;
  case 0x11:
    PlantAnimRig_Chomper::PlayEndSucking(this_01);
    break;
  case 0x12:
    cVar3 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar3 == '\0') {
      uVar7 = PVZ_T();
      *(undefined4 *)(this + 0x28) = uVar7;
      PlantAnimRig_Chomper::PlayLoopBurp(this_01);
    }
    else {
      PlantAnimRig_Chomper::PlayAvatarBurp(this_01);
      std::string::string((string *)&local_58,"plantfood_1");
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_60,-50.0,-120.0);
      PlayBurpEffect(this,(string *)&local_58,(SexyVector2 *)&local_60);
      std::string::~string((string *)&local_58);
      nop();
      DropMetal(this);
      this_03 = *(RealObject **)(this + 0x10);
      std::string::string((string *)&local_58,"Play_Plant_FireGourd_Attack");
      RealObject::PlayPositionalSound(this_03,(string *)&local_58,0.0);
      std::string::~string((string *)&local_58);
      nop();
    }
    break;
  case 0x13:
    cVar3 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar3 == '\0') {
      PlantAnimRig_Chomper::PlayEndBurp(this_01);
    }
    else {
      PlantAnimRig_Chomper::PlayAvatarEndBurp(this_01);
    }
    break;
  case 0x15:
    PlantAnimRig_Chomper::PlayAdvancedSwallow(this_01);
    break;
  case 0x16:
    PlantAnimRig_Chomper::PlayLevel5Attack(this_01);
    break;
  case 0x17:
    PlantAnimRig_Chomper::PlayLevel5AttackGulpZombie(this_01);
    break;
  case 0x18:
    PlantAnimRig_Chomper::PlayLevel5AttackGulpToIdle(this_01);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantChomper::PlayAttackAnimation() */

void __thiscall PlantChomper::PlayAttackAnimation(PlantChomper *this)

{
  char cVar1;
  long lVar2;
  float fVar3;
  
  if (*(int *)(*(long *)(this + 0x10) + 200) != 4) {
    return;
  }
  cVar1 = FUN_03ff7ad8(*(long *)(this + 0x10));
  if (cVar1 != '\0') {
    fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    lVar2 = FUN_03ff8fa4(*(undefined8 *)(this + 0x10));
    if (fVar3 < *(float *)(lVar2 + 0x308)) {
      setState(this,0x16);
      return;
    }
  }
  setState(this,10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChomper::UpdateActions() */

void __thiscall PlantChomper::UpdateActions(PlantChomper *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  PlantAnimRig_DragonRoar *this_00;
  ResourceInfo *pRVar7;
  ulong uVar8;
  float *pfVar9;
  PlantType *this_01;
  NameMapperBase *this_02;
  RtObject *this_03;
  NewAvatarGeneralSkillBoost *pNVar10;
  code *pcVar11;
  Plant *pPVar12;
  RealObject *this_04;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  UnchartedModePlantNumData aUStack_80 [8];
  Point aPStack_78 [8];
  float local_70;
  undefined4 local_6c;
  undefined4 local_68 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = *(long *)(this + 0x10);
  do {
    lVar6 = FUN_03ff8fa4(lVar6);
    this_00 = (PlantAnimRig_DragonRoar *)FUN_03ff8f1c(*(undefined8 *)(this + 0x10));
    pPVar12 = *(Plant **)(this + 0x10);
    iVar1 = *(int *)(pPVar12 + 200);
    switch(iVar1) {
    case 10:
      cVar2 = PlantAnimRig_DragonRoar::CurrentAnimationIsFinished(this_00);
      if (cVar2 != '\0') {
        UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_80,1,0);
        PlantFramework::FindTargetZombie((RtWeakPtr *)local_68,this,0,aUStack_80);
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
        if (pRVar7 == (ResourceInfo *)0x0) {
          PlantFramework::FindTargetDamageableGridItem((RtWeakPtr *)local_68,this,0);
          pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_68);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68)
          ;
          if (pRVar7 != (ResourceInfo *)0x0) {
            pPVar12 = *(Plant **)(this + 0x10);
            pcVar11 = *(code **)(*(long *)pRVar7 + 0x110);
            fVar17 = (float)FUN_03ff7ab4(*(undefined4 *)(pPVar12 + 0xf4),
                                         *(undefined4 *)(pPVar12 + 0x100),
                                         *(undefined4 *)(pPVar12 + 0x104),
                                         *(undefined4 *)(pPVar12 + 0x3b8));
            fVar16 = (float)FUN_03ff7ac4(*(undefined4 *)(pPVar12 + 0x3bc));
            fVar18 = *(float *)(lVar6 + 0x2f8);
            fVar14 = (float)Plant::GetExtraDPSmodifier(pPVar12);
            lVar6 = *(long *)(this + 0x10);
            fVar15 = (float)FUN_03ff7ac8(*(undefined4 *)(lVar6 + 0x424));
            Sexy::Point::Point(aPStack_78,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)(fVar17 * fVar16 * fVar18 * fVar14 * fVar15),local_70,local_6c,
                       (RtWeakPtr *)local_68,lVar6,aPStack_78,0);
            (*pcVar11)(pRVar7,(RtWeakPtr *)local_68);
            goto LAB_03ffac10;
          }
        }
        else {
          cVar2 = zombieIsBlacklisted(this,(Zombie *)pRVar7);
          if (cVar2 == '\0') {
            iVar5 = FUN_03ff7aac(*(undefined4 *)(pRVar7 + 0x50));
            pPVar12 = *(Plant **)(this + 0x10);
            iVar4 = FUN_03ff7ad0(pPVar12);
            if (iVar5 <= iVar4) {
              pcVar11 = *(code **)(*(long *)pRVar7 + 0x120);
              Sexy::Point::Point(aPStack_78,-1,-1);
              Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
              DamageInfo::DamageInfo
                        ((DamageInfo *)0x0,local_70,local_6c,(RtWeakPtr *)local_68,4,pPVar12,
                         aPStack_78,0);
              (*pcVar11)(pRVar7,(RtWeakPtr *)local_68);
              DamageInfo::~DamageInfo((DamageInfo *)local_68);
              iVar5 = FUN_03ff7ad0(*(undefined8 *)(this + 0x10));
              if (iVar5 < 2) {
                setState(this,0xc);
              }
              else {
                setState(this,0x15);
              }
              goto LAB_03ffaa78;
            }
          }
          else {
            pPVar12 = *(Plant **)(this + 0x10);
          }
          pcVar11 = *(code **)(*(long *)pRVar7 + 0x110);
          fVar17 = (float)FUN_03ff7ab4(*(undefined4 *)(pPVar12 + 0xf4),
                                       *(undefined4 *)(pPVar12 + 0x100),
                                       *(undefined4 *)(pPVar12 + 0x104),
                                       *(undefined4 *)(pPVar12 + 0x3b8));
          fVar16 = (float)FUN_03ff7ac4(*(undefined4 *)(pPVar12 + 0x3bc));
          fVar18 = *(float *)(lVar6 + 0x2f8);
          fVar14 = (float)Plant::GetExtraDPSmodifier(pPVar12);
          fVar15 = (float)FUN_03ff7ac8(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
          iVar5 = BoardEntity::CalcColumnPosition((BoardEntity *)pRVar7);
          lVar6 = *(long *)(this + 0x10);
          Sexy::Point::Point(aPStack_78,iVar5,*(int *)(lVar6 + 0x110));
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)(fVar17 * fVar16 * fVar18 * fVar14 * fVar15),local_70,local_6c,
                     (RtWeakPtr *)local_68,lVar6,aPStack_78,0);
          (*pcVar11)(pRVar7,(RtWeakPtr *)local_68);
LAB_03ffac10:
          DamageInfo::~DamageInfo((DamageInfo *)local_68);
        }
        setState(this,0xb);
      }
      goto LAB_03ffaa78;
    case 0xb:
    case 0xe:
    case 0x13:
    case 0x18:
      cVar2 = PlantAnimRig_DragonRoar::CurrentAnimationIsFinished(this_00);
      if (cVar2 != '\0') {
        setState(this,4);
      }
LAB_03ffaa78:
      lVar6 = *(long *)(this + 0x10);
      iVar5 = *(int *)(lVar6 + 200);
      break;
    case 0xc:
    case 0x17:
      cVar2 = PlantAnimRig_DragonRoar::CurrentAnimationIsFinished(this_00);
      if (cVar2 == '\0') goto LAB_03ffaa78;
      setState(this,0xd);
      lVar6 = *(long *)(this + 0x10);
      iVar5 = *(int *)(lVar6 + 200);
      break;
    case 0xd:
      iVar5 = FUN_03ff7ad0(pPVar12);
      iVar5 = iVar5 + -1;
      if (iVar5 < 0) {
LAB_03ffad78:
        fVar17 = 30.0;
      }
      else {
        uVar13 = *(undefined8 *)(lVar6 + 0x2c0);
        uVar8 = FUN_03ff7afc(uVar13,*(undefined8 *)(lVar6 + 0x2c8));
        if (uVar8 <= (ulong)(long)iVar5) goto LAB_03ffad78;
        pfVar9 = (float *)FUN_03ff7b10(uVar13,(long)iVar5);
        fVar17 = *pfVar9;
      }
      local_70 = (float)Plant::GetGeneSkillBoost(pPVar12);
      local_70 = fVar17 - local_70;
      local_68[0] = 0x3f800000;
      pfVar9 = eastl::max_alt<float>(&local_70,(float *)local_68);
      fVar17 = *pfVar9;
      Plant::GetType();
      this_01 = (PlantType *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
      cVar2 = PlantType::IsNewAvatarNewRare(this_01);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
      if (cVar2 != '\0') {
        this_02 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
        std::string::string((string *)local_68,"chomper_new_avatar_3");
        iVar5 = NameMapperBase::GetIdForName(this_02,(string *)local_68);
        std::string::~string((string *)local_68);
        nop();
        NewAvatar::GetAvatarInfoByAvatarId(iVar5);
        bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_70);
        if (bVar3) {
          NewAvatar::GetAvatarInfoByAvatarId(iVar5);
          this_03 = (RtObject *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
          pNVar10 = Sexy::RtObject::Cast<NewAvatarGeneralSkillBoost>(this_03);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
          if (pNVar10 != (NewAvatarGeneralSkillBoost *)0x0) {
            local_70 = fVar17 - *(float *)(pNVar10 + 100);
            local_68[0] = 0;
            pfVar9 = eastl::max_alt<float>(&local_70,(float *)local_68);
            fVar17 = *pfVar9;
          }
        }
        else {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
        }
      }
      fVar16 = (float)PVZ_T();
      if (fVar16 - *(float *)(this + 0x28) < fVar17) {
        fVar17 = (float)PVZ_T();
        if (fVar17 <= *(float *)(this + 0x2c)) goto LAB_03ffaa78;
        this_04 = *(RealObject **)(this + 0x10);
        std::string::string((string *)local_68,"Play_Chomp_Soft");
        RealObject::PlayPositionalSound(this_04,(string *)local_68,0.0);
        std::string::~string((string *)local_68);
        nop();
        fVar17 = (float)PVZ_T();
        lVar6 = *(long *)(this + 0x10);
        iVar5 = *(int *)(lVar6 + 200);
        *(float *)(this + 0x2c) = fVar17 + 1.0;
      }
      else {
        setState(this,0xe);
        lVar6 = *(long *)(this + 0x10);
        iVar5 = *(int *)(lVar6 + 200);
      }
      break;
    case 0xf:
      cVar2 = PlantAnimRig_DragonRoar::CurrentAnimationIsFinished(this_00);
      if (cVar2 == '\0') goto LAB_03ffaa78;
      setState(this,0x10);
      lVar6 = *(long *)(this + 0x10);
      iVar5 = *(int *)(lVar6 + 200);
      break;
    case 0x10:
      pullSuctionZombies(this);
      cVar2 = allSuctionZombiesAreWithinRange(this);
      if (cVar2 == '\0') goto LAB_03ffaa78;
      setState(this,0x11);
      lVar6 = *(long *)(this + 0x10);
      iVar5 = *(int *)(lVar6 + 200);
      break;
    case 0x11:
      cVar2 = PlantAnimRig_DragonRoar::CurrentAnimationIsFinished(this_00);
      if (cVar2 == '\0') goto LAB_03ffaa78;
      setState(this,0x12);
      lVar6 = *(long *)(this + 0x10);
      iVar5 = *(int *)(lVar6 + 200);
      break;
    case 0x12:
      pushAllZombies(this);
      cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
      if (cVar2 == '\0') {
        fVar17 = (float)PVZ_T();
        if (fVar17 - *(float *)(this + 0x28) < *(float *)(lVar6 + 0x2d8)) goto LAB_03ffaa78;
        setState(this,0x13);
        lVar6 = *(long *)(this + 0x10);
        iVar5 = *(int *)(lVar6 + 200);
      }
      else {
        cVar2 = PlantAnimRig_DragonRoar::CurrentAnimationIsFinished(this_00);
        if (cVar2 == '\0') goto LAB_03ffaa78;
        setState(this,0x13);
        lVar6 = *(long *)(this + 0x10);
        iVar5 = *(int *)(lVar6 + 200);
      }
      break;
    case 0x14:
      PushFrontZombies(this);
      cVar2 = PlantAnimRig_DragonRoar::CurrentAnimationIsFinished(this_00);
      if (cVar2 == '\0') goto LAB_03ffaa78;
      setState(this,0xd);
      lVar6 = *(long *)(this + 0x10);
      iVar5 = *(int *)(lVar6 + 200);
      break;
    default:
      goto switchD_03ffaa64_caseD_15;
    case 0x16:
      cVar2 = PlantAnimRig_DragonRoar::CurrentAnimationIsFinished(this_00);
      if (cVar2 == '\0') goto LAB_03ffaa78;
      if (*(int *)(this + 0x48) < 1) {
        setState(this,0x18);
        lVar6 = *(long *)(this + 0x10);
        iVar5 = *(int *)(lVar6 + 200);
      }
      else {
        setState(this,0x17);
        lVar6 = *(long *)(this + 0x10);
        iVar5 = *(int *)(lVar6 + 200);
      }
    }
  } while (iVar1 != iVar5);
switchD_03ffaa64_caseD_15:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantChomper::ApplyPlantfood() */

void __thiscall PlantChomper::ApplyPlantfood(PlantChomper *this)

{
  setState(this,0xf);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChomper::OnAnimCommand(std::string const&, std::string const&) */

void __thiscall PlantChomper::OnAnimCommand(PlantChomper *this,string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  RtWeakPtr *this_00;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  Zombie *this_01;
  long *extraout_x0;
  Plant *pPVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_a0;
  undefined8 local_98;
  Point aPStack_90 [16];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = FUN_03ff8fa4(*(undefined8 *)(this + 0x10));
  if (*(int *)(*(long *)(this + 0x10) + 200) == 0x11) {
    bVar1 = std::operator==(param_1,"swallow");
    if (bVar1) {
      pPVar9 = *(Plant **)(this + 0x10);
      fVar14 = (float)FUN_03ff7ab4(*(undefined4 *)(pPVar9 + 0xf4),*(undefined4 *)(pPVar9 + 0x100),
                                   *(undefined4 *)(pPVar9 + 0x104),*(undefined4 *)(pPVar9 + 0x3b8));
      fVar15 = (float)FUN_03ff7ac4(*(undefined4 *)(pPVar9 + 0x3bc));
      fVar16 = *(float *)(lVar5 + 0x2fc);
      fVar17 = (float)Plant::GetExtraDPSmodifier(pPVar9);
      fVar18 = (float)FUN_03ff7ac8(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
      local_a0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x30));
      local_98 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x30));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98),
            bVar1) {
        this_00 = (RtWeakPtr *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
        if (bVar1) {
          plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          uVar12 = *(undefined8 *)(this + 0x10);
          pcVar13 = *(code **)(*plVar6 + 0x110);
          Sexy::Point::Point(aPStack_90,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)(fVar14 * fVar15 * fVar16 * fVar17 * fVar18),local_80,uStack_7c,
                     aDStack_68,uVar12,aPStack_90,0);
          (*pcVar13)(plVar6,aDStack_68);
          DamageInfo::~DamageInfo(aDStack_68);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
      }
    }
    lVar5 = 1;
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    bVar1 = std::operator==(param_1,"swallow");
    if ((bVar1) && (bVar1 = std::operator==(param_2,"purp"), bVar1)) {
      std::string::string((string *)aDStack_68,"attack_end");
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,-50.0,-150.0);
      PlayBurpEffect(this,(string *)aDStack_68,(SexyVector2 *)&local_80);
      std::string::~string((string *)aDStack_68);
      nop();
      setState(this,0x14);
    }
    if ((*(int *)(*(long *)(this + 0x10) + 200) == 0x16) &&
       (bVar1 = std::operator==(param_1,"zombie_out"), bVar1)) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
      Sexy::Insets::Insets
                ((Insets *)aPStack_90,*(int *)(*(long *)(this + 0x10) + 0x114),
                 *(int *)(*(long *)(this + 0x10) + 0x110),4,1);
      uVar3 = operator|(4,2);
      EntityFinder::GetEntitiesInGridSquares
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar3,
                 (Insets *)aPStack_90);
      *(undefined4 *)(this + 0x48) = 0;
      uVar10 = 0;
      while( true ) {
        uVar12 = CONCAT44(uStack_7c,local_80);
        uVar7 = FUN_03ff7b18(uVar12,local_78);
        if (uVar7 <= uVar10) break;
        puVar8 = (undefined8 *)FUN_03ff7b24(uVar12,uVar10);
        this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar8);
        if (this_01 == (Zombie *)0x0) {
          FUN_03ff7b24(CONCAT44(uStack_7c,local_80),uVar10);
          nop();
          uVar12 = *(undefined8 *)(this + 0x10);
          pcVar13 = *(code **)(*extraout_x0 + 0x120);
          Sexy::Point::Point((Point *)&local_a0,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)0x0,(undefined4)local_98,local_98._4_4_,aDStack_68,4,uVar12,
                     (Point *)&local_a0,0);
          (*pcVar13)(extraout_x0,aDStack_68);
          DamageInfo::~DamageInfo(aDStack_68);
          uVar10 = uVar10 + 1;
        }
        else {
          cVar2 = zombieIsBlacklisted(this,this_01);
          if (cVar2 == '\0') {
            uVar12 = *(undefined8 *)(this + 0x10);
            pcVar13 = *(code **)(*(long *)this_01 + 0x120);
            Sexy::Point::Point((Point *)&local_a0,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)0x0,(undefined4)local_98,local_98._4_4_,aDStack_68,4,uVar12,
                       (Point *)&local_a0,0);
            (*pcVar13)(this_01,aDStack_68);
            DamageInfo::~DamageInfo(aDStack_68);
            *(int *)(this + 0x48) = *(int *)(this + 0x48) + 1;
            uVar10 = uVar10 + 1;
          }
          else {
            pPVar9 = *(Plant **)(this + 0x10);
            pcVar13 = *(code **)(*(long *)this_01 + 0x110);
            fVar14 = (float)FUN_03ff7ab4(*(undefined4 *)(pPVar9 + 0xf4),
                                         *(undefined4 *)(pPVar9 + 0x100),
                                         *(undefined4 *)(pPVar9 + 0x104),
                                         *(undefined4 *)(pPVar9 + 0x3b8));
            fVar15 = (float)FUN_03ff7ac4(*(undefined4 *)(pPVar9 + 0x3bc));
            fVar18 = *(float *)(lVar5 + 0x30c);
            fVar16 = (float)Plant::GetExtraDPSmodifier(pPVar9);
            fVar17 = (float)FUN_03ff7ac8(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
            iVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)this_01);
            lVar11 = *(long *)(this + 0x10);
            Sexy::Point::Point((Point *)&local_a0,iVar4,*(int *)(lVar11 + 0x110));
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)(fVar14 * fVar15 * fVar18 * fVar16 * fVar17),
                       (undefined4)local_98,local_98._4_4_,aDStack_68,lVar11,(Point *)&local_a0,0);
            (*pcVar13)(this_01,aDStack_68);
            DamageInfo::~DamageInfo(aDStack_68);
            uVar10 = uVar10 + 1;
          }
        }
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    }
    lVar5 = ___stack_chk_guard;
    if (local_8 == ___stack_chk_guard) {
      PlantFramework::OnAnimCommand((string *)this,param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar5);
}

