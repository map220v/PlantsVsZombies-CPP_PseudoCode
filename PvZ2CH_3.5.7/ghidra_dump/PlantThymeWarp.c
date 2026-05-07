// Class: PlantThymeWarp


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantThymeWarp::placeZombieInNewPosition(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
PlantThymeWarp::placeZombieInNewPosition(undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  undefined *this;
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar2;
  long *plVar3;
  Zombie *pZVar4;
  int local_1c;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  local_18 = *puVar2;
  local_10 = *(undefined4 *)(puVar2 + 1);
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar1 = BoardTransforms::GridToBoardSpaceX(iVar1 + -1);
  local_18 = CONCAT44(local_18._4_4_,(float)iVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  BoardEntity::CalcGridPosition();
  iVar1 = BoardTransforms::GridToBoardSpaceY(local_1c);
  local_18 = CONCAT44((float)iVar1,(undefined4)local_18);
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  (**(code **)(*plVar3 + 0x78))(plVar3,&local_18);
  this = gMessageRouter;
  pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  MessageRouter::Broadcast<Zombie*,Zombie*>
            ((MessageRouter *)this,Message::ZombieReaddedToBoard,pZVar4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantThymeWarp::StaticClassInit() */

void PlantThymeWarp::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantThymeWarp");
    (*pcVar2)(plVar1,asStack_10,FUN_041748c8,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantThymeWarp::StaticGetClass() */

long * PlantThymeWarp::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantThymeWarp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantThymeWarp::GetClass() const */

long * PlantThymeWarp::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantThymeWarp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantThymeWarp::shouldStartDance() */

bool __thiscall PlantThymeWarp::shouldStartDance(PlantThymeWarp *this)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  bVar1 = false;
  if (cVar2 != '\0') {
    bVar1 = *(int *)(*(long *)(this + 0x10) + 200) == 4;
  }
  return bVar1;
}


/* PlantThymeWarp::disapearZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantThymeWarp::disapearZombie(undefined8 param_1,RtMixedPtrBase *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    auVar4 = PVZ_EOT();
    Zombie::ApplyCondition((Zombie *)auVar4,0,uVar2,0x3f,1);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    (**(code **)(*plVar3 + 0x80))(plVar3,1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantThymeWarp::getWarpingEffectNameFor(Sexy::RtWeakPtr<Zombie>) */

void PlantThymeWarp::getWarpingEffectNameFor(string *param_1,undefined8 param_2,RtWeakPtr *param_3)

{
  long lVar1;
  bool bVar2;
  RtObject *this;
  
  lVar1 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(param_3);
  if (bVar2) {
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_3);
    bVar2 = Sexy::RtObject::IsA<ZombieGargantuar>(this);
    if (bVar2) {
      std::string::string(param_1,"POPANIM_EFFECTS_THYMEWARP_GARGANTUAR_WARP");
      nop();
      goto LAB_04172ca8;
    }
  }
  std::string::string(param_1,"POPANIM_EFFECTS_THYMEWARP_ZOMBIE_WARP");
  nop();
LAB_04172ca8:
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* PlantThymeWarp::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantThymeWarp::onAnimStoppedCallback(PlantThymeWarp *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==("attack",param_1);
  if (!bVar1) {
    return;
  }
  Plant::KillPlant(*(Plant **)(this + 0x10),1,0,0x8000000000);
  return;
}


/* PlantThymeWarp::shouldWarpZombiesOut() */

bool __thiscall PlantThymeWarp::shouldWarpZombiesOut(PlantThymeWarp *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x58) <= fVar1) {
    return *(int *)(*(long *)(this + 0x10) + 200) == 2;
  }
  return false;
}


/* PlantThymeWarp::shouldDisapearZombies() */

bool __thiscall PlantThymeWarp::shouldDisapearZombies(PlantThymeWarp *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x5c) <= fVar1) {
    return *(int *)(*(long *)(this + 0x10) + 200) == 10;
  }
  return false;
}


/* PlantThymeWarp::shouldWarpZombiesIn() */

