// Class: ZombossDropSandbagActionHandler


/* ZombossDropSandbagActionHandler::onTriggerAnimationEnd(std::string const&) */

void ZombossDropSandbagActionHandler::onTriggerAnimationEnd(string *param_1)

{
  param_1[0x20] = (string)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDropSandbagActionHandler::StaticClassInit() */

void ZombossDropSandbagActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossDropSandbagActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04732428,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossDropSandbagActionHandler::StaticGetClass() */

long * ZombossDropSandbagActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossDropSandbagActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossDropSandbagActionHandler::GetClass() const */

long * ZombossDropSandbagActionHandler::GetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossDropSandbagActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDropSandbagActionHandler::OnPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombossDropSandbagActionHandler::OnPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  RtObject *this;
  ZombieZombossMech *this_00;
  ZombossHydraSprayActionDefinition *pZVar2;
  float *pfVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"drop_sandbag");
  if (bVar1) {
    this = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)param_1);
    this_00 = Sexy::RtObject::Cast<ZombieZombossMech>(this);
    pZVar2 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this_00);
    fVar10 = *(float *)(pZVar2 + 0x40);
    fVar8 = *(float *)(pZVar2 + 0x44);
    fVar6 = *pfVar3;
    fVar7 = pfVar3[1];
    uVar9 = *(undefined4 *)(pZVar2 + 0x48);
    uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(pZVar2 + 0x38));
    lVar4 = Board::AddProjectile
                      ((Board *)(fVar6 + fVar10),fVar7 + fVar8,uVar9,uVar5,aRStack_10,this_00,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    uVar9 = FUN_04730d24(*(undefined4 *)(this_00 + 0x24));
    FUN_04730d28(lVar4 + 0x24,uVar9);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossDropSandbagActionHandler::ZombossDropSandbagActionHandler() */

void __thiscall
ZombossDropSandbagActionHandler::ZombossDropSandbagActionHandler
          (ZombossDropSandbagActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068c5d30;
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0x28));
  *(undefined4 *)(this + 0x58) = 0;
  return;
}


/* ZombossDropSandbagActionHandler::StaticNew() */

ZombossDropSandbagActionHandler * ZombossDropSandbagActionHandler::StaticNew(void)

{
  ZombossDropSandbagActionHandler *this;
  
  this = ::operator_new(0x60);
  ZombossDropSandbagActionHandler(this);
  return this;
}


/* ZombossDropSandbagActionHandler::~ZombossDropSandbagActionHandler() */

void __thiscall
ZombossDropSandbagActionHandler::~ZombossDropSandbagActionHandler
          (ZombossDropSandbagActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068c5d30;
  CurveSequenceCollection<float>::~CurveSequenceCollection
            ((CurveSequenceCollection<float> *)(this + 0x28));
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossDropSandbagActionHandler::~ZombossDropSandbagActionHandler() */

void __thiscall
ZombossDropSandbagActionHandler::~ZombossDropSandbagActionHandler
          (ZombossDropSandbagActionHandler *this)

{
  ~ZombossDropSandbagActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDropSandbagActionHandler::findValidTargets(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&) */

void __thiscall
ZombossDropSandbagActionHandler::findValidTargets
          (ZombossDropSandbagActionHandler *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  ZombossHydraSprayActionDefinition *pZVar4;
  RtObject *this_00;
  ZombieZombossMech *pZVar5;
  GridItemTriggerTile *pGVar6;
  BoardEntity **ppBVar7;
  GridItem *pGVar8;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar4 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  pZVar5 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar3 = operator|(1,4);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar3,pZVar4 + 0x4c);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar1) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    ppBVar7 = (BoardEntity **)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    bVar1 = Sexy::RtObject::IsA<GridItemTriggerTile>((RtObject *)*ppBVar7);
    if (bVar1) {
      pGVar6 = Sexy::RtObject::Cast<GridItemTriggerTile>((RtObject *)*ppBVar7);
      cVar2 = (**(code **)(*(long *)pGVar6 + 0x2a8))();
joined_r0x04734d90:
      if (cVar2 != '\0') {
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,ppBVar7);
      }
    }
    else {
      bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)*ppBVar7);
      if (bVar1) {
        pGVar8 = Sexy::RtObject::Cast<GridItem>((RtObject *)*ppBVar7);
        cVar2 = (**(code **)(*(long *)pGVar8 + 0x218))(pGVar8,pZVar5);
        goto joined_r0x04734d90;
      }
      bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)*ppBVar7);
      if (bVar1) {
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,ppBVar7);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDropSandbagActionHandler::onStartAction() */

void __thiscall
ZombossDropSandbagActionHandler::onStartAction(ZombossDropSandbagActionHandler *this)

