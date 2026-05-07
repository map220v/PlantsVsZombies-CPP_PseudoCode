// Class: MonotropaFoodCounter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MonotropaFoodCounter::StaticClassInit() */

void MonotropaFoodCounter::StaticClassInit(void)

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
    std::string::string(asStack_10,"MonotropaFoodCounter");
    (*pcVar2)(plVar1,asStack_10,FUN_04cbd604,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MonotropaFoodCounter::StaticGetClass() */

long * MonotropaFoodCounter::StaticGetClass(void)

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
  uVar2 = PlantFoodCounter::StaticGetClass();
  (*pcVar3)(plVar1,"MonotropaFoodCounter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MonotropaFoodCounter::GetClass() const */

long * MonotropaFoodCounter::GetClass(void)

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
  uVar2 = PlantFoodCounter::StaticGetClass();
  (*pcVar3)(plVar1,"MonotropaFoodCounter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MonotropaFoodCounter::Start(float, int, Sexy::RtWeakPtr<BoardEntity>, bool) */

void __thiscall
MonotropaFoodCounter::Start
          (float param_1,MonotropaFoodCounter *this,int param_2,RtWeakPtr *param_4,
          MonotropaFoodCounter param_5)

{
  PlantFoodCounter::Start((PlantFoodCounter *)this,param_1,param_2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x38),param_4);
  this[0x40] = param_5;
  this[0x41] = (MonotropaFoodCounter)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MonotropaFoodCounter::GenerateEffect(int, int, Sexy::RtWeakPtr<BoardEntity>,
   Sexy::RtWeakPtr<BoardEntity>, MonotropaFoodCounter::EffectType) */

void __thiscall
MonotropaFoodCounter::GenerateEffect
          (undefined8 param_1_00,int param_1,int param_2,undefined8 param_4,RtMixedPtrBase *param_5,
          int param_6)

{
  char cVar1;
  undefined4 uVar2;
  SharkMinion *this;
  Effect_PopAnim *this_00;
  Vec3 *__n;
  string asStack_38 [8];
  string asStack_30 [8];
  RtMixedPtrBase aRStack_28 [8];
  string asStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"POPANIM_EFFECTS_MONOTROPA_EFFECT");
  nop();
  __n = (Vec3 *)&local_18;
  std::string::string(asStack_30,"plantfood1");
  nop();
  if (param_6 == 0) {
    std::string::append(asStack_30,"snow_drop",(size_t)__n);
  }
  else if (param_6 == 1) {
    std::string::append(asStack_30,"ice_drop",(size_t)__n);
  }
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_5);
  if (cVar1 == '\0') {
    uVar2 = Board::MakeRenderOrder(0x64960,0,0);
  }
  else {
    this = (SharkMinion *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_5);
    uVar2 = SharkMinion::getRow(this);
    uVar2 = Board::MakeRenderOrder(0x64960,uVar2,0);
  }
  FUN_05475d88(asStack_20,asStack_38);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)(param_1 + 2),(float)(param_2 + -0x23),0.0);
  PopAnimEffectFactory::CreateEffect(aRStack_28,local_18,local_14,local_10,asStack_20,uVar2,0,1);
  std::string::~string(asStack_20);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    nop();
    Effect_PopAnim::SetCentered(this_00,true);
    Effect_PopAnim::PlaySingleAnimation(this_00,asStack_30,0);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MonotropaFoodCounter::MonotropaFoodCounter() */

void __thiscall MonotropaFoodCounter::MonotropaFoodCounter(MonotropaFoodCounter *this)

{
  PlantFoodCounter::PlantFoodCounter((PlantFoodCounter *)this);
  *(undefined ***)this = &PTR_GetClass_0699a530;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  return;
}


/* MonotropaFoodCounter::StaticNew() */

MonotropaFoodCounter * MonotropaFoodCounter::StaticNew(void)

{
  MonotropaFoodCounter *this;
  
  this = ::operator_new(0x48);
  MonotropaFoodCounter(this);
  return this;
}


/* MonotropaFoodCounter::~MonotropaFoodCounter() */

void __thiscall MonotropaFoodCounter::~MonotropaFoodCounter(MonotropaFoodCounter *this)

