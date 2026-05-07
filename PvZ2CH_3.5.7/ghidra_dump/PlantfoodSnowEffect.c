// Class: PlantfoodSnowEffect


/* PlantfoodSnowEffect::~PlantfoodSnowEffect() */

void __thiscall PlantfoodSnowEffect::~PlantfoodSnowEffect(PlantfoodSnowEffect *this)

{
  *(undefined ***)this = &PTR_GetClass_066b23c0;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* PlantfoodSnowEffect::~PlantfoodSnowEffect() */

void __thiscall PlantfoodSnowEffect::~PlantfoodSnowEffect(PlantfoodSnowEffect *this)

{
  ~PlantfoodSnowEffect(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodSnowEffect::StaticClassInit() */

void PlantfoodSnowEffect::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantfoodSnowEffect");
    (*pcVar2)(plVar1,asStack_10,FUN_038a3b64,0x120,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantfoodSnowEffect::StaticGetClass() */

long * PlantfoodSnowEffect::StaticGetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"PlantfoodSnowEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantfoodSnowEffect::GetClass() const */

long * PlantfoodSnowEffect::GetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"PlantfoodSnowEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantfoodSnowEffect::PlantfoodSnowEffect() */

void __thiscall PlantfoodSnowEffect::PlantfoodSnowEffect(PlantfoodSnowEffect *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_066b23c0;
  Sexy::Insets::Insets((Insets *)(this + 0x10c));
  *(undefined4 *)(this + 0x11c) = 0;
  return;
}


/* PlantfoodSnowEffect::StaticNew() */

PlantfoodSnowEffect * PlantfoodSnowEffect::StaticNew(void)

{
  PlantfoodSnowEffect *this;
  
  this = ::operator_new(0x120);
  PlantfoodSnowEffect(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantfoodSnowEffect::onUpdate() */

void __thiscall PlantfoodSnowEffect::onUpdate(PlantfoodSnowEffect *this)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Zombie *pZVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Effect_PopAnim::onUpdate((Effect_PopAnim *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,this + 0x10c);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    if ((((RtObject *)*puVar3 != (RtObject *)0x0) &&
        (pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3), pZVar4 != (Zombie *)0x0)) &&
       (cVar2 = RealObject::IsOnOpposingTeam(pZVar4,1), cVar2 != '\0')) {
                    /* WARNING: Load size is inaccurate */
      Zombie::ApplyCondition(*(Zombie **)(this + 0x11c),0,pZVar4,0,1);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

