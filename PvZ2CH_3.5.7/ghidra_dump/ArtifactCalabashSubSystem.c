// Class: ArtifactCalabashSubSystem


/* ArtifactCalabashSubSystem::cancelTouch() */

void __thiscall ArtifactCalabashSubSystem::cancelTouch(ArtifactCalabashSubSystem *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCalabashSubSystem::StaticClassInit() */

void ArtifactCalabashSubSystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactCalabashSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_037e7360,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactCalabashSubSystem::StaticGetClass() */

long * ArtifactCalabashSubSystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactCalabashSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactCalabashSubSystem::GetClass() const */

long * ArtifactCalabashSubSystem::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactCalabashSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCalabashSubSystem::ApplySmallElixir(Sexy::Point const&) */

void __thiscall
ArtifactCalabashSubSystem::ApplySmallElixir(ArtifactCalabashSubSystem *this,Point *param_1)

{
  int iVar1;
  int iVar2;
  Plant *this_00;
  Board *this_01;
  string asStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(param_1 + 4);
  local_8 = ___stack_chk_guard;
  iVar2 = *(int *)param_1;
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  this_00 = (Plant *)Board::GetPlantAt(this_01,iVar2,iVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (Plant *)0x0) {
    Plant::SetInvincible(this_00,true,true,*(float *)(this + 0x44));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactCalabashSubSystem::SetZombieSizeType(ZombieSizeType) */

void __thiscall
ArtifactCalabashSubSystem::SetZombieSizeType(ArtifactCalabashSubSystem *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0xa0) = param_2;
  return;
}


/* ArtifactCalabashSubSystem::PlayAndStop(std::string const&) */

void __thiscall
ArtifactCalabashSubSystem::PlayAndStop(ArtifactCalabashSubSystem *this,string *param_1)

{
  BoardArtifactManager *this_00;
  RtObject *this_01;
  AnimateArtifactMowerWithCalabash *this_02;
  
  this_00 = (BoardArtifactManager *)Board::GetArtifactManager(*(Board **)(gLawnApp + 0x9f0));
  this_01 = (RtObject *)BoardArtifactManager::GetAnimateArtifactMower(this_00);
  this_02 = Sexy::RtObject::Cast<AnimateArtifactMowerWithCalabash>(this_01);
  if (this_02 != (AnimateArtifactMowerWithCalabash *)0x0) {
    AnimateArtifactMowerWithCalabash::PlayAndStop(this_02,param_1);
    return;
  }
  return;
}


/* ArtifactCalabashSubSystem::PlayLoop(std::string const&) */

void __thiscall ArtifactCalabashSubSystem::PlayLoop(ArtifactCalabashSubSystem *this,string *param_1)

{
  BoardArtifactManager *pBVar1;
  long lVar2;
  RtObject *this_00;
  AnimateArtifactMowerWithCalabash *this_01;
  
  pBVar1 = (BoardArtifactManager *)Board::GetArtifactManager(*(Board **)(gLawnApp + 0x9f0));
  lVar2 = BoardArtifactManager::GetAnimateArtifactMower(pBVar1);
  if (lVar2 != 0) {
    pBVar1 = (BoardArtifactManager *)Board::GetArtifactManager(*(Board **)(gLawnApp + 0x9f0));
    this_00 = (RtObject *)BoardArtifactManager::GetAnimateArtifactMower(pBVar1);
    this_01 = Sexy::RtObject::Cast<AnimateArtifactMowerWithCalabash>(this_00);
    if (this_01 != (AnimateArtifactMowerWithCalabash *)0x0) {
      AnimateArtifactMowerWithCalabash::PlayLoop(this_01,param_1);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCalabashSubSystem::AddToRenderQueue(RenderQueue*) */

void __thiscall
ArtifactCalabashSubSystem::AddToRenderQueue(ArtifactCalabashSubSystem *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,DrawCalabashSubSystem);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<ArtifactCalabashSubSystem,void(ArtifactCalabashSubSystem::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,699999,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactCalabashSubSystem::GetUsedCapacity() */

void __thiscall ArtifactCalabashSubSystem::GetUsedCapacity(ArtifactCalabashSubSystem *this)

{
  std::deque<ZombieSizeType,std::allocator<ZombieSizeType>>::size
            ((deque<ZombieSizeType,std::allocator<ZombieSizeType>> *)(this + 200));
  return;
}


/* ArtifactCalabashSubSystem::CanUse() */

bool __thiscall ArtifactCalabashSubSystem::CanUse(ArtifactCalabashSubSystem *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = *(int *)(this + 0x38);
  bVar3 = iVar1 == 4 || iVar1 == 1;
  if (iVar1 == 4 || iVar1 == 1) {
    iVar1 = GetUsedCapacity(this);
    iVar2 = ZMatchShopMgr::getMatchTicket((ZMatchShopMgr *)this);
    bVar3 = iVar1 * 3 <= iVar2 * 2;
  }
  return bVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCalabashSubSystem::registerHandTouchEvents() */

void __thiscall ArtifactCalabashSubSystem::registerHandTouchEvents(ArtifactCalabashSubSystem *this)

{
  Board *pBVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  if (pBVar1 != (Board *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,handleTouch);
    Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
    Delegate1wRet<ArtifactCalabashSubSystem,bool(ArtifactCalabashSubSystem::*)(Sexy::Touch_const&)>
              (aDStack_68,aCStack_98);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_a0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,cancelTouch);
    Sexy::Delegate0::Delegate0<ArtifactCalabashSubSystem,void(ArtifactCalabashSubSystem::*)()>
              (aDStack_38,aCStack_80);
    Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,0xb,a_Stack_a0,aDStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCalabashSubSystem::DrawCalabashSubSystem(Sexy::Graphics*) */

void __thiscall
ArtifactCalabashSubSystem::DrawCalabashSubSystem(ArtifactCalabashSubSystem *this,Graphics *param_1)

{
  deque<ZombieSizeType,std::allocator<ZombieSizeType>> *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Image *pIVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  CachedUIResourcePtr<Sexy::Image> *this_01;
  ulong uVar11;
  int iVar12;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab1b40);
  this_00 = (deque<ZombieSizeType,std::allocator<ZombieSizeType>> *)(this + 0x118);
  uVar11 = 0;
  Sexy::Graphics::DrawImage
            (param_1,pIVar7,*(int *)(this + 0x28),*(int *)(this + 0x2c),*(int *)(this + 0x30),
             *(int *)(this + 0x34));
  lVar8 = std::deque<ZombieSizeType,std::allocator<ZombieSizeType>>::size(this_00);
  if (lVar8 != 0) {
    do {
      iVar2 = FUN_037e52d0(3);
      iVar12 = *(int *)(this + 0x28);
      iVar3 = FUN_037e52d0(10);
      iVar4 = FUN_037e52d0(4);
      iVar1 = *(int *)(this + 0x2c);
      iVar5 = FUN_037e52d0(9);
      Sexy::Insets::Insets
                ((Insets *)&local_18,iVar2 + iVar12 + iVar3 * (int)uVar11,iVar4 + iVar1,iVar5,iVar5)
      ;
      piVar9 = (int *)std::deque<ZombieSizeType,std::allocator<ZombieSizeType>>::operator[]
                                (this_00,uVar11);
      this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab1bb8;
      if ((*piVar9 == 0) ||
         (piVar9 = (int *)std::deque<ZombieSizeType,std::allocator<ZombieSizeType>>::operator[]
                                    (this_00,uVar11),
         this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab1c18, *piVar9 == 1)) {
LAB_037e7d9c:
        pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_01);
        Sexy::Graphics::DrawImage(param_1,pIVar7,local_18,local_14,local_10,local_c);
      }
      else {
        piVar9 = (int *)std::deque<ZombieSizeType,std::allocator<ZombieSizeType>>::operator[]
                                  (this_00,uVar11);
        if (*piVar9 == 2) {
          this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab1ad0;
          goto LAB_037e7d9c;
        }
      }
      uVar11 = uVar11 + 1;
      uVar10 = std::deque<ZombieSizeType,std::allocator<ZombieSizeType>>::size(this_00);
    } while (uVar11 < uVar10);
  }
  iVar12 = 1;
  do {
    iVar4 = FUN_037e52d0(3);
    iVar1 = *(int *)(this + 0x28);
    iVar3 = FUN_037e52d0(10);
    iVar3 = iVar3 * iVar12;
    iVar12 = iVar12 + 1;
    iVar5 = FUN_037e52d0(4);
    iVar2 = *(int *)(this + 0x2c);
    iVar6 = FUN_037e52d0(9);
    Sexy::Insets::Insets((Insets *)&local_18,iVar4 + iVar1 + iVar3,iVar5 + iVar2,iVar6,iVar6);
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab1b90);
    iVar2 = local_14;
    iVar1 = local_18;
    iVar3 = FUN_037e52d0(2);
    Sexy::Graphics::DrawImage(param_1,pIVar7,iVar1,iVar2,iVar3,local_c);
  } while (iVar12 != 10);
  if (*(int *)(this + 0x38) == 2) {
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab1a10);
    Sexy::Graphics::DrawImage
              (param_1,pIVar7,*(int *)(this + 0x18),*(int *)(this + 0x1c),*(int *)(this + 0x20),
               *(int *)(this + 0x24));
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab1c48);
    iVar2 = FUN_037e52d0(10);
    iVar12 = *(int *)(this + 0x18);
    iVar3 = FUN_037e52d0(2);
    iVar1 = *(int *)(this + 0x1c);
    iVar4 = FUN_037e52d0(0x32);
    Sexy::Graphics::DrawImage(param_1,pIVar7,iVar2 + iVar12,iVar3 + iVar1,iVar4,iVar4);
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab1b00);
    iVar2 = FUN_037e52d0(0x3f);
    iVar12 = *(int *)(this + 0x18);
    iVar3 = FUN_037e52d0(2);
    iVar1 = *(int *)(this + 0x1c);
    iVar4 = FUN_037e52d0(0x32);
    Sexy::Graphics::DrawImage(param_1,pIVar7,iVar2 + iVar12,iVar3 + iVar1,iVar4,iVar4);
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab1a58);
    iVar2 = FUN_037e52d0(0x75);
    iVar12 = *(int *)(this + 0x18);
    iVar3 = FUN_037e52d0(2);
    iVar1 = *(int *)(this + 0x1c);
    iVar4 = FUN_037e52d0(0x32);
    Sexy::Graphics::DrawImage(param_1,pIVar7,iVar2 + iVar12,iVar3 + iVar1,iVar4,iVar4);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCalabashSubSystem::createElixir() */

void __thiscall ArtifactCalabashSubSystem::createElixir(ArtifactCalabashSubSystem *this)

{
  deque<ZombieSizeType,std::allocator<ZombieSizeType>> *this_00;
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int *piVar4;
  string *__n;
  int iVar5;
  int iVar6;
  float fVar7;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this_00 = (deque<ZombieSizeType,std::allocator<ZombieSizeType>> *)(this + 0x118);
  local_8 = ___stack_chk_guard;
  uVar2 = std::deque<ZombieSizeType,std::allocator<ZombieSizeType>>::size(this_00);
  uVar3 = 0;
  if (uVar2 < 10) goto LAB_037e8034;
  iVar6 = 0;
  iVar5 = 0;
  uVar2 = 0;
  do {
    while (piVar4 = (int *)std::deque<ZombieSizeType,std::allocator<ZombieSizeType>>::operator[]
                                     (this_00,uVar2), *piVar4 != 0) {
      uVar1 = uVar2 + 1;
      piVar4 = (int *)std::deque<ZombieSizeType,std::allocator<ZombieSizeType>>::operator[]
                                (this_00,uVar2);
      if (*piVar4 == 1) {
        iVar6 = iVar6 + 1;
      }
      uVar2 = uVar1;
      if (uVar1 == 10) goto LAB_037e7fa4;
    }
    uVar2 = uVar2 + 1;
    iVar5 = iVar5 + 1;
  } while (uVar2 != 10);
LAB_037e7fa4:
  __n = asStack_10;
  std::string::string(asStack_18,"tool_buff_small_elixir");
  nop();
  fVar7 = (float)Sexy::Rand(1.0);
  if (fVar7 < (float)iVar5 * _FUN_037e80d0) {
    std::string::append(asStack_18,"tool_buff_small_elixir",(size_t)__n);
LAB_037e800c:
    FUN_037e64c0(asStack_18);
    fVar7 = (float)Sexy::Rand(1.0);
    if (fVar7 < *(float *)(this + 0x5c)) {
LAB_037e8088:
      std::string::string(asStack_10,"tool_buff_thunder_elixir");
      FUN_037e64c0(asStack_10);
      std::string::~string(asStack_10);
      nop();
    }
  }
  else {
    if (fVar7 < (float)(iVar6 + iVar5) * _FUN_037e80d0) {
      std::string::append(asStack_18,"tool_buff_medium_elixir",(size_t)__n);
      goto LAB_037e800c;
    }
    std::string::append(asStack_18,"tool_buff_large_elixir",(size_t)__n);
    FUN_037e64c0(asStack_18);
    fVar7 = (float)Sexy::Rand(1.0);
    if (fVar7 < *(float *)(this + 0x5c)) goto LAB_037e8088;
  }
  std::string::~string(asStack_18);
  uVar3 = 1;
LAB_037e8034:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* ArtifactCalabashSubSystem::TryCreateElixir() */

void __thiscall ArtifactCalabashSubSystem::TryCreateElixir(ArtifactCalabashSubSystem *this)

{
  char cVar1;
  long lVar2;
  
  cVar1 = createElixir(this);
  if (cVar1 != '\0') {
    lVar2 = 10;
    do {
      while (cVar1 = std::deque<ZombieSizeType,std::allocator<ZombieSizeType>>::empty
                               ((deque<ZombieSizeType,std::allocator<ZombieSizeType>> *)
                                (this + 0x118)), cVar1 == '\0') {
        std::deque<ZombieSizeType,std::allocator<ZombieSizeType>>::pop_front
                  ((deque<ZombieSizeType,std::allocator<ZombieSizeType>> *)(this + 0x118));
        lVar2 = lVar2 + -1;
        if (lVar2 == 0) {
          return;
        }
      }
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCalabashSubSystem::canAbsorbZombie(Zombie*) */

void __thiscall
ArtifactCalabashSubSystem::canAbsorbZombie(ArtifactCalabashSubSystem *this,Zombie *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = RealObject::IsOnTeam(param_1,2);
  if ((((((cVar1 == '\0') ||
         (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 != '\0')) ||
        (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 != '\0')) ||
       ((cVar1 = FUN_037e63f4(*(undefined4 *)(param_1 + 0xcc)), cVar1 != '\0' ||
        (cVar1 = Zombie::IsControlled(param_1), cVar1 != '\0')))) ||
      ((cVar1 = Zombie::HasCondition(param_1,0x2e), cVar1 != '\0' ||
       ((cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 != '\0' ||
        (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 != '\0')))))) ||
     ((bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1), bVar2 ||
      ((bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1), bVar2 ||
       (cVar1 = Zombie::CanTakeFatalDamage(param_1), cVar1 == '\0')))))) {
    bVar2 = false;
  }
  else {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x68);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    uVar5 = Zombie::GetTypeName(param_1);
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                         (uVar3,uVar4,uVar5);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCalabashSubSystem::ArtifactCalabashSubSystem() */

void __thiscall
ArtifactCalabashSubSystem::ArtifactCalabashSubSystem(ArtifactCalabashSubSystem *this)

{
  LawnApp *pLVar1;
  long lVar2;
  undefined4 uVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_0669be00;
  Sexy::Insets::Insets((Insets *)(this + 0x18));
  Sexy::Insets::Insets((Insets *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xb0));
  std::deque<ZombieSizeType,std::allocator<ZombieSizeType>>::deque();
  std::deque<ZombieSizeType,std::allocator<ZombieSizeType>>::deque();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x170));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x188));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a0));
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Artifact");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"PlantEMPea");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"PlantCitron");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x38) = 1;
  *(undefined4 *)(this + 100) = 0x1e;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0xa8) = 0x40a00000;
  uVar3 = PVZ_EOT();
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x168) = uVar3;
  *(undefined4 *)(this + 0x9c) = uVar3;
  *(undefined4 *)(this + 0xa4) = uVar3;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactCalabashSubSystem::StaticNew() */

