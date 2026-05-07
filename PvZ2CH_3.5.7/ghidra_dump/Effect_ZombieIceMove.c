// Class: Effect_ZombieIceMove


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_ZombieIceMove::StaticClassInit() */

void Effect_ZombieIceMove::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_ZombieIceMove");
    (*pcVar2)(plVar1,asStack_10,FUN_03fc7c38,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_ZombieIceMove::StaticGetClass() */

long * Effect_ZombieIceMove::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Effect_ZombieIceMove",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_ZombieIceMove::GetClass() const */

long * Effect_ZombieIceMove::GetClass(void)

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
  (*pcVar3)(plVar1,"Effect_ZombieIceMove",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_ZombieIceMove::Effect_ZombieIceMove() */

void __thiscall Effect_ZombieIceMove::Effect_ZombieIceMove(Effect_ZombieIceMove *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_067ab9b0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x110));
  return;
}


/* Effect_ZombieIceMove::StaticNew() */

Effect_ZombieIceMove * Effect_ZombieIceMove::StaticNew(void)

{
  Effect_ZombieIceMove *this;
  
  this = ::operator_new(0x118);
  Effect_ZombieIceMove(this);
  return this;
}


/* Effect_ZombieIceMove::~Effect_ZombieIceMove() */

void __thiscall Effect_ZombieIceMove::~Effect_ZombieIceMove(Effect_ZombieIceMove *this)

{
  *(undefined ***)this = &PTR_GetClass_067ab9b0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x110));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Effect_ZombieIceMove::~Effect_ZombieIceMove() */

void __thiscall Effect_ZombieIceMove::~Effect_ZombieIceMove(Effect_ZombieIceMove *this)

{
  ~Effect_ZombieIceMove(this);
  AK::FreeHook(this);
  return;
}


/* Effect_ZombieIceMove::onDestroy() */

void __thiscall Effect_ZombieIceMove::onDestroy(Effect_ZombieIceMove *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  RtObject *this_01;
  ZombieIceYearMonster *this_02;
  
  this_00 = (RtWeakPtr *)(this + 0x110);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if ((bVar1) && (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_00), cVar2 != '\0'))
  {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar1 = Sexy::RtObject::IsA<ZombieIceYearMonster>(this_01);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      nop();
      ZombieIceYearMonster::recover(this_02);
      return;
    }
  }
  return;
}

