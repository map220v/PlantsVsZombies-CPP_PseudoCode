// Class: CollectableArenaZombie


/* CollectableArenaZombie::onDestroy() */

void __thiscall CollectableArenaZombie::onDestroy(CollectableArenaZombie *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x1f8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    *(undefined8 *)(this + 0x1f8) = 0;
  }
  return;
}


/* CollectableArenaZombie::CalcRenderOrder() const */

undefined8 CollectableArenaZombie::CalcRenderOrder(void)

{
  return 1000000;
}


/* non-virtual thunk to CollectableArenaZombie::CalcRenderOrder() const */

void __thiscall CollectableArenaZombie::CalcRenderOrder(CollectableArenaZombie *this)

{
  CalcRenderOrder();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableArenaZombie::onDraw(Sexy::Graphics*) */

void __thiscall CollectableArenaZombie::onDraw(CollectableArenaZombie *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Image *pIVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  GraphicsAutoState aGStack_28 [8];
  undefined4 local_20;
  float local_1c;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x248))();
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_28,param_1);
  Collectable::getDesiredEffectColor();
  fVar8 = *(float *)(this + 0x1c);
  local_20 = FUN_03c6dcc8(*(undefined4 *)(this + 0x18),fVar8,*(undefined4 *)(this + 0x20));
  local_1c = fVar8;
  fVar5 = (float)FUN_03c6dd24();
  fVar5 = (float)Sexy::SexyVector2::operator*((SexyVector2 *)&local_20,fVar5);
  lVar4 = *(long *)(this + 0x1f8);
  fVar6 = (float)FUN_03c6dcb0(*(undefined4 *)(this + 0xb8));
  iVar1 = *(int *)(lVar4 + 0x38);
  iVar2 = *(int *)(lVar4 + 0x3c);
  fVar9 = *(float *)(param_1 + 0x20);
  fVar11 = *(float *)(param_1 + 0x24);
  fVar12 = *(float *)(param_1 + 0x18);
  fVar10 = *(float *)(param_1 + 0x1c);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  pIVar3 = *(Image **)(this + 0x1f8);
  fVar7 = (float)FUN_03c6dcb0(*(undefined4 *)(this + 0xb8));
  Sexy::Graphics::DrawImage
            (param_1,pIVar3,
             (int)((float)(int)(((fVar5 - fVar6 * (float)iVar1 * 0.5) - fVar9) * fVar12) + fVar9),
             (int)((float)(int)(((fVar8 - fVar6 * (float)iVar2 * 0.5) - fVar11) * fVar10) + fVar11),
             (int)((float)*(int *)(pIVar3 + 0x38) * *(float *)(param_1 + 0x18) * fVar7),
             (int)((float)*(int *)(pIVar3 + 0x3c) * *(float *)(param_1 + 0x1c) * fVar7));
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableArenaZombie::StaticClassInit() */

void CollectableArenaZombie::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectableArenaZombie");
    (*pcVar2)(plVar1,asStack_10,FUN_03c6e538,0x208,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableArenaZombie::StaticGetClass() */

long * CollectableArenaZombie::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableArenaZombie",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableArenaZombie::GetClass() const */

long * CollectableArenaZombie::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableArenaZombie",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableArenaZombie::SetZombieSeedType(Sexy::RtWeakPtr<ZombieType const>) */

void __thiscall
CollectableArenaZombie::SetZombieSeedType(CollectableArenaZombie *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1f0),param_2);
  return;
}


/* CollectableArenaZombie::CollectableArenaZombie() */

void __thiscall CollectableArenaZombie::CollectableArenaZombie(CollectableArenaZombie *this)

{
  undefined4 uVar1;
  
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_06759010;
  *(undefined ***)(this + 0x10) = &PTR__CollectableArenaZombie_06759278;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1f0));
  *(undefined8 *)(this + 0x1f8) = 0;
  uVar1 = PVZ_EOT();
  this[0x204] = (CollectableArenaZombie)0x0;
  *(undefined4 *)(this + 0x200) = uVar1;
  return;
}


/* CollectableArenaZombie::StaticNew() */

CollectableArenaZombie * CollectableArenaZombie::StaticNew(void)

{
  CollectableArenaZombie *this;
  
  this = ::operator_new(0x208);
  CollectableArenaZombie(this);
  return this;
}


/* CollectableArenaZombie::~CollectableArenaZombie() */

void __thiscall CollectableArenaZombie::~CollectableArenaZombie(CollectableArenaZombie *this)

{
  *(undefined ***)this = &PTR_GetClass_06759010;
  *(undefined ***)(this + 0x10) = &PTR__CollectableArenaZombie_06759278;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1f0));
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableArenaZombie::~CollectableArenaZombie() */

void __thiscall CollectableArenaZombie::~CollectableArenaZombie(CollectableArenaZombie *this)

{
  ~CollectableArenaZombie(this + -0x10);
  return;
}


/* CollectableArenaZombie::~CollectableArenaZombie() */

