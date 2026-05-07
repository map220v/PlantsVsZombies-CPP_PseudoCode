// Class: WaveActionSnowBall


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveActionSnowBall::StaticClassInit() */

void WaveActionSnowBall::StaticClassInit(void)

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
    std::string::string(asStack_10,"WaveActionSnowBall");
    (*pcVar2)(plVar1,asStack_10,FUN_0346e5bc,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveActionSnowBall::StaticGetClass() */

long * WaveActionSnowBall::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WaveActionSnowBall",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveActionSnowBall::WaveActionSnowBall() */

void __thiscall WaveActionSnowBall::WaveActionSnowBall(WaveActionSnowBall *this)

{
  WaveAction::WaveAction((WaveAction *)this);
  *(undefined ***)this = &PTR_GetActionClass_0663a640;
  return;
}


/* WaveActionSnowBall::StaticNew() */

WaveActionSnowBall * WaveActionSnowBall::StaticNew(void)

{
  WaveActionSnowBall *this;
  
  this = ::operator_new(0x18);
  WaveActionSnowBall(this);
  return this;
}


/* WaveActionSnowBall::~WaveActionSnowBall() */

void __thiscall WaveActionSnowBall::~WaveActionSnowBall(WaveActionSnowBall *this)

{
  *(undefined ***)this = &PTR_GetActionClass_0663a640;
  WaveAction::~WaveAction((WaveAction *)this);
  return;
}


/* WaveActionSnowBall::~WaveActionSnowBall() */

void __thiscall WaveActionSnowBall::~WaveActionSnowBall(WaveActionSnowBall *this)

{
  ~WaveActionSnowBall(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveActionSnowBall::WaveStart(int, WaveType::WaveType, bool, Sexy::MTRand&) */

void WaveActionSnowBall::WaveStart(WaveAction *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  FairyTaleWindWaveActionProps *pFVar5;
  long lVar6;
  int *piVar7;
  undefined8 *puVar8;
  Plant *this;
  GridItem *pGVar9;
  RtObject *pRVar10;
  GridItemSnowBall *this_00;
  undefined8 uVar11;
  Board *this_01;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pFVar5 = WaveAction::GetProps<FairyTaleWindWaveActionProps>(param_1);
  uVar11 = *(undefined8 *)(pFVar5 + 0x40);
  lVar6 = FUN_0346e23c(uVar11,*(undefined8 *)(pFVar5 + 0x48));
  if (lVar6 != 0) {
    local_40 = FUN_0346e760(uVar11);
    local_38 = FUN_0346e7b0(*(undefined8 *)(pFVar5 + 0x48));
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar3)
    {
      piVar7 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      iVar1 = *piVar7;
      iVar2 = piVar7[1];
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      uVar4 = operator|(1,4);
      EntityFinder::GetEntitiesAtGridSquare(avStack_20,uVar4,iVar1 + -1,iVar2 + -1);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while( true ) {
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28)
        ;
        if (!bVar3) break;
        puVar8 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        pRVar10 = (RtObject *)*puVar8;
        this = Sexy::RtObject::Cast<Plant>(pRVar10);
        if (this != (Plant *)0x0) {
          Plant::beThrown(this);
        }
        pGVar9 = Sexy::RtObject::Cast<GridItem>(pRVar10);
        if (pGVar9 != (GridItem *)0x0) {
          (**(code **)(*(long *)pGVar9 + 0x48))();
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      }
      this_01 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)&local_28,"snowball");
      pRVar10 = (RtObject *)Board::AddGridItem(this_01,(string *)&local_28,iVar1 + -1,iVar2 + -1,1);
      std::string::~string((string *)&local_28);
      nop();
      this_00 = Sexy::RtObject::Cast<GridItemSnowBall>(pRVar10);
      std::
      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)this_00);
      BoardEntity::PlaceOnBoard((SexyVector3 *)this_00);
      GridItemSnowBall::setMyType(this_00,0);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveActionSnowBall::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall WaveActionSnowBall::AddResourceRequirements(WaveActionSnowBall *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"GridItemSnowBallGroup");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"FrostbiteIceBlockPlantGroup");
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

