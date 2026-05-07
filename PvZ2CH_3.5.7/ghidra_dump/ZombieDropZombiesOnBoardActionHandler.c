// Class: ZombieDropZombiesOnBoardActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDropZombiesOnBoardActionHandler::StaticClassInit() */

void ZombieDropZombiesOnBoardActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieDropZombiesOnBoardActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_0462f76c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDropZombiesOnBoardActionHandler::StaticGetClass() */

long * ZombieDropZombiesOnBoardActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieDropZombiesOnBoardActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDropZombiesOnBoardActionHandler::GetClass() const */

long * ZombieDropZombiesOnBoardActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieDropZombiesOnBoardActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDropZombiesOnBoardActionHandler::ZombieDropZombiesOnBoardActionHandler() */

void __thiscall
ZombieDropZombiesOnBoardActionHandler::ZombieDropZombiesOnBoardActionHandler
          (ZombieDropZombiesOnBoardActionHandler *this)

{
  undefined4 uVar1;
  
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_0687f210;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x24) = uVar1;
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}


/* ZombieDropZombiesOnBoardActionHandler::StaticNew() */

ZombieDropZombiesOnBoardActionHandler * ZombieDropZombiesOnBoardActionHandler::StaticNew(void)

{
  ZombieDropZombiesOnBoardActionHandler *this;
  
  this = ::operator_new(0x30);
  ZombieDropZombiesOnBoardActionHandler(this);
  return this;
}


/* ZombieDropZombiesOnBoardActionHandler::~ZombieDropZombiesOnBoardActionHandler() */

