// Class: BeercoconutSubsystem


/* BeercoconutSubsystem::onIceSkillZombieLanding(Zombie*) */

void __thiscall
BeercoconutSubsystem::onIceSkillZombieLanding(BeercoconutSubsystem *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  
  if (param_1 != (Zombie *)0x0) {
    cVar1 = Zombie::IsFlickedOff(param_1);
    if (cVar1 == '\0') {
      iVar2 = Zombie::GetSizeType(param_1);
      if ((iVar2 == 0) || (iVar2 = Zombie::GetSizeType(param_1), iVar2 == 1)) {
        Zombie::ApplyCondition((Zombie *)((float)*(int *)(this + 0x10) * 3.0),0,param_1,1,1);
        return;
      }
      iVar2 = Zombie::GetSizeType(param_1);
      if (iVar2 == 2) {
        Zombie::ApplyCondition((Zombie *)0x40400000,0,param_1,0,1);
        return;
      }
    }
  }
  return;
}


/* BeercoconutSubsystem::onAvatarSkillZombieLanding(Zombie*) */

void __thiscall
BeercoconutSubsystem::onAvatarSkillZombieLanding(BeercoconutSubsystem *this,Zombie *param_1)

{
  char cVar1;
  
  if ((param_1 != (Zombie *)0x0) && (cVar1 = Zombie::IsFlickedOff(param_1), cVar1 == '\0')) {
    Zombie::ApplyCondition
              ((Zombie *)((float)*(int *)(this + 0x10) + (float)*(int *)(this + 0x10)),0,param_1,1,1
              );
    return;
  }
  return;
}


/* BeercoconutSubsystem::~BeercoconutSubsystem() */

