// Class: NewYearFireCrackerWaveAction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewYearFireCrackerWaveAction::StaticClassInit() */

void NewYearFireCrackerWaveAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewYearFireCrackerWaveAction");
    (*pcVar2)(plVar1,asStack_10,FUN_04c82190,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewYearFireCrackerWaveAction::StaticGetClass() */

long * NewYearFireCrackerWaveAction::StaticGetClass(void)

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
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"NewYearFireCrackerWaveAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewYearFireCrackerWaveAction::NewYearFireCrackerWaveAction() */

void __thiscall
NewYearFireCrackerWaveAction::NewYearFireCrackerWaveAction(NewYearFireCrackerWaveAction *this)

{
  WaveAction::WaveAction((WaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_06993a60;
  return;
}


/* NewYearFireCrackerWaveAction::StaticNew() */

NewYearFireCrackerWaveAction * NewYearFireCrackerWaveAction::StaticNew(void)

{
  NewYearFireCrackerWaveAction *this;
  
  this = ::operator_new(0x18);
  NewYearFireCrackerWaveAction(this);
  return this;
}


/* NewYearFireCrackerWaveAction::~NewYearFireCrackerWaveAction() */

void __thiscall
NewYearFireCrackerWaveAction::~NewYearFireCrackerWaveAction(NewYearFireCrackerWaveAction *this)

{
  *(undefined ***)this = &PTR_GetActionClass_06993a60;
  WaveAction::~WaveAction((WaveAction *)this);
  return;
}


/* NewYearFireCrackerWaveAction::~NewYearFireCrackerWaveAction() */

void __thiscall
NewYearFireCrackerWaveAction::~NewYearFireCrackerWaveAction(NewYearFireCrackerWaveAction *this)

{
  ~NewYearFireCrackerWaveAction(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewYearFireCrackerWaveAction::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void NewYearFireCrackerWaveAction::WaveStart(WaveAction *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  FairyTaleWindWaveActionProps *pFVar4;
  long lVar5;
  int *piVar6;
  RtObject *this;
  GridItemFireCracker *this_00;
  undefined8 uVar7;
  Board *this_01;
  float fVar8;
  float fVar9;
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar4 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(param_1);
  uVar7 = *(undefined8 *)(pFVar4 + 0x40);
  lVar5 = FUN_04c81e00(uVar7,*(undefined8 *)(pFVar4 + 0x48));
  if (lVar5 != 0) {
    local_20 = FUN_04c82334(uVar7);
    local_18 = FUN_04c82384(*(undefined8 *)(pFVar4 + 0x48));
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar3)
    {
      piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      fVar8 = (float)piVar6[2];
      fVar9 = (float)piVar6[3];
      iVar1 = piVar6[1];
      iVar2 = *piVar6;
      this_01 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"firecracker");
      this = (RtObject *)Board::AddGridItem(this_01,asStack_10,iVar2 + -1,iVar1 + -1,1);
      std::string::~string(asStack_10);
      nop();
      this_00 = Sexy::RtObject::Cast<GridItemFireCracker>(this);
      std::
      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)this_00);
      BoardEntity::PlaceOnBoard((SexyVector3 *)this_00);
      GridItemFireCracker::setValues(this_00,fVar8,fVar9);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_20);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