ArtifactCalabashSubSystem * ArtifactCalabashSubSystem::StaticNew(void)

{
  ArtifactCalabashSubSystem *this;
  
  this = ::operator_new(0x1b8);
  ArtifactCalabashSubSystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCalabashSubSystem::~ArtifactCalabashSubSystem() */

void __thiscall
ArtifactCalabashSubSystem::~ArtifactCalabashSubSystem(ArtifactCalabashSubSystem *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0669be00;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Artifact");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"PlantEMPea");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"PlantCitron");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::vector<std::pair<float,Sexy::Point>,std::allocator<std::pair<float,Sexy::Point>>>::~vector
            ((vector<std::pair<float,Sexy::Point>,std::allocator<std::pair<float,Sexy::Point>>> *)
             (this + 0x1a0));
  std::
  vector<std::pair<Sexy::RtWeakPtr<Plant>,float>,std::allocator<std::pair<Sexy::RtWeakPtr<Plant>,float>>>
  ::~vector((vector<std::pair<Sexy::RtWeakPtr<Plant>,float>,std::allocator<std::pair<Sexy::RtWeakPtr<Plant>,float>>>
             *)(this + 0x188));
  std::
  vector<std::tuple<Effect_PopAnim*,float,Sexy::Point,float>,std::allocator<std::tuple<Effect_PopAnim*,float,Sexy::Point,float>>>
  ::~vector((vector<std::tuple<Effect_PopAnim*,float,Sexy::Point,float>,std::allocator<std::tuple<Effect_PopAnim*,float,Sexy::Point,float>>>
             *)(this + 0x170));
  std::deque<ZombieSizeType,std::allocator<ZombieSizeType>>::~deque
            ((deque<ZombieSizeType,std::allocator<ZombieSizeType>> *)(this + 0x118));
  std::deque<ZombieSizeType,std::allocator<ZombieSizeType>>::~deque
            ((deque<ZombieSizeType,std::allocator<ZombieSizeType>> *)(this + 200));
  std::
  vector<std::tuple<Sexy::RtWeakPtr<Zombie>,float,float,Sexy::SexyVector3,Sexy::SexyVector3>,std::allocator<std::tuple<Sexy::RtWeakPtr<Zombie>,float,float,Sexy::SexyVector3,Sexy::SexyVector3>>>
  ::~vector((vector<std::tuple<Sexy::RtWeakPtr<Zombie>,float,float,Sexy::SexyVector3,Sexy::SexyVector3>,std::allocator<std::tuple<Sexy::RtWeakPtr<Zombie>,float,float,Sexy::SexyVector3,Sexy::SexyVector3>>>
             *)(this + 0xb0));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x68));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactCalabashSubSystem::~ArtifactCalabashSubSystem() */

