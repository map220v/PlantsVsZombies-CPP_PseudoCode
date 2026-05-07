// Class: PlantPot


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPot::StaticClassInit() */

void PlantPot::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPot");
    (*pcVar2)(plVar1,asStack_10,FUN_04993530,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPot::StaticGetClass() */

long * PlantPot::StaticGetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"PlantPot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPot::GetClass() const */

long * PlantPot::GetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"PlantPot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPot::Init(Sexy::RtWeakPtr<Sexy::Image>, float) */

void __thiscall PlantPot::Init(undefined4 param_1,PlantPot *this,RtWeakPtr *param_3)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x198),param_3);
  *(undefined4 *)(this + 0x1a0) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPot::CalcRenderOrder() const */

void PlantPot::CalcRenderOrder(void)

{
  long lVar1;
  undefined4 local_c;
  
  lVar1 = ___stack_chk_guard;
  GridItem::GetGridLocation();
  Board::MakeRenderOrder(0x61e68,local_c,0);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PlantPot::CalcRenderOrder() const */

void __thiscall PlantPot::CalcRenderOrder(PlantPot *this)

{
  CalcRenderOrder();
  return;
}


/* PlantPot::PlantPot() */

void __thiscall PlantPot::PlantPot(PlantPot *this)

{
  GridItem::GridItem((GridItem *)this);
  *(undefined ***)this = &PTR_GetClass_06919ab0;
  *(undefined ***)(this + 0x10) = &PTR__PlantPot_06919d48;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x198));
  *(undefined4 *)(this + 0x1a0) = 0;
  return;
}


/* PlantPot::StaticNew() */

PlantPot * PlantPot::StaticNew(void)

{
  PlantPot *this;
  
  this = ::operator_new(0x1a8);
  PlantPot(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPot::~PlantPot() */

void __thiscall PlantPot::~PlantPot(PlantPot *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x10) = &PTR__PlantPot_06919d48;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06919ab0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x198),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  GridItem::~GridItem((GridItem *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PlantPot::~PlantPot() */

void __thiscall PlantPot::~PlantPot(PlantPot *this)

{
  ~PlantPot(this + -0x10);
  return;
}


/* PlantPot::~PlantPot() */

void __thiscall PlantPot::~PlantPot(PlantPot *this)

{
  ~PlantPot(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantPot::~PlantPot() */

void __thiscall PlantPot::~PlantPot(PlantPot *this)

{
  ~PlantPot(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPot::onDraw(Sexy::Graphics*) */

void __thiscall PlantPot::onDraw(PlantPot *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  ResourceInfo *pRVar3;
  float fVar4;
  GraphicsAutoState aGStack_20 [8];
  float local_18;
  float local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04993248(*(undefined4 *)(this + 0x28));
  if (cVar1 == '\0') {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x198));
    if (cVar1 != '\0') {
      Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&local_18);
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      GridItem::GetGridLocation();
      local_18 = (float)(iVar2 * local_10 + 200);
      iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
      GridItem::GetGridLocation();
      local_14 = (float)(iVar2 * local_c + 0xa0);
      if (((DAT_06b737b0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b737b0), iVar2 != 0)) {
        Sexy::FastCurve::SetOutRange((FastCurve *)&DAT_06b73810,-12.0,28.0);
        __cxa_guard_release(&DAT_06b737b0);
      }
      Sexy::TPoint<float>::operator+=((TPoint<float> *)&local_18,(TPoint *)&DAT_06b73810);
      fVar4 = (float)FUN_04993068();
      Sexy::SexyVector2::operator*=((SexyVector2 *)&local_18,fVar4);
      *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) / *(float *)(param_1 + 0x18);
      *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) / *(float *)(param_1 + 0x1c);
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x198));
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar3,(int)local_18,(int)local_14);
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

