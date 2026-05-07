// Class: PlantSugarcane


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSugarcane::StaticClassInit() */

void PlantSugarcane::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantSugarcane");
    (*pcVar2)(plVar1,asStack_10,FUN_040ca48c,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSugarcane::StaticGetClass() */

long * PlantSugarcane::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantSugarcane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSugarcane::GetClass() const */

long * PlantSugarcane::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantSugarcane",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSugarcane::GetRepulseRect() */

void PlantSugarcane::GetRepulseRect(void)

{
  int iVar1;
  int iVar2;
  long *in_x0;
  long in_x8;
  
  (**(code **)(*in_x0 + 0x2b8))(in_x0,0);
  iVar2 = *(int *)(in_x8 + 8);
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  *(int *)(in_x8 + 8) = iVar2 - (iVar1 >> 2);
  return;
}


/* PlantSugarcane::CanbeDamaged(Zombie const*) const */

byte __thiscall PlantSugarcane::CanbeDamaged(PlantSugarcane *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = RealObject::IsOnOpposingTeam((RealObject *)param_1,*(RealObject **)(this + 0x10));
  if ((((cVar1 == '\0') || (cVar1 = Zombie::IsOnGround(param_1), cVar1 == '\0')) ||
      (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 != '\0')) ||
     (cVar1 = Zombie::IsIgnoringAllDamage(param_1), cVar1 != '\0')) {
    bVar2 = 0;
  }
  else {
    bVar2 = Zombie::IsInvisible(param_1);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* PlantSugarcane::CanbeFlipped(Zombie const*) const */

byte __thiscall PlantSugarcane::CanbeFlipped(PlantSugarcane *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = CanbeDamaged(this,param_1);
  if (((cVar1 == '\0') || (cVar1 = Zombie::IsIgnoringAllDamage(param_1), cVar1 != '\0')) ||
     (cVar1 = Zombie::CanBeLaunchedByPlants(param_1), cVar1 == '\0')) {
    bVar2 = 0;
  }
  else {
    bVar2 = Zombie::IsControlled(param_1);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSugarcane::PlayPlantFoodEffect() */

void __thiscall PlantSugarcane::PlayPlantFoodEffect(PlantSugarcane *this)

{
  int iVar1;
  float *pfVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  float fVar4;
  float fVar5;
  float local_28;
  float local_24;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_28,20.0,-20.0);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  fVar4 = *pfVar2;
  fVar5 = pfVar2[1];
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_SUGARCANE_EFFECT");
  GetPAMByName(asStack_20);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_18,(float)(int)(local_28 + fVar4),(float)(int)(local_24 + fVar5),0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  iVar1 = (**(code **)(**(long **)(this + 0x10) + 200))(*(long **)(this + 0x10));
  FUN_040c7ddc(this_00 + 0x1c,iVar1 + 1);
  std::string::string((string *)aRStack_18,"idle");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSugarcane::PlantSugarcane() */

void __thiscall PlantSugarcane::PlantSugarcane(PlantSugarcane *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantSugarcane)0x0;
  *(undefined ***)this = &PTR_GetClass_067d9420;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  ZombieRepulseSystem::ZombieRepulseSystem((ZombieRepulseSystem *)(this + 0x60));
  TransfromKeyFrameSystem::TransfromKeyFrameSystem((TransfromKeyFrameSystem *)(this + 0x80));
  return;
}


/* PlantSugarcane::StaticNew() */

PlantSugarcane * PlantSugarcane::StaticNew(void)

{
  PlantSugarcane *this;
  
  this = ::operator_new(0xa0);
  PlantSugarcane(this);
  return this;
}


/* PlantSugarcane::CanbeBlocked(Zombie const*) const */

undefined8 __thiscall PlantSugarcane::CanbeBlocked(PlantSugarcane *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  cVar1 = CanbeFlipped(this,param_1);
  if ((cVar1 != '\0') && (iVar2 = Zombie::GetSizeType(param_1), iVar2 != 2)) {
    lVar3 = FUN_040c945c(*(undefined8 *)(this + 0x10));
    uVar4 = ZombieRestrictionSet::IsIncluded((ZombieRestrictionSet *)(lVar3 + 0x2c8),param_1);
    return uVar4;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSugarcane::FlipZombie(Zombie*) */

void __thiscall PlantSugarcane::FlipZombie(PlantSugarcane *this,Zombie *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  ZombieTosserSubSystem *pZVar5;
  ZombieTosserSubSystem *pZVar9;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float local_64;
  float local_60 [4];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_040c945c(*(undefined8 *)(this + 0x10));
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  fVar6 = pfVar4[1];
  fVar8 = *pfVar4;
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  local_60[0] = fVar8 + *(float *)(lVar3 + 0x2c0);
  local_64 = (float)(iVar1 * iVar2 + 200);
  pfVar4 = eastl::min_alt<float>(local_60,&local_64);
  EATextSquish::Vec3::Vec3((Vec3 *)local_60,*pfVar4,fVar6,0.0);
                    /* WARNING: Load size is inaccurate */
  Zombie::ApplyCondition(*(Zombie **)(lVar3 + 0x2c4),0,param_1,2,1);
  pZVar5 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
                    /* WARNING: Load size is inaccurate */
  pZVar9._0_4_ = *(ZombieTosserSubSystem **)(lVar3 + 700);
  uVar7 = *(undefined4 *)(lVar3 + 0x2b8);
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
  ZombieTosserSubSystem::LaunchZombie
            (pZVar9._0_4_,uVar7,pZVar5,param_1,(Vec3 *)local_60,aRStack_50,0);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSugarcane::GetRecoverInterval() */

undefined1  [16] __thiscall PlantSugarcane::GetRecoverInterval(PlantSugarcane *this)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  auVar6 = PVZ_EOT();
  uVar5 = *(undefined8 *)(this + 0x10);
  iVar1 = FUN_040c7df0(uVar5);
  if (-1 < iVar1) {
    lVar2 = FUN_040c945c(auVar6._0_8_,uVar5);
    uVar5 = *(undefined8 *)(lVar2 + 0x2f0);
    uVar3 = FUN_040c7e04(uVar5,*(undefined8 *)(lVar2 + 0x2f8));
    if ((ulong)(long)iVar1 <= uVar3) {
      puVar4 = (uint *)FUN_040c7e48(auVar6._0_8_,uVar5,(long)(iVar1 + -1));
      auVar6 = ZEXT416(*puVar4);
    }
  }
  return auVar6;
}


/* PlantSugarcane::GetRecoverHealth() */

undefined4 __thiscall PlantSugarcane::GetRecoverHealth(PlantSugarcane *this)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x10);
  iVar1 = FUN_040c7df0(uVar5);
  if (0 < iVar1) {
    lVar2 = FUN_040c945c(uVar5);
    uVar5 = *(undefined8 *)(lVar2 + 0x308);
    uVar3 = FUN_040c7e04(uVar5,*(undefined8 *)(lVar2 + 0x310));
    if ((ulong)(long)iVar1 <= uVar3) {
      puVar4 = (undefined4 *)FUN_040c7e48(uVar5,(long)(iVar1 + -1));
      return *puVar4;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSugarcane::RepulseZombie(Sexy::TRect<int> const&) */

void __thiscall PlantSugarcane::RepulseZombie(PlantSugarcane *this,TRect *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  Zombie *this_00;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  float fVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  int local_30 [2];
  int local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,param_1,
             *(undefined4 *)(*(long *)(this + 0x10) + 0x110),
             *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
  (**(code **)(*(long *)this + 0x2b8))(local_30,this,0);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  uVar8 = local_20;
  lVar3 = FUN_040c7e34(local_20,local_18);
  if (lVar3 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_040c7e40(uVar8,uVar7);
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
      if ((this_00 != (Zombie *)0x0) && (cVar1 = CanbeBlocked(this,this_00), cVar1 != '\0')) {
        pfVar5 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this_00);
        fVar9 = (float)(local_30[0] + local_28) - *pfVar5;
        if (0.0 < fVar9) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
          ZombieRepulseSystem::Add
                    ((ZombieRepulseSystem *)(this + 0x60),(RtWeakPtr *)aRStack_38,
                     (float)(iVar2 << 1),(1.0 / (float)(iVar2 << 1)) * fVar9);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        }
      }
      uVar8 = local_20;
      uVar7 = uVar7 + 1;
      uVar6 = FUN_040c7e34(local_20,local_18);
    } while (uVar7 < uVar6);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSugarcane::FlipAndDmageEntitiesInGrids(DamageInfo const&, Sexy::TRect<int> const&) */

void __thiscall
PlantSugarcane::FlipAndDmageEntitiesInGrids(PlantSugarcane *this,DamageInfo *param_1,TRect *param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  Zombie *pZVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar8 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar3 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar3,
             param_2);
  uVar9 = local_20;
  lVar4 = FUN_040c7e34(local_20,local_18);
  if (lVar4 != 0) {
    do {
      puVar5 = (undefined8 *)FUN_040c7e40(uVar9,uVar8);
      pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
      if (pZVar6 != (Zombie *)0x0) {
        cVar1 = CanbeDamaged(this,pZVar6);
        cVar2 = CanbeFlipped(this,pZVar6);
        if (cVar2 != '\0') {
          FlipZombie(this,pZVar6);
        }
        if (cVar1 != '\0') {
          puVar5 = (undefined8 *)FUN_040c7e40(local_20,uVar8);
          (**(code **)(*(long *)*puVar5 + 0x110))((long *)*puVar5,param_1);
        }
      }
      uVar9 = local_20;
      uVar8 = uVar8 + 1;
      uVar7 = FUN_040c7e34(local_20,local_18);
    } while (uVar8 < uVar7);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSugarcane::IsZombieClose() */

void __thiscall PlantSugarcane::IsZombieClose(PlantSugarcane *this)

{
  bool bVar1;
  char cVar2;
  RealObject *this_00;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 auStack_30 [8];
  int local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x2b8))(auStack_30,this,0);
  local_28 = local_28 + 10;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesTouchingRectangle
            (avStack_20,2,auStack_30,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),
             *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
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
LAB_040c9c28:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(bVar1);
      }
      return;
    }
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    nop();
    if ((((this_00 != (RealObject *)0x0) &&
         (cVar2 = RealObject::IsOnOpposingTeam(this_00,*(RealObject **)(this + 0x10)), cVar2 != '\0'
         )) && (cVar2 = Zombie::IsOnGround((Zombie *)this_00), cVar2 != '\0')) &&
       (((cVar2 = Zombie::IsInvisible((Zombie *)this_00), cVar2 == '\0' &&
         (cVar2 = Zombie::IsControlled((Zombie *)this_00), cVar2 == '\0')) &&
        ((cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0' &&
         (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0')))))) {
      bVar1 = true;
      goto LAB_040c9c28;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSugarcane::ClearBlockZombie() */

void __thiscall PlantSugarcane::ClearBlockZombie(PlantSugarcane *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  RtWeakPtrBase *pRVar3;
  Zombie *pZVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,pRVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_10);
    if (cVar2 != '\0') {
      pZVar4 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      Zombie::EndCondition(pZVar4,0x37);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    FUN_040c8ff8((__normal_iterator *)&local_18);
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSugarcane::SetState(unsigned int) */

void __thiscall PlantSugarcane::SetState(PlantSugarcane *this,uint param_1)

{
  uint uVar1;
  PlantAnimRig_Sugarcane *pPVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  lVar4 = *(long *)(this + 0x10);
  uVar1 = *(uint *)(lVar4 + 200);
  local_8 = ___stack_chk_guard;
  if (uVar1 == param_1) goto LAB_040c9e58;
  *(uint *)(lVar4 + 200) = param_1;
  switch(param_1) {
  case 4:
    plVar3 = (long *)FUN_040c93d4(lVar4);
    (**(code **)(*plVar3 + 0x118))();
    fVar5 = (float)PVZ_T();
    fVar6 = (float)GetRecoverInterval(this);
    *(float *)(this + 0x2c) = fVar6 + fVar5;
    break;
  case 10:
    pPVar2 = (PlantAnimRig_Sugarcane *)FUN_040c93d4(lVar4);
    PlantGreenTurnip::GetAnimationStopDelegate((PlantGreenTurnip *)this);
    PlantAnimRig_Sugarcane::PlayStooping(pPVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    break;
  case 0xb:
    pPVar2 = (PlantAnimRig_Sugarcane *)FUN_040c93d4(lVar4);
    PlantAnimRig_Sugarcane::PlayStoopLooped(pPVar2);
    break;
  case 0xc:
    pPVar2 = (PlantAnimRig_Sugarcane *)FUN_040c93d4(lVar4);
    PlantGreenTurnip::GetAnimationStopDelegate((PlantGreenTurnip *)this);
    PlantAnimRig_Sugarcane::PlayRecoverStraight(pPVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    if (uVar1 != 0xb) goto LAB_040c9e58;
    goto LAB_040c9ed4;
  }
  if (uVar1 == 0xb) {
LAB_040c9ed4:
    ClearBlockZombie(this);
  }
LAB_040c9e58:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSugarcane::Initialize() */

void __thiscall PlantSugarcane::Initialize(PlantSugarcane *this)

{
  float fVar1;
  float fVar2;
  
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x28] = (PlantSugarcane)0x0;
  fVar1 = (float)PVZ_T();
  fVar2 = (float)GetRecoverInterval(this);
  *(float *)(this + 0x2c) = fVar2 + fVar1;
  SetState(this,4);
  return;
}


/* PlantSugarcane::ApplyPlantfood() */

void __thiscall PlantSugarcane::ApplyPlantfood(PlantSugarcane *this)

{
  Plant::Heal(*(Plant **)(this + 0x10));
  SetState(this,5);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSugarcane::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantSugarcane::onAnimStoppedCallback(PlantSugarcane *this,string *param_1)

{
  char cVar1;
  PlantAnimRig_Sugarcane *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlantAnimRig_Sugarcane *)FUN_040c93d4(*(undefined8 *)(this + 0x10));
  PlantAnimRig_Sugarcane::GetStoopingName(this_00);
  cVar1 = std::operator==(param_1,asStack_10);
  std::string::~string(asStack_10);
  if (cVar1 == '\0') {
    GridItemMagicMirrorRig::getDisAppearingAnimLabel((GridItemMagicMirrorRig *)this_00);
    cVar1 = std::operator==(param_1,asStack_10);
    std::string::~string(asStack_10);
    if (cVar1 == '\0') {
      PlantAnimRig_Sugarcane::GetRecoverStraightName(this_00);
      cVar1 = std::operator==(param_1,asStack_10);
      std::string::~string(asStack_10);
      if ((cVar1 != '\0') && (*(int *)(*(long *)(this + 0x10) + 200) == 0xc)) {
        SetState(this,4);
      }
    }
    else {
      MessageRouter::Post<Plant*,Plant*>
                ((MessageRouter *)gMessageRouter,Message::PlantDied,*(Plant **)(this + 0x10));
      (**(code **)(**(long **)(this + 0x10) + 0x48))(*(long **)(this + 0x10));
    }
  }
  else if (*(int *)(*(long *)(this + 0x10) + 200) == 10) {
    SetState(this,0xb);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSugarcane::onKilled(bool) */

void __thiscall PlantSugarcane::onKilled(PlantSugarcane *this,bool param_1)

{
  PlantAnimRig_Sugarcane *pPVar1;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((!param_1) && (this[0x28] == (PlantSugarcane)0x0)) {
    this[0x28] = (PlantSugarcane)0x1;
    ClearBlockZombie(this);
    pPVar1 = (PlantAnimRig_Sugarcane *)FUN_040c93d4(*(undefined8 *)(this + 0x10));
    PlantGreenTurnip::GetAnimationStopDelegate((PlantGreenTurnip *)this);
    PlantAnimRig_Sugarcane::PlayDie(pPVar1,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSugarcane::ClearAbsorbZombie() */

void __thiscall PlantSugarcane::ClearAbsorbZombie(PlantSugarcane *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  long lVar3;
  RtWeakPtrBase *pRVar4;
  RealObject *this_01;
  Zombie *pZVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x48);
  local_8 = ___stack_chk_guard;
  TransfromKeyFrameSystem::RemoveAll((TransfromKeyFrameSystem *)(this + 0x80));
  lVar3 = FUN_040c945c(*(undefined8 *)(this + 0x10));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    pRVar4 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,pRVar4);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_10);
    if (cVar2 != '\0') {
      this_01 = (RealObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10)
      ;
      RealObject::SetDisableSnapToGround(this_01,false);
      pZVar5 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      Zombie::RemoveAttachedEffect(pZVar5,"sugarcane_hit");
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      FUN_040c7f48(lVar6 + 0x36c);
      plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      cVar2 = (**(code **)(*plVar7 + 0x328))();
      if (cVar2 == '\0') {
        pZVar5 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        Zombie::SetIsControlled(pZVar5,false);
        uVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10)
        ;
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(lVar3 + 0x2c4),0,uVar8,2,1);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    FUN_040c8ff8((__normal_iterator *)&local_18);
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSugarcane::CancelPlantfood() */

void __thiscall PlantSugarcane::CancelPlantfood(PlantSugarcane *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  ClearAbsorbZombie(this);
  SetState(this,4);
  return;
}


/* PlantSugarcane::TakeDamage(DamageInfo const&) */

void PlantSugarcane::TakeDamage(DamageInfo *param_1)

{
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  float fVar1;
  float fVar2;
  
  fVar1 = (float)PVZ_T();
  fVar2 = (float)GetRecoverInterval((PlantSugarcane *)param_1);
  *(float *)(param_1 + 0x2c) = fVar2 + fVar1;
  DamageInfo::DamageInfo(in_x8,in_x1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSugarcane::UpdateZombieBlocked() */

void __thiscall PlantSugarcane::UpdateZombieBlocked(PlantSugarcane *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Zombie *pZVar5;
  RtWeakPtrBase *pRVar6;
  ResourceInfo *pRVar7;
  long *plVar8;
  EntityConditionTracker<Zombie,ZombieConditions> *this_01;
  ulong uVar9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_98;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x30);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  (**(code **)(*(long *)this + 0x2b8))((RtWeakPtr<Sexy::ResourceInfo> *)local_68,this,0);
  EntityFinder::GetEntitiesTouchingRectangle
            (avStack_80,2,(RtWeakPtr<Sexy::ResourceInfo> *)local_68,
             *(undefined4 *)(*(long *)(this + 0x10) + 0x110),
             *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_68[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,(__normal_iterator *)local_68);
    if (!bVar1) {
      fVar14 = 0.0;
      local_88 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this_00);
      while( true ) {
        local_68[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end(this_00);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_88,(__normal_iterator *)local_68);
        if (!bVar1) break;
        pRVar6 = (RtWeakPtrBase *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_68,pRVar6);
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)local_68);
        if (cVar2 != '\0') {
          plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
          fVar11 = (float)(**(code **)(*plVar8 + 0x498))();
          pZVar5 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
          fVar12 = (float)Zombie::GetExtraDPSmodifier(pZVar5);
          pZVar5 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
          this_01 = (EntityConditionTracker<Zombie,ZombieConditions> *)
                    Zombie::GetConditionTracker(pZVar5);
          fVar13 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetDPSModifier(this_01);
          fVar14 = fVar14 + fVar13 * fVar12 * fVar11;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
        FUN_040c8ff8((__normal_iterator *)&local_88);
      }
      uVar9 = FUN_040c7e28(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38));
      if (uVar9 != 0) {
        fVar11 = powf((float)uVar9,1.6);
        fVar12 = (float)PVZ_Dt();
        plVar8 = *(long **)(this + 0x10);
        pcVar10 = *(code **)(*plVar8 + 0x110);
        Sexy::Point::Point((Point *)aRStack_90,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)(((fVar14 * 0.5 * fVar11) / (float)uVar9) * fVar12),
                   (undefined4)local_88,local_88._4_4_,(RtWeakPtr<Sexy::ResourceInfo> *)local_68,
                   (Point *)aRStack_90,0);
        (*pcVar10)(plVar8,(RtWeakPtr<Sexy::ResourceInfo> *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    pRVar6 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_90,pRVar6);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_90);
    if (cVar2 == '\0') {
LAB_040ca92c:
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)local_68,(__normal_iterator *)&local_98);
      local_98 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
                           ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>
                             *)this_00,local_68[0]);
    }
    else {
      uVar3 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_80);
      uVar4 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_80);
      local_88 = std::
                 find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,Sexy::RtWeakPtr<Zombie>>
                           (uVar3,uVar4,aRStack_90);
      local_68[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)avStack_80);
      bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_88,(__normal_iterator *)local_68);
      if (bVar1) {
LAB_040ca914:
        pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
        Zombie::EndCondition(pZVar5,0x37);
        goto LAB_040ca92c;
      }
      pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_90);
      cVar2 = CanbeBlocked(this,(Zombie *)pRVar7);
      if (cVar2 == '\0') goto LAB_040ca914;
      FUN_040c8ff8((__normal_iterator *)&local_98);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
  } while( true );
}


/* PlantSugarcane::UpdateUnconditionally() */

void __thiscall PlantSugarcane::UpdateUnconditionally(PlantSugarcane *this)

{
  char cVar1;
  long lVar2;
  float fVar3;
  
  cVar1 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    lVar2 = *(long *)(this + 0x10);
    cVar1 = FUN_040c7de8(*(undefined1 *)(lVar2 + 0x278));
    if ((cVar1 == '\0') && (*(int *)(lVar2 + 200) != 3)) {
      UpdateZombieBlocked(this);
      fVar3 = (float)PVZ_Dt();
      ZombieRepulseSystem::Update((ZombieRepulseSystem *)(this + 0x60),fVar3);
      fVar3 = (float)PVZ_Dt();
      TransfromKeyFrameSystem::Update((TransfromKeyFrameSystem *)(this + 0x80),fVar3);
      return;
    }
  }
  ClearBlockZombie(this);
  fVar3 = (float)PVZ_Dt();
  ZombieRepulseSystem::Update((ZombieRepulseSystem *)(this + 0x60),fVar3);
  fVar3 = (float)PVZ_Dt();
  TransfromKeyFrameSystem::Update((TransfromKeyFrameSystem *)(this + 0x80),fVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSugarcane::BlockZombie() */

void __thiscall PlantSugarcane::BlockZombie(PlantSugarcane *this)

{
  bool bVar1;
  char cVar2;
  Zombie *extraout_x0;
  undefined1 auVar3 [16];
  undefined8 local_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  (**(code **)(*(long *)this + 0x2b8))(aRStack_30,this,0);
  EntityFinder::GetEntitiesTouchingRectangle
            (avStack_20,2,aRStack_30,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),
             *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)&local_40);
    if (!bVar1) {
LAB_040cad0c:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    nop();
    cVar2 = Zombie::HasCondition();
    if ((cVar2 == '\0') && (cVar2 = CanbeBlocked(this,extraout_x0), cVar2 != '\0')) {
      auVar3 = PVZ_EOT();
      Zombie::ApplyCondition((Zombie *)auVar3,0,extraout_x0,0x37,1);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                 (this + 0x30),(RtWeakPtr *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      goto LAB_040cad0c;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  } while( true );
}


/* PlantSugarcane::UpdateActions() */

void __thiscall PlantSugarcane::UpdateActions(PlantSugarcane *this)

{
  char cVar1;
  uint uVar2;
  long *plVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  
  if (this[0x28] == (PlantSugarcane)0x0) {
    if (*(int *)(*(long *)(this + 0x10) + 200) == 4) {
      cVar1 = IsZombieClose(this);
      if (cVar1 != '\0') {
        uVar2 = 10;
LAB_040cae08:
        SetState(this,uVar2);
        return;
      }
      fVar5 = (float)PVZ_T();
      if (*(float *)(this + 0x2c) < fVar5) {
        plVar3 = *(long **)(this + 0x10);
        pcVar4 = *(code **)(*plVar3 + 0x1e0);
        fVar5 = (float)GetRecoverHealth(this);
        (*pcVar4)(plVar3,(int)fVar5,0);
        fVar5 = (float)PVZ_T();
        fVar6 = (float)GetRecoverInterval(this);
        *(float *)(this + 0x2c) = fVar6 + fVar5;
      }
    }
    else if (*(int *)(*(long *)(this + 0x10) + 200) == 0xb) {
      BlockZombie(this);
      cVar1 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::empty
                        ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                         (this + 0x30));
      if ((cVar1 != '\0') && (cVar1 = IsZombieClose(this), cVar1 == '\0')) {
        uVar2 = 0xc;
        goto LAB_040cae08;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSugarcane::BeginKeyFrameTransform(Zombie*) */

void __thiscall PlantSugarcane::BeginKeyFrameTransform(PlantSugarcane *this,Zombie *param_1)

{
  int iVar1;
  float *pfVar2;
  SexyVector3 *pSVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_6c;
  float local_68 [2];
  Vec3 aVStack_60 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined4 local_20 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  iVar5 = 10;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  fVar7 = pfVar2[1];
  fVar8 = *pfVar2;
  pSVar3 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  fVar6 = (float)RealObject::CalcGroundZHeight((RealObject *)param_1,pSVar3);
  iVar1 = PlantFramework::Rand((PlantFramework *)this,10);
  fVar8 = (float)(iVar1 + -5) + fVar8;
  iVar1 = PlantFramework::Rand((PlantFramework *)this,5);
  fVar7 = (float)iVar1 + fVar7;
  lVar4 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
  local_6c = *(float *)(lVar4 + 0x10);
  Transform2::Transform2((Transform2 *)local_20,pSVar3,0.0);
  std::vector<Transform2,std::allocator<Transform2>>::push_back
            ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
  fVar9 = fVar8 + 60.0;
  local_68[0] = fVar9;
  pfVar2 = eastl::min_alt<float>(local_68,&local_6c);
  EATextSquish::Vec3::Vec3(aVStack_60,*pfVar2,fVar7,130.0);
  Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,30.0);
  std::vector<Transform2,std::allocator<Transform2>>::push_back
            ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
  fVar10 = fVar8 + 65.0;
  local_68[0] = fVar10;
  pfVar2 = eastl::min_alt<float>(local_68,&local_6c);
  EATextSquish::Vec3::Vec3(aVStack_60,*pfVar2,fVar7,135.0);
  Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,30.0);
  std::vector<Transform2,std::allocator<Transform2>>::push_back
            ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
  local_68[0] = fVar9;
  pfVar2 = eastl::min_alt<float>(local_68,&local_6c);
  EATextSquish::Vec3::Vec3(aVStack_60,*pfVar2,fVar7,130.0);
  Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,30.0);
  std::vector<Transform2,std::allocator<Transform2>>::push_back
            ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
  local_68[0] = fVar8 + 55.0;
  pfVar2 = eastl::min_alt<float>(local_68,&local_6c);
  EATextSquish::Vec3::Vec3(aVStack_60,*pfVar2,fVar7,135.0);
  Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,30.0);
  std::vector<Transform2,std::allocator<Transform2>>::push_back
            ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
  local_68[0] = fVar9;
  pfVar2 = eastl::min_alt<float>(local_68,&local_6c);
  EATextSquish::Vec3::Vec3(aVStack_60,*pfVar2,fVar7,130.0);
  Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,30.0);
  std::vector<Transform2,std::allocator<Transform2>>::push_back
            ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
  local_68[0] = fVar10;
  pfVar2 = eastl::min_alt<float>(local_68,&local_6c);
  EATextSquish::Vec3::Vec3(aVStack_60,*pfVar2,fVar7,125.0);
  Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,30.0);
  std::vector<Transform2,std::allocator<Transform2>>::push_back
            ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
  local_68[0] = fVar9;
  pfVar2 = eastl::min_alt<float>(local_68,&local_6c);
  EATextSquish::Vec3::Vec3(aVStack_60,*pfVar2,fVar7,130.0);
  Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,30.0);
  std::vector<Transform2,std::allocator<Transform2>>::push_back
            ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
  local_68[0] = fVar8 + 55.0;
  pfVar2 = eastl::min_alt<float>(local_68,&local_6c);
  EATextSquish::Vec3::Vec3(aVStack_60,*pfVar2,fVar7,125.0);
  Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,30.0);
  std::vector<Transform2,std::allocator<Transform2>>::push_back
            ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
  local_68[0] = fVar9;
  pfVar2 = eastl::min_alt<float>(local_68,&local_6c);
  EATextSquish::Vec3::Vec3(aVStack_60,*pfVar2,fVar7,130.0);
  Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,30.0);
  std::vector<Transform2,std::allocator<Transform2>>::push_back
            ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
  local_68[0] = fVar10;
  pfVar2 = eastl::min_alt<float>(local_68,&local_6c);
  EATextSquish::Vec3::Vec3(aVStack_60,*pfVar2,fVar7,135.0);
  Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,30.0);
  std::vector<Transform2,std::allocator<Transform2>>::push_back
            ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
  local_68[0] = fVar9;
  pfVar2 = eastl::min_alt<float>(local_68,&local_6c);
  EATextSquish::Vec3::Vec3(aVStack_60,*pfVar2,fVar7,130.0);
  Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,30.0);
  std::vector<Transform2,std::allocator<Transform2>>::push_back
            ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
  local_68[0] = fVar8 + 200.0;
  pfVar2 = eastl::min_alt<float>(local_68,&local_6c);
  EATextSquish::Vec3::Vec3(aVStack_60,*pfVar2,fVar7,fVar6);
  Transform2::Transform2((Transform2 *)local_20,(SexyVector3 *)aVStack_60,-360.0);
  std::vector<Transform2,std::allocator<Transform2>>::push_back
            ((vector<Transform2,std::allocator<Transform2>> *)avStack_50,(Transform2 *)local_20);
  local_20[0] = 6;
  std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)avStack_38,(uint *)local_20);
  do {
    local_20[0] = 2;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)avStack_38,(uint *)local_20);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_20[0] = 0x10;
  std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)avStack_38,(uint *)local_20);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aVStack_60,(RtWeakPtrBase *)local_68);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)local_20,(vector *)avStack_38);
  TransfromKeyFrameSystem::Add
            ((TransfromKeyFrameSystem *)(this + 0x80),aVStack_60,avStack_50,(Transform2 *)local_20);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)avStack_38);
  std::vector<Transform2,std::allocator<Transform2>>::~vector
            ((vector<Transform2,std::allocator<Transform2>> *)avStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSugarcane::AbsorbZombie(Sexy::TRect<int> const&) */

void __thiscall PlantSugarcane::AbsorbZombie(PlantSugarcane *this,TRect *param_1)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  Zombie *this_00;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  Vec3 aVStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar2 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar2,
             param_1);
  uVar7 = local_20;
  lVar3 = FUN_040c7e34(local_20,local_18);
  if (lVar3 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_040c7e40(uVar7,uVar6);
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
      if ((this_00 != (Zombie *)0x0) && (cVar1 = CanbeFlipped(this,this_00), cVar1 != '\0')) {
        Zombie::ApplyCondition((Zombie *)0x40000000,0,this_00,0x18,1);
        Zombie::SetIsControlled(this_00,true);
        RealObject::SetDisableSnapToGround((RealObject *)this_00,true);
        EATextSquish::Vec3::Vec3(aVStack_30,0.0,-30.0,0.0);
        Zombie::AddAttachedEffect
                  (this_00,"sugarcane_hit","POPANIM_EFFECTS_SUGARCANE_EFFECT","plantfood",
                   (SexyVector3 *)aVStack_30,1,false);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aVStack_30,(RtWeakPtrBase *)aRStack_38);
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                   (this + 0x48),(RtWeakPtr *)aVStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_30)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        BeginKeyFrameTransform(this,this_00);
      }
      uVar7 = local_20;
      uVar6 = uVar6 + 1;
      uVar5 = FUN_040c7e34(local_20,local_18);
    } while (uVar6 < uVar5);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSugarcane::OnAnimCommand(std::string const&, std::string const&) */

