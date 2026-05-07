// Class: ComponentConditionRadius


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentConditionRadius::beginCoolDown() */

void __thiscall ComponentConditionRadius::beginCoolDown(ComponentConditionRadius *this)

{
  float *pfVar1;
  float fVar2;
  float fStack_c;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_T();
  fStack_c = 0.0;
  pfVar1 = eastl::max_alt<float>(&fStack_c,(float *)(this + 0x8c));
  if (lStack_8 == ___stack_chk_guard) {
    ComponentRadiusBurst::updateTimes((ComponentRadiusBurst *)this,fVar2 + *pfVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentConditionRadius::onBegin() */

void __thiscall ComponentConditionRadius::onBegin(ComponentConditionRadius *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  ComponentRadiusBurst::updateTimes((ComponentRadiusBurst *)this,fVar1 + *(float *)(this + 0x1a4));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentConditionRadius::StaticClassInit() */

void ComponentConditionRadius::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ComponentConditionRadiusProps");
    (*pcVar3)(plVar2,asStack_10,FUN_03b9c1c4,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ComponentConditionRadius");
    (*pcVar3)(plVar2,asStack_10,FUN_03b9bc68,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentConditionRadius::StaticGetClass() */

long * ComponentConditionRadius::StaticGetClass(void)

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
  uVar2 = ComponentRadiusBurst::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentConditionRadius",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentConditionRadius::GetClass() const */

long * ComponentConditionRadius::GetClass(void)

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
  uVar2 = ComponentRadiusBurst::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentConditionRadius",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentConditionRadius::applyConditionTo(std::vector<BoardEntity*, std::allocator<BoardEntity*>
   >) */

void __thiscall
ComponentConditionRadius::applyConditionTo
          (ComponentConditionRadius *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2)

{
  bool bVar1;
  long *plVar2;
  long extraout_x0;
  undefined8 *puVar3;
  RtWeakPtrBase *pRVar4;
  ResourceInfo *pRVar5;
  undefined8 local_38;
  undefined8 local_30;
  rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
  arStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_2);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_2);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
  if (bVar1) {
    do {
      plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      if (*plVar2 != 0) {
        eastl::
        rbtree_iterator<eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>*,eastl::pair<eastl::pair<unsigned_short,unsigned_short>const,EA::Text::Kerning>&>
        ::rbtree_iterator(arStack_28,(rbtree_node *)(this + 0x1a8));
        nop();
        if (extraout_x0 != 0) {
          puVar3 = (undefined8 *)PlantGroup::Plants();
          local_18 = FUN_03b9bddc(*puVar3);
          local_10 = FUN_03b9be2c(puVar3[1]);
          while (bVar1 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
                bVar1) {
            pRVar4 = (RtWeakPtrBase *)
                     std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar4);
            pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
            PlantConditionProps::ApplyPlantConditionsTo
                      ((PlantConditionProps *)arStack_28,(Plant *)pRVar5);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    } while (bVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentConditionRadius::ComponentConditionRadius() */

void __thiscall ComponentConditionRadius::ComponentConditionRadius(ComponentConditionRadius *this)

{
  ComponentRadiusBurst::ComponentRadiusBurst((ComponentRadiusBurst *)this);
  *(undefined ***)this = &PTR_GetClass_067366d0;
  ComponentConditionRadiusProps::ComponentConditionRadiusProps
            ((ComponentConditionRadiusProps *)(this + 0x120));
  return;
}


/* ComponentConditionRadius::StaticNew() */

ComponentConditionRadius * ComponentConditionRadius::StaticNew(void)

{
  ComponentConditionRadius *this;
  
  this = ::operator_new(0x1c0);
  ComponentConditionRadius(this);
  return this;
}


/* ComponentConditionRadius::SetRadiusProps(ComponentConditionRadiusProps const&) */

void __thiscall
ComponentConditionRadius::SetRadiusProps
          (ComponentConditionRadius *this,ComponentConditionRadiusProps *param_1)

{
  ComponentRadiusBurst::SetRadiusProps
            ((ComponentRadiusBurst *)this,(ComponentRadiusBurstProps *)param_1);
  ComponentConditionRadiusProps::operator=((ComponentConditionRadiusProps *)(this + 0x120),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentConditionRadius::beginApply() */

void __thiscall ComponentConditionRadius::beginApply(ComponentConditionRadius *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  (**(code **)(*(long *)this + 0xb0))(this,avStack_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector(avStack_20,(vector *)avStack_38);
  applyConditionTo(this,avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentConditionRadius::~ComponentConditionRadius() */

void __thiscall ComponentConditionRadius::~ComponentConditionRadius(ComponentConditionRadius *this)

{
  *(undefined ***)this = &PTR_GetClass_067366d0;
  ComponentConditionRadiusProps::~ComponentConditionRadiusProps
            ((ComponentConditionRadiusProps *)(this + 0x120));
  ComponentRadiusBurst::~ComponentRadiusBurst((ComponentRadiusBurst *)this);
  return;
}


/* ComponentConditionRadius::~ComponentConditionRadius() */

void __thiscall ComponentConditionRadius::~ComponentConditionRadius(ComponentConditionRadius *this)

{
  ~ComponentConditionRadius(this);
  AK::FreeHook(this);
  return;
}

