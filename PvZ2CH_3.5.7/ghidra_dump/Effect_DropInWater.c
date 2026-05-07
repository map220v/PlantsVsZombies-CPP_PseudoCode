// Class: Effect_DropInWater


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DropInWater::StaticClassInit() */

void Effect_DropInWater::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_DropInWater");
    (*pcVar2)(plVar1,asStack_10,FUN_040a8d6c,0x120,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_DropInWater::StaticGetClass() */

long * Effect_DropInWater::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Effect_DropInWater",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_DropInWater::GetClass() const */

long * Effect_DropInWater::GetClass(void)

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
  (*pcVar3)(plVar1,"Effect_DropInWater",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_DropInWater::~Effect_DropInWater() */

void __thiscall Effect_DropInWater::~Effect_DropInWater(Effect_DropInWater *this)

{
  *(undefined ***)this = &PTR_GetClass_067d1ef0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Effect_DropInWater::~Effect_DropInWater() */

void __thiscall Effect_DropInWater::~Effect_DropInWater(Effect_DropInWater *this)

{
  ~Effect_DropInWater(this);
  AK::FreeHook(this);
  return;
}


/* Effect_DropInWater::Effect_DropInWater() */

void __thiscall Effect_DropInWater::Effect_DropInWater(Effect_DropInWater *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_067d1ef0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  this[0x118] = (Effect_DropInWater)0x0;
  return;
}


/* Effect_DropInWater::StaticNew() */

Effect_DropInWater * Effect_DropInWater::StaticNew(void)

{
  Effect_DropInWater *this;
  
  this = ::operator_new(0x120);
  Effect_DropInWater(this);
  return this;
}


/* Effect_DropInWater::OnAnimCommand(std::string const&, std::string const&) */

void Effect_DropInWater::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  PlantLotusShower *this;
  float fVar4;
  
  bVar1 = std::operator==(param_2,"inwater_action");
  if (bVar1) {
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x110));
    if (cVar2 != '\0') {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x110));
      this = Sexy::RtObject::Cast<PlantLotusShower>(*(RtObject **)(lVar3 + 0xa8));
      PlantLotusShower::WaterLotusBullet(this,(bool)param_1[0x118]);
      fVar4 = (float)Plant::GetExtraDPSmodifier(*(Plant **)(this + 0x10));
      PlantLotusShower::SquareDamage(this,fVar4 * 120.0);
      return;
    }
  }
  return;
}

