// Class: GridItemSchoolBusSpecial


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBusSpecial::StaticClassInit() */

void GridItemSchoolBusSpecial::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemSchoolBusSpecial");
    (*pcVar2)(plVar1,asStack_10,FUN_033e5960,0x280,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSchoolBusSpecial::StaticGetClass() */

long * GridItemSchoolBusSpecial::StaticGetClass(void)

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
  uVar2 = GridItemSchoolBus::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSchoolBusSpecial",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSchoolBusSpecial::GetClass() const */

long * GridItemSchoolBusSpecial::GetClass(void)

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
  uVar2 = GridItemSchoolBus::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSchoolBusSpecial",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBusSpecial::OnAirbubbleLaunched() */

void __thiscall GridItemSchoolBusSpecial::OnAirbubbleLaunched(GridItemSchoolBusSpecial *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  RtObject *this_01;
  ZombieAirbubble *pZVar2;
  float fVar3;
  undefined4 uVar4;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x238);
  this[0x220] = (GridItemSchoolBusSpecial)0x0;
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_T();
  *(float *)(this + 0x228) = fVar3 + 10.0;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pZVar2 = Sexy::RtObject::Cast<ZombieAirbubble>(this_01);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    uVar4 = FUN_033e1300(*(undefined4 *)(pZVar2 + 0x280));
    *(undefined4 *)(this + 0x224) = uVar4;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBusSpecial::isInExistPosition(Sexy::Point const&) */

void __thiscall
GridItemSchoolBusSpecial::isInExistPosition(GridItemSchoolBusSpecial *this,Point *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x248);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  Sexy::Point::Point((Point *)&local_10,(TPoint *)param_1);
  local_18 = FUN_033e3694(uVar2,uVar3,(Point *)&local_10);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* GridItemSchoolBusSpecial::GridItemSchoolBusSpecial() */

void __thiscall GridItemSchoolBusSpecial::GridItemSchoolBusSpecial(GridItemSchoolBusSpecial *this)

{
  GridItemSchoolBus::GridItemSchoolBus((GridItemSchoolBus *)this);
  *(undefined ***)this = &PTR_GetClass_0661bb30;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSchoolBusSpecial_0661be60;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x230));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x238));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x248));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x260));
  this[0x220] = (GridItemSchoolBusSpecial)0x0;
  *(undefined4 *)(this + 0x240) = 0xffffffff;
  this[0x278] = (GridItemSchoolBusSpecial)0x1;
  *(undefined4 *)(this + 0x224) = 0;
  *(undefined4 *)(this + 0x228) = 0;
  return;
}


/* GridItemSchoolBusSpecial::StaticNew() */

GridItemSchoolBusSpecial * GridItemSchoolBusSpecial::StaticNew(void)

