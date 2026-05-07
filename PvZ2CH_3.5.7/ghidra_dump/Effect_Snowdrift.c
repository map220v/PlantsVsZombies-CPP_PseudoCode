// Class: Effect_Snowdrift


/* Effect_Snowdrift::~Effect_Snowdrift() */

void __thiscall Effect_Snowdrift::~Effect_Snowdrift(Effect_Snowdrift *this)

{
  *(undefined ***)this = &PTR_GetClass_06692300;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Effect_Snowdrift::~Effect_Snowdrift() */

void __thiscall Effect_Snowdrift::~Effect_Snowdrift(Effect_Snowdrift *this)

{
  ~Effect_Snowdrift(this);
  AK::FreeHook(this);
  return;
}


/* Effect_Snowdrift::Effect_Snowdrift() */

void __thiscall Effect_Snowdrift::Effect_Snowdrift(Effect_Snowdrift *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_06692300;
  return;
}


/* Effect_Snowdrift::StaticNew() */

Effect_Snowdrift * Effect_Snowdrift::StaticNew(void)

{
  Effect_Snowdrift *this;
  
  this = ::operator_new(0x110);
  Effect_Snowdrift(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_Snowdrift::StaticClassInit() */

void Effect_Snowdrift::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_Snowdrift");
    (*pcVar2)(plVar1,asStack_10,FUN_03736038,0x110,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_Snowdrift::StaticGetClass() */

long * Effect_Snowdrift::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Effect_Snowdrift",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_Snowdrift::GetClass() const */

long * Effect_Snowdrift::GetClass(void)

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
  (*pcVar3)(plVar1,"Effect_Snowdrift",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_Snowdrift::onAnimStopped(std::string const&) */

void __thiscall Effect_Snowdrift::onAnimStopped(Effect_Snowdrift *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  Zombie *this_00;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"idle");
  if (bVar1) {
    std::string::string((string *)avStack_20,"loop");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)this,(string *)avStack_20,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  else {
    bVar1 = std::operator==(param_1,"idle02");
    if (bVar1) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      EntityFinder::GetEntitiesOnBoard(avStack_20,2);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
            bVar1) {
        puVar4 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
        if ((((this_00 != (Zombie *)0x0) &&
             (cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(), cVar2 == '\0')) &&
            (cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0')) &&
           (((cVar2 = Zombie::HasCondition(this_00,0x82), cVar2 == '\0' &&
             (iVar3 = Zombie::GetSizeType(this_00), iVar3 == 2)) &&
            (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0')))) {
          Zombie::ApplyCondition((Zombie *)0x40400000,0,this_00,1,1);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

