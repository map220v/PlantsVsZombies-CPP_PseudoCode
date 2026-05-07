// Class: GridItemArtifactTimeSpeedUp


/* GridItemArtifactTimeSpeedUp::~GridItemArtifactTimeSpeedUp() */

void __thiscall
GridItemArtifactTimeSpeedUp::~GridItemArtifactTimeSpeedUp(GridItemArtifactTimeSpeedUp *this)

{
  *(undefined ***)this = &PTR_GetClass_0668f780;
  *(undefined ***)(this + 0x10) = &PTR__GridItemArtifactTimeSpeedUp_0668fa38;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  GridItemAutoDestroy::~GridItemAutoDestroy((GridItemAutoDestroy *)this);
  return;
}


/* non-virtual thunk to GridItemArtifactTimeSpeedUp::~GridItemArtifactTimeSpeedUp() */

void __thiscall
GridItemArtifactTimeSpeedUp::~GridItemArtifactTimeSpeedUp(GridItemArtifactTimeSpeedUp *this)

{
  ~GridItemArtifactTimeSpeedUp(this + -0x10);
  return;
}


/* GridItemArtifactTimeSpeedUp::~GridItemArtifactTimeSpeedUp() */

void __thiscall
GridItemArtifactTimeSpeedUp::~GridItemArtifactTimeSpeedUp(GridItemArtifactTimeSpeedUp *this)

{
  ~GridItemArtifactTimeSpeedUp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemArtifactTimeSpeedUp::~GridItemArtifactTimeSpeedUp() */

void __thiscall
GridItemArtifactTimeSpeedUp::~GridItemArtifactTimeSpeedUp(GridItemArtifactTimeSpeedUp *this)

{
  ~GridItemArtifactTimeSpeedUp(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactTimeSpeedUp::StaticClassInit() */

void GridItemArtifactTimeSpeedUp::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemArtifactTimeSpeedUp");
    (*pcVar2)(plVar1,asStack_10,FUN_0372f4f4,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemArtifactTimeSpeedUp::StaticGetClass() */

long * GridItemArtifactTimeSpeedUp::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemArtifactTimeSpeedUp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemArtifactTimeSpeedUp::GetClass() const */

long * GridItemArtifactTimeSpeedUp::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemArtifactTimeSpeedUp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemArtifactTimeSpeedUp::EndEffectToPlant(Plant*) */

void __thiscall
GridItemArtifactTimeSpeedUp::EndEffectToPlant(GridItemArtifactTimeSpeedUp *this,Plant *param_1)

{
  if (param_1 != (Plant *)0x0) {
    Plant::RecoverFastCoolDownRatio(param_1);
    return;
  }
  return;
}


/* GridItemArtifactTimeSpeedUp::IsInEffectArea(int, int) */

bool GridItemArtifactTimeSpeedUp::IsInEffectArea(int param_1,int param_2)

{
  return param_2 < 3;
}


/* GridItemArtifactTimeSpeedUp::ApplyEffectToPlant(Plant*) */

void __thiscall
GridItemArtifactTimeSpeedUp::ApplyEffectToPlant(GridItemArtifactTimeSpeedUp *this,Plant *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_1 != (Plant *)0x0) {
    fVar1 = *(float *)(this + 0x1ac);
    fVar3 = *(float *)(this + 0x1b0);
    fVar2 = (float)PVZ_T();
    Plant::ChangeSpeedModifier(param_1,*(float *)(this + 0x218),(fVar1 + fVar3) - fVar2);
    Plant::SetFastCoolDownRatio(param_1,*(float *)(this + 0x21c));
    return;
  }
  return;
}


/* GridItemArtifactTimeSpeedUp::GridItemArtifactTimeSpeedUp() */

void __thiscall
GridItemArtifactTimeSpeedUp::GridItemArtifactTimeSpeedUp(GridItemArtifactTimeSpeedUp *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GridItemAutoDestroy::GridItemAutoDestroy((GridItemAutoDestroy *)this);
  *(undefined4 *)(this + 0x218) = 0x40000000;
  *(undefined ***)this = &PTR_GetClass_0668f780;
  *(undefined ***)(this + 0x10) = &PTR__GridItemArtifactTimeSpeedUp_0668fa38;
  *(undefined4 *)(this + 0x21c) = 0x3f800000;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCreatePlant);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<GridItemArtifactTimeSpeedUp,void(GridItemArtifactTimeSpeedUp::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantCreate,&local_40);
  return;
}


/* GridItemArtifactTimeSpeedUp::StaticNew() */

GridItemArtifactTimeSpeedUp * GridItemArtifactTimeSpeedUp::StaticNew(void)

{
  GridItemArtifactTimeSpeedUp *this;
  
  this = ::operator_new(0x220);
  GridItemArtifactTimeSpeedUp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactTimeSpeedUp::onDestroy() */

void __thiscall GridItemArtifactTimeSpeedUp::onDestroy(GridItemArtifactTimeSpeedUp *this)

{
  bool bVar1;
  undefined8 *puVar2;
  Plant *this_00;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAutoDestroy::onDestroy((GridItemAutoDestroy *)this);
  Sexy::Insets::Insets(aIStack_30,0,0,3,5);
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
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar2);
    if (this_00 != (Plant *)0x0) {
      Plant::RecoverFastCoolDownRatio(this_00);
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
/* GridItemArtifactTimeSpeedUp::OnCreatePlant(Plant*) */

void __thiscall
GridItemArtifactTimeSpeedUp::OnCreatePlant(GridItemArtifactTimeSpeedUp *this,Plant *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  Plant *pPVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_30,0,0,3,5);
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
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    pPVar3 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar2);
    if (param_1 == pPVar3) {
      fVar4 = *(float *)(this + 0x1ac);
      fVar6 = *(float *)(this + 0x1b0);
      fVar5 = (float)PVZ_T();
      Plant::ChangeSpeedModifier(param_1,*(float *)(this + 0x218),(fVar4 + fVar6) - fVar5);
      Plant::SetFastCoolDownRatio(param_1,*(float *)(this + 0x21c));
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

