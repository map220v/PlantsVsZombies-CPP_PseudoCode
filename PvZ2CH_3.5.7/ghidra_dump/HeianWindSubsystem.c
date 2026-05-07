// Class: HeianWindSubsystem


/* HeianWindSubsystem::~HeianWindSubsystem() */

void __thiscall HeianWindSubsystem::~HeianWindSubsystem(HeianWindSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_06767bd0;
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* HeianWindSubsystem::~HeianWindSubsystem() */

void __thiscall HeianWindSubsystem::~HeianWindSubsystem(HeianWindSubsystem *this)

{
  ~HeianWindSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianWindSubsystem::StaticClassInit() */

void HeianWindSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeianWindSubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_03d2c980,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeianWindSubsystem::StaticGetClass() */

long * HeianWindSubsystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HeianWindSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeianWindSubsystem::GetClass() const */

long * HeianWindSubsystem::GetClass(void)

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
  (*pcVar3)(plVar1,"HeianWindSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeianWindSubsystem::getRectByRow(int) */

void HeianWindSubsystem::getRectByRow(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_w1;
  Insets *in_x8;
  
  Sexy::Insets::Insets(in_x8);
  *(undefined4 *)(in_x8 + 4) = in_w1;
  *(undefined4 *)in_x8 = 0;
  *(undefined4 *)(in_x8 + 8) = 800;
  uVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar1 = *(int *)(in_x8 + 4);
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  *(undefined4 *)(in_x8 + 0xc) = uVar2;
  *(int *)(in_x8 + 4) = iVar1 * iVar3 + 0xa0;
  return;
}


/* HeianWindSubsystem::HeianWindSubsystem() */

void __thiscall HeianWindSubsystem::HeianWindSubsystem(HeianWindSubsystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_06767bd0;
  return;
}


/* HeianWindSubsystem::StaticNew() */

HeianWindSubsystem * HeianWindSubsystem::StaticNew(void)

{
  HeianWindSubsystem *this;
  
  this = ::operator_new(0x10);
  HeianWindSubsystem(this);
  return this;
}


/* HeianWindSubsystem::CanBeControlled(Zombie*) */

bool __thiscall HeianWindSubsystem::CanBeControlled(HeianWindSubsystem *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  string *psVar3;
  
  if ((((param_1 != (Zombie *)0x0) &&
       (cVar1 = RealObject::IsOnOpposingTeam(param_1,1), cVar1 != '\0')) &&
      (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0')) &&
     (cVar1 = Zombie::IsControlled(param_1), cVar1 == '\0')) {
    psVar3 = (string *)Zombie::GetTypeName(param_1);
    bVar2 = std::operator!=(psVar3,"wave_airbubble");
    return bVar2;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianWindSubsystem::playSmallWindEffect(int, bool) */

void __thiscall
HeianWindSubsystem::playSmallWindEffect(HeianWindSubsystem *this,int param_1,bool param_2)

{
  int iVar1;
  undefined4 uVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  char *__s;
  Point aPStack_38 [4];
  undefined4 local_34;
  Point aPStack_30 [8];
  int local_28;
  int local_24;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Point::Point(aPStack_38,iVar1,param_1);
  Sexy::Point::Point(aPStack_30,-400,-0x6d);
  BoardTransforms::GridToBoardSpace(aPStack_38);
  Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_28,(TPoint *)aPStack_30);
  uVar2 = Board::MakeRenderOrder(0x65130,local_34,0);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_HEIAN_WIND_SMALL");
  GetPAMByName(asStack_20);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_28,(float)local_24,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  if (param_2) {
    __s = "animation";
  }
  else {
    __s = "animation1";
  }
  std::string::string((string *)aRStack_18,__s);
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  FUN_03d2c740(this_00 + 0x1c,uVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianWindSubsystem::playLargeWindEffect(bool) */

void __thiscall HeianWindSubsystem::playLargeWindEffect(HeianWindSubsystem *this,bool param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  char *__s;
  Point aPStack_38 [4];
  undefined4 local_34;
  Point aPStack_30 [8];
  int local_28;
  int local_24;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Point::Point(aPStack_38,iVar1,2);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::Point::Point(aPStack_30,iVar1 * -5,iVar2 * -2);
  BoardTransforms::GridToBoardSpace(aPStack_38);
  Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_28,(TPoint *)aPStack_30);
  uVar3 = Board::MakeRenderOrder(0x65130,local_34,0);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_HEIAN_WIND_LARGE");
  GetPAMByName(asStack_20);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_28,(float)local_24,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  if (param_1) {
    __s = "animation";
  }
  else {
    __s = "animation1";
  }
  std::string::string((string *)aRStack_18,__s);
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  FUN_03d2c740(this_00 + 0x1c,uVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianWindSubsystem::moveZombie(BoardEntity*, float, float, float, float) */

void __thiscall
HeianWindSubsystem::moveZombie
          (HeianWindSubsystem *this,BoardEntity *param_1,float param_2,float param_3,float param_4,
          float param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar6;
  ZombieTosserSubSystem *pZVar7;
  float fVar8;
  float fVar9;
  float local_60;
  float local_5c;
  float local_58;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar9 = param_3;
  nop();
  if ((((param_5 <= 0.0) || (fVar8 = (float)Sexy::Rand(1.0), param_5 <= fVar8)) ||
      ((iVar3 = Zombie::GetSizeType((Zombie *)this_00), iVar3 != 0 &&
       (iVar3 = Zombie::GetSizeType((Zombie *)this_00), iVar3 != 1)))) ||
     (((cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 != '\0' ||
       (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 != '\0')) ||
      (cVar2 = FUN_03d2d30c(*(undefined4 *)(this_00 + 0x28)), cVar2 != '\0')))) {
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_00);
    fVar8 = pfVar6[2];
    local_60 = (float)ZombieTosserSubSystem::CaculateTargetButNotOffScreen
                                ((Zombie *)this_00,param_2);
    local_5c = fVar9;
    local_58 = fVar8;
    iVar3 = BoardTransforms::GridToBoardSpaceX(0);
    iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar4 = BoardTransforms::GridToBoardSpaceX(iVar4 + -1);
    iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
    if (param_2 < 0.0) {
      if (local_60 < (float)iVar3) {
        local_60 = (float)iVar3;
      }
      bVar1 = local_60 < *pfVar6;
    }
    else {
      fVar9 = (float)(iVar4 + iVar5 / 2);
      if (fVar9 < local_60) {
        local_60 = fVar9;
      }
      bVar1 = *pfVar6 < local_60;
    }
    if (bVar1) {
      pZVar7 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
      ZombieTosserSubSystem::LaunchZombie
                ((ZombieTosserSubSystem *)param_4,param_3,pZVar7,this_00,&local_60,aRStack_50,0);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
    }
  }
  else {
    CardGameZombieWindTornado::TryFlickZombie((CardGameZombieWindTornado *)this,(Zombie *)this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianWindSubsystem::GenerateTornado(int) */

void __thiscall HeianWindSubsystem::GenerateTornado(HeianWindSubsystem *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  Projectile *this_00;
  SexyVector3 *this_01;
  float fVar4;
  float fVar5;
  RtMixedPtrBase aRStack_38 [8];
  Point aPStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string((string *)&local_28,"HeianTornadoDefault");
  Sexy::ToWString((string *)&local_28);
  Sexy::RtName::RtName((RtName *)&local_18,(wstring *)&local_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_38,uVar3,0xc,(RtName *)&local_18);
  Sexy::RtName::~RtName((RtName *)&local_18);
  FUN_05476c50((wstring *)&local_20);
  std::string::~string((string *)&local_28);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
  if (cVar1 != '\0') {
    iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    Sexy::Point::Point(aPStack_30,iVar2,param_1);
    Sexy::Point::Point((Point *)&local_28,0xf,-0x23);
    BoardTransforms::GridToBoardSpace(aPStack_30);
    fVar5 = (float)-local_24;
    uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
    fVar4 = (float)local_1c;
    iVar2 = local_20 + local_28;
    local_20 = iVar2;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_38);
    Board::AddProjectile((Board *)(float)iVar2,uVar3,(RtName *)&local_18,0,0);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    this_01 = (SexyVector3 *)Projectile::GetVelocity(this_00);
    local_18 = Sexy::SexyVector3::operator*(this_01,-1.0);
    local_14 = fVar4;
    local_10 = fVar5;
    Projectile::SetVelocity(this_00,(SexyVector3 *)&local_18);
    FUN_03d2c800(this_00 + 0xd4);
    FUN_03d2c7e8(this_00 + 0x188);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianWindSubsystem::GenerateTornadoNewPVP(int) */

void __thiscall HeianWindSubsystem::GenerateTornadoNewPVP(HeianWindSubsystem *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  Projectile *this_00;
  SexyVector3 *this_01;
  float fVar4;
  float fVar5;
  RtMixedPtrBase aRStack_38 [8];
  Point aPStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string((string *)&local_28,"HeianTornadoNewPVPDefault");
  Sexy::ToWString((string *)&local_28);
  Sexy::RtName::RtName((RtName *)&local_18,(wstring *)&local_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_38,uVar3,0xc,(RtName *)&local_18);
  Sexy::RtName::~RtName((RtName *)&local_18);
  FUN_05476c50((wstring *)&local_20);
  std::string::~string((string *)&local_28);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
  if (cVar1 != '\0') {
    iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    Sexy::Point::Point(aPStack_30,iVar2,param_1);
    Sexy::Point::Point((Point *)&local_28,0xf,-0x23);
    BoardTransforms::GridToBoardSpace(aPStack_30);
    fVar5 = (float)-local_24;
    uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
    fVar4 = (float)local_1c;
    iVar2 = local_20 + local_28;
    local_20 = iVar2;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_38);
    Board::AddProjectile((Board *)(float)iVar2,uVar3,(RtName *)&local_18,0,0);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    this_01 = (SexyVector3 *)Projectile::GetVelocity(this_00);
    local_18 = Sexy::SexyVector3::operator*(this_01,-1.0);
    local_14 = fVar4;
    local_10 = fVar5;
    Projectile::SetVelocity(this_00,(SexyVector3 *)&local_18);
    FUN_03d2c800(this_00 + 0xd4);
    FUN_03d2c7e8(this_00 + 0x188);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianWindSubsystem::GenerateTornadoElite(int) */

void __thiscall HeianWindSubsystem::GenerateTornadoElite(HeianWindSubsystem *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  Projectile *this_00;
  SexyVector3 *this_01;
  float fVar4;
  float fVar5;
  RtMixedPtrBase aRStack_38 [8];
  Point aPStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string((string *)&local_28,"HeianTornadoEliteDefault");
  Sexy::ToWString((string *)&local_28);
  Sexy::RtName::RtName((RtName *)&local_18,(wstring *)&local_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_38,uVar3,0xc,(RtName *)&local_18);
  Sexy::RtName::~RtName((RtName *)&local_18);
  FUN_05476c50((wstring *)&local_20);
  std::string::~string((string *)&local_28);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
  if (cVar1 != '\0') {
    iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    Sexy::Point::Point(aPStack_30,iVar2,param_1);
    Sexy::Point::Point((Point *)&local_28,0xf,-0x23);
    BoardTransforms::GridToBoardSpace(aPStack_30);
    fVar5 = (float)-local_24;
    uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
    fVar4 = (float)local_1c;
    iVar2 = local_20 + local_28;
    local_20 = iVar2;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_38);
    Board::AddProjectile((Board *)(float)iVar2,uVar3,(RtName *)&local_18,0,0);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    this_01 = (SexyVector3 *)Projectile::GetVelocity(this_00);
    local_18 = Sexy::SexyVector3::operator*(this_01,-1.0);
    local_14 = fVar4;
    local_10 = fVar5;
    Projectile::SetVelocity(this_00,(SexyVector3 *)&local_18);
    FUN_03d2c800(this_00 + 0xd4);
    FUN_03d2c7e8(this_00 + 0x188);
    FUN_03d2c7f4(this_00 + 0xc0);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianWindSubsystem::findTargets(int, std::vector<BoardEntity*, std::allocator<BoardEntity*> >&)
    */

void __thiscall
HeianWindSubsystem::findTargets(HeianWindSubsystem *this,int param_1,vector *param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  Zombie *this_00;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_88 [24];
  Zombie *local_70 [3];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_88);
  getRectByRow((int)this);
  EntityFinder::GetEntitiesInRectangle(avStack_88,2,auStack_98);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_88);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_88);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
    if (this_00 != (Zombie *)0x0) {
      cVar2 = NewPVPUtils::IsPlayingNewPVP();
      cVar3 = '\0';
      if (cVar2 == '\0') {
        cVar3 = Zombie::IsBerserk(this_00);
        cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
      }
      else {
        cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
      }
      if (((((cVar2 == '\0') && (iVar4 = Zombie::GetSizeType(this_00), iVar4 != 2)) &&
           (cVar2 = Zombie::CanBeLaunchedByPlantsExtra(this_00), cVar2 != '\0')) &&
          ((cVar2 = CanBeControlled(this,this_00), cVar2 != '\0' &&
           (cVar2 = Zombie::HasCondition(this_00,0x66), cVar2 == '\0')))) &&
         ((cVar2 = Zombie::HasFogImmune(this_00), cVar2 == '\0' &&
          ((cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 == '\0' &&
           (cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 == '\0')))))) {
        Zombie::GetCurrentTitleStatus();
        if ((cVar3 == '\0') &&
           ((local_58 == '\0' && (cVar3 = RealObject::IsOnTeam(this_00,1), cVar3 == '\0')))) {
          cVar3 = Zombie::HasCondition(this_00,0x92);
          TitleStatus::~TitleStatus((TitleStatus *)local_70);
          if (cVar3 == '\0') {
            local_70[0] = this_00;
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_2,
                       (BoardEntity **)local_70);
          }
        }
        else {
          TitleStatus::~TitleStatus((TitleStatus *)local_70);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianWindSubsystem::findTargets(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&) */

void __thiscall HeianWindSubsystem::findTargets(HeianWindSubsystem *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  Zombie *this_00;
  undefined8 local_38;
  undefined8 local_30;
  Zombie *local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,2);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
    if (this_00 != (Zombie *)0x0) {
      cVar2 = NewPVPUtils::IsPlayingNewPVP();
      cVar3 = '\0';
      if (cVar2 == '\0') {
        cVar3 = Zombie::IsBerserk(this_00);
        cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
      }
      else {
        cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00);
      }
      if ((((((cVar2 == '\0') && (iVar4 = Zombie::GetSizeType(this_00), iVar4 != 2)) &&
            (cVar2 = Zombie::CanBeLaunchedByPlantsExtra(this_00), cVar2 != '\0')) &&
           ((cVar2 = CanBeControlled(this,this_00), cVar2 != '\0' &&
            (cVar2 = Zombie::HasCondition(this_00,0x66), cVar2 == '\0')))) &&
          ((cVar2 = Zombie::HasFogImmune(this_00), cVar2 == '\0' &&
           ((cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 == '\0' &&
            (cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 == '\0')))))) &&
         (cVar3 == '\0')) {
        local_28 = this_00;
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,
                   (BoardEntity **)&local_28);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianWindSubsystem::Generate(HeianWindRecord) */

void __thiscall HeianWindSubsystem::Generate(HeianWindSubsystem *this,int *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  BoardEntity **ppBVar4;
  undefined8 *puVar5;
  int iVar6;
  float fVar7;
  undefined8 local_48;
  undefined8 local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  fVar7 = (float)param_2[1];
  iVar6 = param_2[2];
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  if (iVar6 == -1) {
    findTargets(this,(vector *)avStack_38);
    playLargeWindEffect(this,fVar7 < 0.0);
  }
  else {
    findTargets(this,iVar6,(vector *)avStack_38);
    playSmallWindEffect(this,iVar6,fVar7 < 0.0);
  }
  iVar6 = 0;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_38);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_38);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
            (uVar2,uVar3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_38);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1) {
    iVar6 = iVar6 + 1;
    ppBVar4 = (BoardEntity **)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20,ppBVar4);
    if (*param_2 == iVar6) break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  }
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    moveZombie(this,(BoardEntity *)*puVar5,fVar7,(float)param_2[3],1.0,(float)param_2[4]);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

