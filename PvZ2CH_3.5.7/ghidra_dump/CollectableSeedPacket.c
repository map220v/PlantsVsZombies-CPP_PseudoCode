// Class: CollectableSeedPacket


/* CollectableSeedPacket::CalcRenderOrder() const */

undefined8 CollectableSeedPacket::CalcRenderOrder(void)

{
  return 0x7a508;
}


/* non-virtual thunk to CollectableSeedPacket::CalcRenderOrder() const */

void __thiscall CollectableSeedPacket::CalcRenderOrder(CollectableSeedPacket *this)

{
  CalcRenderOrder();
  return;
}


/* CollectableSeedPacket::Android_OnAppResumeFocus() */

void __thiscall CollectableSeedPacket::Android_OnAppResumeFocus(CollectableSeedPacket *this)

{
  if (*(long **)(this + 0x1f8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1f8) + 0x18))();
  }
  *(undefined8 *)(this + 0x1f8) = 0;
  return;
}


/* CollectableSeedPacket::onDestroy() */

void __thiscall CollectableSeedPacket::onDestroy(CollectableSeedPacket *this)

{
  if (*(long **)(this + 0x1f8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1f8) + 0x18))();
    *(undefined8 *)(this + 0x1f8) = 0;
  }
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSeedPacket::StaticClassInit() */

void CollectableSeedPacket::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectableSeedPacket");
    (*pcVar2)(plVar1,asStack_10,FUN_03c68610,0x200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableSeedPacket::StaticGetClass() */

long * CollectableSeedPacket::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableSeedPacket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableSeedPacket::GetClass() const */

long * CollectableSeedPacket::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableSeedPacket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableSeedPacket::~CollectableSeedPacket() */

void __thiscall CollectableSeedPacket::~CollectableSeedPacket(CollectableSeedPacket *this)

{
  *(undefined ***)this = &PTR_GetClass_06756a30;
  *(undefined ***)(this + 0x10) = &PTR__CollectableSeedPacket_06756c90;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1f0));
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableSeedPacket::~CollectableSeedPacket() */

void __thiscall CollectableSeedPacket::~CollectableSeedPacket(CollectableSeedPacket *this)

{
  ~CollectableSeedPacket(this + -0x10);
  return;
}


/* CollectableSeedPacket::~CollectableSeedPacket() */

void __thiscall CollectableSeedPacket::~CollectableSeedPacket(CollectableSeedPacket *this)

{
  ~CollectableSeedPacket(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableSeedPacket::~CollectableSeedPacket() */

void __thiscall CollectableSeedPacket::~CollectableSeedPacket(CollectableSeedPacket *this)

{
  ~CollectableSeedPacket(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSeedPacket::CollectableSeedPacket() */

void __thiscall CollectableSeedPacket::CollectableSeedPacket(CollectableSeedPacket *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_06756a30;
  *(undefined ***)(this + 0x10) = &PTR__CollectableSeedPacket_06756c90;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1f0));
  *(undefined8 *)(this + 0x1f8) = 0;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,Android_OnAppResumeFocus);
  Sexy::Delegate0::Delegate0<CollectableSeedPacket,void(CollectableSeedPacket::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::AppResumeFocus,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableSeedPacket::StaticNew() */

CollectableSeedPacket * CollectableSeedPacket::StaticNew(void)

{
  CollectableSeedPacket *this;
  
  this = ::operator_new(0x200);
  CollectableSeedPacket(this);
  return this;
}


/* CollectableSeedPacket::drawToBuffer() */

void __thiscall CollectableSeedPacket::drawToBuffer(CollectableSeedPacket *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  SeedPacketUtils *this_00;
  long lVar4;
  PacketRenderData *pPVar5;
  long *plVar6;
  DeviceImage *pDVar7;
  
  this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1f0));
  pPVar5 = (PacketRenderData *)
           SeedPacketUtils::GetPlantPacketRenderData(this_00,(string *)(lVar4 + 8),-1,-1,-1);
  pDVar7 = *(DeviceImage **)(this + 0x1f8);
  if (pDVar7 == (DeviceImage *)0x0) {
    pDVar7 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_00,pPVar5,0,0);
    *(DeviceImage **)(this + 0x1f8) = pDVar7;
  }
  bVar1 = (bool)(**(code **)(*(long *)this + 0x248))(this);
  cVar2 = (**(code **)(*(long *)this + 0x240))(this);
  iVar3 = -1;
  if (cVar2 != '\0') {
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1f0));
    iVar3 = (**(code **)(*plVar6 + 0x70))(plVar6,0xfffffffe);
  }
  SeedPacketUtils::DrawPacketToDeviceImage(this_00,pDVar7,pPVar5,bVar1,iVar3,false,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSeedPacket::onDraw(Sexy::Graphics*) */

void __thiscall CollectableSeedPacket::onDraw(CollectableSeedPacket *this,Graphics *param_1)

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
  drawToBuffer(this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_28,param_1);
  Collectable::getDesiredEffectColor();
  fVar8 = *(float *)(this + 0x1c);
  local_20 = FUN_03c66684(*(undefined4 *)(this + 0x18),fVar8,*(undefined4 *)(this + 0x20));
  local_1c = fVar8;
  fVar5 = (float)FUN_03c66900();
  fVar5 = (float)Sexy::SexyVector2::operator*((SexyVector2 *)&local_20,fVar5);
  lVar4 = *(long *)(this + 0x1f8);
  fVar6 = (float)FUN_03c665cc(*(undefined4 *)(this + 0xb8));
  iVar1 = *(int *)(lVar4 + 0x38);
  iVar2 = *(int *)(lVar4 + 0x3c);
  fVar9 = *(float *)(param_1 + 0x20);
  fVar11 = *(float *)(param_1 + 0x24);
  fVar12 = *(float *)(param_1 + 0x18);
  fVar10 = *(float *)(param_1 + 0x1c);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  pIVar3 = *(Image **)(this + 0x1f8);
  fVar7 = (float)FUN_03c665cc(*(undefined4 *)(this + 0xb8));
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
/* CollectableSeedPacket::SetSeedType(std::string const&) */

void CollectableSeedPacket::SetSeedType(string *param_1)

{
  string *psVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(param_1 + 0x1f0),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

