// Class: CollectableSeedRain


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSeedRain::SetZombieSeedType(std::string const&) */

void CollectableSeedRain::SetZombieSeedType(string *param_1)

{
  string *psVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(param_1 + 0x200),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableSeedRain::CalcRenderOrder() const */

undefined8 CollectableSeedRain::CalcRenderOrder(void)

{
  return 0x7a508;
}


/* non-virtual thunk to CollectableSeedRain::CalcRenderOrder() const */

void __thiscall CollectableSeedRain::CalcRenderOrder(CollectableSeedRain *this)

{
  CalcRenderOrder();
  return;
}


/* CollectableSeedRain::Android_OnAppResumeFocus() */

void __thiscall CollectableSeedRain::Android_OnAppResumeFocus(CollectableSeedRain *this)

{
  if (*(long **)(this + 0x210) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x210) + 0x18))();
  }
  *(undefined8 *)(this + 0x210) = 0;
  return;
}


/* CollectableSeedRain::onCursorDestroyed(BaseCursor*) */

void __thiscall
CollectableSeedRain::onCursorDestroyed(CollectableSeedRain *this,BaseCursor *param_1)

{
  char cVar1;
  
  if (*(LuaUpdater **)(this + 0x218) == (LuaUpdater *)param_1) {
    this[0x228] = (CollectableSeedRain)0x0;
    cVar1 = Lua::LuaUpdater::GetBlocked(*(LuaUpdater **)(this + 0x218));
    if (cVar1 == '\0') {
      Collectable::SetPauseExpirationTimer((Collectable *)this,false);
      *(undefined8 *)(this + 0x218) = 0;
    }
    else {
      (**(code **)(*(long *)this + 0x48))(this);
      *(undefined8 *)(this + 0x218) = 0;
    }
  }
  else if (*(LuaUpdater **)(this + 0x220) == (LuaUpdater *)param_1) {
    this[0x228] = (CollectableSeedRain)0x0;
    cVar1 = Lua::LuaUpdater::GetBlocked(*(LuaUpdater **)(this + 0x220));
    if (cVar1 == '\0') {
      Collectable::SetPauseExpirationTimer((Collectable *)this,false);
      *(undefined8 *)(this + 0x220) = 0;
    }
    else {
      (**(code **)(*(long *)this + 0x48))(this);
      *(undefined8 *)(this + 0x220) = 0;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSeedRain::StaticClassInit() */

void CollectableSeedRain::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectableSeedRain");
    (*pcVar2)(plVar1,asStack_10,FUN_03c6d66c,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableSeedRain::StaticGetClass() */

long * CollectableSeedRain::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectableSeedRain",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableSeedRain::GetClass() const */

long * CollectableSeedRain::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectableSeedRain",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableSeedRain::SetTargetGrid(Sexy::Point) */

void __thiscall CollectableSeedRain::SetTargetGrid(CollectableSeedRain *this,undefined8 *param_2)

{
  *(undefined8 *)(this + 0x208) = *param_2;
  return;
}


/* CollectableSeedRain::GetIsSelect() */

CollectableSeedRain __thiscall CollectableSeedRain::GetIsSelect(CollectableSeedRain *this)

{
  return this[0x228];
}


/* CollectableSeedRain::GetTargetGrid() const */

Point * CollectableSeedRain::GetTargetGrid(void)

{
  long in_x0;
  Point *in_x8;
  
  Sexy::Point::Point(in_x8,(TPoint *)(in_x0 + 0x208));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSeedRain::onTouchEvent(Sexy::Touch const&) */

void __thiscall CollectableSeedRain::onTouchEvent(CollectableSeedRain *this,Touch *param_1)

{
  char cVar1;
  CollectableSeedRain CVar2;
  CollectableSeedRain CVar3;
  Insets *pIVar4;
  ArenaEditPlantCursor *this_00;
  BaseCursor *pBVar5;
  SexyVector3 *pSVar6;
  Collectable *this_01;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Insets aIStack_28 [16];
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Collectable::IsTouched((Collectable *)this,param_1);
  if (cVar1 != '\0') {
    CVar2 = (CollectableSeedRain)Collectable::IsTouchable((Collectable *)this);
    if ((CVar2 != (CollectableSeedRain)0x0) && (*(int *)(param_1 + 0x30) == 0)) {
      CVar3 = (CollectableSeedRain)Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1f8));
      if (CVar3 == (CollectableSeedRain)0x0) {
        CVar3 = (CollectableSeedRain)Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x200))
        ;
        if (CVar3 == (CollectableSeedRain)0x0) {
          CVar3 = this[0x1f0];
          if (CVar3 != (CollectableSeedRain)0x0) {
            pSVar6 = (SexyVector3 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)this);
            this_01 = (Collectable *)Board::AddPlantfood(*(Board **)(gLawnApp + 0x9f0),pSVar6,0);
            if (this_01 != (Collectable *)0x0) {
              Collectable::SetNeverExpire(this_01,true);
              Collectable::TryToCollect(this_01);
            }
            (**(code **)(*(long *)this + 0x48))(this);
            CVar2 = CVar3;
          }
          goto LAB_03c6cd00;
        }
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)(this + 0x200));
        pIVar4 = (Insets *)(**(code **)(*(long *)this + 0x178))(this);
        Sexy::Insets::Insets(aIStack_28,pIVar4);
        FUN_03c6cc8c(auStack_18,aIStack_28);
        pBVar5 = ::operator_new(0x60);
        ZombieCursor::ZombieCursor((ZombieCursor *)pBVar5,param_1,aRStack_30,auStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        cVar1 = Board::TryToAddCursor(*(Board **)(gLawnApp + 0x9f0),pBVar5,true);
        if (cVar1 != '\0') {
          *(BaseCursor **)(this + 0x220) = pBVar5;
          this[0x228] = (CollectableSeedRain)0x1;
        }
      }
      else {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)(this + 0x1f8));
        pIVar4 = (Insets *)(**(code **)(*(long *)this + 0x178))(this);
        Sexy::Insets::Insets(aIStack_28,pIVar4);
        FUN_03c6cc8c(auStack_18,aIStack_28);
        this_00 = ::operator_new(0x58);
        PlantCursor::PlantCursor((PlantCursor *)this_00,param_1,aRStack_30,auStack_18,0,0xffffffff);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        ArenaEditPlantCursor::SetPlantingFreeForCursor(this_00,true);
        cVar1 = Board::TryToAddCursor(*(Board **)(gLawnApp + 0x9f0),(BaseCursor *)this_00,true);
        if (cVar1 != '\0') {
          *(ArenaEditPlantCursor **)(this + 0x218) = this_00;
          this[0x228] = (CollectableSeedRain)0x1;
        }
      }
      Collectable::SetPauseExpirationTimer((Collectable *)this,true);
      CVar2 = CVar3;
      goto LAB_03c6cd00;
    }
  }
  CVar2 = (CollectableSeedRain)0x0;