{
  *(undefined ***)this = &PTR_GetClass_0699a530;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x18));
  PlantFoodCounter::~PlantFoodCounter((PlantFoodCounter *)this);
  return;
}


/* MonotropaFoodCounter::~MonotropaFoodCounter() */

void __thiscall MonotropaFoodCounter::~MonotropaFoodCounter(MonotropaFoodCounter *this)

{
  ~MonotropaFoodCounter(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MonotropaFoodCounter::Update() */

void __thiscall MonotropaFoodCounter::Update(MonotropaFoodCounter *this)

{
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *this_00;
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  RtWeakPtr *pRVar8;
  ResourceInfo *pRVar9;
  float *pfVar10;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var11;
  long lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_28;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = PlantFoodCounter::GetNumShotsToFireSinceLastUpdate((PlantFoodCounter *)this);
  if (0 < iVar2) {
    this_00 = (vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              (this + 0x18);
    iVar13 = 0;
    do {
      while( true ) {
        cVar1 = std::
                vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
                empty(this_00);
        if (cVar1 != '\0') break;
        iVar6 = FUN_04cba200(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
        uVar7 = Sexy::Rand(iVar6);
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)this_00);
        local_28 = __gnu_cxx::
                   __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                   ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                *)&local_10,
                               (long)(int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f)));
        pRVar8 = (RtWeakPtr *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
        pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar8);
        if (pRVar9 != (ResourceInfo *)0x0) {
          pfVar10 = (float *)std::
                             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                            *)pRVar9);
          fVar16 = pfVar10[2];
          fVar14 = pfVar10[1];
          fVar15 = *pfVar10;
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(this + 0x38))
          ;
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)a_Stack_20);
          GenerateEffect(this,(int)fVar15,(int)(fVar14 - fVar16),aRStack_18,
                         (RtWeakPtr<Sexy::SoundResource> *)&local_10,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        }
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_28);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        erase(this_00,local_10);
        iVar13 = iVar13 + 1;
        StreamBuffer::SetBuffReadPos((StreamBuffer *)this,1);
        if (iVar13 == iVar2) goto LAB_04cbe40c;
      }
      uVar7 = Sexy::Rand(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8));
      uVar3 = Sexy::Rand(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
      uVar4 = BoardTransforms::GridToBoardSpaceX
                        ((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f));
      uVar5 = BoardTransforms::GridToBoardSpaceY
                        ((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f));
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(this + 0x38));
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_20);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)a_Stack_20);
      GenerateEffect(this,uVar4,uVar5,aRStack_18,(RtWeakPtr<Sexy::SoundResource> *)&local_10,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      iVar13 = iVar13 + 1;
      StreamBuffer::SetBuffReadPos((StreamBuffer *)this,1);
    } while (iVar13 != iVar2);
  }
LAB_04cbe40c:
  if ((this[0x40] != (MonotropaFoodCounter)0x0) && (this[0x41] == (MonotropaFoodCounter)0x0)) {
    pRVar8 = (RtWeakPtr *)(this + 0x30);
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar8);
    if (pRVar9 != (ResourceInfo *)0x0) {
      p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar8)
      ;
      pfVar10 = (float *)std::
                         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::_M_leftmost(p_Var11);
      fVar16 = *pfVar10;
      p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar8)
      ;
      lVar12 = std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var11);
      fVar15 = *(float *)(lVar12 + 4);
      p_Var11 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar8)
      ;
      lVar12 = std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var11);
      fVar14 = *(float *)(lVar12 + 8);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(this + 0x38));
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)pRVar8);
      GenerateEffect(this,(int)fVar16,(int)(fVar15 - fVar14),aRStack_18,
                     (RtWeakPtr<Sexy::SoundResource> *)&local_10,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
    this[0x41] = (MonotropaFoodCounter)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MonotropaFoodCounter::SetTargets(std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > >) */

void __thiscall
MonotropaFoodCounter::SetTargets
          (MonotropaFoodCounter *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(param_2);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(param_2);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
  assign<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,void>
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x18),uVar1,uVar2);
  return;
}