void __thiscall
ZombieDropZombiesOnBoardActionHandler::~ZombieDropZombiesOnBoardActionHandler
          (ZombieDropZombiesOnBoardActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_0687f210;
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombieDropZombiesOnBoardActionHandler::~ZombieDropZombiesOnBoardActionHandler() */

void __thiscall
ZombieDropZombiesOnBoardActionHandler::~ZombieDropZombiesOnBoardActionHandler
          (ZombieDropZombiesOnBoardActionHandler *this)

{
  ~ZombieDropZombiesOnBoardActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* ZombieDropZombiesOnBoardActionHandler::postSpawnZombieSetup(Zombie*, Sexy::SexyVector3, float,
   float) */

void __thiscall
ZombieDropZombiesOnBoardActionHandler::postSpawnZombieSetup
          (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ZombieLostCityLostPilot *this;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  nop();
  if (this != (ZombieLostCityLostPilot *)0x0) {
    ZombieLostCityLostPilot::doFallFromSky(this);
    (**(code **)(*(long *)this + 0x78))(this,&local_10);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDropZombiesOnBoardActionHandler::onStartAction() */

void __thiscall
ZombieDropZombiesOnBoardActionHandler::onStartAction(ZombieDropZombiesOnBoardActionHandler *this)

{
  bool bVar1;
  ZombossHydraSprayActionDefinition *pZVar2;
  Zombie *this_00;
  ZombieHydraHeadAnimRig *pZVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(this_00);
  pcVar4 = *(code **)(*(long *)pZVar3 + 0x170);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar4)(pZVar3,pZVar2 + 0x90,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  fVar5 = (float)PVZ_T();
  fVar6 = *(float *)(pZVar2 + 0x88);
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x28) = fVar5;
  *(float *)(this + 0x24) = fVar5 + fVar6;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDropZombiesOnBoardActionHandler::createSpawnAnimation() */

void __thiscall
ZombieDropZombiesOnBoardActionHandler::createSpawnAnimation
          (ZombieDropZombiesOnBoardActionHandler *this)

{
  bool bVar1;
  ZombossHydraSprayActionDefinition *pZVar2;
  long lVar3;
  Zombie *this_00;
  ZombieHydraHeadAnimRig *pZVar4;
  code *pcVar5;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  bVar1 = std::operator!=((string *)(pZVar2 + 0xa8),"");
  if (bVar1) {
    lVar3 = Board::AddEffectObject(*(Board **)(gLawnApp + 0x9f0),(string *)(pZVar2 + 0xa8),0,0);
    FUN_0462d884(lVar3 + 0x1c);
  }
  this_00 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(this_00);
  pcVar5 = *(code **)(*(long *)pZVar4 + 0x170);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar5)(pZVar4,pZVar2 + 0x98,0,aRStack_50);
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
/* ZombieDropZombiesOnBoardActionHandler::playLoopingAnimationAgain() */

void __thiscall
ZombieDropZombiesOnBoardActionHandler::playLoopingAnimationAgain
          (ZombieDropZombiesOnBoardActionHandler *this)

{
  char cVar1;
  ZombossHydraSprayActionDefinition *pZVar2;
  Zombie *pZVar3;
  ZombieHydraHeadAnimRig *pZVar4;
  code *pcVar5;
  float fVar6;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  fVar6 = (float)PVZ_EOT();
  if (*(float *)(this + 0x24) == fVar6) {
    cVar1 = FUN_0547419c(pZVar2 + 0xa0);
    if (cVar1 != '\0') {
      ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
      goto LAB_04630140;
    }
    pZVar3 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(pZVar3);
    pcVar5 = *(code **)(*(long *)pZVar4 + 0x170);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimationDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    (*pcVar5)(pZVar4,pZVar2 + 0xa0,0,aRStack_50);
  }
  else {
    pZVar3 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(pZVar3);
    pcVar5 = *(code **)(*(long *)pZVar4 + 0x170);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimationDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    (*pcVar5)(pZVar4,pZVar2 + 0x98,0,aRStack_50);
  }
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
LAB_04630140:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDropZombiesOnBoardActionHandler::onAnimationDone(std::string const&) */

void __thiscall
ZombieDropZombiesOnBoardActionHandler::onAnimationDone
          (ZombieDropZombiesOnBoardActionHandler *this,string *param_1)

{
  char cVar1;
  ZombossHydraSprayActionDefinition *pZVar2;
  
  pZVar2 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  cVar1 = std::operator==(param_1,(string *)(pZVar2 + 0x98));
  if (cVar1 != '\0') {
    playLoopingAnimationAgain(this);
    return;
  }
  cVar1 = std::operator==(param_1,(string *)(pZVar2 + 0xa0));
  if (cVar1 == '\0') {
    return;
  }
  ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDropZombiesOnBoardActionHandler::dropZombies() */

void __thiscall
ZombieDropZombiesOnBoardActionHandler::dropZombies(ZombieDropZombiesOnBoardActionHandler *this)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ZombossHydraSprayActionDefinition *pZVar6;
  long lVar7;
  int *piVar8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar9;
  SexyVector3 *this_01;
  string *psVar10;
  time_t tVar11;
  int iVar12;
  long lVar13;
  Board *this_02;
  long *plVar14;
  code *pcVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  int local_64;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_58 [8];
  undefined8 local_50;
  undefined4 local_48;
  DVec3 aDStack_40 [16];
  Vec3 aVStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar6 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  local_64 = *(int *)(pZVar6 + 0x44);
  if (local_64 < *(int *)(pZVar6 + 0x48)) {
    local_64 = *(int *)(pZVar6 + 0x48) - local_64;
    tVar11 = time((time_t *)0x0);
    srand((uint)tVar11);
    iVar5 = rand();
    iVar12 = 0;
    if (local_64 != 0) {
      iVar12 = iVar5 / local_64;
    }
    local_64 = (iVar5 - iVar12 * local_64) + *(int *)(pZVar6 + 0x44);
  }
  iVar12 = 0;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)&local_20,(vector *)(pZVar6 + 0x70));
  uVar1 = local_20;
  lVar7 = FUN_0462d798(local_20,local_18);
  lVar13 = 0;
  while (lVar13 + 1 != lVar7 + 1) {
    piVar8 = (int *)FUN_0462d7c8(uVar1,lVar13);
    iVar12 = iVar12 + *piVar8;
    lVar13 = lVar13 + 1;
  }
  if (0 < local_64) {
    iVar5 = 0;
    do {
      iVar4 = 0;
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_58);
      iVar3 = Sexy::Rand(iVar12);
      uVar1 = local_20;
      lVar7 = FUN_0462d798(local_20,local_18);
      lVar13 = 0;
      do {
        lVar16 = lVar13;
        if (lVar16 == lVar7) goto LAB_04630a98;
        piVar8 = (int *)FUN_0462d7c8(uVar1,lVar16);
        iVar4 = iVar4 + *piVar8;
        lVar13 = lVar16 + 1;
      } while (iVar4 < iVar3);
      psVar10 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      FUN_0462d7d0(*(undefined8 *)(pZVar6 + 0x58),lVar16);
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar10);
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_58,(RtWeakPtrBase *)aVStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_30);
LAB_04630a98:
      DVec3::DVec3((DVec3 *)&local_50);
      DVec3::DVec3(aDStack_40);
      if (pZVar6[0x4c] == (ZombossHydraSprayActionDefinition)0x0) {
        iVar4 = RandRangeInt(*(int *)(pZVar6 + 0x3c),*(int *)(pZVar6 + 0x38));
        iVar3 = BoardConstants::NUMBER_OF_ROWS();
        iVar3 = RandRangeInt(0,iVar3 + -1);
        iVar4 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar4);
        iVar3 = BoardTransforms::GridToBoardSpaceYUnbounded(iVar3);
        EATextSquish::Vec3::Vec3(aVStack_30,(float)iVar4 - 10.0,(float)iVar3 - 10.0,0.0);
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_50,(SexyVector3 *)aVStack_30);
LAB_04630b54:
        EATextSquish::Vec3::Vec3
                  (aVStack_30,(float)(ZombieDropZombiesOnBoardActionHandler *)local_50,
                   local_50._4_4_,600.0);
        Sexy::SexyVector3::operator=((SexyVector3 *)aDStack_40,(SexyVector3 *)aVStack_30);
        plVar14 = *(long **)(gLawnApp + 0x9f0);
        pcVar15 = *(code **)(*plVar14 + 0x318);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aVStack_30,(RtWeakPtrBase *)a_Stack_58);
        this_01 = (SexyVector3 *)(*pcVar15)(plVar14,aVStack_30,0,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_30)
        ;
        Zombie::SetHasPlantFood(SUB81(this_01,0));
        BoardEntity::PlaceOnBoard(this_01);
        if (pZVar6[0x4d] == (ZombossHydraSprayActionDefinition)0x0) {
          postSpawnZombieSetup
                    ((ZombieDropZombiesOnBoardActionHandler *)local_50,local_50._4_4_,local_48,
                     *(undefined4 *)(pZVar6 + 0x8c),0x44160000,this,this_01);
        }
        else {
          Zombie::RiseFromGround((Zombie *)this_01,(SexyVector3 *)&local_50,true);
        }
      }
      else {
        this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
        pfVar9 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(this_00);
        fVar17 = *pfVar9;
        fVar18 = pfVar9[1];
        iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
        iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
        switch(iVar5 % 4) {
        case 0:
          fVar17 = fVar17 + (float)iVar4;
          break;
        case 1:
          fVar18 = fVar18 + (float)iVar3;
          break;
        case 2:
          fVar17 = fVar17 - (float)iVar4;
          break;
        case 3:
          fVar18 = fVar18 - (float)iVar3;
        }
        this_02 = *(Board **)(gLawnApp + 0x9f0);
        iVar4 = BoardTransforms::BoardSpaceToGridY(fVar18);
        cVar2 = Board::RowCanHaveZombies(this_02,iVar4);
        if (cVar2 != '\0') {
          EATextSquish::Vec3::Vec3(aVStack_30,fVar17,fVar18,0.0);
          Sexy::SexyVector3::operator=((SexyVector3 *)&local_50,(SexyVector3 *)aVStack_30);
          goto LAB_04630b54;
        }
      }
      iVar5 = iVar5 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
    } while (iVar5 != local_64);
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieDropZombiesOnBoardActionHandler::onUpdateAction() */

void __thiscall
ZombieDropZombiesOnBoardActionHandler::onUpdateAction(ZombieDropZombiesOnBoardActionHandler *this)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x28) <= fVar1) {
    createSpawnAnimation(this);
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0x28) = uVar2;
    return;
  }
  if (fVar1 < *(float *)(this + 0x24)) {
    return;
  }
  dropZombies(this);
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x24) = uVar2;
  return;
}

