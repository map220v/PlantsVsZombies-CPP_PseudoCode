// Class: ArtifactSilverKeyCursor


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSilverKeyCursor::CanUseAtCurrentPosition() */

void __thiscall ArtifactSilverKeyCursor::CanUseAtCurrentPosition(ArtifactSilverKeyCursor *this)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x80))((Point *)&local_10);
  if ((((local_10 < 0) || (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) <= local_10)) ||
      (local_c < 1)) ||
     (((iVar2 = BoardConstants::NUMBER_OF_ROWS(), iVar2 + -1 <= local_c ||
       (cVar1 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_10),
       cVar1 != '\0')) ||
      (cVar1 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_10), cVar1 != '\0')))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* ArtifactSilverKeyCursor::StaticGetClass() */

long * ArtifactSilverKeyCursor::StaticGetClass(void)

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
  uVar2 = PacketCursor::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactSilverKeyCursor",uVar2,StaticNew);
  return sClass;
}


/* ArtifactSilverKeyCursor::GetClass() const */

long * ArtifactSilverKeyCursor::GetClass(void)

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
  uVar2 = PacketCursor::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactSilverKeyCursor",uVar2,StaticNew);
  return sClass;
}


/* ArtifactSilverKeyCursor::~ArtifactSilverKeyCursor() */

void __thiscall ArtifactSilverKeyCursor::~ArtifactSilverKeyCursor(ArtifactSilverKeyCursor *this)

{
  *(undefined ***)this = &PTR_GetClass_066926d0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  PacketCursor::~PacketCursor((PacketCursor *)this);
  return;
}


/* ArtifactSilverKeyCursor::~ArtifactSilverKeyCursor() */

void __thiscall ArtifactSilverKeyCursor::~ArtifactSilverKeyCursor(ArtifactSilverKeyCursor *this)

{
  ~ArtifactSilverKeyCursor(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactSilverKeyCursor::ArtifactSilverKeyCursor() */

void __thiscall ArtifactSilverKeyCursor::ArtifactSilverKeyCursor(ArtifactSilverKeyCursor *this)

{
  PacketCursor::PacketCursor((PacketCursor *)this);
  *(undefined ***)this = &PTR_GetClass_066926d0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  return;
}


/* ArtifactSilverKeyCursor::StaticNew() */

ArtifactSilverKeyCursor * ArtifactSilverKeyCursor::StaticNew(void)

{
  ArtifactSilverKeyCursor *this;
  
  this = ::operator_new(0x50);
  ArtifactSilverKeyCursor(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSilverKeyCursor::tryToUse() */

void __thiscall ArtifactSilverKeyCursor::tryToUse(ArtifactSilverKeyCursor *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  ArtifactMgr *this_00;
  Board *this_01;
  int local_28;
  int local_24;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x80))((Point *)&local_28);
  iVar2 = local_24;
  iVar1 = local_28;
  if (local_28 < 0) {
    this_01 = *(Board **)(gLawnApp + 0x9f0);
  }
  else {
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    if ((local_28 < *(int *)(this_01 + 0xf8)) && (0 < local_24)) {
      iVar4 = BoardConstants::NUMBER_OF_ROWS();
      if ((iVar2 < iVar4 + -1) &&
         ((cVar3 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_28),
          cVar3 == '\0' &&
          (cVar3 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_28), cVar3 == '\0'))))
      {
        this_01 = *(Board **)(gLawnApp + 0x9f0);
        iVar4 = Board::GetGridSquareType(this_01,local_28,local_24);
        if ((iVar4 != 0) && (iVar4 != 3)) {
          this_00 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
          if (this_00 != (ArtifactMgr *)0x0) {
            BaseCursor::GetBoardPosition();
            Board::GetGridBoundingRect();
            cVar3 = Sexy::TRect<int>::Contains((TRect<int> *)aRStack_18,(TPoint *)a_Stack_20);
            if (cVar3 != '\0') {
              *(int *)(this_00 + 0x18) = iVar1;
              *(int *)(this_00 + 0x1c) = iVar2;
              ArtifactMgr::RequestTriggerArtifact(this_00);
            }
          }
          goto LAB_0373ecb8;
        }
      }
      else {
        this_01 = *(Board **)(gLawnApp + 0x9f0);
      }
    }
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_20);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)a_Stack_20);
  Board::GiveAdvice(this_01,iVar1,iVar2,aRStack_18,0x79);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
