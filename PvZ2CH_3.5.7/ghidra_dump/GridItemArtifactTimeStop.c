// Class: GridItemArtifactTimeStop


/* GridItemArtifactTimeStop::~GridItemArtifactTimeStop() */

void __thiscall GridItemArtifactTimeStop::~GridItemArtifactTimeStop(GridItemArtifactTimeStop *this)

{
  *(undefined ***)this = &PTR_GetClass_0668f490;
  *(undefined ***)(this + 0x10) = &PTR__GridItemArtifactTimeStop_0668f748;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  GridItemAutoDestroy::~GridItemAutoDestroy((GridItemAutoDestroy *)this);
  return;
}


/* non-virtual thunk to GridItemArtifactTimeStop::~GridItemArtifactTimeStop() */

void __thiscall GridItemArtifactTimeStop::~GridItemArtifactTimeStop(GridItemArtifactTimeStop *this)

{
  ~GridItemArtifactTimeStop(this + -0x10);
  return;
}


/* GridItemArtifactTimeStop::~GridItemArtifactTimeStop() */

void __thiscall GridItemArtifactTimeStop::~GridItemArtifactTimeStop(GridItemArtifactTimeStop *this)

{
  ~GridItemArtifactTimeStop(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemArtifactTimeStop::~GridItemArtifactTimeStop() */

void __thiscall GridItemArtifactTimeStop::~GridItemArtifactTimeStop(GridItemArtifactTimeStop *this)

{
  ~GridItemArtifactTimeStop(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactTimeStop::StaticClassInit() */

void GridItemArtifactTimeStop::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemArtifactTimeStop");
    (*pcVar2)(plVar1,asStack_10,FUN_0372f28c,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemArtifactTimeStop::StaticGetClass() */

long * GridItemArtifactTimeStop::StaticGetClass(void)

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
  uVar2 = GridItemAutoDestroy::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemArtifactTimeStop",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemArtifactTimeStop::GetClass() const */

long * GridItemArtifactTimeStop::GetClass(void)

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
  uVar2 = GridItemAutoDestroy::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemArtifactTimeStop",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemArtifactTimeStop::EndEffectToPlant(Plant*) */

GridItemArtifactTimeStop * __thiscall
GridItemArtifactTimeStop::EndEffectToPlant(GridItemArtifactTimeStop *this,Plant *param_1)

{
  byte bVar1;
  GridItemArtifactTimeStop *pGVar2;
  
  if (param_1 != (Plant *)0x0) {
    bVar1 = Plant::HasCondition(param_1,0xf);
    this = (GridItemArtifactTimeStop *)(ulong)bVar1;
    if (bVar1 != 0) {
      pGVar2 = (GridItemArtifactTimeStop *)Plant::EndCondition(param_1,0xf);
      return pGVar2;
    }
  }
  return this;
}


/* GridItemArtifactTimeStop::IsInEffectArea(int, int) */

bool GridItemArtifactTimeStop::IsInEffectArea(int param_1,int param_2)

{
  return 5 < param_2;
}


/* GridItemArtifactTimeStop::ApplyEffectToPlant(Plant*) */

void __thiscall
GridItemArtifactTimeStop::ApplyEffectToPlant(GridItemArtifactTimeStop *this,Plant *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((param_1 != (Plant *)0x0) && (cVar1 = Plant::HasCondition(param_1,0xf), cVar1 == '\0')) {
    fVar2 = *(float *)(this + 0x1ac);
    fVar4 = *(float *)(this + 0x1b0);
    fVar3 = (float)PVZ_T();
    Plant::ApplyCondition((fVar2 + fVar4) - fVar3,0,param_1,0xf);
    return;
  }
  return;
}


/* GridItemArtifactTimeStop::GridItemArtifactTimeStop() */

void __thiscall GridItemArtifactTimeStop::GridItemArtifactTimeStop(GridItemArtifactTimeStop *this)

{
  undefined *puVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GridItemAutoDestroy::GridItemAutoDestroy((GridItemAutoDestroy *)this);
  *(undefined ***)this = &PTR_GetClass_0668f490;
  *(undefined ***)(this + 0x10) = &PTR__GridItemArtifactTimeStop_0668f748;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCreatePlant);
  local_60 = local_38;
  local_70 = local_48;
  uStack_68 = uStack_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<GridItemArtifactTimeStop,void(GridItemArtifactTimeStop::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantCreate,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ApplyEffectToZombie);
  local_90 = local_30;
  uStack_88 = uStack_28;
  local_80 = local_20;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<GridItemArtifactTimeStop,void(GridItemArtifactTimeStop::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieEnterBoardX,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ApplyEffectToZombie);
  local_80 = local_8;
  local_90 = local_18;
  uStack_88 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<GridItemArtifactTimeStop,void(GridItemArtifactTimeStop::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_90);
  return;
}


/* GridItemArtifactTimeStop::StaticNew() */

GridItemArtifactTimeStop * GridItemArtifactTimeStop::StaticNew(void)

{
  GridItemArtifactTimeStop *this;
  
  this = ::operator_new(0x218);
  GridItemArtifactTimeStop(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactTimeStop::onDestroy() */

void __thiscall GridItemArtifactTimeStop::onDestroy(GridItemArtifactTimeStop *this)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Plant *pPVar4;
  Zombie *pZVar5;
  undefined8 local_58;
  undefined8 local_50;
  Insets aIStack_48 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_48,6,0,3,5);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  EntityFinder::GetEntitiesInGridSquares(avStack_38,1,aIStack_48);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,aIStack_48);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_38);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    pPVar4 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
    if ((pPVar4 != (Plant *)0x0) && (cVar2 = Plant::HasCondition(pPVar4,0xf), cVar2 != '\0')) {
      Plant::EndCondition(pPVar4,0xf);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  }
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
    if ((pZVar5 != (Zombie *)0x0) && (cVar2 = Zombie::HasCondition(pZVar5,0x18), cVar2 != '\0')) {
      Zombie::EndCondition(pZVar5,0x18);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  }
  GridItemAutoDestroy::onDestroy((GridItemAutoDestroy *)this);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactTimeStop::OnCreatePlant(Plant*) */

void __thiscall
GridItemArtifactTimeStop::OnCreatePlant(GridItemArtifactTimeStop *this,Plant *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Plant *pPVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_30,6,0,3,5);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,1,aIStack_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    pPVar4 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
    if ((param_1 == pPVar4) && (cVar2 = Plant::HasCondition(pPVar4,0xf), cVar2 == '\0')) {
      fVar5 = *(float *)(this + 0x1ac);
      fVar7 = *(float *)(this + 0x1b0);
      fVar6 = (float)PVZ_T();
      Plant::ApplyCondition((fVar5 + fVar7) - fVar6,0,param_1,0xf);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
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
/* GridItemArtifactTimeStop::ApplyEffectToZombie(Zombie*) */

void __thiscall
GridItemArtifactTimeStop::ApplyEffectToZombie(GridItemArtifactTimeStop *this,Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Zombie *pZVar4;
  ZombieZombossMech *pZVar5;
  string *psVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_30,6,0,3,5);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,aIStack_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
    if ((((param_1 == pZVar4) && (cVar2 = Zombie::HasCondition(pZVar4,0x18), cVar2 == '\0')) &&
        (cVar2 = Zombie::IsBoss(param_1), cVar2 == '\0')) &&
       (((pZVar5 = Sexy::RtObject::Cast<ZombieZombossMech>((RtObject *)param_1),
         pZVar5 == (ZombieZombossMech *)0x0 &&
         (cVar2 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar2 == '\0')) &&
        (cVar2 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar2 == '\0')))) {
      psVar6 = (string *)Zombie::GetTypeName(param_1);
      bVar1 = std::operator!=(psVar6,"wave_airbubble");
      if (bVar1) {
        fVar7 = *(float *)(this + 0x1ac);
        fVar9 = *(float *)(this + 0x1b0);
        fVar8 = (float)PVZ_T();
        Zombie::ApplyCondition((Zombie *)((fVar7 + fVar9) - fVar8),0,param_1,0x18,1);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