LAB_03c6cd00:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(CVar2);
  }
  return;
}


/* CollectableSeedRain::~CollectableSeedRain() */

void __thiscall CollectableSeedRain::~CollectableSeedRain(CollectableSeedRain *this)

{
  *(undefined ***)this = &PTR_GetClass_06758d80;
  *(undefined ***)(this + 0x10) = &PTR__CollectableSeedRain_06758fd8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x200));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1f8));
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableSeedRain::~CollectableSeedRain() */

void __thiscall CollectableSeedRain::~CollectableSeedRain(CollectableSeedRain *this)

{
  ~CollectableSeedRain(this + -0x10);
  return;
}


/* CollectableSeedRain::~CollectableSeedRain() */

void __thiscall CollectableSeedRain::~CollectableSeedRain(CollectableSeedRain *this)

{
  ~CollectableSeedRain(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableSeedRain::~CollectableSeedRain() */

void __thiscall CollectableSeedRain::~CollectableSeedRain(CollectableSeedRain *this)

{
  ~CollectableSeedRain(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSeedRain::CollectableSeedRain() */

void __thiscall CollectableSeedRain::CollectableSeedRain(CollectableSeedRain *this)

{
  undefined *this_00;
  long lVar1;
  undefined8 local_50 [3];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_06758d80;
  *(undefined ***)(this + 0x10) = &PTR__CollectableSeedRain_06758fd8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1f8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x200));
  Sexy::Point::Point((Point *)(this + 0x208));
  *(undefined8 *)(this + 0x210) = 0;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,Android_OnAppResumeFocus);
  Sexy::Delegate0::Delegate0<CollectableSeedRain,void(CollectableSeedRain::*)()>
            (aDStack_38,(Point *)local_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::AppResumeFocus,aDStack_38);
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  this[0x1f0] = (CollectableSeedRain)0x0;
  this[0x228] = (CollectableSeedRain)0x0;
  Sexy::Point::Point((Point *)local_50,0,0);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x208) = local_50[0];
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableSeedRain::StaticNew() */

CollectableSeedRain * CollectableSeedRain::StaticNew(void)

{
  CollectableSeedRain *this;
  
  this = ::operator_new(0x230);
  CollectableSeedRain(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSeedRain::drawToBuffer() */

void __thiscall CollectableSeedRain::drawToBuffer(CollectableSeedRain *this)

{
  char cVar1;
  SeedPacketUtils *pSVar2;
  PacketRenderData *pPVar3;
  DeviceImage *pDVar4;
  long lVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x210) == 0) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x1f8));
    if (cVar1 == '\0') {
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x200));
      if (cVar1 == '\0') {
        if (this[0x1f0] != (CollectableSeedRain)0x0) {
          pSVar2 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
          pPVar3 = (PacketRenderData *)SeedPacketUtils::GetPlantFoodRenderData(pSVar2);
          pDVar4 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(pSVar2,pPVar3,0,0)
          ;
          *(DeviceImage **)(this + 0x210) = pDVar4;
          SeedPacketUtils::DrawPacketToDeviceImage
                    (pSVar2,pDVar4,pPVar3,*(long *)(this + 0x220) != 0,-1,false,false);
        }
      }
      else {
        pSVar2 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
        std::string::string(asStack_10,"IMAGE_UI_ZOMBIE_PVP1_PACKETS_");
        nop();
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x200));
        pPVar3 = (PacketRenderData *)
                 SeedPacketUtils::GetZombiePacketRenderData
                           (pSVar2,(string *)(lVar5 + 8),asStack_10,-1);
        pDVar4 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(pSVar2,pPVar3,0,0);
        *(DeviceImage **)(this + 0x210) = pDVar4;
        SeedPacketUtils::DrawPacketToDeviceImage
                  (pSVar2,pDVar4,pPVar3,*(long *)(this + 0x220) != 0,-1,false,false);
        std::string::~string(asStack_10);
      }
    }
    else {
      pSVar2 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1f8));
      pPVar3 = (PacketRenderData *)
               SeedPacketUtils::GetPlantPacketRenderData(pSVar2,(string *)(lVar5 + 8),-1,-1,-1);
      pDVar4 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(pSVar2,pPVar3,0,0);
      *(DeviceImage **)(this + 0x210) = pDVar4;
      SeedPacketUtils::DrawPacketToDeviceImage
                (pSVar2,pDVar4,pPVar3,*(long *)(this + 0x218) != 0,-1,false,false);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSeedRain::onDraw(Sexy::Graphics*) */