void __thiscall BeercoconutSubsystem::~BeercoconutSubsystem(BeercoconutSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_06727e90;
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* BeercoconutSubsystem::~BeercoconutSubsystem() */

void __thiscall BeercoconutSubsystem::~BeercoconutSubsystem(BeercoconutSubsystem *this)

{
  ~BeercoconutSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeercoconutSubsystem::StaticClassInit() */

void BeercoconutSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"BeercoconutSubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_03afedec,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BeercoconutSubsystem::StaticGetClass() */

long * BeercoconutSubsystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BeercoconutSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BeercoconutSubsystem::GetClass() const */

long * BeercoconutSubsystem::GetClass(void)

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
  (*pcVar3)(plVar1,"BeercoconutSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BeercoconutSubsystem::BeercoconutSubsystem() */

void __thiscall BeercoconutSubsystem::BeercoconutSubsystem(BeercoconutSubsystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_06727e90;
  return;
}


/* BeercoconutSubsystem::StaticNew() */

BeercoconutSubsystem * BeercoconutSubsystem::StaticNew(void)

{
  BeercoconutSubsystem *this;
  
  this = ::operator_new(0x18);
  BeercoconutSubsystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeercoconutSubsystem::BeercoconutTossZombies(Plant*, bool, bool) */

void __thiscall
BeercoconutSubsystem::BeercoconutTossZombies
          (BeercoconutSubsystem *this,Plant *param_1,bool param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar6;
  float *pfVar7;
  undefined8 *puVar8;
  Zombie *this_01;
  SexyVector3 *pSVar9;
  ZombieTosserSubSystem *pZVar10;
  char *pcVar11;
  RtWeakPtr *__n;
  float fVar12;
  string *local_f0;
  ZombieTosserSubSystem *local_e8;
  RtWeakPtr<Sexy::ResourceInfo> *local_e0;
  RtId *local_d0;
  string asStack_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  RtMixedPtr aRStack_a0 [8];
  RtId aRStack_98 [8];
  string asStack_90 [8];
  Insets local_88 [8];
  undefined8 uStack_80;
  undefined4 local_78 [2];
  undefined8 uStack_70;
  RtWeakPtr aRStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar12 = (float)Plant::GetZombieConditionExtendRate(param_1,1);
  pcVar11 = "attack";
  *(int *)(this + 0x10) = (int)fVar12;
  __n = aRStack_68;
  std::string::string(asStack_b8,"attack");
  nop();
  if (param_3) {
    cVar2 = Plant::GetAvatarEnable(param_1);
    if (cVar2 == '\0') {
      pcVar11 = "plantfood";
    }
    else {
      pcVar11 = "plantfood_02";
    }
    std::string::append(asStack_b8,pcVar11,(size_t)__n);
    fVar12 = -100.0;
  }
  else {
    if (param_2) {
      pcVar11 = "attack_lv5";
    }
    std::string::append(asStack_b8,pcVar11,(size_t)__n);
    fVar12 = -130.0;
  }
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)local_78,"POPANIM_EFFECTS_BEERCOCONUT_ATTACK");
  GetPAMByName((string *)local_78);
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_68);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar6,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string((string *)local_78);
  nop();
  pfVar7 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_68,*pfVar7,fVar12 + pfVar7[1],0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_68,-1);
  iVar3 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
  FUN_03afd170(this_00 + 0x1c,iVar3 + 1);
  Effect_PopAnim::PlaySingleAnimation(this_00,asStack_b8,0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_68);
  Sexy::Insets::Insets(local_88,*(int *)(param_1 + 0x114),*(int *)(param_1 + 0x110),4,1);
  if (param_3) {
    Sexy::Insets::Insets
              ((Insets *)local_78,*(int *)(param_1 + 0x114) + 1,*(int *)(param_1 + 0x110) + -1,3,3);
    uStack_80 = uStack_70;
    uVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1);
    uVar5 = SharkMinion::getRow((SharkMinion *)param_1);
    EntityFinder::GetEntitiesAtGridSquare(aRStack_68,2,uVar4,uVar5);
  }
  EntityFinder::GetEntitiesInGridSquares(aRStack_68,2,local_88);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_68);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aRStack_68);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8);
    if (!bVar1) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_68);
      std::string::~string(asStack_b8);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar8);
    if (((this_01 != (Zombie *)0x0) &&
        (cVar2 = Zombie::CanBeLaunchedByPlants(this_01), cVar2 != '\0')) &&
       (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)param_1,(RealObject *)this_01),
       cVar2 != '\0')) {
      DVec3::DVec3((DVec3 *)local_78);
      pSVar9 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this_01);
      Sexy::SexyVector3::operator=((SexyVector3 *)local_78,pSVar9);
      fVar12 = *pfVar7;
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
      local_78[0] = NEON_fminnm((float)(iVar3 << 2) + fVar12,0x44480000);
      if (param_3) {
        cVar2 = Plant::GetAvatarEnable(param_1);
        if (cVar2 == '\0') {
          if (param_2) goto LAB_03afea8c;
          pZVar10 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
          ZombieTosserSubSystem::LaunchZombie
                    ((ZombieTosserSubSystem *)0x428c0000,0x3f800000,pZVar10,this_01,
                     (string *)local_78,aRStack_50,0);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
        }
        else {
          local_e8 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_a0);
          pcVar11 = "onAvatarSkillZombieLanding";
LAB_03afea0c:
          local_d0 = aRStack_98;
          local_e0 = (RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0;
          local_f0 = asStack_90;
          std::string::string(asStack_90,pcVar11);
          RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate
                    (aRStack_50,local_d0,local_f0);
          ZombieTosserSubSystem::LaunchZombie
                    ((ZombieTosserSubSystem *)0x428c0000,0x3f800000,local_e8,this_01,
                     (string *)local_78,aRStack_50,0);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
          std::string::~string(local_f0);
          nop();
          Sexy::RtId::~RtId(local_d0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_e0);
        }
      }
      else if (param_2) {
LAB_03afea8c:
        iVar3 = Zombie::GetSizeType(this_01);
        if ((iVar3 == 0) || (iVar3 = Zombie::GetSizeType(this_01), iVar3 == 1)) {
          local_e8 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_a0);
          pcVar11 = "onIceSkillZombieLanding";
          goto LAB_03afea0c;
        }
        iVar3 = Zombie::GetSizeType(this_01);
        if (iVar3 == 2) {
          Zombie::ApplyCondition((Zombie *)0x40400000,0,this_01,0,1);
        }
      }
      else {
        iVar3 = Zombie::GetSizeType(this_01);
        if ((iVar3 == 0) || (iVar3 = Zombie::GetSizeType(this_01), iVar3 == 1)) {
          pZVar10 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
          ZombieTosserSubSystem::LaunchZombie
                    ((ZombieTosserSubSystem *)0x428c0000,0x3f800000,pZVar10,this_01,
                     (string *)local_78,aRStack_50,0);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
  } while( true );
}

