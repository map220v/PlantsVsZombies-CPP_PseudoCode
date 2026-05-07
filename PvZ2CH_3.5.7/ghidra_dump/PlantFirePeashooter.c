// Class: PlantFirePeashooter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFirePeashooter::StaticClassInit() */

void PlantFirePeashooter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantFirePeashooter");
    (*pcVar2)(plVar1,asStack_10,FUN_040addc0,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFirePeashooter::StaticGetClass() */

long * PlantFirePeashooter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantFirePeashooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantFirePeashooter::GetClass() const */

long * PlantFirePeashooter::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantFirePeashooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantFirePeashooter::EndFountain() */

void __thiscall PlantFirePeashooter::EndFountain(PlantFirePeashooter *this)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x3c) = uVar1;
  return;
}


/* PlantFirePeashooter::FountainIsStart() */

bool __thiscall PlantFirePeashooter::FountainIsStart(PlantFirePeashooter *this)

{
  return 0 < *(int *)(this + 0x38);
}


/* PlantFirePeashooter::PlantFirePeashooter() */

void __thiscall PlantFirePeashooter::PlantFirePeashooter(PlantFirePeashooter *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067d2ce0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  return;
}


/* PlantFirePeashooter::StaticNew() */

PlantFirePeashooter * PlantFirePeashooter::StaticNew(void)

{
  PlantFirePeashooter *this;
  
  this = ::operator_new(0x40);
  PlantFirePeashooter(this);
  return this;
}


/* PlantFirePeashooter::~PlantFirePeashooter() */

void __thiscall PlantFirePeashooter::~PlantFirePeashooter(PlantFirePeashooter *this)