void __thiscall
ArtifactCalabashSubSystem::~ArtifactCalabashSubSystem(ArtifactCalabashSubSystem *this)

{
  ~ArtifactCalabashSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCalabashSubSystem::SetState(ArtifactCalabashSubSystem::CalabashSubSystemState) */

void __thiscall
ArtifactCalabashSubSystem::SetState(ArtifactCalabashSubSystem *this,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Effect_PopAnim *pEVar4;
  ResourceInfo *pRVar5;
  PopAnimRig *pPVar6;
  ulong uVar7;
  StandaloneEffect *pSVar8;
  undefined4 uVar9;
  float fVar10;
  string asStack_40 [8];
  string asStack_38 [24];
  RtWeakPtr aRStack_20 [24];
  long local_8;
  
  *(undefined4 *)(this + 0x38) = param_2;
  local_8 = ___stack_chk_guard;
  switch(param_2) {
  case 1:
    std::string::string((string *)aRStack_20,"idle");
    PlayLoop(this,(string *)aRStack_20);
    std::string::~string((string *)aRStack_20);
    nop();
    break;
  case 2:
    cancelTouch(this);
    break;
  case 3:
    fVar10 = (float)PVZ_T();
    *(float *)(this + 0x98) = fVar10 + *(float *)(this + 0x3c);
    fVar10 = (float)PVZ_T();
    this[0x80] = (ArtifactCalabashSubSystem)0x0;
    *(float *)(this + 0x9c) = fVar10 + 0.5;
    pEVar4 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    *(Effect_PopAnim **)(this + 0x88) = pEVar4;
    std::string::string(asStack_38,"POPANIM_EFFECTS_ARTIFACT_CALABASH_EFFECT");
    GetPAMByName(asStack_38);
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
    Effect_PopAnim::CreatePopAnimRig(pEVar4,(PopAnim *)pRVar5,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    std::string::~string(asStack_38);
    nop();
    pSVar8 = *(StandaloneEffect **)(this + 0x88);
    iVar2 = BoardTransforms::GridToBoardSpaceX(0);
    iVar3 = BoardTransforms::GridToBoardSpaceY(0);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_20,(float)iVar2,(float)iVar3,0.0);
    StandaloneEffect::SetBoardSpaceOrigin(pSVar8,(SexyVector3 *)aRStack_20,-1);
    FUN_037e4d0c(*(long *)(this + 0x88) + 0x1c,500000);
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x88),true);
    pPVar6 = (PopAnimRig *)UIWidget::GetAtlasImage(*(UIWidget **)(this + 0x88));
    std::string::string((string *)aRStack_20,"jiangshi_small");
    PopAnimRig::SetLayerVisibility(pPVar6,(string *)aRStack_20,*(int *)(this + 0xa0) == 0);
    std::string::~string((string *)aRStack_20);
    nop();
    pPVar6 = (PopAnimRig *)UIWidget::GetAtlasImage(*(UIWidget **)(this + 0x88));
    std::string::string((string *)aRStack_20,"jiangshi_mid");
    PopAnimRig::SetLayerVisibility(pPVar6,(string *)aRStack_20,*(int *)(this + 0xa0) == 1);
    std::string::~string((string *)aRStack_20);
    nop();
    pPVar6 = (PopAnimRig *)UIWidget::GetAtlasImage(*(UIWidget **)(this + 0x88));
    std::string::string((string *)aRStack_20,"jiangshi_big");
    PopAnimRig::SetLayerVisibility(pPVar6,(string *)aRStack_20,*(int *)(this + 0xa0) == 2);
    std::string::~string((string *)aRStack_20);
    nop();
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)asStack_38);
    std::string::string((string *)aRStack_20,"hl");
    AnimationSequence::AddSingleAnimation(asStack_38,aRStack_20,0);
    std::string::~string((string *)aRStack_20);
    nop();
    std::string::string((string *)aRStack_20,"hl02");
    uVar9 = PVZ_EOT();
    AnimationSequence::AddLoopingAnimation(asStack_38,aRStack_20,0);
    std::string::~string((string *)aRStack_20);
    nop();
    Effect_PopAnim::PlayAnimationSequence
              (*(Effect_PopAnim **)(this + 0x88),(AnimationSequence *)asStack_38);
    pEVar4 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    *(Effect_PopAnim **)(this + 0x90) = pEVar4;
    std::string::string(asStack_40,"POPANIM_EFFECTS_ARTIFACT_CALABASH_EFFECT");
    GetPAMByName(asStack_40);
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
    Effect_PopAnim::CreatePopAnimRig(pEVar4,(PopAnim *)pRVar5,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    std::string::~string(asStack_40);
    nop();
    pSVar8 = *(StandaloneEffect **)(this + 0x90);
    iVar2 = BoardTransforms::GridToBoardSpaceX(0);
    iVar3 = BoardTransforms::GridToBoardSpaceY(0);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_20,(float)iVar2,(float)iVar3,0.0);
    StandaloneEffect::SetBoardSpaceOrigin(pSVar8,(SexyVector3 *)aRStack_20,-1);
    FUN_037e4d0c(*(long *)(this + 0x90) + 0x1c,500000);
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x90),true);
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
    std::string::string(asStack_40,"f");
    AnimationSequence::AddSingleAnimation(aRStack_20,asStack_40,0);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"f02");
    AnimationSequence::AddLoopingAnimation(uVar9,aRStack_20,asStack_40,0);
    std::string::~string(asStack_40);
    nop();
    Effect_PopAnim::PlayAnimationSequence
              (*(Effect_PopAnim **)(this + 0x90),(AnimationSequence *)aRStack_20);
    AnimationSequence::~AnimationSequence((AnimationSequence *)aRStack_20);
    AnimationSequence::~AnimationSequence((AnimationSequence *)asStack_38);
    break;
  case 4:
    cVar1 = std::deque<ZombieSizeType,std::allocator<ZombieSizeType>>::empty
                      ((deque<ZombieSizeType,std::allocator<ZombieSizeType>> *)(this + 200));
    if ((cVar1 == '\0') ||
       (uVar7 = std::deque<ZombieSizeType,std::allocator<ZombieSizeType>>::size
                          ((deque<ZombieSizeType,std::allocator<ZombieSizeType>> *)(this + 0x118)),
       9 < uVar7)) {
      std::string::string((string *)aRStack_20,"idle_2");
      PlayLoop(this,(string *)aRStack_20);
      std::string::~string((string *)aRStack_20);
      nop();
      fVar10 = (float)PVZ_T();
      *(float *)(this + 0xa4) = fVar10 + *(float *)(this + 0xa8);
    }
    else {
      SetState(this,1);
    }
    break;
  case 5:
    std::string::string((string *)aRStack_20,"trigger_2");
    PlayAndStop(this,(string *)aRStack_20);
    std::string::~string((string *)aRStack_20);
    nop();
    break;
  case 6:
    std::
    vector<std::tuple<Sexy::RtWeakPtr<Zombie>,float,float,Sexy::SexyVector3,Sexy::SexyVector3>,std::allocator<std::tuple<Sexy::RtWeakPtr<Zombie>,float,float,Sexy::SexyVector3,Sexy::SexyVector3>>>
    ::clear((vector<std::tuple<Sexy::RtWeakPtr<Zombie>,float,float,Sexy::SexyVector3,Sexy::SexyVector3>,std::allocator<std::tuple<Sexy::RtWeakPtr<Zombie>,float,float,Sexy::SexyVector3,Sexy::SexyVector3>>>
             *)(this + 0xb0));
    std::deque<ZombieSizeType,std::allocator<ZombieSizeType>>::clear
              ((deque<ZombieSizeType,std::allocator<ZombieSizeType>> *)(this + 200));
    std::deque<ZombieSizeType,std::allocator<ZombieSizeType>>::clear
              ((deque<ZombieSizeType,std::allocator<ZombieSizeType>> *)(this + 0x118));
    std::
    vector<std::tuple<Effect_PopAnim*,float,Sexy::Point,float>,std::allocator<std::tuple<Effect_PopAnim*,float,Sexy::Point,float>>>
    ::clear((vector<std::tuple<Effect_PopAnim*,float,Sexy::Point,float>,std::allocator<std::tuple<Effect_PopAnim*,float,Sexy::Point,float>>>
             *)(this + 0x170));
    std::
    vector<std::pair<Sexy::RtWeakPtr<Plant>,float>,std::allocator<std::pair<Sexy::RtWeakPtr<Plant>,float>>>
    ::clear((vector<std::pair<Sexy::RtWeakPtr<Plant>,float>,std::allocator<std::pair<Sexy::RtWeakPtr<Plant>,float>>>
             *)(this + 0x188));
    std::vector<std::pair<float,Sexy::Point>,std::allocator<std::pair<float,Sexy::Point>>>::clear
              ((vector<std::pair<float,Sexy::Point>,std::allocator<std::pair<float,Sexy::Point>>> *)
               (this + 0x1a0));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ArtifactCalabashSubSystem::Init(ArtifactCalabashSubSystem::ParamAdaptor&) */