{
  string *psVar1;
  ulong uVar2;
  char cVar3;
  int iVar4;
  ZombossHydraSprayActionDefinition *pZVar5;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ulong uVar6;
  undefined8 *puVar7;
  CurveSequence<float> *pCVar8;
  undefined8 uVar9;
  BoardEntity *this_02;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_5c;
  float local_58;
  float local_54;
  undefined8 local_50;
  float local_48 [2];
  Vec3 aVStack_40 [16];
  undefined4 local_30;
  float local_2c;
  float local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar5 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  fVar10 = (float)ZombieZombossMech::GetZomboss_T(this_01);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  findValidTargets(this,(vector *)&local_20);
  cVar3 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (cVar3 == '\0') {
    iVar4 = rand();
    uVar6 = FUN_04730de0(local_20,local_18);
    psVar1 = (string *)(this + 0x28);
    uVar2 = 0;
    if (uVar6 != 0) {
      uVar2 = (ulong)(long)iVar4 / uVar6;
    }
    puVar7 = (undefined8 *)FUN_04730dec(local_20,(long)iVar4 - uVar2 * uVar6);
    this_02 = (BoardEntity *)*puVar7;
    puVar7 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this_01);
    local_50 = *puVar7;
    local_48[0] = *(float *)(puVar7 + 1);
    iVar4 = BoardEntity::CalcColumnPosition(this_02);
    iVar4 = BoardTransforms::GridToBoardSpaceX(iVar4);
    local_5c = (float)iVar4 + *(float *)(pZVar5 + 0x5c);
    iVar4 = SharkMinion::getRow((SharkMinion *)this_02);
    iVar4 = BoardTransforms::GridToBoardSpaceY(iVar4);
    fVar12 = (float)iVar4 + *(float *)(pZVar5 + 0x60);
    local_54 = *(float *)(pZVar5 + 100) + local_48[0];
    fVar11 = local_48[0];
    local_58 = fVar12;
    EATextSquish::Vec3::Vec3(aVStack_40,local_5c,fVar12,local_48[0]);
    local_30 = Sexy::SexyVector3::operator-((SexyVector3 *)aVStack_40,(SexyVector3 *)&local_50);
    local_2c = fVar12;
    local_28 = fVar11;
    fVar11 = (float)DVec3::getLength((DVec3 *)&local_30);
    fVar11 = fVar11 / *(float *)(pZVar5 + 0x6c);
    *(undefined4 *)(this + 0x58) = 1;
    std::string::string((string *)&local_30,"x");
    pCVar8 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
    CurveSequence<float>::StartSequence(pCVar8,fVar10,(float *)&local_50);
    std::string::~string((string *)&local_30);
    nop();
    std::string::string((string *)&local_30,"y");
    pCVar8 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
    CurveSequence<float>::StartSequence(pCVar8,fVar10,(float *)((long)&local_50 + 4));
    std::string::~string((string *)&local_30);
    nop();
    std::string::string((string *)&local_30,"z");
    pCVar8 = (CurveSequence<float> *)CurveSequenceCollection<float>::operator[](psVar1);
    CurveSequence<float>::StartSequence(pCVar8,fVar10,local_48);
    std::string::~string((string *)&local_30);
    nop();
    std::string::string((string *)&local_30,"x");
    uVar9 = CurveSequenceCollection<float>::operator[](psVar1);
    FUN_04734e64(fVar11,(undefined4)local_50,uVar9,&local_5c,*(undefined4 *)(pZVar5 + 0x68));
    std::string::~string((string *)&local_30);
    nop();
    std::string::string((string *)&local_30,"y");
    uVar9 = CurveSequenceCollection<float>::operator[](psVar1);
    FUN_04734e64(fVar11,local_50._4_4_,uVar9,&local_58,*(undefined4 *)(pZVar5 + 0x68));
    std::string::~string((string *)&local_30);
    nop();
    std::string::string((string *)&local_30,"z");
    uVar9 = CurveSequenceCollection<float>::operator[](psVar1);
    FUN_04734e64(fVar11,local_48[0],uVar9,&local_54,*(undefined4 *)(pZVar5 + 0x68));
    std::string::~string((string *)&local_30);
    nop();
  }
  else {
    ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDropSandbagActionHandler::onUpdateAction() */

void __thiscall
ZombossDropSandbagActionHandler::onUpdateAction(ZombossDropSandbagActionHandler *this)

{
  char cVar1;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  CurveSequence<float> *this_02;
  ZombieHydraHeadAnimRig *pZVar2;
  float fVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x58) == 1) {
    this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
    this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
    ZombieZombossMech::UpdatePositionFromCurve(this_01,(CurveSequenceCollection *)(this + 0x28));
    std::string::string(asStack_58,"x");
    this_02 = (CurveSequence<float> *)
              CurveSequenceCollection<float>::operator[]((string *)(this + 0x28));
    fVar3 = (float)ZombieZombossMech::GetZomboss_T(this_01);
    cVar1 = CurveSequence<float>::IsTimeInSequence(this_02,fVar3);
    std::string::~string(asStack_58);
    nop();
    if (cVar1 == '\0') {
      *(undefined4 *)(this + 0x58) = 2;
      pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onTriggerAnimationEnd");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      ZombieAnimRig_ZombossMech_LostCity::PlaySandBagDrop
                ((ZombieAnimRig_ZombossMech_LostCity *)pZVar2,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

