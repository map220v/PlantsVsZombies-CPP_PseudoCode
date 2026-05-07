// Class: WaveActionKongmingLantern


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveActionKongmingLantern::StaticClassInit() */

void WaveActionKongmingLantern::StaticClassInit(void)

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
    std::string::string(asStack_10,"WaveActionKongmingLantern");
    (*pcVar2)(plVar1,asStack_10,FUN_03476374,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveActionKongmingLantern::StaticGetClass() */

long * WaveActionKongmingLantern::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WaveActionKongmingLantern",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveActionKongmingLantern::WaveActionKongmingLantern() */

void __thiscall
WaveActionKongmingLantern::WaveActionKongmingLantern(WaveActionKongmingLantern *this)

{
  WaveAction::WaveAction((WaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_0663d0c0;
  return;
}


/* WaveActionKongmingLantern::StaticNew() */

WaveActionKongmingLantern * WaveActionKongmingLantern::StaticNew(void)

{
  WaveActionKongmingLantern *this;
  
  this = ::operator_new(0x18);
  WaveActionKongmingLantern(this);
  return this;
}


/* WaveActionKongmingLantern::~WaveActionKongmingLantern() */

void __thiscall
WaveActionKongmingLantern::~WaveActionKongmingLantern(WaveActionKongmingLantern *this)

{
  *(undefined ***)this = &PTR_GetActionClass_0663d0c0;
  WaveAction::~WaveAction((WaveAction *)this);
  return;
}


/* WaveActionKongmingLantern::~WaveActionKongmingLantern() */

void __thiscall
WaveActionKongmingLantern::~WaveActionKongmingLantern(WaveActionKongmingLantern *this)

{
  ~WaveActionKongmingLantern(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveActionKongmingLantern::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void WaveActionKongmingLantern::WaveStart(WaveAction *param_1)

{
  int iVar1;
  bool bVar2;
  FairyTaleWindWaveActionProps *pFVar3;
  long lVar4;
  int *piVar5;
  RtObject *this;
  GridItemKongmingLantern *this_00;
  undefined8 uVar6;
  Board *this_01;
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar3 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(param_1);
  uVar6 = *(undefined8 *)(pFVar3 + 0x40);
  lVar4 = FUN_034755e4(uVar6,*(undefined8 *)(pFVar3 + 0x48));
  if (lVar4 != 0) {
    local_20 = FUN_034772c8(uVar6);
    local_18 = FUN_03477318(*(undefined8 *)(pFVar3 + 0x48));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar2)
    {
      piVar5 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      iVar1 = *piVar5;
      this_01 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"kongming_lantern");
      this = (RtObject *)Board::AddGridItem(this_01,asStack_10,10,iVar1 + -1,1);
      std::string::~string(asStack_10);
      nop();
      this_00 = Sexy::RtObject::Cast<GridItemKongmingLantern>(this);
      std::
      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)this_00);
      BoardEntity::PlaceOnBoard((SexyVector3 *)this_00);
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_20);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveActionKongmingLantern::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
WaveActionKongmingLantern::AddResourceRequirements(WaveActionKongmingLantern *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"GridItemKongmingLanternGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

