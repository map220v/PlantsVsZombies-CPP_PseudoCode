// Class: RambutanIcyEffect


/* RambutanIcyEffect::~RambutanIcyEffect() */

void __thiscall RambutanIcyEffect::~RambutanIcyEffect(RambutanIcyEffect *this)

{
  *(undefined ***)this = &PTR_GetClass_066b2ad0;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* RambutanIcyEffect::~RambutanIcyEffect() */

void __thiscall RambutanIcyEffect::~RambutanIcyEffect(RambutanIcyEffect *this)

{
  ~RambutanIcyEffect(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RambutanIcyEffect::StaticClassInit() */

void RambutanIcyEffect::StaticClassInit(void)

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
    std::string::string(asStack_10,"RambutanIcyEffect");
    (*pcVar2)(plVar1,asStack_10,FUN_038a43b8,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RambutanIcyEffect::StaticGetClass() */

long * RambutanIcyEffect::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RambutanIcyEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RambutanIcyEffect::GetClass() const */

long * RambutanIcyEffect::GetClass(void)

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
  (*pcVar3)(plVar1,"RambutanIcyEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RambutanIcyEffect::RambutanIcyEffect() */

void __thiscall RambutanIcyEffect::RambutanIcyEffect(RambutanIcyEffect *this)

{
  undefined4 uVar1;
  
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_066b2ad0;
  Sexy::Point::Point((Point *)(this + 0x10c));
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x114) = uVar1;
  return;
}


/* RambutanIcyEffect::StaticNew() */

RambutanIcyEffect * RambutanIcyEffect::StaticNew(void)

{
  RambutanIcyEffect *this;
  
  this = ::operator_new(0x118);
  RambutanIcyEffect(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RambutanIcyEffect::onUpdate() */

void __thiscall RambutanIcyEffect::onUpdate(RambutanIcyEffect *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  Zombie *pZVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Effect_PopAnim::onUpdate((Effect_PopAnim *)this);
  fVar8 = *(float *)(this + 0x114);
  fVar6 = (float)PVZ_T();
  if (fVar8 <= fVar6) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    Sexy::Insets::Insets(aIStack_30,*(int *)(this + 0x10c),*(int *)(this + 0x10c),1,1);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
               aIStack_30);
    lVar3 = FUN_038a2240(local_20,local_18);
    if (lVar3 == 0) {
      uVar7 = PVZ_T();
      *(undefined4 *)(this + 0x114) = uVar7;
    }
    else {
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
            bVar2) {
        puVar4 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
        if ((((RtObject *)*puVar4 != (RtObject *)0x0) &&
            (pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4), pZVar5 != (Zombie *)0x0))
           && (cVar1 = RealObject::IsOnOpposingTeam(pZVar5,1), cVar1 != '\0')) {
          Zombie::ApplyCondition((Zombie *)0x40a00000,0,pZVar5,0,1);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
      }
      *(float *)(this + 0x114) = *(float *)(this + 0x114) + 0.5;
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

