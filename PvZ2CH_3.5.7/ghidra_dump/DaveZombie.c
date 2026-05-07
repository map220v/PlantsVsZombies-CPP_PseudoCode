// Class: DaveZombie


/* DaveZombie::~DaveZombie() */

void __thiscall DaveZombie::~DaveZombie(DaveZombie *this)

{
  *(undefined ***)this = &PTR_GetClass_067ae500;
  *(undefined ***)(this + 0x10) = &PTR__DaveZombie_067aef18;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to DaveZombie::~DaveZombie() */

void __thiscall DaveZombie::~DaveZombie(DaveZombie *this)

{
  ~DaveZombie(this + -0x10);
  return;
}


/* DaveZombie::~DaveZombie() */

void __thiscall DaveZombie::~DaveZombie(DaveZombie *this)

{
  ~DaveZombie(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DaveZombie::~DaveZombie() */

void __thiscall DaveZombie::~DaveZombie(DaveZombie *this)

{
  ~DaveZombie(this + -0x10);
  return;
}


/* DaveZombie::DaveZombie() */

void __thiscall DaveZombie::DaveZombie(DaveZombie *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_067ae500;
  *(undefined ***)(this + 0x10) = &PTR__DaveZombie_067aef18;
  return;
}


/* DaveZombie::StaticNew() */

DaveZombie * DaveZombie::StaticNew(void)

{
  DaveZombie *this;
  
  this = ::operator_new(0x800);
  DaveZombie(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveZombie::StaticClassInit() */

void DaveZombie::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveZombie");
    (*pcVar2)(plVar1,asStack_10,FUN_03fd39e8,0x800,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveZombie::StaticGetClass() */

long * DaveZombie::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"DaveZombie",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveZombie::GetClass() const */

long * DaveZombie::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"DaveZombie",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveZombie::CalcZombieAttackRect() */

void DaveZombie::CalcZombieAttackRect(void)

{
  int iVar1;
  long in_x0;
  long lVar2;
  Insets *in_x8;
  float fVar3;
  float fVar4;
  
  lVar2 = FUN_03fd26e0(*(undefined8 *)(in_x0 + 0x550));
  Sexy::Insets::Insets(in_x8,(Insets *)(lVar2 + 0x80));
  fVar4 = *(float *)(in_x0 + 0x1c);
  fVar3 = (float)FUN_03fd2800(*(undefined4 *)(in_x0 + 0x18),fVar4,*(undefined4 *)(in_x0 + 0x20));
  *(int *)in_x8 = (int)(((float)*(int *)in_x8 + fVar3) - (float)*(int *)(in_x8 + 8));
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  *(int *)(in_x8 + 0xc) = *(int *)(in_x8 + 0xc) / 2;
  *(int *)(in_x8 + 4) = (int)(((float)*(int *)(in_x8 + 4) + fVar4) - (float)iVar1 * 0.6);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveZombie::onEnterState_Walk(ZombieState) */

void DaveZombie::onEnterState_Walk(long param_1)

{
  long *plVar1;
  code *pcVar2;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  plVar1 = *(long **)(param_1 + 0xc0);
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*plVar1 + 0x118);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar2)(plVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  SetFlag<DebugLogFlags>(param_1 + 0xcc,1,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveZombie::findgridTarget() */

void __thiscall DaveZombie::findgridTarget(DaveZombie *this)

{
  bool bVar1;
  char cVar2;
  RealObject *pRVar3;
  RealObject *extraout_x0;
  undefined8 uVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 auStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x3a0))(auStack_30);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  pRVar3 = (RealObject *)Zombie::GetForcedTarget((Zombie *)this);
  EntityFinder::GetEntitiesTouchingRectangleWithoutGrid(avStack_20,4,auStack_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar1) {
      uVar4 = 1;
LAB_03fd60c4:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    nop();
    cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,extraout_x0);
    if (((cVar2 != '\0') &&
        (cVar2 = (**(code **)(*(long *)extraout_x0 + 0x218))(extraout_x0,this), cVar2 != '\0')) &&
       ((pRVar3 == extraout_x0 || (pRVar3 == (RealObject *)0x0)))) {
      uVar4 = 0;
      goto LAB_03fd60c4;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  } while( true );
}


/* DaveZombie::checkWin() */

char __thiscall DaveZombie::checkWin(DaveZombie *this)

{
  char cVar1;
  
  cVar1 = findgridTarget(this);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x260))(this);
  }
  return cVar1;
}


/* DaveZombie::onUpdate() */

void __thiscall DaveZombie::onUpdate(DaveZombie *this)

{
  float *pfVar1;
  
  Zombie::onUpdate((Zombie *)this);
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  if (*pfVar1 <= 190.0) {
    (**(code **)(*(long *)this + 600))(this);
  }
  return;
}