void __thiscall PlantSugarcane::OnAnimCommand(PlantSugarcane *this,string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  RtWeakPtrBase *pRVar6;
  long *plVar7;
  Zombie *pZVar8;
  undefined8 local_88;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  Insets aIStack_78 [16];
  undefined8 local_68 [12];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"plantfood_flip");
  if (bVar1) {
    uVar4 = *(uint *)(*(long *)(this + 0x10) + 200);
    if (uVar4 != 5) {
LAB_040cb964:
      if (local_8 == ___stack_chk_guard) {
        PlantFramework::OnAnimCommand((string *)this,param_1);
        return;
      }
      goto LAB_040cbc84;
    }
    PlayPlantFoodEffect(this);
    Sexy::Insets::Insets
              (aIStack_78,*(int *)(*(long *)(this + 0x10) + 0x114),
               *(int *)(*(long *)(this + 0x10) + 0x110),2,1);
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    uVar4 = (uint)bVar1;
    if (cVar2 == '\0') {
      Plant::GetProps();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
      FUN_040c7e18(*(undefined8 *)(lVar5 + 0x70),1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
      Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
      FlipAndDmageEntitiesInGrids(this,(DamageInfo *)local_68,(TRect *)aIStack_78);
      DamageInfo::~DamageInfo((DamageInfo *)local_68);
    }
    else {
      AbsorbZombie(this,(TRect *)aIStack_78);
    }
  }
  else {
    bVar1 = std::operator==(param_1,"stoop_repulse");
    if (bVar1) {
      uVar4 = *(uint *)(*(long *)(this + 0x10) + 200);
      if (uVar4 != 10) goto LAB_040cb964;
      GetRepulseRect();
      RepulseZombie(this,(TRect *)local_68);
      uVar4 = (uint)bVar1;
    }
    else {
      bVar1 = std::operator==(param_1,"plantfood_damage");
      if (bVar1) {
        local_88 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x48));
        while( true ) {
          local_68[0] = std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)(this + 0x48));
          bVar3 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_88,(__normal_iterator *)local_68);
          uVar4 = (uint)bVar1;
          if (!bVar3) break;
          pRVar6 = (RtWeakPtrBase *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_80,pRVar6);
          cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_80);
          if (cVar2 != '\0') {
            plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
            cVar2 = (**(code **)(*plVar7 + 0x328))();
            if (cVar2 == '\0') {
              Plant::GetProps();
              lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
              FUN_040c7e18(*(undefined8 *)(lVar5 + 0x70),2);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
              Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
              plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
              (**(code **)(*plVar7 + 0x110))(plVar7,(RtWeakPtr<Sexy::ResourceInfo> *)local_68);
              pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
              Zombie::RemoveAttachedEffect(pZVar8,"sugarcane_hit");
              pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
              EATextSquish::Vec3::Vec3((Vec3 *)aIStack_78,0.0,-30.0,0.0);
              Zombie::AddAttachedEffect
                        (pZVar8,"sugarcane_hit","POPANIM_EFFECTS_SUGARCANE_EFFECT","plantfood",
                         (SexyVector3 *)aIStack_78,1,false);
              DamageInfo::~DamageInfo((DamageInfo *)local_68);
            }
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
          FUN_040c8ff8((__normal_iterator *)&local_88);
        }
      }
      else {
        bVar1 = std::operator==(param_1,"plantfood_throw_land");
        uVar4 = (uint)bVar1;
        if (!bVar1) goto LAB_040cb964;
        ClearAbsorbZombie(this);
        uVar4 = (uint)bVar1;
      }
    }
  }
  param_2 = local_8;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_040cbc84:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4,___stack_chk_guard,param_2);
}


/* PlantSugarcane::~PlantSugarcane() */

void __thiscall PlantSugarcane::~PlantSugarcane(PlantSugarcane *this)

{
  *(undefined ***)this = &PTR_GetClass_067d9420;
  TransfromKeyFrameSystem::~TransfromKeyFrameSystem((TransfromKeyFrameSystem *)(this + 0x80));
  ZombieRepulseSystem::~ZombieRepulseSystem((ZombieRepulseSystem *)(this + 0x60));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x48));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantSugarcane::~PlantSugarcane() */

void __thiscall PlantSugarcane::~PlantSugarcane(PlantSugarcane *this)

{
  ~PlantSugarcane(this);
  AK::FreeHook(this);
  return;
}