void __thiscall CollectableSeedRain::onDraw(CollectableSeedRain *this,Graphics *param_1)

{
  int iVar1;
  Image *pIVar2;
  int iVar3;
  int iVar4;
  long lVar5;
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
  local_20 = FUN_03c6c9cc(*(undefined4 *)(this + 0x18),fVar8,*(undefined4 *)(this + 0x20));
  local_1c = fVar8;
  fVar6 = (float)FUN_03c6cb00();
  fVar6 = (float)Sexy::SexyVector2::operator*((SexyVector2 *)&local_20,fVar6);
  lVar5 = *(long *)(this + 0x210);
  fVar7 = (float)FUN_03c6c9c4(*(undefined4 *)(this + 0xb8));
  iVar3 = *(int *)(lVar5 + 0x38);
  iVar1 = *(int *)(lVar5 + 0x3c);
  fVar9 = *(float *)(param_1 + 0x20);
  fVar11 = *(float *)(param_1 + 0x24);
  fVar12 = *(float *)(param_1 + 0x18);
  fVar10 = *(float *)(param_1 + 0x1c);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  iVar4 = (int)((float)(int)(((fVar6 - fVar7 * (float)iVar3 * 0.5) - fVar9) * fVar12) + fVar9);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  pIVar2 = *(Image **)(this + 0x210);
  iVar3 = (int)((float)(int)(((fVar8 - fVar7 * (float)iVar1 * 0.5) - fVar11) * fVar10) + fVar11);
  fVar6 = (float)FUN_03c6c9c4(*(undefined4 *)(this + 0xb8));
  Sexy::Graphics::DrawImage
            (param_1,pIVar2,iVar4,iVar3,
             (int)((float)*(int *)(pIVar2 + 0x38) * *(float *)(param_1 + 0x18) * fVar6),
             (int)((float)*(int *)(pIVar2 + 0x3c) * *(float *)(param_1 + 0x1c) * fVar6));
  if (this[0x228] != (CollectableSeedRain)0x0) {
    pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad1880);
    lVar5 = *(long *)(this + 0x210);
    fVar6 = (float)FUN_03c6c9c4(*(undefined4 *)(this + 0xb8));
    Sexy::Graphics::DrawImage
              (param_1,pIVar2,iVar4,iVar3,
               (int)((float)*(int *)(lVar5 + 0x38) * *(float *)(param_1 + 0x18) * fVar6),
               (int)((float)*(int *)(lVar5 + 0x3c) * *(float *)(param_1 + 0x1c) * fVar6));
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableSeedRain::onDestroy() */

void __thiscall CollectableSeedRain::onDestroy(CollectableSeedRain *this)

{
  MessageRouter::Post<CollectableSeedRain*,CollectableSeedRain*>
            ((MessageRouter *)gMessageRouter,Message::CollectableSeedRainFinished,this);
  if (*(long **)(this + 0x210) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x210) + 0x18))();
    *(undefined8 *)(this + 0x210) = 0;
  }
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSeedRain::SetPlantSeedType(std::string const&) */

void CollectableSeedRain::SetPlantSeedType(string *param_1)

{
  string *psVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(param_1 + 0x1f8),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableSeedRain::registerForEvents() */

void __thiscall CollectableSeedRain::registerForEvents(CollectableSeedRain *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Collectable::registerForEvents((Collectable *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCursorDestroyed);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<CollectableSeedRain,void(CollectableSeedRain::*)(BaseCursor*)>>
            ((MessageRouter *)puVar1,Message::CursorDestroyed,&local_40);
  return;
}