void __thiscall CollectableArenaZombie::~CollectableArenaZombie(CollectableArenaZombie *this)

{
  ~CollectableArenaZombie(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableArenaZombie::~CollectableArenaZombie() */

void __thiscall CollectableArenaZombie::~CollectableArenaZombie(CollectableArenaZombie *this)

{
  ~CollectableArenaZombie(this + -0x10);
  return;
}


/* CollectableArenaZombie::PrepareMoving() */

void __thiscall CollectableArenaZombie::PrepareMoving(CollectableArenaZombie *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x200) = fVar1 + 1.0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableArenaZombie::drawToBuffer() */

void __thiscall CollectableArenaZombie::drawToBuffer(CollectableArenaZombie *this)

{
  char cVar1;
  SeedPacketUtils *this_00;
  long lVar2;
  PacketRenderData *pPVar3;
  DeviceImage *pDVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x1f8) == 0) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1f0));
    if (cVar1 != '\0') {
      this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      std::string::string(asStack_10,"IMAGE_UI_ZOMBIE_PVP1_PACKETS_");
      nop();
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1f0));
      pPVar3 = (PacketRenderData *)
               SeedPacketUtils::GetZombiePacketRenderData
                         (this_00,(string *)(lVar2 + 8),asStack_10,-1);
      pDVar4 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_00,pPVar3,0,0);
      *(DeviceImage **)(this + 0x1f8) = pDVar4;
      SeedPacketUtils::DrawPacketToDeviceImage(this_00,pDVar4,pPVar3,false,-1,false,false);
      std::string::~string(asStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableArenaZombie::StartMoving() */

void __thiscall CollectableArenaZombie::StartMoving(CollectableArenaZombie *this)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  UIWidget *this_00;
  RtObject *this_01;
  SeedPacket_PVP *pSVar4;
  RtMixedPtrBase aRStack_30 [8];
  undefined8 local_28;
  ulong local_20;
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  DVec3::DVec3((DVec3 *)&local_18);
  this_00 = (UIWidget *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  UIWidget::GetPositionOffset(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1f0));
  SeedBankNew::GetPacket((string *)this_00);
  (**(code **)(*(long *)this_00 + 0xb0))((TPoint<int> *)&local_28,this_00);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
  if (cVar1 != '\0') {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    pSVar4 = Sexy::RtObject::Cast<SeedPacket_PVP>(this_01);
    (**(code **)(*(long *)pSVar4 + 0xb0))(&local_20);
    local_28 = local_20;
  }
  Board::GetBoardBaseOffset();
  Sexy::TPoint<int>::operator-=((TPoint<int> *)&local_28,(TPoint *)&local_20);
  Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_28);
  iVar2 = FUN_03c6ded4(local_28 & 0xffffffff);
  local_18 = (float)(iVar2 + 0x40);
  iVar2 = FUN_03c6ded4(local_28._4_4_);
  local_14 = (float)iVar2;
  Collectable::SetMotionInterpolate((Collectable *)0x3f800000,this,uVar3,(DVec3 *)&local_18,3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableArenaZombie::onFinishMotion() */

void __thiscall CollectableArenaZombie::onFinishMotion(CollectableArenaZombie *this)

{
  char cVar1;
  int iVar2;
  string *psVar3;
  long lVar4;
  RtObject *this_00;
  SeedPacket_PVP *this_01;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1f0));
  SeedBankNew::GetPacket(psVar3);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  if (cVar1 != '\0') {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    this_01 = Sexy::RtObject::Cast<SeedPacket_PVP>(this_00);
    iVar2 = FUN_03c6dcb4(*(undefined4 *)(this_01 + 0x200));
    SeedPacket_PVP::SetCurNum(this_01,iVar2 + 1);
    SeedPacket::PlayWordAffordEffect((SeedPacket *)this_01,0,0);
  }
  lVar4 = FUN_03c6e42c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (lVar4 != 0) {
    FUN_03c6dcc0(lVar4 + 0xf8);
  }
  Collectable::FinishCollect((Collectable *)this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableArenaZombie::registerForEvents() */

void __thiscall CollectableArenaZombie::registerForEvents(CollectableArenaZombie *this)

{
  Board *pBVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_88 [8];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)&DAT_00000228);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<Collectable,bool(Collectable::*)(Sexy::Touch_const&)>(aDStack_68,aCStack_80);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_88,(RtWeakPtrBase *)aRStack_90);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,0xb,aRStack_88,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableArenaZombie::onUpdate() */

void __thiscall CollectableArenaZombie::onUpdate(CollectableArenaZombie *this)

{
  float fVar1;
  float fVar2;
  
  Collectable::onUpdate((Collectable *)this);
  if ((this[0x204] == (CollectableArenaZombie)0x0) &&
     (fVar2 = *(float *)(this + 0x200), fVar1 = (float)PVZ_T(), fVar2 - fVar1 <= 0.0)) {
    this[0x204] = (CollectableArenaZombie)0x1;
    (**(code **)(*(long *)this + 0x250))(this);
  }
  return;
}

