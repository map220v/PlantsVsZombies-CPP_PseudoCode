// Class: CollectableAvatarPiece


/* CollectableAvatarPiece::~CollectableAvatarPiece() */

void __thiscall CollectableAvatarPiece::~CollectableAvatarPiece(CollectableAvatarPiece *this)

{
  *(undefined ***)this = &PTR_GetClass_0690d5e0;
  *(undefined ***)(this + 0x10) = &PTR__CollectableAvatarPiece_0690d830;
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableAvatarPiece::~CollectableAvatarPiece() */

void __thiscall CollectableAvatarPiece::~CollectableAvatarPiece(CollectableAvatarPiece *this)

{
  ~CollectableAvatarPiece(this + -0x10);
  return;
}


/* CollectableAvatarPiece::~CollectableAvatarPiece() */

void __thiscall CollectableAvatarPiece::~CollectableAvatarPiece(CollectableAvatarPiece *this)

{
  ~CollectableAvatarPiece(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableAvatarPiece::~CollectableAvatarPiece() */

void __thiscall CollectableAvatarPiece::~CollectableAvatarPiece(CollectableAvatarPiece *this)

{
  ~CollectableAvatarPiece(this + -0x10);
  return;
}


/* CollectableAvatarPiece::StaticGetClass() */

long * CollectableAvatarPiece::StaticGetClass(void)

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
  uVar2 = Collectable::StaticGetClass();
  (*pcVar3)(plVar1,"CollectableAvatarPiece",uVar2,StaticNew);
  return sClass;
}


/* CollectableAvatarPiece::GetClass() const */

long * CollectableAvatarPiece::GetClass(void)

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
  uVar2 = Collectable::StaticGetClass();
  (*pcVar3)(plVar1,"CollectableAvatarPiece",uVar2,StaticNew);
  return sClass;
}


/* CollectableAvatarPiece::CollectableAvatarPiece() */

void __thiscall CollectableAvatarPiece::CollectableAvatarPiece(CollectableAvatarPiece *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_0690d5e0;
  *(undefined ***)(this + 0x10) = &PTR__CollectableAvatarPiece_0690d830;
  return;
}


/* CollectableAvatarPiece::StaticNew() */

CollectableAvatarPiece * CollectableAvatarPiece::StaticNew(void)

{
  CollectableAvatarPiece *this;
  
  this = ::operator_new(0x1f0);
  CollectableAvatarPiece(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableAvatarPiece::GetPlantAvatarType() const */

void CollectableAvatarPiece::GetPlantAvatarType(void)

{
  undefined4 uVar1;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TwinsAssistPerson::GetPopAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  uVar1 = *(undefined4 *)(extraout_x0 + 0xa0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableAvatarPiece::initializeRenderEffect() */

void __thiscall CollectableAvatarPiece::initializeRenderEffect(CollectableAvatarPiece *this)

{
  bool bVar1;
  ResourceInfo *pRVar2;
  long lVar3;
  Effect_StaticImage *this_00;
  Effect_BouncingArrow *this_01;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xa8));
  lVar3 = FUN_05474184(pRVar2 + 0x60);
  if (lVar3 != 0) {
    LawnApp::GetUIImageFromStringId(gLawnApp);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar1) {
      this_00 = Board::AddEffect<Effect_StaticImage>(*(Board **)(gLawnApp + 0x9f0));
      nop();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      Effect_BouncingArrow::SetArrowImage(this_01,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Effect_BouncingArrow::SetTransX(this_01,true);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      if (this_00 != (Effect_StaticImage *)0x0) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xb0),(RtWeakPtrBase *)aRStack_10
                  );
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        StandaloneEffect::SetAttached
                  ((StandaloneEffect *)this_00,(RealObject *)this,(SexyVector3 *)(pRVar2 + 0x68),2);
        FUN_0490c034(this_00 + 0x1c);
        (**(code **)(*(long *)this_00 + 0x80))(*(undefined4 *)(pRVar2 + 0x50),this_00);
        *(undefined4 *)(this + 0xb8) = *(undefined4 *)(pRVar2 + 0x50);
      }
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