{
  *(undefined ***)this = &PTR_GetClass_067d2ce0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantFirePeashooter::~PlantFirePeashooter() */

void __thiscall PlantFirePeashooter::~PlantFirePeashooter(PlantFirePeashooter *this)

{
  ~PlantFirePeashooter(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFirePeashooter::updatePlantfoodDamageEndtime() */

void __thiscall PlantFirePeashooter::updatePlantfoodDamageEndtime(PlantFirePeashooter *this)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_040ac170(aRStack_10,*(undefined8 *)(this + 0x10));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar2 = FUN_040ac1dc(*(undefined8 *)(lVar2 + 0x70));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar3 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x28) = fVar3 + *(float *)(lVar2 + 0x28);
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFirePeashooter::canFireFlamethrower() */

bool __thiscall PlantFirePeashooter::canFireFlamethrower(PlantFirePeashooter *this)

{
  float fVar1;
  
  if (0.0 < *(float *)(this + 0x28)) {
    fVar1 = (float)PVZ_T();
    return *(float *)(this + 0x28) < fVar1;
  }
  return false;
}


/* PlantFirePeashooter::StartFountain() */

void __thiscall PlantFirePeashooter::StartFountain(PlantFirePeashooter *this)

{
  float fVar1;
  
  *(int *)(this + 0x38) = *(int *)(*(long *)(this + 0x10) + 0x114) + 1;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x3c) = fVar1 + 0.25;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFirePeashooter::PlayFountainEffect(int, int) */

void __thiscall
PlantFirePeashooter::PlayFountainEffect(PlantFirePeashooter *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  float fVar5;
  string asStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(param_2);
  iVar2 = BoardTransforms::GridToBoardSpaceYUnbounded(param_1);
  fVar5 = 0.0;
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    fVar5 = (float)Board::calculateRoofOffsetZ((float)(iVar1 + -100));
    fVar5 = (float)(int)fVar5;
  }
  EATextSquish::Vec3::Vec3(aVStack_18,(float)(iVar1 + -100),(float)(iVar2 + -0x87),fVar5);
  uVar3 = Board::MakeRenderOrder(0x65130,param_1,0);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_EFFECTS_FIREPEASHOOTER_POWERRAGE");
  GetPAMByName(asStack_28);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::~string(asStack_28);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aVStack_18,-1);
  FUN_040ac144(this_00 + 0x1c,uVar3);
  std::string::string((string *)aRStack_20,"idle");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_20,0);
  std::string::~string((string *)aRStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x040ad560 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantFirePeashooter::Initialize() */

void __thiscall PlantFirePeashooter::Initialize(PlantFirePeashooter *this)

{
  BoardEntity *this_00;
  ComponentWarmingRadius *this_01;
  long lVar1;
  undefined4 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this_00 = *(BoardEntity **)(this + 0x10);
  BoardEntity::GetComponentRunner(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
  std::string::string(asStack_18,"WarmingRadius");
  ComponentRunner::Add<ComponentWarmingRadius>((ComponentRunner *)this_00,aRStack_20,asStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x30),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  this_01 = (ComponentWarmingRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30))
  ;
  lVar1 = FUN_040ad464(*(undefined8 *)(this + 0x10));
  ComponentWarmingRadius::SetRadiusProps(this_01,(ComponentWarmingRadiusProps *)(lVar1 + 0x2c0));
  *(undefined4 *)(this + 0x38) = 0;
  uVar2 = PVZ_EOT();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x3c) = uVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFirePeashooter::FindTargetAndFire(PlantWeapon) */

undefined1 PlantFirePeashooter::FindTargetAndFire(PlantFramework *param_1)

{
  char cVar1;
  int iVar2;
  Plant *this;
  long lVar3;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  cVar1 = Plant::CanFindTarget(*(undefined8 *)(param_1 + 0x10));
  if (cVar1 != '\0') {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    iVar2 = FUN_040ac194(uVar5);
    lVar3 = FUN_040ad464(uVar5);
    pfVar4 = (float *)FUN_040ac1a4(*(undefined8 *)(lVar3 + 0x4f0),(long)(iVar2 + -1));
    fVar7 = *pfVar4;
    fVar6 = (float)PlantFramework::Rand(param_1,1.0);
    if (fVar6 < fVar7) {
      Plant::ChangeSpeedModifier(*(Plant **)(param_1 + 0x10),7.0,0.4);
      Plant::ResetLaunchTimer(*(Plant **)(param_1 + 0x10),false);
    }
    (**(code **)(*(long *)param_1 + 0x1a0))(param_1);
    return 1;
  }
  this = *(Plant **)(param_1 + 0x10);
  if (*(float *)(this + 0xe0) <= *(float *)(this + 0xe4)) {
    return 0;
  }
  Plant::SetSpeedModifier(this,*(float *)(this + 0xe4));
  return 0;
}


/* PlantFirePeashooter::CancelPlantfood() */

void __thiscall PlantFirePeashooter::CancelPlantfood(PlantFirePeashooter *this)

{
  bool bVar1;
  char cVar2;
  ComponentWarmingRadius *this_00;
  long lVar3;
  
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 0xbf800000;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x30));
  if (bVar1) {
    this_00 = (ComponentWarmingRadius *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
    lVar3 = FUN_040ad464(*(undefined8 *)(this + 0x10));
    ComponentWarmingRadius::SetRadiusProps(this_00,(ComponentWarmingRadiusProps *)(lVar3 + 0x2c0));
  }
  cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar2 == '\0') {
    return;
  }
  EndFountain(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFirePeashooter::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantFirePeashooter::Fire
          (PlantFirePeashooter *this,RtWeakPtrBase *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    lVar2 = PlantFramework::Fire((PlantFramework *)this,aRStack_10,param_3,param_4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (*(long *)(gLawnApp + 0x9f0) != 0) {
      uVar4 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8);
      lVar3 = FUN_040ac168(uVar4);
      if ((lVar3 != 0) && (lVar3 = FUN_040ad778(uVar4), lVar3 != 0)) {
        FUN_040ac1e4(lVar2 + 0x184);
      }
    }
  }
  else {
    lVar2 = 0;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFirePeashooter::createFlamethrowerRect() */

void PlantFirePeashooter::createFlamethrowerRect(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long in_x0;
  long lVar5;
  int in_w4;
  int *in_x8;
  undefined8 uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  int local_10;
  
  lVar1 = ___stack_chk_guard;
  lVar5 = FUN_040ad464(*(undefined8 *)(in_x0 + 0x10));
  auVar8 = std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(in_x0 + 0x10));
  BoardTransforms::BoardSpaceToGridUnbounded(auVar8._0_8_,auVar8._8_8_);
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  fVar7 = (float)NEON_fminnm((float)((iVar2 - local_10) + -1),*(undefined4 *)(lVar5 + 0x2b8));
  iVar2 = (int)fVar7;
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8);
    lVar5 = FUN_040ac168(uVar6);
    if ((lVar5 != 0) && (lVar5 = FUN_040ad778(uVar6), lVar5 != 0)) {
      iVar2 = 10;
    }
  }
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  BoardTransforms::GridToBoardSpaceRect
            ((BoardTransforms *)(ulong)*(uint *)(*(long *)(in_x0 + 0x10) + 0x114),
             *(int *)(*(long *)(in_x0 + 0x10) + 0x110),1,1,in_w4);
  *in_x8 = (int)((float)*in_x8 + (float)iVar4 * 0.5);
  in_x8[2] = (int)(((float)(iVar3 * iVar2) + (float)in_x8[2]) - (float)iVar4 * 0.5);
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantFirePeashooter::ApplyPlantfood() */

