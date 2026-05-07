// Class: PlantChardGuardTossSystem


/* PlantChardGuardTossSystem::~PlantChardGuardTossSystem() */

void __thiscall
PlantChardGuardTossSystem::~PlantChardGuardTossSystem(PlantChardGuardTossSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_067d52d0;
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* PlantChardGuardTossSystem::~PlantChardGuardTossSystem() */

void __thiscall
PlantChardGuardTossSystem::~PlantChardGuardTossSystem(PlantChardGuardTossSystem *this)

{
  ~PlantChardGuardTossSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChardGuardTossSystem::StaticClassInit() */

void PlantChardGuardTossSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantChardGuardTossSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_040b6718,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantChardGuardTossSystem::StaticGetClass() */

long * PlantChardGuardTossSystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"PlantChardGuardTossSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantChardGuardTossSystem::GetClass() const */

long * PlantChardGuardTossSystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"PlantChardGuardTossSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantChardGuardTossSystem::shouldStun(Zombie*) */

undefined8 __thiscall
PlantChardGuardTossSystem::shouldStun(PlantChardGuardTossSystem *this,Zombie *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (((((param_1 == (Zombie *)0x0) || (cVar1 = Zombie::IsFriendZombie(param_1), cVar1 != '\0')) ||
       (cVar1 = Zombie::IsFlying(param_1), cVar1 != '\0')) ||
      (((cVar1 = Zombie::IsFlickedOff(param_1), cVar1 != '\0' ||
        (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 != '\0')) ||
       ((cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 != '\0' ||
        ((cVar1 = Zombie::IsControlled(param_1), cVar1 != '\0' ||
         (cVar1 = Zombie::HasFogImmune(param_1), cVar1 != '\0')))))))) ||
     ((cVar1 = Zombie::IsBerserk(param_1), cVar1 != '\0' ||
      (((((cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 != '\0' ||
          (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 != '\0')) ||
         (cVar1 = Zombie::IsInvisible(param_1), cVar1 != '\0')) ||
        ((cVar1 = Zombie::IsBoss(param_1), cVar1 != '\0' ||
         (cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 != '\0')))) ||
       (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 != '\0')))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* PlantChardGuardTossSystem::PlantChardGuardTossSystem() */

void __thiscall
PlantChardGuardTossSystem::PlantChardGuardTossSystem(PlantChardGuardTossSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined4 *)(this + 0x10) = 0x3f800000;
  *(undefined ***)this = &PTR_GetClass_067d52d0;
  return;
}


/* PlantChardGuardTossSystem::StaticNew() */

PlantChardGuardTossSystem * PlantChardGuardTossSystem::StaticNew(void)

{
  PlantChardGuardTossSystem *this;
  
  this = ::operator_new(0x18);
  PlantChardGuardTossSystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChardGuardTossSystem::playLandEffect(Sexy::SexyVector3 const&) */

void __thiscall
PlantChardGuardTossSystem::playLandEffect(PlantChardGuardTossSystem *this,SexyVector3 *param_1)

{
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar1;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  if (this_00 != (Effect_PopAnim *)0x0) {
    std::string::string(asStack_18,"POPANIM_EFFECTS_CHARDGUARD_LAND_EFFECT");
    GetPAMByName(asStack_18);
    pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar1,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    std::string::~string(asStack_18);
    nop();
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,param_1,-1);
    Effect_PopAnim::SetCentered(this_00,true);
    FUN_040b3e50(this_00 + 0x1c);
    std::string::string((string *)aRStack_10,"animation");
    Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_10,0);
    std::string::~string((string *)aRStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChardGuardTossSystem::TossZombies(Zombie*, Sexy::SexyVector3 const&, float, float) */

void __thiscall
PlantChardGuardTossSystem::TossZombies
          (PlantChardGuardTossSystem *this,Zombie *param_1,SexyVector3 *param_2,float param_3,
          float param_4)

{
  ZombieTosserSubSystem *pZVar1;
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onFlyingEnd");
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)aRStack_50,aRStack_60,asStack_58);
  ZombieTosserSubSystem::LaunchZombie
            ((ZombieTosserSubSystem *)CONCAT44(in_register_00005004,param_3),
             CONCAT44(in_register_00005024,param_4),pZVar1,param_1,param_2,aRStack_50,0);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChardGuardTossSystem::onFlyingEnd(Zombie*) */

void __thiscall
PlantChardGuardTossSystem::onFlyingEnd(PlantChardGuardTossSystem *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined8 *puVar6;
  Zombie *pZVar7;
  undefined8 local_30;
  undefined8 local_28;
  Vec3 aVStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (Zombie *)0x0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
    uVar4 = SharkMinion::getRow((SharkMinion *)param_1);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    EATextSquish::Vec3::Vec3(aVStack_20,*pfVar5,pfVar5[1] - 20.0,0.0);
    playLandEffect(this,(SexyVector3 *)aVStack_20);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aVStack_20);
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aVStack_20,2,uVar3,
             uVar4);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aVStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aVStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
    if ((pZVar7 != (Zombie *)0x0) && (cVar1 = shouldStun(this,pZVar7), cVar1 != '\0')) {
                    /* WARNING: Load size is inaccurate */
      Zombie::ApplyCondition(*(Zombie **)(this + 0x10),0,pZVar7,2,1);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aVStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