void __thiscall
ArtifactCalabashSubSystem::Init(ArtifactCalabashSubSystem *this,ParamAdaptor *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x3c) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x44) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x4c) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x54) = uVar1;
  *(undefined8 *)(this + 0x5c) = *(undefined8 *)(param_1 + 0x20);
  *(int *)(this + 100) = (int)(*(float *)(this + 0x54) + 30.0);
  *(float *)(this + 0xa8) = *(float *)(this + 0x40) / (*(float *)(this + 0x58) + 1.0);
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x168) = uVar2;
  SetState(this,1);
  return;
}


/* ArtifactCalabashSubSystem::Close() */

void __thiscall ArtifactCalabashSubSystem::Close(ArtifactCalabashSubSystem *this)

{
  SetState(this,6);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCalabashSubSystem::Trigger() */

void __thiscall ArtifactCalabashSubSystem::Trigger(ArtifactCalabashSubSystem *this)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  code *pcVar9;
  int local_48;
  int local_44;
  int local_40;
  int local_38;
  int local_34;
  undefined4 local_28;
  int local_24;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_18,"UIArtifactIconWithCalabash");
  lVar8 = UIWidget::GetWidgetBySheetName((string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  if (lVar8 != 0) {
    UIWidget::GetDrawRect();
    Sexy::Point::Point((Point *)&local_48,local_38,local_34);
    Board::TranslateUIWidgetPositionToBoardPosition((Board *)gLawnApp[0x13e],(Point *)&local_48);
    Board::GetBoardBaseOffset();
    iVar3 = FUN_037e52d0(0x32);
    Board::GetBoardBaseOffset();
    iVar6 = local_44 - local_24;
    iVar4 = FUN_037e52d0(0x46);
    iVar5 = FUN_037e52d0(0xb2);
    Sexy::Insets::Insets
              ((Insets *)&local_18,(local_48 - local_40) - iVar3,iVar6 - iVar4,iVar5,iVar4);
    plVar1 = gLawnApp;
    pcVar9 = *(code **)(*gLawnApp + 0x360);
    *(undefined8 *)(this + 0x18) = local_18;
    *(undefined8 *)(this + 0x20) = uStack_10;
    cVar2 = (*pcVar9)(plVar1);
    if (cVar2 != '\0') {
      iVar6 = (**(code **)(*gLawnApp + 0x368))(gLawnApp);
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + iVar6;
    }
    Board::GetGridBoundingRect();
    iVar6 = FUN_037e52bc(local_28);
    iVar3 = FUN_037e52d0(0x50);
    iVar4 = FUN_037e52bc(local_24);
    iVar5 = FUN_037e52d0(0x65);
    iVar7 = FUN_037e52d0(0x11);
    Sexy::Insets::Insets((Insets *)&local_18,iVar6 - iVar3,iVar3 + iVar4,iVar5,iVar7);
    *(undefined8 *)(this + 0x28) = local_18;
    *(undefined8 *)(this + 0x30) = uStack_10;
  }
  SetState(this,2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCalabashSubSystem::onAbsorb(StandaloneEffect*) */

void ArtifactCalabashSubSystem::onAbsorb(StandaloneEffect *param_1)

{
  bool bVar1;
  ulong uVar2;
  tuple *ptVar3;
  RtWeakPtrBase *pRVar4;
  Zombie *this;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  while( true ) {
    uVar7 = *(undefined8 *)(param_1 + 0xb0);
    uVar2 = FUN_037e4d54(uVar7,*(undefined8 *)(param_1 + 0xb8));
    if (uVar2 <= uVar6) break;
    ptVar3 = (tuple *)FUN_037e4d68(uVar7,uVar6);
    pRVar4 = (RtWeakPtrBase *)
             std::get<0ul,Sexy::Image*,Sexy::Image*,Sexy::Image*,std::wstring,bool>(ptVar3);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_80,pRVar4);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_80);
    if (bVar1) {
      this = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
      Zombie::SetIgnoresAllDamage(this,false);
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
      pcVar8 = *(code **)(*plVar5 + 0x120);
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,aDStack_68,4,aPStack_78,0);
      (*pcVar8)(plVar5,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
    }
    uVar6 = uVar6 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
  }
  std::
  vector<std::tuple<Sexy::RtWeakPtr<Zombie>,float,float,Sexy::SexyVector3,Sexy::SexyVector3>,std::allocator<std::tuple<Sexy::RtWeakPtr<Zombie>,float,float,Sexy::SexyVector3,Sexy::SexyVector3>>>
  ::clear((vector<std::tuple<Sexy::RtWeakPtr<Zombie>,float,float,Sexy::SexyVector3,Sexy::SexyVector3>,std::allocator<std::tuple<Sexy::RtWeakPtr<Zombie>,float,float,Sexy::SexyVector3,Sexy::SexyVector3>>>
           *)(param_1 + 0xb0));
  SetState((ArtifactCalabashSubSystem *)param_1,4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCalabashSubSystem::handleTouch(Sexy::Touch const&) */

void __thiscall
ArtifactCalabashSubSystem::handleTouch(ArtifactCalabashSubSystem *this,Touch *param_1)

{
  TPoint *pTVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = '\0';
  if (*(int *)(this + 0x38) != 2) goto LAB_037e9494;
  cVar3 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
  if (cVar3 == '\0') goto LAB_037e9494;
  iVar2 = *(int *)(param_1 + 0x30);
  if ((*(long *)(this + 0x10) == 0) && (iVar2 == 0)) {
LAB_037e951c:
    cVar4 = Sexy::TRect<int>::Contains((TRect<int> *)(this + 0x18),(TPoint *)(param_1 + 0x10));
    if (cVar4 != '\0') {
      *(undefined8 *)(this + 0x10) = *(undefined8 *)param_1;
      cVar3 = cVar4;
    }
  }
  else {
    if (*(long *)(this + 0x10) == *(long *)param_1) {
      if (iVar2 == 0) goto LAB_037e951c;
      if (iVar2 != 3) goto LAB_037e9494;
      pTVar1 = (TPoint *)(param_1 + 0x10);
      cVar4 = Sexy::TRect<int>::Contains((TRect<int> *)(this + 0x18),pTVar1);
      if (cVar4 == '\0') {
        SetState(this,4);
      }
      else {
        Sexy::Insets::Insets
                  (aIStack_38,*(int *)(this + 0x18),*(int *)(this + 0x1c),*(int *)(this + 0x20) / 3,
                   *(int *)(this + 0x24));
        Sexy::Insets::Insets
                  (aIStack_28,*(int *)(this + 0x20) / 3 + *(int *)(this + 0x18),
                   *(int *)(this + 0x1c),*(int *)(this + 0x20) / 3,*(int *)(this + 0x24));
        Sexy::Insets::Insets
                  (aIStack_18,(*(int *)(this + 0x20) << 1) / 3 + *(int *)(this + 0x18),
                   *(int *)(this + 0x1c),*(int *)(this + 0x20) / 3,*(int *)(this + 0x24));
        cVar4 = Sexy::TRect<int>::Contains((TRect<int> *)aIStack_38,pTVar1);
        if (cVar4 == '\0') {
          cVar4 = Sexy::TRect<int>::Contains((TRect<int> *)aIStack_28,pTVar1);
          if (cVar4 == '\0') {
            cVar4 = Sexy::TRect<int>::Contains((TRect<int> *)aIStack_18,pTVar1);
            if (cVar4 != '\0') {
              *(undefined4 *)(this + 0xa0) = 2;
            }
          }
          else {
            *(undefined4 *)(this + 0xa0) = 1;
          }
        }
        else {
          *(undefined4 *)(this + 0xa0) = 0;
        }
        SetState(this,3);
      }
    }
    else if (iVar2 == 3) {
      cVar4 = Sexy::TRect<int>::Contains((TRect<int> *)(this + 0x18),(TPoint *)(param_1 + 0x10));
      if (cVar4 == '\0') {
        SetState(this,4);
        cVar3 = '\0';
        goto LAB_037e9494;
      }
    }
    else {
      cVar3 = '\0';
      if (iVar2 != 4) goto LAB_037e9494;
    }
    cancelTouch(this);
  }
LAB_037e9494:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCalabashSubSystem::ApplyMediumElixir(Sexy::Point const&) */

void __thiscall
ArtifactCalabashSubSystem::ApplyMediumElixir(ArtifactCalabashSubSystem *this,Point *param_1)

{
  int iVar1;
  undefined4 uVar2;
  Effect_PopAnim *pEVar3;
  ResourceInfo *pRVar4;
  float fVar5;
  float local_40 [2];
  int local_38;
  int local_34;
  Effect_PopAnim *local_30;
  float local_28 [2];
  RtWeakPtr aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::GridToBoardSpace(param_1);
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  local_34 = local_34 - iVar1 / 2;
  uVar2 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(param_1 + 4),0);
  pEVar3 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)local_28,"POPANIM_EFFECTS_EMPEACH_BLAST");
  GetPAMByName((string *)local_28);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::~string((string *)local_28);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_20,(float)local_38,(float)local_34,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar3,(SexyVector3 *)aRStack_20,-1);
  FUN_037e4d0c(pEVar3 + 0x1c,uVar2);
  Effect_PopAnim::SetCentered(pEVar3,true);
  std::string::string((string *)aRStack_20,"animation");
  Effect_PopAnim::PlaySingleAnimation(pEVar3,aRStack_20,0);
  std::string::~string((string *)aRStack_20);
  nop();
  pEVar3 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  local_30 = pEVar3;
  std::string::string((string *)local_28,"POPANIM_EFFECTS_CITRON_5HIT");
  GetPAMByName((string *)local_28);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::~string((string *)local_28);
  nop();
  pEVar3 = local_30;
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_20,(float)local_38,(float)local_34,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar3,(SexyVector3 *)aRStack_20,-1);
  FUN_037e4d0c((StandaloneEffect *)(local_30 + 0x1c),uVar2);
  Effect_PopAnim::SetCentered(local_30,true);
  pEVar3 = local_30;
  std::string::string((string *)aRStack_20,"idle2");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar3,aRStack_20,0);
  std::string::~string((string *)aRStack_20);
  nop();
  fVar5 = *(float *)(this + 0x4c);
  local_40[0] = *(float *)(this + 0x48);
  local_28[0] = (float)PVZ_T();
  local_28[0] = local_28[0] + fVar5;
  std::make_tuple<Effect_PopAnim*&,float,Sexy::Point_const&,float&>
            (&local_30,local_28,param_1,local_40);
  std::
  vector<std::tuple<Effect_PopAnim*,float,Sexy::Point,float>,std::allocator<std::tuple<Effect_PopAnim*,float,Sexy::Point,float>>>
  ::push_back((vector<std::tuple<Effect_PopAnim*,float,Sexy::Point,float>,std::allocator<std::tuple<Effect_PopAnim*,float,Sexy::Point,float>>>
               *)(this + 0x170),(tuple *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCalabashSubSystem::ApplyLargeElixir(Sexy::Point const&) */

void __thiscall
ArtifactCalabashSubSystem::ApplyLargeElixir(ArtifactCalabashSubSystem *this,Point *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Plant *this_00;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  undefined8 uVar9;
  Board *this_02;
  float fVar10;
  float fVar11;
  float local_34;
  RtWeakPtr aRStack_30 [8];
  RtWeakPtr aRStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  iVar2 = *(int *)param_1;
  local_8 = ___stack_chk_guard;
  this_02 = *(Board **)(gLawnApp + 0x9f0);
  iVar3 = *(int *)(param_1 + 4);
  std::string::string(asStack_18,"");
  this_00 = (Plant *)Board::GetPlantAt(this_02,iVar2,iVar3,asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (this_00 != (Plant *)0x0) {
    fVar11 = *(float *)(this + 0x50);
    uVar7 = 0;
    pcVar8 = *(code **)(*(long *)this_00 + 0x1e0);
    fVar10 = (float)Plant::GetMaxHealth(this_00);
    (*pcVar8)(this_00,(int)fVar10,1);
    iVar2 = FUN_037e4d14(*(undefined4 *)(this_00 + 0x50));
    iVar3 = FUN_037e4d18(*(undefined4 *)(this_00 + 0x1ec));
    if (iVar2 < iVar3) {
      while( true ) {
        uVar9 = *(undefined8 *)(this + 0x188);
        uVar5 = FUN_037e4d40(uVar9,*(undefined8 *)(this + 400));
        if (uVar5 <= uVar7) break;
        this_01 = (RtWeakPtr *)FUN_037e4d4c(uVar9,uVar7);
        pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
        if (this_00 == (Plant *)pRVar4) {
          lVar6 = FUN_037e4d4c(*(undefined8 *)(this + 0x188),uVar7);
          *(float *)(lVar6 + 8) = *(float *)(lVar6 + 8) + fVar11;
          goto LAB_037ea614;
        }
        uVar7 = uVar7 + 1;
      }
      iVar2 = FUN_037e4d14(*(undefined4 *)(this_00 + 0x50));
      BoardEntity::LevelUp((BoardEntity *)this_00,iVar2 + 1);
      ToolPacketData::GetProps();
      local_34 = (float)PVZ_T();
      local_34 = local_34 + fVar11;
      std::make_pair<Sexy::RtWeakPtr<GameObject>,float>(aRStack_30,&local_34);
      std::pair<Sexy::RtWeakPtr<Plant>,float>::pair<Sexy::RtWeakPtr<GameObject>,float,void>
                ((pair<Sexy::RtWeakPtr<Plant>,float> *)asStack_18,(pair *)aRStack_28);
      std::
      vector<std::pair<Sexy::RtWeakPtr<Plant>,float>,std::allocator<std::pair<Sexy::RtWeakPtr<Plant>,float>>>
      ::push_back((vector<std::pair<Sexy::RtWeakPtr<Plant>,float>,std::allocator<std::pair<Sexy::RtWeakPtr<Plant>,float>>>
                   *)(this + 0x188),(pair *)asStack_18);
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)asStack_18);
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    }
    else {
      cVar1 = Plant::CanApplyPlantfood(this_00);
      if (cVar1 != '\0') {
        (**(code **)(**(long **)(this_00 + 0xa8) + 0x220))(*(long **)(this_00 + 0xa8));
      }
    }
  }
LAB_037ea614:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCalabashSubSystem::ApplyThunderElixir(Sexy::Point const&) */

void __thiscall
ArtifactCalabashSubSystem::ApplyThunderElixir(ArtifactCalabashSubSystem *this,Point *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float local_24;
  Point aPStack_20 [8];
  pair apStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = 0;
  do {
    local_24 = (float)PVZ_T();
    fVar4 = (float)iVar3;
    iVar3 = iVar3 + 1;
    local_24 = local_24 + fVar4 * 0.33;
    iVar1 = RandRangeInt(-2,2);
    iVar2 = RandRangeInt(-2,2);
    Sexy::Point::Point(aPStack_20,iVar1 + *(int *)param_1,iVar2 + *(int *)(param_1 + 4));
    std::make_pair<float&,Sexy::Point>(&local_24,aPStack_20);
    std::vector<std::pair<float,Sexy::Point>,std::allocator<std::pair<float,Sexy::Point>>>::
    push_back((vector<std::pair<float,Sexy::Point>,std::allocator<std::pair<float,Sexy::Point>>> *)
              (this + 0x1a0),apStack_18);
  } while (iVar3 != 9);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactCalabashSubSystem::SetZombieBlackList(std::vector<std::string, std::allocator<std::string
   > > const&) */

void __thiscall
ArtifactCalabashSubSystem::SetZombieBlackList(ArtifactCalabashSubSystem *this,vector *param_1)

{
  string *psVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)param_1;
    uVar2 = FUN_037e4d2c(uVar4,*(undefined8 *)(param_1 + 8));
    if (uVar2 <= uVar3) break;
    psVar1 = (string *)FUN_037e4d38(uVar4,uVar3);
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)(this + 0x68),psVar1);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCalabashSubSystem::UpdateElixirs() */

void __thiscall ArtifactCalabashSubSystem::UpdateElixirs(ArtifactCalabashSubSystem *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  RtMixedPtr<Sexy::Image> *this_00;
  float *pfVar7;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar8;
  long lVar9;
  Zombie *extraout_x0;
  undefined8 uVar10;
  ulong uVar11;
  RtMixedPtrBase *this_02;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar12;
  BoardEntity *this_03;
  tuple *ptVar13;
  long *plVar14;
  TPoint *pTVar15;
  undefined8 *puVar16;
  Zombie *this_04;
  string *psVar17;
  ulong uVar18;
  ulong uVar19;
  code *pcVar20;
  float fVar21;
  float fVar22;
  DamageInfo *pDVar23;
  undefined8 local_b0;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar21 = (float)PVZ_T();
  if (*(float *)(this + 0x168) < fVar21) {
    pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)(this + 0x170);
    *(float *)(this + 0x168) = *(float *)(this + 0x168) + 1.0;
    uVar10 = Sexy::LazySingleton<PVZDB>::GetInstance();
    std::string::string((string *)&local_a0,"EMPeaDefault");
    Sexy::ToWString((string *)&local_a0);
    Sexy::RtName::RtName((RtName *)local_68,(wstring *)&local_98);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>
              ((RtWeakPtr *)&local_80,uVar10,5,(RtName *)local_68);
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_80);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
    Sexy::RtName::~RtName((RtName *)local_68);
    FUN_05476c50((FastCurve *)&local_98);
    std::string::~string((string *)&local_a0);
    nop();
    local_b0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(pvVar1);
    while( true ) {
      local_68[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(pvVar1);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)local_68);
      if (!bVar2) break;
      uVar19 = 0;
      ptVar13 = (tuple *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
      plVar14 = (long *)std::
                        get<0ul,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>>
                                  (ptVar13);
      plVar14 = (long *)*plVar14;
      pfVar7 = (float *)std::get<1ul,Effect_PopAnim*,float,Sexy::Point,float>(ptVar13);
      fVar21 = *pfVar7;
      pTVar15 = (TPoint *)std::get<2ul,Effect_PopAnim*,float,Sexy::Point,float>(ptVar13);
      Sexy::Point::Point((Point *)&local_a8,pTVar15);
      ptVar13 = (tuple *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
      puVar16 = (undefined8 *)
                std::
                get<1ul,Sexy::RtDbTable::IteratorStorage*,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
                          (ptVar13);
                    /* WARNING: Load size is inaccurate */
      pDVar23._0_4_ = *puVar16;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
      Sexy::Insets::Insets((Insets *)local_68,local_a8 + -1,local_a4 + -1,3,3);
      EntityFinder::GetEntitiesInGridSquares((RtWeakPtr *)&local_80,2,(RtName *)local_68);
      uVar10 = local_80;
      lVar9 = FUN_037e4d74(local_80,local_78);
      if (lVar9 != 0) {
        do {
          FUN_037e4d80(uVar10,uVar19);
          nop();
          cVar3 = (**(code **)(*(long *)this_04 + 0x328))();
          if ((cVar3 == '\0') && (cVar3 = RealObject::IsOnOpposingTeam(this_04,1), cVar3 != '\0')) {
            uVar10 = *(undefined8 *)(pRVar8 + 0x2b8);
            uVar11 = 0;
            lVar9 = FUN_037e4d2c(uVar10,*(undefined8 *)(pRVar8 + 0x2c0));
            if (lVar9 != 0) {
              do {
                psVar17 = (string *)FUN_037e4d38(uVar10,uVar11);
                pRVar12 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_04);
                lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar12);
                cVar3 = std::operator==(psVar17,(string *)(lVar9 + 8));
                if (cVar3 != '\0') {
                  (**(code **)(*(long *)this_04 + 0x2a0))(0x3f800000,this_04);
                }
                uVar11 = uVar11 + 1;
                uVar10 = *(undefined8 *)(pRVar8 + 0x2b8);
                uVar18 = FUN_037e4d2c(uVar10,*(undefined8 *)(pRVar8 + 0x2c0));
              } while (uVar11 < uVar18);
            }
            pcVar20 = *(code **)(*(long *)this_04 + 0x110);
            Sexy::Point::Point((Point *)&local_a0,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
            DamageInfo::DamageInfo
                      (pDVar23._0_4_,local_98,local_94,(RtName *)local_68,(string *)&local_a0,0);
            (*pcVar20)(this_04,(RtName *)local_68);
            DamageInfo::~DamageInfo((DamageInfo *)local_68);
          }
          uVar10 = local_80;
          uVar19 = uVar19 + 1;
          uVar11 = FUN_037e4d74(local_80,local_78);
        } while (uVar19 < uVar11);
      }
      fVar22 = (float)PVZ_T();
      if (fVar22 <= fVar21) {
        FUN_037e6c40((__normal_iterator *)&local_b0);
      }
      else {
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 0x48))();
        }
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_68,(__normal_iterator *)&local_b0);
        local_b0 = std::
                   vector<std::tuple<Effect_PopAnim*,float,Sexy::Point,float>,std::allocator<std::tuple<Effect_PopAnim*,float,Sexy::Point,float>>>
                   ::erase((vector<std::tuple<Effect_PopAnim*,float,Sexy::Point,float>,std::allocator<std::tuple<Effect_PopAnim*,float,Sexy::Point,float>>>
                            *)pvVar1,local_68[0]);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    }
  }
  pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)(this + 0x188);
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(pvVar1);
LAB_037eb31c:
  local_68[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(pvVar1);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_80,(__normal_iterator *)local_68);
  do {
    if (!bVar2) {
      pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)(this + 0x1a0);
      local_b0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(pvVar1);
      do {
        local_68[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end(pvVar1);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)local_68);
        while( true ) {
          if (!bVar2) {
            if (local_8 == ___stack_chk_guard) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          fVar21 = (float)PVZ_T();
          pfVar7 = (float *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
          if (fVar21 <= *pfVar7) break;
          uVar19 = 0;
          uVar4 = Board::MakeRenderOrder(0x65130,pfVar7[2],0);
          this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
          std::string::string((string *)&local_80,"POPANIM_EFFECTS_ARTIFACT_CALABASH_EFFECT");
          GetPAMByName((string *)&local_80);
          pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_68);
          Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar8,(RtClass *)0x0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68)
          ;
          std::string::~string((string *)&local_80);
          nop();
          lVar9 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
          iVar5 = BoardTransforms::GridToBoardSpaceX(*(int *)(lVar9 + 4));
          lVar9 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
          iVar6 = BoardTransforms::GridToBoardSpaceY(*(int *)(lVar9 + 8));
          EATextSquish::Vec3::Vec3((Vec3 *)local_68,(float)iVar5,(float)iVar6,0.0);
          StandaloneEffect::SetBoardSpaceOrigin
                    ((StandaloneEffect *)this_01,(SexyVector3 *)local_68,-1);
          FUN_037e4d0c(this_01 + 0x1c,uVar4);
          Effect_PopAnim::SetCentered(this_01,true);
          Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_98);
          std::string::string((string *)local_68,"d01");
          AnimationSequence::AddSingleAnimation
                    ((PIInterpolator *)&local_98,
                     (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)local_68,0);
          std::string::~string((string *)local_68);
          nop();
          std::string::string((string *)local_68,"d02");
          AnimationSequence::AddSingleAnimation
                    ((PIInterpolator *)&local_98,
                     (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)local_68,0);
          std::string::~string((string *)local_68);
          nop();
          Effect_PopAnim::PlayAnimationSequence(this_01,(AnimationSequence *)&local_98);
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
          lVar9 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
          Sexy::Insets::Insets
                    ((Insets *)local_68,*(int *)(lVar9 + 4) + -1,*(int *)(lVar9 + 8) + -1,3,3);
          EntityFinder::GetEntitiesInGridSquares
                    ((__normal_iterator *)&local_80,2,
                     (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)local_68);
          uVar10 = local_80;
          lVar9 = FUN_037e4d74(local_80,local_78);
          if (lVar9 != 0) {
            do {
              FUN_037e4d80(uVar10,uVar19);
              nop();
              uVar10 = operator|(1,8);
              uVar4 = operator|(uVar10,0x200);
              cVar3 = Zombie::MatchesAny(extraout_x0,uVar4);
              if ((((cVar3 == '\0') &&
                   (cVar3 = (**(code **)(*(long *)extraout_x0 + 0x4d8))(extraout_x0), cVar3 == '\0')
                   ) && (cVar3 = (**(code **)(*(long *)extraout_x0 + 0x508))(extraout_x0),
                        cVar3 == '\0')) &&
                 (cVar3 = RealObject::IsOnOpposingTeam(extraout_x0,1), cVar3 != '\0')) {
                Zombie::ApplyCondition((Zombie *)0x40a00000,0,extraout_x0,0x18,1);
                pcVar20 = *(code **)(*(long *)extraout_x0 + 0x110);
                    /* WARNING: Load size is inaccurate */
                pDVar23._0_4_ = *(DamageInfo **)(this + 0x60);
                Sexy::Point::Point((Point *)&local_a8,-1,-1);
                Sexy::FastCurve::SetOutRange((FastCurve *)&local_a0,1.0,0.0);
                DamageInfo::DamageInfo
                          (pDVar23._0_4_,local_a0,local_9c,
                           (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                            *)local_68,(Point *)&local_a8,0);
                (*pcVar20)(extraout_x0,
                           (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                            *)local_68);
                DamageInfo::~DamageInfo((DamageInfo *)local_68);
              }
              uVar10 = local_80;
              uVar19 = uVar19 + 1;
              uVar11 = FUN_037e4d74(local_80,local_78);
            } while (uVar19 < uVar11);
          }
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)local_68,(__normal_iterator *)&local_b0);
          local_b0 = std::
                     vector<std::pair<float,Sexy::Point>,std::allocator<std::pair<float,Sexy::Point>>>
                     ::erase((vector<std::pair<float,Sexy::Point>,std::allocator<std::pair<float,Sexy::Point>>>
                              *)pvVar1,local_68[0]);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
          AnimationSequence::~AnimationSequence((AnimationSequence *)&local_98);
          local_68[0] = std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::end(pvVar1);
          bVar2 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_b0,(__normal_iterator *)local_68);
        }
        FUN_037e6d00((__normal_iterator *)&local_b0);
      } while( true );
    }
    fVar21 = (float)PVZ_T();
    this_00 = (RtMixedPtr<Sexy::Image> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
    if (fVar21 <= *(float *)(this_00 + 8)) {
      cVar3 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
      if (cVar3 == '\0') break;
      this_02 = (RtMixedPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
      cVar3 = Sexy::RtMixedPtrBase::IsValid(this_02);
    }
    else {
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00);
    }
    if (cVar3 != '\0') {
      pRVar12 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
      this_03 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar12);
      pRVar12 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar12);
      iVar5 = FUN_037e4d14(*(undefined4 *)(lVar9 + 0x50));
      BoardEntity::LevelUp(this_03,iVar5 + -1);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)local_68,(__normal_iterator *)&local_80);
    local_80 = std::
               vector<std::pair<Sexy::RtWeakPtr<Plant>,float>,std::allocator<std::pair<Sexy::RtWeakPtr<Plant>,float>>>
               ::erase((vector<std::pair<Sexy::RtWeakPtr<Plant>,float>,std::allocator<std::pair<Sexy::RtWeakPtr<Plant>,float>>>
                        *)pvVar1,local_68[0]);
    local_68[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(pvVar1);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_80,(__normal_iterator *)local_68);
  } while( true );
  FUN_037e6ca0((__normal_iterator *)&local_80);
  goto LAB_037eb31c;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCalabashSubSystem::absorbZombies(ZombieSizeType) */