{
  GridItemSchoolBusSpecial *this;
  
  this = ::operator_new(0x280);
  GridItemSchoolBusSpecial(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBusSpecial::getLollipopProjectileType() */

void __thiscall GridItemSchoolBusSpecial::getLollipopProjectileType(GridItemSchoolBusSpecial *this)

{
  undefined8 uVar1;
  string asStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_28,"ZombieLollipops");
  nop();
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::ToWString(asStack_28);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(uVar1,0xc,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBusSpecial::throwLollipop(Sexy::Point const&) */

void __thiscall
GridItemSchoolBusSpecial::throwLollipop(GridItemSchoolBusSpecial *this,Point *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  GridItemSchoolBusProps *pGVar4;
  long lVar5;
  PopAnimRig *this_00;
  Projectile *this_01;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_30;
  int local_2c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [16];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar4 = GridItem::GetProps<GridItemSchoolBusProps>();
  GridItemAnimation::GetAnimRig();
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  lVar5 = FUN_033e12cc(*(undefined8 *)(lVar5 + 0x20));
  uVar1 = *(undefined4 *)(*(long *)(lVar5 + 0x50) + 0xc);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  GridItemAnimation::GetAnimRig();
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  lVar5 = FUN_033e12cc(*(undefined8 *)(lVar5 + 0x20));
  lVar7 = *(long *)(lVar5 + 0x50);
  GridItemAnimation::GetAnimRig();
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  lVar5 = FUN_033e12cc(*(undefined8 *)(lVar5 + 0x20));
  *(float *)(lVar7 + 0xc) = (float)((int)*(float *)(*(long *)(lVar5 + 0x50) + 0xc) + -1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  Sexy::Insets::Insets((Insets *)&local_18);
  GridItemAnimation::GetAnimRig();
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  std::string::string((string *)aRStack_28,"Lollipop");
  PopAnimRig::CalcSymbolRect(this_00,(string *)aRStack_28,(TRect *)&local_18);
  std::string::~string((string *)aRStack_28);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  GridItemAnimation::GetAnimRig();
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  lVar5 = FUN_033e12cc(*(undefined8 *)(lVar5 + 0x20));
  *(undefined4 *)(*(long *)(lVar5 + 0x50) + 0xc) = uVar1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  fVar10 = *(float *)(this + 0x1c);
  fVar8 = (float)FUN_033e170c(*(undefined4 *)(this + 0x18),fVar10,*(undefined4 *)(this + 0x20));
  iVar2 = FUN_033e1980(local_18 + local_10 / 2);
  iVar3 = FUN_033e1980(local_14 + local_c / 2);
  fVar9 = *(float *)(pGVar4 + 0xa8);
  fVar11 = *(float *)(pGVar4 + 0xac);
  uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
  getLollipopProjectileType(this);
  this_01 = (Projectile *)
            Board::AddProjectile
                      ((Board *)(float)(int)((fVar8 - fVar9) + (float)iVar2),(float)(int)fVar10,
                       (float)-(int)((float)iVar3 - fVar11),uVar6,aRStack_28,this,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  ToxicWaterPerfumeBottleProjectile::SetTargetPoint
            ((ToxicWaterPerfumeBottleProjectile *)this_01,param_1);
  BoardTransforms::GridToBoardSpace(param_1);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_28,(float)local_30,(float)local_2c,0.0);
  Projectile::LaunchAt(this_01,(SexyVector3 *)aRStack_28,250.0,1.5);
  if (this[0x278] == (GridItemSchoolBusSpecial)0x0) {
    this[0x278] = (GridItemSchoolBusSpecial)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBusSpecial::onShoot() */

void __thiscall GridItemSchoolBusSpecial::onShoot(GridItemSchoolBusSpecial *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  Point *pPVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x248);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pPVar2 = (Point *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    throwLollipop(this,pPVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSchoolBusSpecial::onSpawnAnimDone() */

void __thiscall GridItemSchoolBusSpecial::onSpawnAnimDone(GridItemSchoolBusSpecial *this)

{
  undefined4 uVar1;
  
  uVar1 = 3;
  if (this[0x209] == (GridItemSchoolBusSpecial)0x0) {
    uVar1 = 1;
  }
  GridItemSchoolBus::SetBusState((GridItemSchoolBus *)this,uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBusSpecial::findTargetPosition(Sexy::Point&) */

void GridItemSchoolBusSpecial::findTargetPosition(Point *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  TPoint *pTVar12;
  undefined8 *in_x1;
  LineBreakCategory *in_x4;
  uint uVar13;
  LineBreakCategory *pLVar14;
  ulong uVar15;
  Board *this;
  uint local_28;
  uint uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar6 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  iVar4 = BoardTransforms::BoardSpaceToGridX(*pfVar6);
  local_28 = iVar4 + -2;
  local_20 = 2;
  piVar7 = eastl::max_alt<int>((int *)&local_28,(int *)&local_20);
  local_28 = *piVar7 + 2;
  local_20 = 9;
  uVar5 = *piVar7 - 1;
  piVar7 = eastl::min_alt<int>((int *)&local_28,(int *)&local_20);
  iVar4 = *piVar7;
  uVar2 = *(uint *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  this = *(Board **)(gLawnApp + 0x9f0);
  do {
    if (iVar4 <= (int)uVar5) {
      pLVar14 = (LineBreakCategory *)0x0;
      lVar8 = FUN_033e134c(CONCAT44(uStack_1c,local_20),local_18);
      if (lVar8 != 0) {
        uVar9 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_20);
        uVar10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
        std::
        random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
                  (uVar9,uVar10);
        if (param_1[0x278] != (Point)0x0) {
          uVar5 = SharkMinion::getRow((SharkMinion *)param_1);
          pLVar14 = (LineBreakCategory *)0x0;
          cVar3 = Board::CanAddGraveStoneAt(this,7,uVar5,false);
          if ((cVar3 == '\0') ||
             (cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                                ((wchar16 *)param_1,(wchar16 *)0x7,(LineBreakCategory *)(ulong)uVar5
                                 ,pLVar14,in_x4), cVar3 != '\0')) {
            pLVar14 = (LineBreakCategory *)0x0;
          }
          else {
            pLVar14 = (LineBreakCategory *)0x1;
            Sexy::Point::Point((Point *)&local_28,7,uVar5);
            *in_x1 = CONCAT44(uStack_24,local_28);
          }
        }
        uVar15 = 0;
        while( true ) {
          uVar9 = CONCAT44(uStack_1c,local_20);
          uVar11 = FUN_033e134c(uVar9,local_18);
          if ((uVar11 <= uVar15) || ((int)pLVar14 != 0)) break;
          pTVar12 = (TPoint *)FUN_033e1358(uVar9,uVar15);
          Sexy::Point::Point((Point *)&local_28,pTVar12);
          cVar3 = Board::CanAddGraveStoneAt(this,local_28,uStack_24,SUB81(pLVar14,0));
          if ((cVar3 == '\0') ||
             (cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                                ((wchar16 *)param_1,(wchar16 *)(ulong)local_28,
                                 (LineBreakCategory *)(ulong)uStack_24,pLVar14,in_x4), cVar3 != '\0'
             )) {
            pLVar14 = (LineBreakCategory *)0x0;
            uVar15 = uVar15 + 1;
          }
          else {
            pLVar14 = (LineBreakCategory *)0x1;
            *in_x1 = CONCAT44(uStack_24,local_28);
            uVar15 = uVar15 + 1;
          }
        }
      }
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(pLVar14);
    }
    uVar13 = 0;
    if (0 < (int)uVar2) {
      do {
        while( true ) {
          pLVar14 = (LineBreakCategory *)0x0;
          cVar3 = Board::CanAddGraveStoneAt(this,uVar5,uVar13,false);
          if (((cVar3 != '\0') &&
              (cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                                 ((wchar16 *)param_1,(wchar16 *)(ulong)uVar5,
                                  (LineBreakCategory *)(ulong)uVar13,pLVar14,in_x4), cVar3 == '\0'))
             && (cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                                   ((wchar16 *)param_1,(wchar16 *)(ulong)uVar5,
                                    (LineBreakCategory *)(ulong)uVar13,pLVar14,in_x4), cVar3 == '\0'
                )) break;
LAB_033e6b28:
          uVar13 = uVar13 + 1;
          if (uVar13 == uVar2) goto LAB_033e6bcc;
        }
        Sexy::Point::Point((Point *)&local_28,uVar5,uVar13);
        cVar3 = isInExistPosition((GridItemSchoolBusSpecial *)param_1,(Point *)&local_28);
        if (cVar3 != '\0') goto LAB_033e6b28;
        Sexy::Point::Point((Point *)&local_28);
        uVar1 = uVar13 + 1;
        local_28 = uVar5;
        uStack_24 = uVar13;
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                  ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(Point *)&local_28);
        uVar13 = uVar1;
      } while (uVar1 != uVar2);
    }
LAB_033e6bcc:
    uVar5 = uVar5 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBusSpecial::startSpawnAnim() */

void __thiscall GridItemSchoolBusSpecial::startSpawnAnim(GridItemSchoolBusSpecial *this)

{
  GridItemSchoolBusSpecial GVar1;
  GridItemSchoolBusSpecialAnimRig *extraout_x0;
  int iVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_130 [8];
  RtMixedPtr aRStack_128 [8];
  RtId aRStack_120 [8];
  string asStack_118 [8];
  RtMixedPtr aRStack_110 [8];
  RtId aRStack_108 [8];
  string asStack_100 [8];
  RtMixedPtr aRStack_f8 [8];
  RtId aRStack_f0 [8];
  Point aPStack_e8 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_e0 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_50 [72];
  long local_8;
  
  iVar2 = 2;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x248));
  while( true ) {
    Sexy::Point::Point(aPStack_e8);
    findTargetPosition((Point *)this);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x248),aPStack_e8);
    if (iVar2 == 1) break;
    iVar2 = 1;
  }
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_130);
  nop();
  GVar1 = this[0x209];
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_128);
  std::string::string(asStack_118,"onSpawnAnimDone");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_e0,aRStack_120,asStack_118);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_110);
  std::string::string(asStack_100,"onShoot");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_98,aRStack_108,asStack_100);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_f8);
  std::string::string((string *)aPStack_e8,"onLaunch");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_50,aRStack_f0,aPStack_e8);
  GridItemSchoolBusSpecialAnimRig::PlayPowerAnim(extraout_x0,GVar1,aRStack_e0,aRStack_98,aRStack_50)
  ;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string((string *)aPStack_e8);
  nop();
  Sexy::RtId::~RtId(aRStack_f0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_f8);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_98);
  std::string::~string(asStack_100);
  nop();
  Sexy::RtId::~RtId(aRStack_108);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_110);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_e0);
  std::string::~string(asStack_118);
  nop();
  Sexy::RtId::~RtId(aRStack_120);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_128);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_130);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBusSpecial::onAttack() */

