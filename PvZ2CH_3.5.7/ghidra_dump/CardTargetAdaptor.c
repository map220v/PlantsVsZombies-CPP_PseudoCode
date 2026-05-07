// Class: CardTargetAdaptor


/* CardTargetAdaptor::setTargetPosition(Sexy::Point const&) */

void __thiscall CardTargetAdaptor::setTargetPosition(CardTargetAdaptor *this,Point *param_1)

{
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardTargetAdaptor::StaticClassInit() */

void CardTargetAdaptor::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardTargetAdaptor");
    (*pcVar2)(plVar1,asStack_10,FUN_03604054,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardTargetAdaptor::StaticGetClass() */

long * CardTargetAdaptor::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"CardTargetAdaptor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardTargetAdaptor::GetClass() const */

long * CardTargetAdaptor::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"CardTargetAdaptor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardTargetAdaptor::getClosestValidTargetPosition(Sexy::Point const&) */

Point * CardTargetAdaptor::getClosestValidTargetPosition(Point *param_1)

{
  TPoint *in_x1;
  Point *in_x8;
  
  Sexy::Point::Point(in_x8,in_x1);
  return in_x8;
}


/* CardTargetAdaptor::CardTargetAdaptor() */

void __thiscall CardTargetAdaptor::CardTargetAdaptor(CardTargetAdaptor *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_066668d0;
  Sexy::Point::Point((Point *)(this + 8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  return;
}


/* CardTargetAdaptor::StaticNew() */

CardTargetAdaptor * CardTargetAdaptor::StaticNew(void)

{
  CardTargetAdaptor *this;
  
  this = ::operator_new(0x18);
  CardTargetAdaptor(this);
  return this;
}


/* CardTargetAdaptor::~CardTargetAdaptor() */

void __thiscall CardTargetAdaptor::~CardTargetAdaptor(CardTargetAdaptor *this)

{
  *(undefined ***)this = &PTR_GetClass_066668d0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  nop();
  return;
}


/* CardTargetAdaptor::~CardTargetAdaptor() */

void __thiscall CardTargetAdaptor::~CardTargetAdaptor(CardTargetAdaptor *this)

{
  ~CardTargetAdaptor(this);
  AK::FreeHook(this);
  return;
}


/* GridTargetProperty const* CardTargetAdaptor::GetProps<GridTargetProperty>() const */

GridTargetProperty * __thiscall
CardTargetAdaptor::GetProps<GridTargetProperty>(CardTargetAdaptor *this)

{
  RtObject *this_00;
  GridTargetProperty *pGVar1;
  
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10))
  ;
  pGVar1 = Sexy::RtObject::Cast<GridTargetProperty_const>(this_00);
  return pGVar1;
}


/* ZombieTargetProperty const* CardTargetAdaptor::GetProps<ZombieTargetProperty>() const */

ZombieTargetProperty * __thiscall
CardTargetAdaptor::GetProps<ZombieTargetProperty>(CardTargetAdaptor *this)

{
  RtObject *this_00;
  ZombieTargetProperty *pZVar1;
  
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10))
  ;
  pZVar1 = Sexy::RtObject::Cast<ZombieTargetProperty_const>(this_00);
  return pZVar1;
}


/* GridItemTargetProperty const* CardTargetAdaptor::GetProps<GridItemTargetProperty>() const */

GridItemTargetProperty * __thiscall
CardTargetAdaptor::GetProps<GridItemTargetProperty>(CardTargetAdaptor *this)

{
  RtObject *this_00;
  GridItemTargetProperty *pGVar1;
  
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10))
  ;
  pGVar1 = Sexy::RtObject::Cast<GridItemTargetProperty_const>(this_00);
  return pGVar1;
}