LAB_0373ecb8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ArtifactSilverKeyCursor::cacheOrDestroyCursor() */

void __thiscall ArtifactSilverKeyCursor::cacheOrDestroyCursor(ArtifactSilverKeyCursor *this)

{
  char cVar1;
  Projectile *this_00;
  long lVar2;
  
  cVar1 = FUN_03723b50(this[0x23]);
  if (((cVar1 == '\0') || (cVar1 = (**(code **)(*(long *)this + 0x48))(this), cVar1 == '\0')) &&
     (cVar1 = FUN_03723b4c(this[0x22]), cVar1 == '\0')) {
    this_00 = (Projectile *)Board::GetPowerupManager(*(Board **)(gLawnApp + 0x9f0));
    lVar2 = Projectile::GetAnimRig(this_00);
    if (lVar2 == 0) {
      Board::SetCachedCursor(*(Board **)(gLawnApp + 0x9f0),(BaseCursor *)this);
      return;
    }
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  BaseCursor::Destroy((BaseCursor *)this);
  return;
}


/* ArtifactSilverKeyCursor::onTouchEvent(Sexy::Touch const&) */

char __thiscall ArtifactSilverKeyCursor::onTouchEvent(ArtifactSilverKeyCursor *this,Touch *param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 4) {
    BaseCursor::Destroy((BaseCursor *)this);
    iVar1 = *(int *)(param_1 + 0x30);
  }
  cVar2 = '\0';
  if (iVar1 == 3) {
    cVar2 = (**(code **)(*(long *)this + 0x48))(this);
    if (cVar2 == '\0') {
      (**(code **)(*(long *)this + 0x88))(this);
      BaseCursor::Destroy((BaseCursor *)this);
      return '\x01';
    }
    Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
    cacheOrDestroyCursor(this);
  }
  return cVar2;
}


/* ArtifactSilverKeyCursor::IsInsideOriginRect() const */

undefined8 __thiscall ArtifactSilverKeyCursor::IsInsideOriginRect(ArtifactSilverKeyCursor *this)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8);
    lVar2 = FUN_03723d28(uVar3);
    if (((lVar2 != 0) && (lVar2 = FUN_0375259c(uVar3), lVar2 != 0)) &&
       (cVar1 = FUN_03723b50(this[0x23]), cVar1 != '\0')) {
      return 0;
    }
  }
  uVar3 = BaseCursor::IsInsideOriginRect();
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSilverKeyCursor::ArtifactSilverKeyCursor(Sexy::Touch const&, Sexy::RtWeakPtr<SeedPacket>)
    */

void __thiscall
ArtifactSilverKeyCursor::ArtifactSilverKeyCursor
          (ArtifactSilverKeyCursor *this,undefined8 param_1,RtWeakPtrBase *param_3)

{
  string *psVar1;
  ResourceInfo *pRVar2;
  RtClass *pRVar3;
  PopAnimRig *pPVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [16];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,param_3);
  PacketCursor::PacketCursor((PacketCursor *)this,param_1,aRStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  *(undefined ***)this = &PTR_GetClass_066926d0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string((string *)aRStack_48,"peashooter");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x48),(RtWeakPtr *)aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  std::string::~string((string *)aRStack_48);
  nop();
  std::string::string((string *)aRStack_48,"POPANIM_EFFECTS_ARTIFACT_STANDARD_RETICLE");
  GetPAMByName((string *)aRStack_48);
  std::string::~string((string *)aRStack_48);
  nop();
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_50);
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar4 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar2,pRVar3);
  std::string::string((string *)aRStack_48,"beans_lock_recticle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar4,aRStack_48,0,aDStack_38);
  std::string::~string((string *)aRStack_48);
  nop();
  BaseCursor::setAnimRig((BaseCursor *)this,pPVar4);
  Sexy::Insets::Insets((Insets *)aRStack_48);
  (**(code **)(*(long *)pPVar4 + 0x90))(pPVar4,aRStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

