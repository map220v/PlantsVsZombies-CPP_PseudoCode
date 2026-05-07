// Class: TransfromKeyFrameSystem::Item


/* TransfromKeyFrameSystem::Item::~Item() */

void __thiscall TransfromKeyFrameSystem::Item::~Item(Item *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x18));
  std::vector<Transform2,std::allocator<Transform2>>::~vector
            ((vector<Transform2,std::allocator<Transform2>> *)this);
  return;
}


/* TransfromKeyFrameSystem::Item::IsEnd() */

bool __thiscall TransfromKeyFrameSystem::Item::IsEnd(Item *this)

{
  char cVar1;
  bool bVar2;
  float *pfVar3;
  
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x38));
  bVar2 = true;
  if (cVar1 != '\0') {
    pfVar3 = (float *)FUN_041e6438(*(undefined8 *)(this + 0x18),(long)*(int *)(this + 0x30));
    bVar2 = *pfVar3 < *(float *)(this + 0x34);
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransfromKeyFrameSystem::Item::Update(float) */

void __thiscall TransfromKeyFrameSystem::Item::Update(Item *this,float param_1)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  fVar9 = param_1 + *(float *)(this + 0x34);
  iVar7 = *(int *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  uVar8 = *(undefined8 *)(this + 0x18);
  *(float *)(this + 0x34) = fVar9;
  while( true ) {
    pfVar2 = (float *)FUN_041e6438(uVar8,(long)iVar7);
    fVar10 = *pfVar2;
    if ((fVar9 <= fVar10) ||
       (iVar1 = FUN_041e6424(uVar8,*(undefined8 *)(this + 0x20)), iVar1 + -1 <= iVar7)) break;
    fVar9 = fVar9 - fVar10;
    iVar7 = *(int *)(this + 0x30) + 1;
    *(int *)(this + 0x30) = iVar7;
    *(float *)(this + 0x34) = fVar9;
  }
  uVar8 = *(undefined8 *)this;
  lVar3 = FUN_041e6440(uVar8,(long)iVar7);
  lVar4 = FUN_041e6440(uVar8,(long)(iVar7 + 1));
  local_18 = CurveLerp(0,lVar3,lVar4,1);
  local_14 = fVar10;
  local_10 = fVar9;
  puVar5 = (undefined4 *)FUN_041e6438(*(undefined8 *)(this + 0x18),(long)*(int *)(this + 0x30));
  fVar9 = CurveLerp<float>(0,*puVar5,*(undefined4 *)(this + 0x34),lVar3 + 0xc,lVar4 + 0xc,1);
  plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  (**(code **)(*plVar6 + 0x78))(plVar6,&local_18);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  FUN_041e6418(fVar9,lVar3 + 0x36c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TransfromKeyFrameSystem::Item::Item() */

void __thiscall TransfromKeyFrameSystem::Item::Item(Item *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  return;
}


void __thiscall TransfromKeyFrameSystem::Item::~Item(Item *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x18));
  std::vector<Transform2,std::allocator<Transform2>>::~vector
            ((vector<Transform2,std::allocator<Transform2>> *)this);
  return;
}


void __thiscall TransfromKeyFrameSystem::Item::~Item(Item *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x18));
  std::vector<Transform2,std::allocator<Transform2>>::~vector
            ((vector<Transform2,std::allocator<Transform2>> *)this);
  return;
}


void __thiscall TransfromKeyFrameSystem::Item::~Item(Item *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x18));
  std::vector<Transform2,std::allocator<Transform2>>::~vector
            ((vector<Transform2,std::allocator<Transform2>> *)this);
  return;
}


/* TransfromKeyFrameSystem::Item::Item(TransfromKeyFrameSystem::Item&&) */

void __thiscall TransfromKeyFrameSystem::Item::Item(Item *this,Item *param_1)

{
  undefined4 uVar1;
  
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = uVar1;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x38),(RtWeakPtrBase *)(param_1 + 0x38));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransfromKeyFrameSystem::Item::Item(Sexy::RtWeakPtr<Zombie> const&, std::vector<Transform2,
   std::allocator<Transform2> > const&, std::vector<unsigned int, std::allocator<unsigned int> >) */

void __thiscall
TransfromKeyFrameSystem::Item::Item
          (Item *this,RtWeakPtrBase *param_1,vector *param_2,undefined8 *param_4)

{
  float fVar1;
  bool bVar2;
  undefined8 uVar3;
  uint *puVar4;
  float local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Transform2,std::allocator<Transform2>>::vector
            ((vector<Transform2,std::allocator<Transform2>> *)this,param_2);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x38),param_1);
  *(undefined4 *)(this + 0x30) = 0;
  uVar3 = *param_4;
  *(undefined4 *)(this + 0x34) = 0;
  local_18 = FUN_041e7bb4(uVar3);
  local_10 = FUN_041e7c04(param_4[1]);
  fVar1 = _FUN_041eb308;
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    puVar4 = (uint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    local_1c = (float)*puVar4 * fVar1;
    std::vector<float,std::allocator<float>>::push_back
              ((vector<float,std::allocator<float>> *)(this + 0x18),&local_1c);
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TransfromKeyFrameSystem::Item::TEMPNAMEPLACEHOLDERVALUE(TransfromKeyFrameSystem::Item&&) */

Item * __thiscall TransfromKeyFrameSystem::Item::operator=(Item *this,Item *param_1)

{
  undefined4 uVar1;
  
  std::vector<Transform2,std::allocator<Transform2>>::operator=
            ((vector<Transform2,std::allocator<Transform2>> *)this,(vector *)param_1);
  std::vector<float,std::allocator<float>>::operator=
            ((vector<float,std::allocator<float>> *)(this + 0x18),(vector *)(param_1 + 0x18));
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = uVar1;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x38),(RtWeakPtr *)(param_1 + 0x38));
  return this;
}


/* TransfromKeyFrameSystem::Item::Item(TransfromKeyFrameSystem::Item const&) */

void __thiscall TransfromKeyFrameSystem::Item::Item(Item *this,Item *param_1)

{
  undefined4 uVar1;
  
  std::vector<Transform2,std::allocator<Transform2>>::vector
            ((vector<Transform2,std::allocator<Transform2>> *)this,(vector *)param_1);
  std::vector<float,std::allocator<float>>::vector
            ((vector<float,std::allocator<float>> *)(this + 0x18),(vector *)(param_1 + 0x18));
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = uVar1;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x38),(RtWeakPtrBase *)(param_1 + 0x38));
  return;
}