void __thiscall
ArtifactCalabashSubSystem::absorbZombies(ArtifactCalabashSubSystem *this,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  ulong uVar7;
  long lVar8;
  SexyVector3 *pSVar9;
  int iVar10;
  tuple<Sexy::RtWeakPtr<Zombie>,float,float,Sexy::SexyVector3,Sexy::SexyVector3> *ptVar11;
  ulong uVar12;
  undefined4 uVar13;
  Zombie *pZVar14;
  int local_a4 [3];
  float local_98;
  float local_94;
  int local_90;
  int local_8c;
  RtWeakPtr aRStack_88 [8];
  Vec3 aVStack_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  Point aPStack_58 [40];
  tuple<Sexy::RtWeakPtr<Zombie>,float,float,Sexy::SexyVector3,Sexy::SexyVector3> atStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_a4[0] = param_2;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_70);
  uVar12 = 0;
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_70,2);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_70);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_70);
  Sexy::Point::Point(aPStack_58,0,0);
  EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
            ((BoardEntitySorter_ClosestByColumn *)atStack_30,aPStack_58);
  ptVar11 = atStack_30;
  std::
  sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_ClosestByColumn>
            (uVar3,uVar4);
  uVar3 = local_70;
  lVar5 = FUN_037e4d74(local_70,local_68);
  if (lVar5 != 0) {
    do {
      puVar6 = (undefined8 *)FUN_037e4d80(uVar3,uVar12);
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
      cVar1 = canAbsorbZombie(this,this_00);
      if (cVar1 != '\0') {
        iVar2 = Zombie::GetSizeType(this_00);
        iVar10 = (int)ptVar11;
        if (iVar2 == local_a4[0]) {
          lVar5 = 2;
          if (iVar2 != 0) {
            if (iVar2 == 1) {
              lVar5 = 6;
            }
            else {
              lVar5 = 0;
              if (iVar2 == 2) {
                lVar5 = 10;
              }
            }
          }
          lVar8 = std::deque<ZombieSizeType,std::allocator<ZombieSizeType>>::size
                            ((deque<ZombieSizeType,std::allocator<ZombieSizeType>> *)(this + 200));
          iVar2 = ZMatchShopMgr::getMatchTicket((ZMatchShopMgr *)this);
          if ((ulong)(long)iVar2 < (ulong)(lVar8 + lVar5)) {
            uVar13 = PVZ_T();
            *(undefined4 *)(this + 0x98) = uVar13;
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_70);
            goto LAB_037ebc58;
          }
          cVar1 = Zombie::HasCondition(this_00,0x27);
          if (cVar1 == '\0') {
            cVar1 = Zombie::HasCondition(this_00,0x25);
          }
          else {
            Zombie::EndCondition(this_00,0x27);
            cVar1 = Zombie::HasCondition(this_00,0x25);
          }
          if (cVar1 != '\0') {
            Zombie::EndCondition(this_00,0x25);
          }
          BoardTransforms::GridToBoardSpacePos((BoardTransforms *)0x0,0,iVar10);
          ToolPacketData::GetProps();
          local_98 = (float)PVZ_T();
          local_94 = (float)PVZ_T();
          local_94 = local_94 + 1.2;
          pSVar9 = (SexyVector3 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)this_00);
          EATextSquish::Vec3::Vec3
                    (aVStack_80,(float)local_90,(float)local_8c,*(float *)(pSVar9 + 8));
          std::
          make_tuple<Sexy::RtWeakPtr<GameObject>,float,float,Sexy::SexyVector3_const&,Sexy::SexyVector3>
                    (aRStack_88,&local_98,&local_94,pSVar9,(SexyVector3 *)aVStack_80);
          std::tuple<Sexy::RtWeakPtr<Zombie>,float,float,Sexy::SexyVector3,Sexy::SexyVector3>::tuple
                    (atStack_30,(tuple *)aPStack_58);
          std::
          vector<std::tuple<Sexy::RtWeakPtr<Zombie>,float,float,Sexy::SexyVector3,Sexy::SexyVector3>,std::allocator<std::tuple<Sexy::RtWeakPtr<Zombie>,float,float,Sexy::SexyVector3,Sexy::SexyVector3>>>
          ::push_back((vector<std::tuple<Sexy::RtWeakPtr<Zombie>,float,float,Sexy::SexyVector3,Sexy::SexyVector3>,std::allocator<std::tuple<Sexy::RtWeakPtr<Zombie>,float,float,Sexy::SexyVector3,Sexy::SexyVector3>>>
                       *)(this + 0xb0),(tuple *)atStack_30);
          std::tuple<Sexy::RtWeakPtr<Zombie>,float,float,Sexy::SexyVector3,Sexy::SexyVector3>::
          ~tuple(atStack_30);
          std::tuple<Sexy::RtWeakPtr<Zombie>,float,float,Sexy::SexyVector3,Sexy::SexyVector3>::
          ~tuple((tuple<Sexy::RtWeakPtr<Zombie>,float,float,Sexy::SexyVector3,Sexy::SexyVector3> *)
                 aPStack_58);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
          (**(code **)(*(long *)this_00 + 600))(this_00);
          (**(code **)(*(long *)this_00 + 0x9f0))(this_00,1);
          Zombie::SetIsControlled(this_00,true);
          Zombie::SetIgnoresAllDamage(this_00,true);
          Zombie::SetMarkedForDeath(this_00);
          Zombie::SetIsTargetable(this_00,false);
          Zombie::SetIgnoresCollisions(this_00,true);
          pZVar14._0_4_ = (Zombie *)PVZ_EOT();
          ptVar11 = (tuple<Sexy::RtWeakPtr<Zombie>,float,float,Sexy::SexyVector3,Sexy::SexyVector3>
                     *)0x1;
          Zombie::ApplyCondition(pZVar14._0_4_,0,this_00,0x91);
          if (lVar5 != 0) {
            lVar8 = 0;
            do {
              lVar8 = lVar8 + 1;
              std::deque<ZombieSizeType,std::allocator<ZombieSizeType>>::push_back
                        ((deque<ZombieSizeType,std::allocator<ZombieSizeType>> *)(this + 200),
                         (ZombieSizeType *)local_a4);
            } while (lVar8 != lVar5);
          }
        }
      }
      uVar3 = local_70;
      uVar12 = uVar12 + 1;
      uVar7 = FUN_037e4d74(local_70,local_68);
    } while (uVar12 < uVar7);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_70);
