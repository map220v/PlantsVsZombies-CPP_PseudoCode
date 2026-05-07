// Class: CollectablePlantPiece


/* CollectablePlantPiece::~CollectablePlantPiece() */

void __thiscall CollectablePlantPiece::~CollectablePlantPiece(CollectablePlantPiece *this)

{
  *(undefined ***)this = &PTR_GetClass_0690d360;
  *(undefined ***)(this + 0x10) = &PTR__CollectablePlantPiece_0690d5b0;
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectablePlantPiece::~CollectablePlantPiece() */

void __thiscall CollectablePlantPiece::~CollectablePlantPiece(CollectablePlantPiece *this)

{
  ~CollectablePlantPiece(this + -0x10);
  return;
}


/* CollectablePlantPiece::~CollectablePlantPiece() */

void __thiscall CollectablePlantPiece::~CollectablePlantPiece(CollectablePlantPiece *this)

{
  ~CollectablePlantPiece(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectablePlantPiece::~CollectablePlantPiece() */

void __thiscall CollectablePlantPiece::~CollectablePlantPiece(CollectablePlantPiece *this)

{
  ~CollectablePlantPiece(this + -0x10);
  return;
}


/* CollectablePlantPiece::StaticGetClass() */

long * CollectablePlantPiece::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectablePlantPiece",uVar2,StaticNew);
  return sClass;
}


/* CollectablePlantPiece::GetClass() const */

long * CollectablePlantPiece::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectablePlantPiece",uVar2,StaticNew);
  return sClass;
}


/* CollectablePlantPiece::CollectablePlantPiece() */

void __thiscall CollectablePlantPiece::CollectablePlantPiece(CollectablePlantPiece *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_0690d360;
  *(undefined ***)(this + 0x10) = &PTR__CollectablePlantPiece_0690d5b0;
  return;
}


/* CollectablePlantPiece::StaticNew() */

CollectablePlantPiece * CollectablePlantPiece::StaticNew(void)

{
  CollectablePlantPiece *this;
  
  this = ::operator_new(0x1f0);
  CollectablePlantPiece(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectablePlantPiece::CreateSelfRenderEffect(CollectableType const*) */

void __thiscall
CollectablePlantPiece::CreateSelfRenderEffect(CollectablePlantPiece *this,CollectableType *param_1)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  Effect_BouncingArrow *this_00;
  Effect_StaticImage *pEVar4;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_20,param_1 + 8);
  FUN_05475ffc(asStack_10,asStack_20,0,0xc);
  bVar1 = std::operator==(asStack_10,"plant_piece_");
  std::string::~string(asStack_10);
  if (bVar1) {
    FUN_05475ffc(asStack_18,asStack_20,0xc,0xffffffffffffffff);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_10);
    if (cVar2 == '\0') {
      pEVar4 = (Effect_StaticImage *)0x0;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      std::string::~string(asStack_18);
    }
    else {
      pEVar4 = Board::AddEffect<Effect_StaticImage>(*(Board **)(gLawnApp + 0x9f0));
      nop();
      Effect_BouncingArrow::SetTransX(this_00,true);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      Effect_StaticImage::SetPieceName((string *)this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      std::string::~string(asStack_18);
      if (pEVar4 != (Effect_StaticImage *)0x0) {
        FUN_0490c034(pEVar4 + 0x1c);
        (**(code **)(*(long *)pEVar4 + 0x80))(*(undefined4 *)(param_1 + 0x50),pEVar4);
      }
    }
  }
  else {
    pEVar4 = (Effect_StaticImage *)0x0;
  }
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pEVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectablePlantPiece::initializeRenderEffect() */

void __thiscall CollectablePlantPiece::initializeRenderEffect(CollectablePlantPiece *this)

{
  RtWeakPtr *this_00;
  ResourceInfo *pRVar1;
  StandaloneEffect *this_01;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0xa8);
  local_8 = ___stack_chk_guard;
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
  this_01 = (StandaloneEffect *)CreateSelfRenderEffect(this,(CollectableType *)pRVar1);
  if (this_01 != (StandaloneEffect *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xb0),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    StandaloneEffect::SetAttached(this_01,(RealObject *)this,(SexyVector3 *)(lVar2 + 0x68),2);
  }
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(lVar2 + 0x50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

