// Class: WaveActionZombieTent


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveActionZombieTent::StaticClassInit() */

void WaveActionZombieTent::StaticClassInit(void)

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
    std::string::string(asStack_10,"WaveActionZombieTent");
    (*pcVar2)(plVar1,asStack_10,FUN_04ca72a8,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveActionZombieTent::StaticGetClass() */

long * WaveActionZombieTent::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WaveActionZombieTent",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveActionZombieTent::WaveActionZombieTent() */

void __thiscall WaveActionZombieTent::WaveActionZombieTent(WaveActionZombieTent *this)

{
  WaveAction::WaveAction((WaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_06997fd0;
  return;
}


/* WaveActionZombieTent::StaticNew() */

WaveActionZombieTent * WaveActionZombieTent::StaticNew(void)

{
  WaveActionZombieTent *this;
  
  this = ::operator_new(0x18);
  WaveActionZombieTent(this);
  return this;
}


/* WaveActionZombieTent::~WaveActionZombieTent() */

void __thiscall WaveActionZombieTent::~WaveActionZombieTent(WaveActionZombieTent *this)

{
  *(undefined ***)this = &PTR_GetActionClass_06997fd0;
  WaveAction::~WaveAction((WaveAction *)this);
  return;
}


/* WaveActionZombieTent::~WaveActionZombieTent() */

void __thiscall WaveActionZombieTent::~WaveActionZombieTent(WaveActionZombieTent *this)

{
  ~WaveActionZombieTent(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveActionZombieTent::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void WaveActionZombieTent::WaveStart(WaveAction *param_1)

{
  GridItemZombieTent *pGVar7;
  undefined4 uVar1;
  GridItemFestivalZombieTent *pGVar8;
  bool bVar2;
  FairyTaleWindWaveActionProps *pFVar3;
  long lVar4;
  ZombieTentData *pZVar5;
  RtObject *this;
  GridItemZombieTent *this_00;
  GridItemFestivalZombieTent *this_01;
  undefined8 uVar6;
  undefined8 local_60;
  undefined8 local_58;
  vector<TentZombieWeights,std::allocator<TentZombieWeights>> avStack_50 [24];
  int local_38;
  int local_34;
  undefined8 local_30;
  string asStack_28 [8];
  vector avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar3 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(param_1);
  uVar6 = *(undefined8 *)(pFVar3 + 0x40);
  lVar4 = FUN_04ca6e30(uVar6,*(undefined8 *)(pFVar3 + 0x48));
  if (lVar4 != 0) {
    local_60 = FUN_04ca744c(uVar6);
    local_58 = FUN_04ca749c(*(undefined8 *)(pFVar3 + 0x48));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar2)
    {
      pZVar5 = (ZombieTentData *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
      ZombieTentData::ZombieTentData((ZombieTentData *)&local_38,pZVar5);
      this = (RtObject *)
             Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),asStack_28,local_38 + -1,local_34 + -1
                                ,1);
      this_00 = Sexy::RtObject::Cast<GridItemZombieTent>(this);
      this_01 = Sexy::RtObject::Cast<GridItemFestivalZombieTent>(this);
      if (this_00 != (GridItemZombieTent *)0x0) {
        std::
        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)this_00);
        BoardEntity::PlaceOnBoard((SexyVector3 *)this_00);
        uVar1 = local_30._4_4_;
        pGVar7._0_4_ = (GridItemZombieTent *)local_30;
        std::vector<TentZombieWeights,std::allocator<TentZombieWeights>>::vector
                  (avStack_50,avStack_20);
        GridItemZombieTent::setValues(pGVar7._0_4_,uVar1,this_00,avStack_50);
        std::vector<TentZombieWeights,std::allocator<TentZombieWeights>>::~vector(avStack_50);
      }
      if (this_01 != (GridItemFestivalZombieTent *)0x0) {
        std::
        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)this_01);
        BoardEntity::PlaceOnBoard((SexyVector3 *)this_01);
        uVar1 = local_30._4_4_;
        pGVar8._0_4_ = (GridItemFestivalZombieTent *)(GridItemZombieTent *)local_30;
        std::vector<TentZombieWeights,std::allocator<TentZombieWeights>>::vector
                  (avStack_50,avStack_20);
        GridItemFestivalZombieTent::setValues(pGVar8._0_4_,uVar1,this_01,avStack_50);
        std::vector<TentZombieWeights,std::allocator<TentZombieWeights>>::~vector(avStack_50);
      }
      ZombieTentData::~ZombieTentData((ZombieTentData *)&local_38);
      std::move_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*>::operator++
                ((move_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*> *)&local_60);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveActionZombieTent::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
WaveActionZombieTent::AddResourceRequirements(WaveActionZombieTent *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"ZombieImpPorterGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"ZombieBeachSurferAudio");
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

