// Class: EffectObject_FrostWind


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_FrostWind::StaticClassInit() */

void EffectObject_FrostWind::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectObject_FrostWind");
    (*pcVar2)(plVar1,asStack_10,FUN_03cd89c4,0x120,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_FrostWind::StaticGetClass() */

long * EffectObject_FrostWind::StaticGetClass(void)

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
  uVar2 = EffectObject::StaticGetClass();
  (*pcVar3)(plVar1,"EffectObject_FrostWind",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_FrostWind::GetClass() const */

long * EffectObject_FrostWind::GetClass(void)

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
  uVar2 = EffectObject::StaticGetClass();
  (*pcVar3)(plVar1,"EffectObject_FrostWind",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_FrostWind::~EffectObject_FrostWind() */

void __thiscall EffectObject_FrostWind::~EffectObject_FrostWind(EffectObject_FrostWind *this)

{
  *(undefined ***)this = &PTR_GetClass_0675ffc0;
  EffectObject::~EffectObject((EffectObject *)this);
  return;
}


/* EffectObject_FrostWind::~EffectObject_FrostWind() */

void __thiscall EffectObject_FrostWind::~EffectObject_FrostWind(EffectObject_FrostWind *this)

{
  ~EffectObject_FrostWind(this);
  AK::FreeHook(this);
  return;
}


/* EffectObject_FrostWind::EffectObject_FrostWind() */

void __thiscall EffectObject_FrostWind::EffectObject_FrostWind(EffectObject_FrostWind *this)

{
  undefined4 uVar1;
  
  EffectObject::EffectObject((EffectObject *)this);
  *(undefined ***)this = &PTR_GetClass_0675ffc0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x118) = uVar1;
  return;
}


/* EffectObject_FrostWind::StaticNew() */

EffectObject_FrostWind * EffectObject_FrostWind::StaticNew(void)

{
  EffectObject_FrostWind *this;
  
  this = ::operator_new(0x120);
  EffectObject_FrostWind(this);
  return this;
}


/* EffectObject_FrostWind::onEffectObjectInitialize(Sexy::RtWeakPtr<EffectObjectType const>, int,
   int) */

void __thiscall
EffectObject_FrostWind::onEffectObjectInitialize
          (EffectObject_FrostWind *this,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(undefined4 *)(this + 0x11c) = param_4;
  *(float *)(this + 0x118) = fVar1 + 0.5;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_FrostWind::applyFrost() */

void __thiscall EffectObject_FrostWind::applyFrost(EffectObject_FrostWind *this)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  PlantGroup *pPVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  Plant *this_01;
  int iVar6;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  iVar6 = *(int *)(this + 0x11c);
  local_8 = ___stack_chk_guard;
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets(aIStack_30,0,iVar6,iVar2,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar3 = operator|(2,0x10);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar3,aIStack_30);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
  if (bVar1) {
    do {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50)
      ;
      pPVar5 = Sexy::RtObject::Cast<PlantGroup>((RtObject *)*puVar4);
      if (pPVar5 != (PlantGroup *)0x0) {
        puVar4 = (undefined8 *)PlantGroup::Plants();
        iVar6 = 2;
        while( true ) {
          local_40 = FUN_03cd8c68(*puVar4);
          local_38 = FUN_03cd8cb8(puVar4[1]);
          while (bVar1 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
                bVar1) {
            this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
                      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
            this_01 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
            Plant::AddFrost(this_01,100);
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
          }
          if (iVar6 == 1) break;
          iVar6 = 1;
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
    } while (bVar1);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_FrostWind::onUpdate() */

void __thiscall EffectObject_FrostWind::onUpdate(EffectObject_FrostWind *this)

{
  float fVar1;
  undefined4 uVar2;
  
  PlantGrimroseExplode::onUpdate((PlantGrimroseExplode *)this);
  fVar1 = (float)PVZ_T();
  if (fVar1 < *(float *)(this + 0x118)) {
    return;
  }
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x118) = uVar2;
  applyFrost(this);
  return;
}