void __thiscall PlantFirePeashooter::ApplyPlantfood(PlantFirePeashooter *this)

{
  bool bVar1;
  ComponentWarmingRadius *this_00;
  long lVar2;
  
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x30));
  if (bVar1) {
    this_00 = (ComponentWarmingRadius *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
    lVar2 = FUN_040ad464(*(undefined8 *)(this + 0x10));
    ComponentWarmingRadius::SetRadiusProps(this_00,(ComponentWarmingRadiusProps *)(lVar2 + 0x3d8));
  }
  MessageRouter::Post<int,int>
            ((MessageRouter *)gMessageRouter,Message::RowMissWalrus,
             *(int *)(*(long *)(this + 0x10) + 0x110));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFirePeashooter::causeFlamethrowerDamage(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> > const&) */

void __thiscall
PlantFirePeashooter::causeFlamethrowerDamage(PlantFirePeashooter *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  Zombie *pZVar8;
  RtObject *this_00;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  float local_60;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_040ac170(aRStack_68,*(undefined8 *)(this + 0x10));
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  FUN_040ac1dc(*(undefined8 *)(lVar5 + 0x70));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
  if (*(code **)(*(long *)this + 0x198) == PlantFramework::GetDamageFlags) {
    uVar6 = PlantFramework::GetDamageFlags();
  }
  else {
    uVar6 = (**(code **)(*(long *)this + 0x198))(this,1);
  }
  operator|=(auStack_58,uVar6);
  uVar6 = operator|(0x2000,0x400);
  operator|=(auStack_58,uVar6);
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8);
    lVar5 = FUN_040ac168(uVar6);
    if ((lVar5 != 0) && (lVar5 = FUN_040ad778(uVar6), lVar5 != 0)) {
      local_60 = local_60 * 0.6;
    }
  }
  local_80 = FUN_040ad094(*(undefined8 *)param_1);
  local_78 = FUN_040ad0e4(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_80,(__normal_iterator *)&local_78), bVar1) {
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
    this_00 = (RtObject *)*puVar7;
    uVar3 = FUN_040ac140(*(undefined4 *)(*(long *)(this + 0x10) + 0x24));
    cVar2 = RealObject::IsOnOpposingTeam(this_00,uVar3);
    if ((cVar2 != '\0') &&
       ((pZVar8 = Sexy::RtObject::Cast<Zombie>(this_00), pZVar8 == (Zombie *)0x0 ||
        (cVar2 = Zombie::HasCondition(pZVar8,0x65), cVar2 == '\0')))) {
      iVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
      Sexy::Point::Point((Point *)&local_70,iVar4,*(int *)(*(long *)(this + 0x10) + 0x110));
      local_50 = local_70;
      (**(code **)(*(long *)this_00 + 0x110))(this_00,aRStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
  }
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFirePeashooter::fireFlamethrower() */

void __thiscall PlantFirePeashooter::fireFlamethrower(PlantFirePeashooter *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  createFlamethrowerRect();
  uVar1 = *(undefined4 *)(*(long *)(this + 0x10) + 0x110);
  uVar2 = operator|(2,4);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_20,uVar2,auStack_30,uVar1,uVar1);
  causeFlamethrowerDamage(this,(vector *)avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFirePeashooter::CauseFountainDamage(int, int) */

void __thiscall
PlantFirePeashooter::CauseFountainDamage(PlantFirePeashooter *this,int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  Zombie *pZVar8;
  GridItem *this_00;
  code *pcVar9;
  Plant *this_01;
  ulong uVar10;
  RealObject *this_02;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  Point *local_98;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  RtWeakPtr<Sexy::SoundResource> local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  long local_68;
  float local_60;
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo((DamageInfo *)&local_68);
  lVar4 = FUN_040ad464(*(undefined8 *)(this + 0x10));
  this_01 = *(Plant **)(this + 0x10);
  fVar11 = (float)FUN_040ac150(*(undefined4 *)(this_01 + 0xf4),*(undefined4 *)(this_01 + 0x100),
                               *(undefined4 *)(this_01 + 0x104),*(undefined4 *)(this_01 + 0x3b8));
  fVar12 = (float)FUN_040ac160(*(undefined4 *)(this_01 + 0x3bc));
  fVar13 = *(float *)(lVar4 + 0x508);
  fVar14 = (float)Plant::GetExtraDPSmodifier(this_01);
  lVar4 = *(long *)(this + 0x10);
  local_60 = (float)FUN_040ac164(*(undefined4 *)(lVar4 + 0x424));
  local_60 = fVar11 * fVar12 * fVar13 * fVar14 * local_60;
  local_68 = lVar4;
  if (*(code **)(*(long *)this + 0x198) == PlantFramework::GetDamageFlags) {
    uVar5 = PlantFramework::GetDamageFlags();
  }
  else {
    uVar5 = (**(code **)(*(long *)this + 0x198))(this,1);
  }
  operator|=(auStack_58,uVar5);
  uVar5 = operator|(0x2000,0x400);
  operator|=(auStack_58,uVar5);
  if (*(code **)(*(long *)this + 400) == PlantFramework::GetCollisionFlags) {
    uVar2 = PlantFramework::GetCollisionFlags();
  }
  else {
    uVar2 = (**(code **)(*(long *)this + 400))(this,1);
  }
  uVar10 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar3 = operator|(2,4);
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar3,
             param_2,param_1);
  uVar5 = local_80;
  lVar4 = FUN_040ac1ac(local_80,local_78);
  if (lVar4 != 0) {
    do {
      puVar6 = (undefined8 *)FUN_040ac1b8(uVar5,uVar10);
      this_02 = (RealObject *)*puVar6;
      cVar1 = RealObject::IsOnOpposingTeam(this_02,*(RealObject **)(this + 0x10));
      if ((cVar1 != '\0') &&
         (cVar1 = (**(code **)(*(long *)this_02 + 0xb8))(this_02,uVar2), cVar1 != '\0')) {
        pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)this_02);
        if (pZVar8 == (Zombie *)0x0) {
          nop();
          if (this_00 != (GridItem *)0x0) {
            if (*(code **)(*(long *)this_00 + 0x1d8) == GridItem::GetHitpoints) {
              fVar11 = (float)GridItem::GetHitpoints(this_00);
            }
            else {
              fVar11 = (float)(**(code **)(*(long *)this_00 + 0x1d8))();
            }
            if (((fVar11 <= 0.0) ||
                (cVar1 = (**(code **)(*(long *)this_00 + 0x200))(this_00), cVar1 == '\0')) ||
               (cVar1 = (**(code **)(*(long *)this_00 + 0x210))
                                  (this_00,*(undefined8 *)(this + 0x10)), cVar1 == '\0'))
            goto LAB_040aeb30;
          }
LAB_040aed34:
          local_98 = (Point *)local_88;
          Sexy::Point::Point(local_98,param_2,param_1);
          (**(code **)(*(long *)this_02 + 0x110))(this_02,(DamageInfo *)&local_68);
        }
        else {
          cVar1 = (**(code **)(*(long *)pZVar8 + 0x328))();
          if (cVar1 == '\0') {
            pcVar9 = *(code **)(*(long *)this + 0x3e0);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(local_88,(RtWeakPtrBase *)aRStack_90);
            cVar1 = (*pcVar9)(this,local_88,1);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)local_88);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
            if (cVar1 != '\0') {
              pcVar9 = *(code **)(*(long *)pZVar8 + 0x3d0);
              Plant::GetType();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(local_88,(RtWeakPtrBase *)aRStack_90);
              cVar1 = (*pcVar9)(pZVar8,local_88,0);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)local_88);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
              if ((cVar1 != '\0') && (cVar1 = Zombie::HasCondition(pZVar8,0x65), cVar1 == '\0'))
              goto LAB_040aed34;
            }
          }
        }
      }
