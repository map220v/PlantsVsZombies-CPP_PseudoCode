// Class: StarLightningCloud


/* StarLightningCloud::onDieFinished(std::string const&) */

void StarLightningCloud::onDieFinished(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarLightningCloud::StaticClassInit() */

void StarLightningCloud::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarLightningCloud");
    (*pcVar2)(plVar1,asStack_10,FUN_03e7e924,0xe8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarLightningCloud::StaticGetClass() */

long * StarLightningCloud::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"StarLightningCloud",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarLightningCloud::GetClass() const */

long * StarLightningCloud::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"StarLightningCloud",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarLightningCloud::onDestroy() */

void __thiscall StarLightningCloud::onDestroy(StarLightningCloud *this)

{
  long *plVar1;
  
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  (**(code **)(*plVar1 + 0x48))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarLightningCloud::onDraw(Sexy::Graphics*) */

void __thiscall StarLightningCloud::onDraw(StarLightningCloud *this,Graphics *param_1)

{
  int iVar1;
  PopAnimRig *this_00;
  float fVar2;
  float fVar3;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(2);
  fVar2 = (float)FUN_03e7e52c((float)iVar1);
  fVar3 = (float)FUN_03e7e52c(0x41700000);
  Sexy::Graphics::Translate(param_1,(int)fVar2,(int)fVar3);
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8))
  ;
  PopAnimRig::Draw(this_00,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarLightningCloud::StarLightningCloud() */

void __thiscall StarLightningCloud::StarLightningCloud(StarLightningCloud *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_0678dcf0;
  *(undefined ***)(this + 0x10) = &PTR__StarLightningCloud_0678ded8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xa8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xb0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  this[0xd4] = (StarLightningCloud)0x0;
  this[0xe0] = (StarLightningCloud)0x0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  return;
}


/* StarLightningCloud::StaticNew() */

StarLightningCloud * StarLightningCloud::StaticNew(void)

{
  StarLightningCloud *this;
  
  this = ::operator_new(0xe8);
  StarLightningCloud(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarLightningCloud::onDrawShadow(Sexy::Graphics*) */

void __thiscall StarLightningCloud::onDrawShadow(StarLightningCloud *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  Image *pIVar3;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
  uVar4 = FUN_03e7e460(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                       *(undefined4 *)(this + 0x20));
  fVar5 = (float)FUN_03e7e52c(uVar4);
  uVar4 = *(undefined4 *)(this + 0x1c);
  FUN_03e7e460(*(undefined4 *)(this + 0x18),uVar4,*(undefined4 *)(this + 0x20));
  fVar6 = (float)FUN_03e7e52c(uVar4);
  Sexy::Graphics::Translate(param_1,(int)fVar5,(int)fVar6);
  pIVar3 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06adfad0);
  this_00 = (LotteryResultProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06adfad0);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06adfad0);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_01);
  Sexy::Graphics::DrawImage(param_1,pIVar3,-(iVar1 / 2),-(iVar2 / 2));
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarLightningCloud::~StarLightningCloud() */

void __thiscall StarLightningCloud::~StarLightningCloud(StarLightningCloud *this)

{
  *(undefined ***)this = &PTR_GetClass_0678dcf0;
  *(undefined ***)(this + 0x10) = &PTR__StarLightningCloud_0678ded8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0xb0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to StarLightningCloud::~StarLightningCloud() */

void __thiscall StarLightningCloud::~StarLightningCloud(StarLightningCloud *this)

{
  ~StarLightningCloud(this + -0x10);
  return;
}


/* StarLightningCloud::~StarLightningCloud() */

void __thiscall StarLightningCloud::~StarLightningCloud(StarLightningCloud *this)

{
  ~StarLightningCloud(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to StarLightningCloud::~StarLightningCloud() */

void __thiscall StarLightningCloud::~StarLightningCloud(StarLightningCloud *this)

{
  ~StarLightningCloud(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarLightningCloud::findTarget() */

void __thiscall StarLightningCloud::findTarget(StarLightningCloud *this)

{
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *this_00;
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  Zombie *pZVar5;
  RtObject *pRVar6;
  string *psVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float *pfVar8;
  long lVar9;
  RealObject *this_02;
  long *extraout_x0;
  int extraout_w1;
  int iVar10;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  code *pcVar11;
  float fVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  string asStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  this_00 = (vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
            (this + 0xb0);
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            (this_00);
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x29);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x2f);
      while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
        Sexy::RtDbTable::Iterator::operator*(aIStack_28);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_30);
        Sexy::RtId::~RtId(aRStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        nop();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_38,(RtWeakPtrBase *)aRStack_40);
        cVar2 = (**(code **)(*extraout_x0 + 0x200))(extraout_x0);
        if (cVar2 == '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          iVar10 = extraout_w1_02;
        }
        else {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)asStack_38);
          std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          push_back(this_00,(RtWeakPtr *)aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          iVar10 = extraout_w1_01;
        }
        Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar10);
      }
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_48,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    cVar2 = (**(code **)(*plVar4 + 0x328))();
    if (cVar2 == '\0') {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      cVar2 = (**(code **)(*plVar4 + 0x330))();
      if (cVar2 != '\0') goto LAB_03e7f0ac;
      pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      cVar2 = Zombie::IsInvisible(pZVar5);
      if (cVar2 != '\0') goto LAB_03e7f0ac;
      pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      bVar1 = Sexy::RtObject::IsA<Zomboss>(pRVar6);
      if (bVar1) {
        pZVar5 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
        cVar2 = Zombie::IsFlying(pZVar5);
        if (cVar2 != '\0') goto LAB_03e7f0ac;
        pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
        bVar1 = Sexy::RtObject::IsA<ZombieSwashbuckler>(pRVar6);
        if (bVar1) goto LAB_03e7f160;
      }
      else {
        pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
        bVar1 = Sexy::RtObject::IsA<ZombieSwashbuckler>(pRVar6);
        if (bVar1) {
LAB_03e7f160:
          psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          std::string::string(asStack_38,"lightningreed");
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          std::string::~string(asStack_38);
          nop();
          plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
          pcVar11 = *(code **)(*plVar4 + 0x3d0);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_40);
          cVar2 = (*pcVar11)(plVar4,aRStack_30,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          if (cVar2 == '\0') {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
            goto LAB_03e7f0ac;
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        }
      }
      this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      pfVar8 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_01);
      fVar12 = *pfVar8;
      lVar9 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
      if (*(float *)(lVar9 + 0x10) < fVar12) goto LAB_03e7f0ac;
      this_02 = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      cVar2 = RealObject::IsOnOpposingTeam(this_02,(RealObject *)this);
      if (cVar2 == '\0') goto LAB_03e7f0ac;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_48);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back(this_00,(RtWeakPtr *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
      iVar10 = extraout_w1_00;
    }
    else {
LAB_03e7f0ac:
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
      iVar10 = extraout_w1;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarLightningCloud::onInitialized() */

void __thiscall StarLightningCloud::onInitialized(StarLightningCloud *this)

{
  bool bVar1;
  PopAnim *pPVar2;
  RtClass *pRVar3;
  PopAnimRig *pPVar4;
  float fVar5;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = CachedResourcePtr::operator_cast_to_PopAnim_((CachedResourcePtr *)&DAT_06adfa80);
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig(pPVar2,pRVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xd8),(RtWeakPtrBase *)aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  pPVar4 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  std::string::string((string *)aRStack_58,"plant");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onPlantFinished");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  PopAnimRig::PlayAndStop(pPVar4,aRStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string((string *)aRStack_58);
  nop();
  findTarget(this);
  fVar5 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0xd0) = fVar5 + 2.0;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarLightningCloud::onUpdate() */

void __thiscall StarLightningCloud::onUpdate(StarLightningCloud *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  PopAnimRig *pPVar5;
  long lVar6;
  ulong uVar7;
  RtWeakPtr *pRVar8;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  BoardEntity *this_01;
  RtObject *this_02;
  Zombie *this_03;
  string *psVar9;
  ResourceInfo *pRVar10;
  long extraout_x0;
  LightningBolt *this_04;
  ulong uVar11;
  code *pcVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  DamageInfo *pDVar17;
  RtMixedPtr aRStack_d8 [8];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_b0 [72];
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar5 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  fVar14 = (float)PVZ_T();
  fVar15 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(pPVar5,fVar14,fVar15);
  if (this[0xd4] == (StarLightningCloud)0x0) goto LAB_03e7f5bc;
  fVar14 = (float)PVZ_T();
  if (*(float *)(this + 200) <= fVar14) {
    pPVar5 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
    std::string::string(asStack_68,"die");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_d8);
    std::string::string((string *)&local_c8,"onDieFinished");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_b0,
               (RtId *)&local_d0,(string *)&local_c8);
    PopAnimRig::PlayAndStop(pPVar5,asStack_68,0,aRStack_b0);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_b0);
    std::string::~string((string *)&local_c8);
    nop();
    Sexy::RtId::~RtId((RtId *)&local_d0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d8);
    std::string::~string(asStack_68);
    nop();
    uVar16 = PVZ_EOT();
    this[0xd4] = (StarLightningCloud)0x0;
    *(undefined4 *)(this + 200) = uVar16;
    goto LAB_03e7f5bc;
  }
  fVar14 = (float)PVZ_T();
  if (*(float *)(this + 0xd0) <= fVar14) {
    findTarget(this);
    fVar14 = (float)PVZ_T();
    *(float *)(this + 0xd0) = fVar14 + 2.0;
  }
  lVar6 = FUN_03e7e444(*(undefined8 *)(this + 0xb0),*(undefined8 *)(this + 0xb8));
  if (lVar6 == 0) goto LAB_03e7f5bc;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_c8);
  uVar11 = 0;
  while( true ) {
    uVar13 = *(undefined8 *)(this + 0xb0);
    uVar7 = FUN_03e7e444(uVar13,*(undefined8 *)(this + 0xb8));
    if (uVar7 <= uVar11) break;
    pRVar8 = (RtWeakPtr *)FUN_03e7e450(uVar13,uVar11);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar8);
    if (bVar1) {
      this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03e7e450(*(undefined8 *)(this + 0xb0),uVar11);
      this_01 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      iVar3 = BoardEntity::CalcColumnPosition(this_01);
      if (3 < iVar3) goto LAB_03e7f660;
      pRVar8 = (RtWeakPtr *)FUN_03e7e450(*(undefined8 *)(this + 0xb0),uVar11);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )&local_c8,pRVar8);
      uVar11 = uVar11 + 1;
    }
    else {
LAB_03e7f660:
      uVar11 = uVar11 + 1;
    }
  }
  iVar3 = Sexy::Rand((int)uVar7);
  pRVar8 = (RtWeakPtr *)FUN_03e7e450(*(undefined8 *)(this + 0xb0),(long)iVar3);
  this_02 = (RtObject *)Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar8);
  lVar6 = FUN_03e7e444(local_c8,local_c0);
  if (lVar6 != 0) {
    iVar3 = Sexy::Rand((int)lVar6);
    pRVar8 = (RtWeakPtr *)FUN_03e7e450(local_c8,(long)iVar3);
    this_02 = (RtObject *)Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar8);
  }
  if (this_02 != (RtObject *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Zomboss>(this_02);
    if (bVar1) {
      nop();
      cVar2 = Zombie::IsFlying(this_03);
      if ((cVar2 != '\0') || (cVar2 = Zombie::IsJumping(this_03), cVar2 != '\0')) goto LAB_03e7faac;
    }
    psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string((string *)&local_d0,"lightningreed");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar9);
    pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
    std::string::~string((string *)&local_d0);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(pRVar10 + 0x28));
    nop();
    uVar13 = operator|(0x80,0x2000);
    fVar14 = (float)PVZ_T();
    if (*(float *)(this + 0xcc) <= fVar14) {
      fVar14 = (float)PVZ_T();
      pRVar8 = (RtWeakPtr *)(this + 0xa8);
                    /* WARNING: Load size is inaccurate */
      pDVar17._0_4_ = *(DamageInfo **)(extraout_x0 + 0x2d0);
      pcVar12 = *(code **)(*(long *)this_02 + 0x110);
      *(float *)(this + 0xcc) = fVar14 + *(float *)(extraout_x0 + 0x2d4);
      pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar8);
      Sexy::Point::Point((Point *)aRStack_d8,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_d0,1.0,0.0);
      DamageInfo::DamageInfo
                (pDVar17._0_4_,local_d0,local_cc,(RtWeakPtr *)asStack_68,uVar13,pRVar10,
                 (Point *)aRStack_d8,0);
      (*pcVar12)(this_02,(RtWeakPtr *)asStack_68);
      DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
      this_04 = GameObject::Create<LightningBolt>();
      std::string::string((string *)aRStack_d8,"POPANIM_EFFECTS_LIGHTNINGREED_BOLT_DEFAULT");
      std::string::string((string *)&local_d0,"POPANIM_EFFECTS_LIGHTNINGREED_BOLT");
      std::string::string(asStack_68,"POPANIM_EFFECTS_LIGHTNINGREED_HIT");
      LightningBolt::SetPopAnim(this_04,(string *)aRStack_d8,(string *)&local_d0,asStack_68);
      std::string::~string(asStack_68);
      nop();
      std::string::~string((string *)&local_d0);
      nop();
      std::string::~string((string *)aRStack_d8);
      nop();
      uVar11 = LawnApp::GetRealServerTime(gLawnApp);
      Sexy::SRand(uVar11);
      iVar3 = Sexy::Rand();
      iVar4 = Sexy::Rand();
      EATextSquish::Vec3::Vec3
                ((Vec3 *)asStack_68,(float)*(int *)(gLawnApp + 0x724) * 0.5 - (float)(iVar3 % 200),
                 (float)(iVar4 % 0x1e) + 100.0,0.0);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar8);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar8);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_d0,(RtWeakPtrBase *)aRStack_d8);
        TwinsAssistPerson::SetOwner((TwinsAssistPerson *)this_04,(string *)&local_d0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_d0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d8)
        ;
      }
      BoardEntity::PlaceOnBoard((SexyVector3 *)this_04);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_d8,(RtWeakPtrBase *)&local_d0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_d0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_d0,(RtWeakPtrBase *)aRStack_d8);
      LightningBolt::SetInitialTarget(this_04,(string *)&local_d0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_d0);
      FUN_03e7e458(this_04 + 0xa4);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d8);
    }
  }
LAB_03e7faac:
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             &local_c8);
LAB_03e7f5bc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarLightningCloud::onPlantFinished(std::string const&) */

void StarLightningCloud::onPlantFinished(string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  string *psVar3;
  ResourceInfo *pRVar4;
  long extraout_x0;
  float fVar5;
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xd8));
  std::string::string(asStack_40,"idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  param_1[0xd4] = (string)0x1;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_48,"lightningreed");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
  std::string::~string(asStack_48);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(pRVar4 + 0x28));
  nop();
  fVar5 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(param_1 + 200) = fVar5 + *(float *)(extraout_x0 + 0x2d8);
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

