// Class: ArtifactHydraulicCursor


/* ArtifactHydraulicCursor::StaticGetClass() */

long * ArtifactHydraulicCursor::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactHydraulicCursor",uVar2,StaticNew);
  return sClass;
}


/* ArtifactHydraulicCursor::GetClass() const */

long * ArtifactHydraulicCursor::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactHydraulicCursor",uVar2,StaticNew);
  return sClass;
}


/* ArtifactHydraulicCursor::~ArtifactHydraulicCursor() */

void __thiscall ArtifactHydraulicCursor::~ArtifactHydraulicCursor(ArtifactHydraulicCursor *this)

{
  *(undefined ***)this = &PTR_GetClass_0669cd90;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  PacketCursor::~PacketCursor((PacketCursor *)this);
  return;
}


/* ArtifactHydraulicCursor::~ArtifactHydraulicCursor() */

void __thiscall ArtifactHydraulicCursor::~ArtifactHydraulicCursor(ArtifactHydraulicCursor *this)

{
  ~ArtifactHydraulicCursor(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactHydraulicCursor::ArtifactHydraulicCursor() */

void __thiscall ArtifactHydraulicCursor::ArtifactHydraulicCursor(ArtifactHydraulicCursor *this)

{
  PacketCursor::PacketCursor((PacketCursor *)this);
  *(undefined ***)this = &PTR_GetClass_0669cd90;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  return;
}


/* ArtifactHydraulicCursor::StaticNew() */

ArtifactHydraulicCursor * ArtifactHydraulicCursor::StaticNew(void)

{
  ArtifactHydraulicCursor *this;
  
  this = ::operator_new(0x50);
  ArtifactHydraulicCursor(this);
  return this;
}


/* ArtifactHydraulicCursor::cacheOrDestroyCursor() */

void __thiscall ArtifactHydraulicCursor::cacheOrDestroyCursor(ArtifactHydraulicCursor *this)

{
  char cVar1;
  Projectile *this_00;
  long lVar2;
  
  cVar1 = FUN_037f7284(this[0x23]);
  if (((cVar1 == '\0') || (cVar1 = (**(code **)(*(long *)this + 0x48))(this), cVar1 == '\0')) &&
     (cVar1 = FUN_037f7280(this[0x22]), cVar1 == '\0')) {
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


/* ArtifactHydraulicCursor::onTouchEvent(Sexy::Touch const&) */

char __thiscall ArtifactHydraulicCursor::onTouchEvent(ArtifactHydraulicCursor *this,Touch *param_1)

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


/* ArtifactHydraulicCursor::IsInsideOriginRect() const */

undefined8 __thiscall ArtifactHydraulicCursor::IsInsideOriginRect(ArtifactHydraulicCursor *this)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8);
    lVar2 = FUN_037f7298(uVar3);
    if (((lVar2 != 0) && (lVar2 = FUN_037f7f5c(uVar3), lVar2 != 0)) &&
       (cVar1 = FUN_037f7284(this[0x23]), cVar1 != '\0')) {
      return 0;
    }
  }
  uVar3 = BaseCursor::IsInsideOriginRect();
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHydraulicCursor::tryToUse() */

void __thiscall ArtifactHydraulicCursor::tryToUse(ArtifactHydraulicCursor *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ArtifactMgr *this_00;
  long lVar4;
  int local_28;
  int local_24;
  TPoint aTStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x80))(&local_28);
  this_00 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
  if (this_00 != (ArtifactMgr *)0x0) {
    ArtifactMgr::GetActivatedArtifact();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    cVar1 = FUN_037f7294(*(undefined1 *)(lVar4 + 0x3d));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    if (cVar1 != '\0') {
      BaseCursor::GetBoardPosition();
      Board::GetGridBoundingRect();
      cVar1 = Sexy::TRect<int>::Contains((TRect<int> *)aRStack_18,aTStack_20);
      if (cVar1 != '\0') {
        iVar2 = ArtifactMgr::GetActivatedArtifactUsedTime();
        iVar3 = ArtifactMgr::GetActivatedArtifactMaxUsedTime();
        if (iVar2 < iVar3) {
          MessageRouter::Post<int,int,int,int>
                    ((MessageRouter *)gMessageRouter,Message::NotifyArtifactHydraulicCursor,local_28
                     ,local_24);
          MessageRouter::Post((_func_void *)gMessageRouter);
          ArtifactMgr::RequestTriggerArtifact(this_00);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactHydraulicCursor::ArtifactHydraulicCursor(Sexy::Touch const&, Sexy::RtWeakPtr<SeedPacket>)
    */

void __thiscall
ArtifactHydraulicCursor::ArtifactHydraulicCursor
          (ArtifactHydraulicCursor *this,undefined8 param_1,RtWeakPtrBase *param_3)

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
  *(undefined ***)this = &PTR_GetClass_0669cd90;
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