LAB_040aeb30:
      uVar5 = local_80;
      uVar10 = uVar10 + 1;
      uVar7 = FUN_040ac1ac(local_80,local_78);
    } while (uVar10 < uVar7);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  DamageInfo::~DamageInfo((DamageInfo *)&local_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFirePeashooter::UpdateFountain() */

void __thiscall PlantFirePeashooter::UpdateFountain(PlantFirePeashooter *this)

{
  int iVar1;
  int iVar2;
  RealObject *this_00;
  float fVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_T();
  if ((*(float *)(this + 0x3c) < fVar3) &&
     (iVar1 = *(int *)(this + 0x38), iVar2 = BoardConstants::NUMBER_OF_COLUMNS(), iVar1 < iVar2)) {
    this_00 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_10,"Play_FirePeaShooter_Avatar_PlantFood_Start");
    RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
    PlayFountainEffect(this,*(int *)(*(long *)(this + 0x10) + 0x110),*(int *)(this + 0x38));
    CauseFountainDamage(this,*(int *)(*(long *)(this + 0x10) + 0x110),*(int *)(this + 0x38));
    *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
    *(float *)(this + 0x3c) = *(float *)(this + 0x3c) + 0.2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFirePeashooter::UpdatePlantfood() */

void __thiscall PlantFirePeashooter::UpdatePlantfood(PlantFirePeashooter *this)

{
  char cVar1;
  
  cVar1 = canFireFlamethrower(this);
  if (cVar1 == '\0') {
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  }
  else {
    updatePlantfoodDamageEndtime(this);
    fireFlamethrower(this);
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  }
  if ((cVar1 != '\0') && (cVar1 = FountainIsStart(this), cVar1 != '\0')) {
    UpdateFountain(this);
    return;
  }
  return;
}


/* PlantFirePeashooter::onDestroy() */

void __thiscall PlantFirePeashooter::onDestroy(PlantFirePeashooter *this)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Plant_FirePeaShooter_PlantFood_End");
  PlantFramework::onDestroy((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFirePeashooter::playFlamethrowerEffect() */

void __thiscall PlantFirePeashooter::playFlamethrowerEffect(PlantFirePeashooter *this)

{
  RtObject *this_00;
  PlantAnimRig_FirePeashooter *this_01;
  long lVar1;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_10,*(int *)(*(long *)(this + 0x10) + 0x114) + 1,
                     *(int *)(*(long *)(this + 0x10) + 0x110));
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  this_01 = Sexy::RtObject::Cast<PlantAnimRig_FirePeashooter>(this_00);
  lVar1 = FUN_040ad464(*(undefined8 *)(this + 0x10));
  PlantAnimRig_FirePeashooter::PlayFlamethrowerEffect
            (this_01,(int)*(float *)(lVar1 + 0x2b8),aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFirePeashooter::OnAnimCommand(std::string const&, std::string const&) */

ulong __thiscall
PlantFirePeashooter::OnAnimCommand(PlantFirePeashooter *this,string *param_1,string *param_2)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  
  bVar1 = std::operator==(param_1,"use_action");
  if (bVar1) {
    bVar2 = (**(code **)(*(long *)this + 0x180))(this,*(code **)(*(long *)this + 0x180),param_2);
    uVar4 = (ulong)bVar2;
    if (bVar2 != 0) {
      updatePlantfoodDamageEndtime(this);
      playFlamethrowerEffect(this);
      uVar3 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
      if ((uVar3 & 0xff) != 0) {
        uVar4 = (ulong)(uVar3 & 0xff);
        StartFountain(this);
      }
      return uVar4;
    }
  }
  uVar4 = PlantFramework::OnAnimCommand((string *)this,param_1);
  return uVar4;
}