void __thiscall GridItemSchoolBusSpecial::onAttack(GridItemSchoolBusSpecial *this)

{
  GridItemSchoolBusSpecial GVar1;
  GridItemSchoolBusSpecialAnimRig *extraout_x0;
  int iVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_130 [8];
  RtMixedPtr aRStack_128 [8];
  RtId aRStack_120 [8];
  string asStack_118 [8];
  RtMixedPtr aRStack_110 [8];
  RtId aRStack_108 [8];
  string asStack_100 [8];
  RtMixedPtr aRStack_f8 [8];
  RtId aRStack_f0 [8];
  Point aPStack_e8 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_e0 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate0> aRStack_50 [72];
  long lStack_8;
  
  iVar2 = 2;
  lStack_8 = ___stack_chk_guard;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x248));
  while( true ) {
    Sexy::Point::Point(aPStack_e8);
    findTargetPosition((Point *)this);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x248),aPStack_e8);
    if (iVar2 == 1) break;
    iVar2 = 1;
  }
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_130);
  nop();
  GVar1 = this[0x209];
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_128);
  std::string::string(asStack_118,"onSpawnAnimDone");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)aRStack_e0,aRStack_120,asStack_118);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_110);
  std::string::string(asStack_100,"onShoot");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_98,aRStack_108,asStack_100);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_f8);
  std::string::string((string *)aPStack_e8,"onLaunch");
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate(aRStack_50,aRStack_f0,aPStack_e8);
  GridItemSchoolBusSpecialAnimRig::PlayPowerAnim(extraout_x0,GVar1,aRStack_e0,aRStack_98,aRStack_50)
  ;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string((string *)aPStack_e8);
  nop();
  Sexy::RtId::~RtId(aRStack_f0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_f8);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_98);
  std::string::~string(asStack_100);
  nop();
  Sexy::RtId::~RtId(aRStack_108);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_110);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_e0);
  std::string::~string(asStack_118);
  nop();
  Sexy::RtId::~RtId(aRStack_120);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_128);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_130);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSchoolBusSpecial::~GridItemSchoolBusSpecial() */