bool __thiscall PlantThymeWarp::shouldWarpZombiesIn(PlantThymeWarp *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x60) <= fVar1) {
    return *(int *)(*(long *)(this + 0x10) + 200) == 0xb;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantThymeWarp::startDisapearingZombies() */

void __thiscall PlantThymeWarp::startDisapearingZombies(PlantThymeWarp *this)

{
  bool bVar1;
  RtWeakPtrBase *pRVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xb;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x28));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x28));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    pRVar2 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,pRVar2);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_28);
    disapearZombie(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x40));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x40));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    pRVar2 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,pRVar2);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_28);
    disapearZombie(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantThymeWarp::shouldDoStuffTo(Sexy::RtWeakPtr<Zombie>) */

bool __thiscall
PlantThymeWarp::shouldDoStuffTo(PlantThymeWarp *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  Zombie *pZVar4;
  undefined8 uVar5;
  RtObject *pRVar6;
  ZombieZombossMech *pZVar7;
  long *plVar8;
  ZombieEndlessWealth *pZVar9;
  string *psVar10;
  
  pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  uVar5 = operator|(1,8);
  uVar3 = operator|(uVar5,4);
  cVar1 = Zombie::MatchesAny(pZVar4,uVar3,*(undefined8 *)(this + 0x10));
  if (cVar1 == '\0') {
    uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar5,0x3f);
    if (cVar1 == '\0') {
      uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      cVar1 = Zombie::HasCondition(uVar5,0x11);
      if (cVar1 == '\0') {
        pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        pZVar7 = Sexy::RtObject::Cast<ZombieZombossMech>(pRVar6);
        if (pZVar7 == (ZombieZombossMech *)0x0) {
          plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          cVar1 = (**(code **)(*plVar8 + 0x4d8))();
          if (cVar1 == '\0') {
            plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            cVar1 = (**(code **)(*plVar8 + 0x508))();
            if (cVar1 == '\0') {
              pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              cVar1 = Zombie::HasFogImmune(pZVar4);
              if (cVar1 == '\0') {
                pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                cVar1 = Zombie::IsBerserk(pZVar4);
                if (cVar1 == '\0') {
                  pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                  pZVar9 = Sexy::RtObject::Cast<ZombieEndlessWealth>(pRVar6);
                  if (pZVar9 == (ZombieEndlessWealth *)0x0) {
                    pZVar4 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
                    psVar10 = (string *)Zombie::GetTypeName(pZVar4);
                    bVar2 = std::operator!=(psVar10,"wave_airbubble");
                    return bVar2;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantThymeWarp::createWarpingEffectAt(Sexy::RtWeakPtr<Zombie>, std::string) */

void __thiscall
PlantThymeWarp::createWarpingEffectAt
          (PlantThymeWarp *this,RtWeakPtr<Sexy::ResourceInfo> *param_2,undefined8 param_3)

{
  int iVar1;
  Effect_PopAnim *this_00;
  PopAnim *pPVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var3;
  float *pfVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)param_2);
  getWarpingEffectNameFor(asStack_20,this,aRStack_28);
  GetPAMByName(asStack_20);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(p_Var3);
  fVar7 = *pfVar4;
  p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  lVar5 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(p_Var3);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar7,*(float *)(lVar5 + 4) - 40.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  iVar1 = (**(code **)(*plVar6 + 200))();
  FUN_04172830(this_00 + 0x1c,iVar1 + -1);
  Effect_PopAnim::SetCentered(this_00,true);
  Effect_PopAnim::PlaySingleAnimation(this_00,param_3,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantThymeWarp::createWarpingOutEffectAt(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
PlantThymeWarp::createWarpingOutEffectAt(PlantThymeWarp *this,RtWeakPtrBase *param_2)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_2);
  std::string::string(asStack_10,"warp_out");
  createWarpingEffectAt(this,aRStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantThymeWarp::createWarpingInEffectAt(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantThymeWarp::createWarpingInEffectAt(PlantThymeWarp *this,RtWeakPtrBase *param_2)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,param_2);
  std::string::string(asStack_10,"warp_in");
  createWarpingEffectAt(this,aRStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantThymeWarp::createQuickKillEffectAt(Sexy::RtWeakPtr<Zombie>, std::string) */

void PlantThymeWarp::createQuickKillEffectAt
               (undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  int iVar1;
  Effect_PopAnim *this;
  PopAnim *pPVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var3;
  float *pfVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_THYMEWARP_ZOMBIE_QUICKKILL");
  GetPAMByName(asStack_20);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_20);
  nop();
  p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(p_Var3);
  fVar7 = *pfVar4;
  p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  lVar5 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(p_Var3);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar7 + 10.0,*(float *)(lVar5 + 4) - 20.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,-1);
  plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  iVar1 = (**(code **)(*plVar6 + 200))();
  FUN_04172830(this + 0x1c,iVar1 + 1);
  Effect_PopAnim::SetCentered(this,true);
  std::string::string((string *)aRStack_18,"re");
  Effect_PopAnim::PlaySingleAnimation(this,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantThymeWarp::PlantThymeWarp() */

void __thiscall PlantThymeWarp::PlantThymeWarp(PlantThymeWarp *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067f5140;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* PlantThymeWarp::StaticNew() */

PlantThymeWarp * PlantThymeWarp::StaticNew(void)

{
  PlantThymeWarp *this;
  
  this = ::operator_new(0x70);
  PlantThymeWarp(this);
  return this;
}


/* PlantThymeWarp::Initialize() */

void __thiscall PlantThymeWarp::Initialize(PlantThymeWarp *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_04173654(*(undefined8 *)(this + 0x10));
  fVar2 = (float)PVZ_T();
  fVar3 = *(float *)(lVar1 + 700);
  fVar2 = fVar2 + *(float *)(lVar1 + 0x2b8);
  fVar5 = *(float *)(lVar1 + 0x2c0);
  this[0x68] = (PlantThymeWarp)0x0;
  fVar4 = fVar2 + fVar3;
  *(float *)(this + 0x58) = fVar2;
  *(float *)(this + 0x5c) = fVar4;
  *(float *)(this + 0x60) = fVar4 + fVar5;
  *(float *)(this + 100) = fVar2 + fVar3 * 0.8;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantThymeWarp::startDancing() */

void __thiscall PlantThymeWarp::startDancing(PlantThymeWarp *this)

{
  long *plVar1;
  UIEasyButtonWidget *this_00;
  code *pcVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  *(undefined4 *)(this_00 + 200) = 2;
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
  pcVar2 = *(code **)(*plVar1 + 0x130);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar2)(plVar1,aRStack_50);
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


/* PlantThymeWarp::~PlantThymeWarp() */

void __thiscall PlantThymeWarp::~PlantThymeWarp(PlantThymeWarp *this)

{
  *(undefined ***)this = &PTR_GetClass_067f5140;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x40));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantThymeWarp::~PlantThymeWarp() */

void __thiscall PlantThymeWarp::~PlantThymeWarp(PlantThymeWarp *this)

{
  ~PlantThymeWarp(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantThymeWarp::healZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
PlantThymeWarp::healZombie(PlantThymeWarp *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  Zombie *pZVar1;
  long lVar2;
  vector<ZombieConditions,std::allocator<ZombieConditions>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  lVar2 = FUN_04173654(*(undefined8 *)(this + 0x10));
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::vector
            (avStack_20,(vector *)(lVar2 + 0x2d8));
  Zombie::EndConditions(pZVar1,avStack_20);
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::~vector(avStack_20);
  pZVar1 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::Heal(pZVar1);
  pZVar1 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::HealHelm(pZVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantThymeWarp::warpZombieOut(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantThymeWarp::warpZombieOut(PlantThymeWarp *this,RtWeakPtrBase *param_2)

{
  Zombie *pZVar1;
  long lVar2;
  ZombieLaneChangingSubsystem *this_00;
  PlantChilibeanSubSystem *this_01;
  PlantSunBeanSubSystem *pPVar3;
  GarlicSubsystem *pGVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  healZombie(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  pZVar1 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  Zombie::EndCondition(pZVar1,0x55);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  createWarpingOutEffectAt(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  pZVar1 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  lVar2 = FUN_04173654(*(undefined8 *)(this + 0x10));
  Zombie::StartWarpOut(pZVar1,*(float *)(lVar2 + 700));
  this_00 = Board::GetGameSubSystem<ZombieLaneChangingSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  pZVar1 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  ZombieLaneChangingSubsystem::RemoveZombie(this_00,pZVar1);
  this_01 = Board::GetGameSubSystem<PlantChilibeanSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  pZVar1 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  PlantChilibeanSubSystem::RemoveZombieFlatulence(this_01,pZVar1);
  pPVar3 = Board::GetGameSubSystem<PlantSunBeanSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  PlantSunBeanSubSystem::StopMakingZombieSpewSun((Zombie *)pPVar3);
  pPVar3 = Board::GetGameSubSystem<PlantSunBeanSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  PlantSunBeanSubSystem::StopMakingZombieSupernova((Zombie *)pPVar3);
  pGVar4 = Board::GetGameSubSystem<GarlicSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  GarlicSubsystem::RemoveZombie((Zombie *)pGVar4);
  pZVar1 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  Zombie::RemoveMarkedForDeath(pZVar1);
  pZVar1 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  Zombie::SetIsControlled(pZVar1,true);
  pZVar1 = (Zombie *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  Zombie::SetIgnoresAllDamage(pZVar1,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantThymeWarp::reapearZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
PlantThymeWarp::reapearZombie(PlantThymeWarp *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  Zombie *pZVar1;
  long lVar2;
  long *plVar3;
  vector<ZombieConditions,std::allocator<ZombieConditions>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  Zombie::SetIgnoresAllDamage(pZVar1,false);
  pZVar1 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  lVar2 = FUN_04173654(*(undefined8 *)(this + 0x10));
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::vector
            (avStack_20,(vector *)(lVar2 + 0x2d8));
  Zombie::EndConditions(pZVar1,avStack_20);
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::~vector(avStack_20);
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  (**(code **)(*plVar3 + 0x80))(plVar3,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantThymeWarp::onKilled(bool) */

void PlantThymeWarp::onKilled(bool param_1)

{
  bool bVar1;
  char cVar2;
  PlantThymeWarp *pPVar3;
  RtWeakPtrBase *pRVar4;
  long lVar5;
  Zombie *pZVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  pPVar3 = (PlantThymeWarp *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(pPVar3 + 0x28));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(pPVar3 + 0x28));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    pRVar4 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_28,pRVar4);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_28);
    if (cVar2 != '\0') {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      cVar2 = FUN_04172b34(*(undefined4 *)(lVar5 + 0x28));
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_28);
        reapearZombie(pPVar3,aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        lVar5 = FUN_04173654(*(undefined8 *)(pPVar3 + 0x10));
        Zombie::StartWarpIn(pZVar6,*(float *)(lVar5 + 0x2c4));
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_28);
        createWarpingInEffectAt(pPVar3,aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        Zombie::SetIsControlled(pZVar6,false);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantThymeWarp::warpZombieIn(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantThymeWarp::warpZombieIn(PlantThymeWarp *this,RtMixedPtrBase *param_2)

{
  char cVar1;
  Zombie *pZVar2;
  long lVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    reapearZombie(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    placeZombieInNewPosition(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    pZVar2 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    lVar3 = FUN_04173654(*(undefined8 *)(this + 0x10));
    Zombie::StartWarpIn(pZVar2,*(float *)(lVar3 + 0x2c4));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    createWarpingInEffectAt(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    pZVar2 = (Zombie *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    Zombie::SetIsControlled(pZVar2,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantThymeWarp::startWarpingZombiesIn() */

void __thiscall PlantThymeWarp::startWarpingZombiesIn(PlantThymeWarp *this)

{
  bool bVar1;
  RtWeakPtrBase *pRVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xc;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x28));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x28));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    pRVar2 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,pRVar2);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_28);
    warpZombieIn(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantThymeWarp::findTargetsForWarp() */

void __thiscall PlantThymeWarp::findTargetsForWarp(PlantThymeWarp *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long extraout_x0;
  int iVar7;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesOnBoard(avStack_20,2);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  FUN_04175440(uVar4,uVar5);
  lVar6 = FUN_04173654(*(undefined8 *)(this + 0x10));
  uVar4 = *(undefined8 *)(this + 0x10);
  iVar7 = *(int *)(lVar6 + 0x2c8);
  iVar3 = FUN_0417283c(uVar4);
  if (iVar3 == 3) {
    lVar6 = FUN_04173654(uVar4);
    iVar7 = iVar7 + *(int *)(lVar6 + 0x2cc);
  }
  iVar3 = 0;
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  while( true ) {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_28);
    if (!bVar2) break;
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    nop();
    if (extraout_x0 != 0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)aRStack_30);
      cVar1 = shouldDoStuffTo(this,(RtWeakPtr<Sexy::SoundResource> *)&local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      if (cVar1 != '\0') {
        iVar3 = iVar3 + 1;
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)aRStack_30);
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                   (this + 0x28),(RtWeakPtr *)&local_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        if (iVar7 <= iVar3) break;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
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
/* PlantThymeWarp::startWarpingZombiesOut() */

void __thiscall PlantThymeWarp::startWarpingZombiesOut(PlantThymeWarp *this)

{
  bool bVar1;
  RtWeakPtrBase *pRVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
  local_8 = ___stack_chk_guard;
  findTargetsForWarp(this);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x28));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x28));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    pRVar2 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,pRVar2);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_28);
    warpZombieOut(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantThymeWarp::UpdateActions() */

void __thiscall PlantThymeWarp::UpdateActions(PlantThymeWarp *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar1;
  vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *this_00;
  char cVar2;
  bool bVar3;
  int iVar4;
  RtWeakPtrBase *pRVar5;
  long *plVar6;
  long lVar7;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  Zombie *this_02;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = shouldStartDance(this);
  if (cVar2 != '\0') {
    startDancing(this);
  }
  cVar2 = shouldWarpZombiesOut(this);
  if (cVar2 != '\0') {
    startWarpingZombiesOut(this);
    iVar4 = FUN_0417283c(*(undefined8 *)(this + 0x10));
    if (iVar4 < 2) {
      this[0x68] = (PlantThymeWarp)0x0;
    }
    else {
      this[0x68] = (PlantThymeWarp)0x1;
    }
  }
  fVar10 = *(float *)(this + 100);
  fVar8 = (float)PVZ_T();
  if (((fVar10 <= fVar8) && (*(int *)(*(long *)(this + 0x10) + 200) == 10)) &&
     (this[0x68] != (PlantThymeWarp)0x0)) {
    lVar7 = FUN_04173654();
    pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)(this + 0x28);
    fVar8 = *(float *)(lVar7 + 0x2d0);
    this_00 = (vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
              (this + 0x40);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(pvVar1);
    do {
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(pvVar1);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
      while( true ) {
        if (!bVar3) {
          local_28 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)this_00);
          local_20 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)this_00);
          while (bVar3 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20),
                bVar3) {
            pRVar5 = (RtWeakPtrBase *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,pRVar5);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_30);
            std::string::string((string *)&local_10,"");
            createQuickKillEffectAt
                      (this,(RtWeakPtr<Sexy::SoundResource> *)&local_18,
                       (RtWeakPtr<Sexy::SoundResource> *)&local_10);
            std::string::~string((string *)&local_10);
            nop();
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
          }
          uVar9 = PVZ_EOT();
          *(undefined4 *)(this + 100) = uVar9;
          goto LAB_04175774;
        }
        this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
        nop();
        if (((this_02 == (Zombie *)0x0) || (iVar4 = Zombie::GetSizeType(this_02), iVar4 != 0)) ||
           (fVar10 = (float)PlantFramework::Rand((PlantFramework *)this,1.0), fVar8 <= fVar10))
        break;
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)&local_18);
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                  (this_00,(RtWeakPtr *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_20);
        local_20 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::
                   erase((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                         pvVar1,local_10);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(pvVar1);
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10)
        ;
      }
      FUN_04172e24((__normal_iterator *)&local_20);
    } while( true );
  }
LAB_04175774:
  cVar2 = shouldDisapearZombies(this);
  if (cVar2 != '\0') {
    startDisapearingZombies(this);
  }
  cVar2 = shouldWarpZombiesIn(this);
  if (cVar2 != '\0') {
    pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)(this + 0x40);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(pvVar1);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(pvVar1);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar3)
    {
      pRVar5 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_20,pRVar5);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_20);
      if (cVar2 != '\0') {
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
        cVar2 = (**(code **)(*plVar6 + 0x328))();
        if (cVar2 == '\0') {
          plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
          (**(code **)(*plVar6 + 0x48))();
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
              ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)pvVar1);
    startWarpingZombiesIn(this);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