LAB_037ebc58:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCalabashSubSystem::Update() */

void __thiscall ArtifactCalabashSubSystem::Update(ArtifactCalabashSubSystem *this)

{
  char cVar1;
  ulong uVar2;
  tuple *ptVar3;
  RtWeakPtrBase *pRVar4;
  float *pfVar5;
  undefined8 *puVar6;
  long *plVar7;
  Zombie *pZVar8;
  undefined4 *puVar9;
  ulong uVar10;
  code *pcVar11;
  undefined8 uVar12;
  Effect_PopAnim *pEVar13;
  StandaloneEffect *pSVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_e8 [8];
  undefined4 local_e0 [2];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_b0 [72];
  undefined4 local_68;
  float local_64;
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UpdateElixirs(this);
  if (*(int *)(this + 0x38) == 3) {
    uVar10 = 0;
    while( true ) {
      uVar12 = *(undefined8 *)(this + 0xb0);
      uVar2 = FUN_037e4d54(uVar12,*(undefined8 *)(this + 0xb8));
      if (uVar2 <= uVar10) break;
      ptVar3 = (tuple *)FUN_037e4d68(uVar12,uVar10);
      pRVar4 = (RtWeakPtrBase *)
               std::get<0ul,Sexy::Image*,Sexy::Image*,Sexy::Image*,std::wstring,bool>(ptVar3);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_e8,pRVar4);
      puVar9 = (undefined4 *)
               std::get<1ul,Sexy::RtWeakPtr<Zombie>,float,float,Sexy::SexyVector3,Sexy::SexyVector3>
                         (ptVar3);
      uVar18 = *puVar9;
      pfVar5 = (float *)std::get<1ul,Sexy::Image*,Sexy::Image*,Sexy::Image*,std::wstring,bool>
                                  (ptVar3);
      fVar17 = *pfVar5;
      puVar6 = (undefined8 *)std::get<1ul,Effect_PopAnim*,float,Sexy::Point,float>(ptVar3);
      local_d0 = *puVar6;
      local_c8 = *(undefined4 *)(puVar6 + 1);
      puVar6 = (undefined8 *)
               std::
               get<1ul,Sexy::RtDbTable::IteratorStorage*,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
                         (ptVar3);
      local_c0 = *puVar6;
      local_b8 = *(undefined4 *)(puVar6 + 1);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_e8);
      if (cVar1 != '\0') {
        fVar15 = (float)PVZ_T();
        if (fVar17 <= fVar15) {
          pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e8);
          Zombie::SetIgnoresAllDamage(pZVar8,false);
          plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e8);
          pcVar11 = *(code **)(*plVar7 + 0x120);
          Sexy::Point::Point((Point *)local_e0,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_d8,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)0x0,local_d8,local_d4,(DamageInfo *)&local_68,4,(Point *)local_e0
                     ,0);
          (*pcVar11)(plVar7,(DamageInfo *)&local_68);
          DamageInfo::~DamageInfo((DamageInfo *)&local_68);
        }
        else {
          uVar16 = PVZ_T();
          fVar15 = fVar17;
          local_68 = CurveLerp(uVar18,&local_d0,&local_c0,1);
          local_64 = fVar15;
          local_60 = uVar16;
          plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e8);
          (**(code **)(*plVar7 + 0x78))(plVar7,(DamageInfo *)&local_68);
          uVar16 = PVZ_T();
          local_d8 = _FUN_037ec2ec;
          local_e0[0] = 0x3f800000;
          fVar17 = CurveLerp<float>(uVar18,fVar17,uVar16,(Point *)local_e0,(FastCurve *)&local_d8,1)
          ;
          pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e8);
          Zombie::SetZombieScale(pZVar8,fVar17);
        }
      }
      uVar10 = uVar10 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_e8);
    }
    if (this[0x80] == (ArtifactCalabashSubSystem)0x0) {
      fVar17 = (float)PVZ_T();
      if (*(float *)(this + 0x9c) < fVar17) {
        absorbZombies(this,*(undefined4 *)(this + 0xa0));
        fVar17 = (float)PVZ_T();
        *(float *)(this + 0x9c) = fVar17 + 0.5;
      }
      fVar17 = (float)PVZ_T();
      if (*(float *)(this + 0x98) <= fVar17) {
        this[0x80] = (ArtifactCalabashSubSystem)0x1;
        pEVar13 = *(Effect_PopAnim **)(this + 0x88);
        std::string::string((string *)&local_68,"hl03");
        Effect_PopAnim::PlaySingleAnimation(pEVar13,(string *)&local_68,0);
        std::string::~string((string *)&local_68);
        nop();
        pSVar14 = *(StandaloneEffect **)(this + 0x88);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_d0);
        std::string::string((string *)&local_68,"onAbsorb");
        RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_b0,
                   (RtId *)&local_c0,(string *)&local_68);
        StandaloneEffect::SetCompletionCallback(pSVar14,aRStack_b0);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_b0);
        std::string::~string((string *)&local_68);
        nop();
        Sexy::RtId::~RtId((RtId *)&local_c0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_d0);
        pEVar13 = *(Effect_PopAnim **)(this + 0x90);
        std::string::string((string *)&local_68,"f03");
        Effect_PopAnim::PlaySingleAnimation(pEVar13,(string *)&local_68,0);
        std::string::~string((string *)&local_68);
        nop();
      }
    }
  }
  else if ((*(int *)(this + 0x38) == 4) &&
          (fVar17 = (float)PVZ_T(), *(float *)(this + 0xa4) < fVar17)) {
    cVar1 = std::deque<ZombieSizeType,std::allocator<ZombieSizeType>>::empty
                      ((deque<ZombieSizeType,std::allocator<ZombieSizeType>> *)(this + 200));
    if (cVar1 == '\0') {
      puVar9 = (undefined4 *)std::deque<ZombieSizeType,std::allocator<ZombieSizeType>>::front();
      local_68 = *puVar9;
      std::deque<ZombieSizeType,std::allocator<ZombieSizeType>>::pop_front
                ((deque<ZombieSizeType,std::allocator<ZombieSizeType>> *)(this + 200));
      std::deque<ZombieSizeType,std::allocator<ZombieSizeType>>::push_back
                ((deque<ZombieSizeType,std::allocator<ZombieSizeType>> *)(this + 0x118),
                 (ZombieSizeType *)&local_68);
      uVar10 = std::deque<ZombieSizeType,std::allocator<ZombieSizeType>>::size
                         ((deque<ZombieSizeType,std::allocator<ZombieSizeType>> *)(this + 0x118));
      if (9 < uVar10) {
        SetState(this,5);
      }
      fVar17 = (float)PVZ_T();
      *(float *)(this + 0xa4) = fVar17 + *(float *)(this + 0xa8);
    }
    else {
      SetState(this,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