void __thiscall GridItemSchoolBusSpecial::~GridItemSchoolBusSpecial(GridItemSchoolBusSpecial *this)

{
  *(undefined ***)this = &PTR_GetClass_0661bb30;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSchoolBusSpecial_0661be60;
  std::vector<SpellBolt,std::allocator<SpellBolt>>::~vector
            ((vector<SpellBolt,std::allocator<SpellBolt>> *)(this + 0x260));
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x248));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x238));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x230));
  GridItemSchoolBus::~GridItemSchoolBus((GridItemSchoolBus *)this);
  return;
}


/* non-virtual thunk to GridItemSchoolBusSpecial::~GridItemSchoolBusSpecial() */

void __thiscall GridItemSchoolBusSpecial::~GridItemSchoolBusSpecial(GridItemSchoolBusSpecial *this)

{
  ~GridItemSchoolBusSpecial(this + -0x10);
  return;
}


/* GridItemSchoolBusSpecial::~GridItemSchoolBusSpecial() */

void __thiscall GridItemSchoolBusSpecial::~GridItemSchoolBusSpecial(GridItemSchoolBusSpecial *this)

{
  ~GridItemSchoolBusSpecial(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemSchoolBusSpecial::~GridItemSchoolBusSpecial() */

void __thiscall GridItemSchoolBusSpecial::~GridItemSchoolBusSpecial(GridItemSchoolBusSpecial *this)

{
  ~GridItemSchoolBusSpecial(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBusSpecial::onGridItemInitialize() */

void __thiscall GridItemSchoolBusSpecial::onGridItemInitialize(GridItemSchoolBusSpecial *this)

{
  undefined4 uVar1;
  string *psVar2;
  long lVar3;
  RtObject *this_00;
  ZombiePirateCaptainParrotProps *pZVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemSchoolBus::onGridItemInitialize((GridItemSchoolBus *)this);
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_10,"children_airbubble");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  std::string::~string(asStack_10);
  nop();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(lVar3 + 0xa0));
  this_00 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  pZVar4 = Sexy::RtObject::Cast<ZombiePirateCaptainParrotProps_const>(this_00);
  *(undefined4 *)(this + 0x224) = *(undefined4 *)(pZVar4 + 0x18);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x238),(RtWeakPtr *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x230),(RtWeakPtr *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  fVar5 = (float)PVZ_T();
  *(float *)(this + 0x228) = fVar5 + 10.0;
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  *(undefined4 *)(this + 0x240) = uVar1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBusSpecial::TakeShoot(Plant*) */

void __thiscall GridItemSchoolBusSpecial::TakeShoot(GridItemSchoolBusSpecial *this,Plant *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  GridItemSchoolBusProps *pGVar4;
  long lVar5;
  PopAnimRig *this_00;
  string *psVar6;
  SexyVector3 *this_01;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  string asStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [16];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined1 local_2b;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Plant *)0x0) {
    pGVar4 = GridItem::GetProps<GridItemSchoolBusProps>();
    GridItemAnimation::GetAnimRig();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    lVar5 = FUN_033e12cc(*(undefined8 *)(lVar5 + 0x20));
    uVar1 = *(undefined4 *)(*(long *)(lVar5 + 0x50) + 0xc);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    GridItemAnimation::GetAnimRig();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    lVar5 = FUN_033e12cc(*(undefined8 *)(lVar5 + 0x20));
    lVar7 = *(long *)(lVar5 + 0x50);
    GridItemAnimation::GetAnimRig();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    lVar5 = FUN_033e12cc(*(undefined8 *)(lVar5 + 0x20));
    *(float *)(lVar7 + 0xc) = (float)((int)*(float *)(*(long *)(lVar5 + 0x50) + 0xc) + -1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    Sexy::Insets::Insets((Insets *)&local_40);
    GridItemAnimation::GetAnimRig();
    this_00 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    std::string::string((string *)&local_30,"paopao");
    PopAnimRig::CalcSymbolRect(this_00,(string *)&local_30,(TRect *)&local_40);
    std::string::~string((string *)&local_30);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    GridItemAnimation::GetAnimRig();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    lVar5 = FUN_033e12cc(*(undefined8 *)(lVar5 + 0x20));
    *(undefined4 *)(*(long *)(lVar5 + 0x50) + 0xc) = uVar1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    fVar12 = *(float *)(this + 0x1c);
    fVar10 = (float)FUN_033e170c(*(undefined4 *)(this + 0x18),fVar12,*(undefined4 *)(this + 0x20));
    iVar2 = FUN_033e1980(local_40 + local_38 / 2);
    fVar11 = *(float *)(pGVar4 + 0xa8);
    iVar3 = FUN_033e1980(local_3c + local_34 / 2);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)aRStack_50,((fVar10 + 15.0) - fVar11) + (float)iVar2,
               ((fVar12 + 45.0) - *(float *)(pGVar4 + 0xac)) + (float)iVar3,0.0);
    this[0x220] = (GridItemSchoolBusSpecial)0x1;
    Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
    local_2b = 1;
    local_30 = *(undefined4 *)(this + 0x50);
    plVar9 = *(long **)(gLawnApp + 0x9f0);
    pcVar8 = *(code **)(*plVar9 + 0x318);
    psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_60,"children_airbubble");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar6);
    (*pcVar8)(plVar9,aRStack_58,0xfffffffb,(RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    std::string::~string(asStack_60);
    nop();
    nop();
    std::
    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)this);
    BoardEntity::PlaceOnBoard(this_01);
    Zombie::SetHitpoints((Zombie *)this_01,*(float *)(this + 0x224));
    ZombieAirbubble::SetTargetColAndRow
              ((ZombieAirbubble *)this_01,*(int *)(param_1 + 0x114),*(int *)(param_1 + 0x110));
    (**(code **)(*(long *)this_01 + 0x78))(this_01,aRStack_50);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x238),(RtWeakPtrBase *)aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_58);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x230),(RtWeakPtr *)aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSchoolBusSpecial::onLaunch() */

void __thiscall GridItemSchoolBusSpecial::onLaunch(GridItemSchoolBusSpecial *this)

{
  ResourceInfo *pRVar1;
  
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x230));
  TakeShoot(this,(Plant *)pRVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSchoolBusSpecial::checkForAirbubbleRelease() */

void __thiscall GridItemSchoolBusSpecial::checkForAirbubbleRelease(GridItemSchoolBusSpecial *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = RealObject::IsOnTeam(this,1);
  if ((cVar1 == '\0') && (cVar1 = FUN_033e12fc(this[0x1bd]), cVar1 == '\0')) {
    iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    Sexy::Point::Point(aPStack_18);
    if (*(int *)(this + 0x240) != iVar3) {
      iVar5 = 2;
      while( true ) {
        Sexy::Point::Point(aPStack_10);
        cVar1 = findTargetPosition((Point *)this);
        if (cVar1 != '\0') {
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x248),aPStack_10);
        }
        if (iVar5 == 1) break;
        iVar5 = 1;
      }
      lVar4 = FUN_033e134c(*(undefined8 *)(this + 0x248),*(undefined8 *)(this + 0x250));
      if ((lVar4 == 2) &&
         (bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x230)), bVar2)) {
        GridItemSchoolBus::SetBusState((GridItemSchoolBus *)this,4);
        OnAirbubbleLaunched(this);
        *(int *)(this + 0x240) = iVar3;
      }
      else {
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear
                  ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x248));
      }
    }
    lVar4 = ZombieToygun::findPlantForAirbubbleToAttack((ZombieToygun *)this);
    if (lVar4 != 0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x230),(RtWeakPtrBase *)aPStack_10)
      ;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSchoolBusSpecial::updateOthers() */

void __thiscall GridItemSchoolBusSpecial::updateOthers(GridItemSchoolBusSpecial *this)

{
  uint uVar1;
  
  uVar1 = FUN_033e1304(*(undefined4 *)(this + 0x20c));
  if ((uVar1 & 0xfffffffd) != 1) {
    return;
  }
  checkForAirbubbleRelease(this);
  return;
}

